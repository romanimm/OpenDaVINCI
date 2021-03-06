/**
 * odcanproxy - Tool wrapping a CAN interface.
 * Copyright (C) 2015 Christian Berger
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef CANDEVICE_H_
#define CANDEVICE_H_

#include <libpcan.h>

#include <core/base/Service.h>

#include "GenericCANMessageListener.h"
#include "MessageToCANDataStore.h"

namespace automotive {
    namespace odcantools {

        using namespace std;

        // Forward declaration due to circular dependency.
        class MessageToCANDataStore;

        /**
         * This class encapsulates the service for reading low-level CAN message to be
         * wrapped into a GenericCANMessage and for writing a GenericCANDevice to the
         * device node represented by this class.
         */
        class CANDevice : public core::base::Service {
           private:
                /**
                 * "Forbidden" copy constructor. Goal: The compiler should warn
                 * already at compile time for unwanted bugs caused by any misuse
                 * of the copy constructor.
                 *
                 * @param obj Reference to an object of this class.
                 */
                CANDevice(const CANDevice &/*obj*/);

                /**
                 * "Forbidden" assignment operator. Goal: The compiler should warn
                 * already at compile time for unwanted bugs caused by any misuse
                 * of the assignment operator.
                 *
                 * @param obj Reference to an object of this class.
                 * @return Reference to this instance.
                 */
                CANDevice& operator=(const CANDevice &/*obj*/);

            public:
                /**
                 * Constructor.
                 *
                 * @param deviceNode CAN device node.
                 * @param listener Listener that will receive wrapped GenericCANMessages.
                 */
                CANDevice(const string &deviceNode, GenericCANMessageListener &listener);

                virtual ~CANDevice();

                /**
                 * This method returns true if the device was successfully initialized.
                 *
                 * @return true if the device could be successfully openend.
                 */
                bool isOpen() const;

                /**
                 * This methods writes a GenericCANMessage to the device.
                 *
                 * @param gcm GenericCANMessage to be written.
                 */
                void write(const GenericCANMessage &gcm);

                virtual void beforeStop();

                virtual void run();

                /**
                 * This method returns a reference to the data store that in the end will
                 * send a Container to the CAN device.
                 *
                 * @return Reference to the data store.
                 */
                MessageToCANDataStore& getMessageToCANDataStore();

            private:
                string m_deviceNode;
                HANDLE m_handle;
                GenericCANMessageListener &m_listener;
                auto_ptr<MessageToCANDataStore> m_messageToCANDataStore;
        };

    } // odcantools
} // automotive

#endif /*CANDEVICE_H_*/
