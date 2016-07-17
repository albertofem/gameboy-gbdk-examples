GameBoy developmentkit examples
====

This repository contains some examples in how to use the GameBoy development kit to build games for the GameBoy

# GBDK

The GBDK is localted as a submodule "gbdk" in the root of this project. This points to a updated GBDK fork (https://github.com/gheja/gbdk) with the latests Makefiles and other utitilities.

# Mac OS X

As the GBDK cannot compile in Mac OS X (need to debug that!), a basic Vagrant with all needed utilities is provided

In order to bring up the development environment, type:

```
vagrant up
vagrant ssh
cd /vagrant/gbdk
make
make install
```

You then can enter the box and start developing your games! All the changes made in the root folder (if your fork this project) from the Vagrant machine will be available in the host, so you can run the emulator, etc.

# Linux provision

If you are under Linux, you can use the gbdk after installing the following required packages:

```
sudo apt-get -y install make gcc g++ bison flex
```
