# -*- mode: ruby -*-

Vagrant.configure(2) do |config|
  config.vm.box = "hashicorp/precise64"
  config.vm.synced_folder ".", "/vagrant/"
  # config.vm.provision "shell", inline: <<-SHELL
  #   sudo apt-get update
  #   sudo apt-get install -y apache2
  # SHELL
end
