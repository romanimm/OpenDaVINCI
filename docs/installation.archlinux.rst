Compiling OpenDaVINCI on ArchLinux
----------------------------------

Download and install ArchLinux and install using the following instructions: https://wiki.archlinux.org/index.php/Installation_guide

.. Install some core packages::

   # pacman -S net-tools openssh sudo
  
Install some core packages::

   # pacman -S net-tools sudo
  
Install the required development packages for OpenDaVINCI sources::

   $ sudo pacman -S cmake gcc git make python2
   
Add a missing symbolic link::

   $ sudo ln -sf /usr/bin/python2.7 /usr/bin/python
  
.. Install the required development packages for hesperia sources:

   $ sudo pacman -S freeglut
   $ sudo pacman -S qt4
   $ sudo pacman -S boost
   $ sudo pacman -S opencv-devel
   
.. Install qwt5-qt4:

   $sudo pacman -S qwt5
  
.. Add two missing symbolic links:

   $ sudo ln -sf /usr/include/qwt5 /usr/include/qwt-qt4
   $ sudo ln -sf /usr/local/qwt-5.2.3/lib/libqwt.so.5.2.3 /usr/include/libqwt-qt4.so
  
.. Install the required development packages for host-tools sources:

   $ sudo pacman -S libusb
   
.. Add a missing symbolic link:

   $ sudo ln -sf /usr/include/libusb-1.0/libusb.h /usr/include/usb.h
  
Install Java to generate data structures::

   $ sudo pacman -S jdk8-openjdk

.. Install the required development packages for the DataStructureGenerator sources:

   $ sudo pacman -S jdk8-openjdk
   $ sudo pacman -S apache-ant
   $ sudo pacman -S junit
   
Clone the latest OpenDaVINCI sources from https://github.com/se-research/OpenDaVINCI or download
the latest OpenDaVINCI sources as zip file: https://github.com/se-research/OpenDaVINCI/archive/master.zip.

Change your source folder and create a build directory::

   $ cd OpenDaVINCI && mkdir build

Use cmake to create the build scripts for your build folder::

   $ cd build && cmake -D CMAKE_INSTALL_PREFIX=/usr/local ..

Build the OpenDaVINCI sources::

   $ make all

Run the tests for OpenDaVINCI::

   $ make test

Install the binaries, libraries, and header files to /usr/local::

   $ make install
