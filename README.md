GameBoy developmentkit examples
====

This repository contains some examples in how to use the GameBoy development kit to build games for the GameBoy

# Vagrant

As the GBDK is not compatible with Mac OS X, a Vagrant box with Linux is provided. Provision data is stored in provision.yml, an Ansible Playbook file.

In order to bring up the development environment, type:

```
vagrant up
ansible-playbook provision.yml
```

You then can enter the box and start developing your games! This folder source is localed under /vagrant
