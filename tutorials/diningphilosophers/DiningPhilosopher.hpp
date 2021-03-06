/**
 * OpenDaVINCI - Tutorial.
 * Copyright (C) 2015 Christian Berger
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <vector>
#include <core/base/Mutex.h>
#include <core/base/Service.h>

// Concurrency is provided by the class core::base::Service.
class DiningPhilosopher : public core::base::Service {
    private:
        uint32_t m_numberOfPhilosophers;
        uint32_t m_id;
        std::vector<core::base::Mutex*> &m_silverware;

    public:
        DiningPhilosopher(const uint32_t &numberOfPhilosophers,
                          const uint32_t &id,
                          std::vector<core::base::Mutex*> &silverware);

        // Your class needs to implement the method void beforeStop().
        virtual void beforeStop();

        // Your class needs to implement the method void run().
        virtual void run();
};

