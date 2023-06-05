# GW
## Unlock access to GW
In boot - you can mount it on any computer.
	- Added zero byte file `ssh`

Mount the MicroSD in Linux and acess 2nd partition (ext4)


- Add to `/etc/passwd`
		`dj:x:1001:1000:,,,:/home/pi:/bin/bash`
	
- Add to `/etc/shadow` (exc) using 
			`openssl passwd -6 -salt xyzsalt  mypassword`

```
dj:$6$xyzsalt$JJzQkBsqgkiVtmiZ1z9Utu2z/jMXp9t1VFzWgNOhekoJ4.UUoTA0u4bBpuqx5XUdKZYnaP8XtlWXz0wfUTYsc:19504:0:99999:7:::
```
- In `/etc/sudoers.d`
		`sudo nano 010_pi-nopasswd`
Edit file and added word to `dj` beside `pi`
	

### Optional
Change /etc/network/
~~~bash
mv interfaces interfaces.save
cat > interfaces
    # interfaces(5) file used by ifup(8) and ifdown(8)
	  # Include files from /etc/network/interfaces.d:
source /etc/network/interfaces.d/*
~~~

- Edit rc.local to reduce the cycle of reboots when mount does not work correctly.
		Change sleep `120` to `1200`


## commands in GW
- `/sbin/cryptsetup luksOpen --test-passphrase -T1 /home/pi/data` when prompted the default password used it below, later the password is changed to a combination of the Serial and MAC
- `/sbin/cryptsetup-reencrypt /home/pi/data --cipher aes-cbc-essiv:sha256 --key-size 256`
- `/sbin/cryptsetup luksChangeKey /home/pi/data`
- `/sbin/cryptsetup luksOpen /home/pi/data cfile`
- `/sbin/e2fsck -p -f /dev/mapper/cfile`
- `/bin/mount -t auto /dev/mapper/cfile /mnt/cfile`
- `/usr/sbin/update-rc.d ssh enable`

### other elements
- `/proc/cpuinfo`	used to get serial # for key
- `Manufacturing`   This is the orginal default password to unlock luksOpen
- `Serial`            The Serial number is used as part of the encryption key along with the MAC address read from cpuinfo
- The mac address format as part of the encryption key `%02X%02X%02X%02X%02X%02X`


Using a 64 hex digit hash key = 16^64 combos
