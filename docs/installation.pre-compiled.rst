How to install pre-compiled OpenDaVINCI libraries
=================================================

To explore the features of OpenDaVINCI and to use it in your own
projects, you can find pre-compiled packages in .deb and .rpm
format for x86, x86_64, and armfh.

Adding OpenDaVINCI to your Ubuntu Linux distribution
----------------------------------------------------

1. Add the public key from our repository::

    $ wget -O - -q http://opendavinci.cse.chalmers.se/opendavinci.cse.chalmers.se.gpg.key | sudo apt-key add -

2. Add our repository itself to your sources.list::

    $ sudo sh -c 'echo "deb http://opendavinci.cse.chalmers.se/ubuntu/ trusty main" >> /etc/apt/sources.list'

3. Update your package database::

    $ sudo apt-get update

4. Install OpenDaVINCI::

    $ sudo apt-get install opendavinci-odlib opendavinci-odtools opendavinci-odsupercomponent


Adding OpenDaVINCI to your Debian Linux distribution
----------------------------------------------------

1. Add the public key from our repository::

    $ wget -O - -q http://opendavinci.cse.chalmers.se/opendavinci.cse.chalmers.se.gpg.key | sudo apt-key add -

2. Add our repository itself to your sources.list::

    $ sudo echo "deb http://opendavinci.cse.chalmers.se/debian/ jessie main" >> /etc/apt/sources.list

3. Update your package database::

    $ sudo apt-get update

4. Install OpenDaVINCI::

    $ sudo apt-get install opendavinci-odlib opendavinci-odtools opendavinci-odsupercomponent


Adding OpenDaVINCI to your Fedora Linux distribution
----------------------------------------------------

1. Add our repository::

    $ cd /etc/yum.repos.d && sudo wget http://opendavinci.cse.chalmers.se/OpenDaVINCI-x86_64.repo

2. Update your package database::

   $ sudo yum -y update

3. Install OpenDaVINCI::

   $ sudo yum install opendavinci-odlib opendavinci-odtools opendavinci-odsupercomponent
   
   
Adding OpenDaVINCI to your openSuse Linux distribution
------------------------------------------------------

1. Add our repository::

    $ cd /etc/zypp/repos.d && sudo wget http://opendavinci.cse.chalmers.se/OpenDaVINCI-x86_64.repo

2. Update your package database::

    $ sudo zypper --no-gpg-checks refresh

3. Install OpenDaVINCI::

   $ sudo zypper install opendavinci-odlib opendavinci-odtools opendavinci-odsupercomponent


Using our Docker images
-----------------------

You also find pre-built Docker images for x86_64 and armhf. These images will be automatically
updated whenever new features or patches are released.

For Ubuntu/x86_64 (https://registry.hub.docker.com/u/seresearch/opendavinci-ubuntu-amd64/)::

    $ docker pull seresearch/opendavinci-ubuntu-amd64 

For Ubuntu/armhf (https://registry.hub.docker.com/u/seresearch/opendavinci-ubuntu-armhf/)::

    $ docker pull seresearch/opendavinci-ubuntu-armhf

