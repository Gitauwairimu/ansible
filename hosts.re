# Lines beginning with a # are comments, and are only included for
# illustration. These comments are overkill for most inventory files.


# Application servers
[app]
192.168.60.4
192.168.60.5


# Database server
[db]
192.168.60.6



# Group 'multi' with all servers
[multi:children]
app
db


# Variables that will be applied to all servers
[multi:vars]
#ansible_ssh_user=root
ansible_ssh_private_key_file=~/.ssh/id_rsa
