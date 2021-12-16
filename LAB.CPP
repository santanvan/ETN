1 	Basic configuration of a switch using personal computer.

2 	Backup and Restore router configuration using TFTP server.

3 	To understand role of default gateway

4	Sending and receiving files from ftp server and accessing files on http from personal computer. 

5	Implementation of telnet 

6	Implementation of SSH

7 	wireless router configuration

8	To setup WLAN (wireless local area network) 

9 	To implement wide area network topology.

10	To capture and analyse packets in Wire shark












Experiments 1:
Aim: - Basic configuration of a switch using personal computer.
Theory:- 
Switch- A network switch is networking hardware that connects devices on a computer network by using packet switching to receive and forward data to the destination device. A network switch is a multiport network bridge that uses MAC addresses to forward data at the data link layer of the OSI model.
Commands: -
1.>	Enable
2.>	Configure terminal
3.>	Hostname
4.>	Banner
Objective:-
1.>	To configure switch from personal computer using console connection.
2.>	Change hostname of switch
3.>	Enable password
4.>	Check the running configuration
5.>	Banner 
Result:-

 

Experiments 2: 
Aim: - Backup and Restore router configuration using TFTP server.
Theory: - TFTP server is used for simple file transfer (typically for boot-loading remote devices). Trivial file transfer protocol (TFTP) is a simple protocol for exchanging files between two TCP/IP machines. TFTP servers allow connections from a TFTP client for sending and receiving files.
Commands: - 
1.>	Enable
2.>	Configure terminal 
3.>	Interface fastethernet 
4.>	Ip address 
5.>	No shutdown
6.>	Copy running-config tftp:
7.>	 Copy tftp: running-config
Objective: -
1.>	Create topology 
2.>	Assign IP address to the server, router etc.
3.>	Save the configuration on the server
4.>	Copy the configuration from server to the router
Result: - 
 

Experiments 3: 
Aim: - to understand role of default gateway
Theory: - A default gateway is the node in the computer network using the internet protocol suite that serves as the forwarding host to other networks when no other route specification matches the destination IP address of a packet.
Commands: -
1.>	Enable
2.>	Configure terminal
3.>	Interface fastethernet
4.>	IP address
5.>	No shutdown
Objective: -
1.>	Create topology and assign ip addresses 
2.>	Ping and check connectivity
3.>	Send packet data unit from one network two some other network
Result: -

 



Experiments 4:
Aim: - sending and receiving files from ftp server and accessing files on http from personal computer.
Theory: - 
Ftp is a file transfer protocol server. It is used for transfer of files between a client and a server on a computer network.
Ftp is built on a client-server model architecture using separate control and data connections between the client and the server.
Commands: -
1)	ftp servers IP address (in the command prompt of the personal computer and then login using default id and password)
2)	put file.html (to send file to ftp server)
3)	cd \http 
4)	put file.html (to put file on http browser)
5)	get file.html (to download file from server)

Objective: -
1)	To create topology and configure IP addresses.
2)	 Create a file in personal computer and send it to the ftp server.
3)	Add the file to the http browser.
4)	Access file from browser using personal computer.
Result: -
 
Experiments 5:
Aim: - implementation of telnet
Theory: - 
Telnet is an application layer protocol that allows a network administrator to access and manage remote devices. A user on a client machine can use a software(also known as a telnet client) to access a command line interface of another, remote machine that is running a telnet server program.
Command: -
1.>	Enable
2.>	Configure terminal
3.>	Enable password
4.>	Interface vlan 1
5.>	No shutdown
6.>	Interface fastethernet 0/0
7.>	Login
8.>	Line vty 0 15
9.>	Password
10.>	telnet 10.0.0.4
11.>	ip address 10.0.0.4 255.255.255.0
Objective: -
1.>	create topology and assign IP addresses
2.>	to access switch via telnet, assign IP address to switch through VLAN and assign telnet password
3.>	to access router via telnet, assign IP address to fastethernet, assign VLAN and assign telnet password.
4.>	Using personal computer, go to command prompt and access telnet by authentication.
5.>	Change whatever you want to do to router and see the results
Result: - 
Experiments 6:
Aim: - implementation of SSH
Theory: -
Secure shell, just like telnet, enables a user to access a remote device and manage it remotely. However, with SSH, all data transmitted over a network is encrypted and secure from unauthorized access.
Commands: -
1.>	Enable
2.>	Configure terminal
3.>	Interface fastethernet 0/0
4.>	IP address 10.0.0.1 255.0.0.0
5.>	No shutdown
6.>	Hostname Yashwant
7.>	IP domain name admin
8.>	Crypto key generate rsa
9.>	Enable password
10.>	Username Yashwant password 1234
11.>	IP SSH version 2
12.>	Line vty 0 15
13.>	Transport input ssh
14.>	Login local
15.>	SSH –l Yashwant 10.0.0.1 
16.>	Interface vlan 1
Objectives: -
1.>	To create topology and assign IP addresses
2.>	To set hostname and ip domain name
3.>	To generate crypto key
4.>	To create vty connection of router and switch
5.>	To access remotely router or switch through command prompt on personal computer using ssh client software
Result: -
             



















Experiments 7: 
Aim: - wireless router configuration 
Theory: -
A wireless network is a computer network that uses wireless data connections between network nodes. There are basically three different types of wireless networks – WAN, LAN and PAN.
Commands: - 
1.>	Ping
2.>	Interface fastethernet
3.>	ip address 
4.>	no shutdown
5.>	ip dhcp pool mypool
6.>	network 
7.>	default-router
8.>	dns-server 0.0.0.0
9.>	ip route 192.168.0.0 255.255.255.0
Objective: -
1.>	Create topology and configure wireless router either by browser on pc or by clicking on wireless router.
2.>	Change username and password of wireless router.
3.>	Configure security of wireless connection on wireless router.
4.>	Configure LAN interface settings by configuring setup settings and network settings on wireless router.
5.>	Configure DHCP server on router which will act as an internet service provider.
6.>	Configure server.
7.>	Ping pc with laptop within LAN and ping PC or laptop with server outside LAN.
Result: -
 
Experiments 8:
Aim: - to setup WLAN (wireless local area network)
Theory: - 
A wireless LAN (WLAN) is a wireless computer networks that links two or more devices using wireless communication to form a local area network within a limited area such as a home, school etc.
To connect devices we require a wireless interface card adapter, so we have to remove default Ethernet card and plug in the wireless interface card (WPC300N) into the devices.
Commands: -
1.>	 Ip address 
2.>	No shutdown
3.>	Enable
4.>	Configure terminal
5.>	Interface fastethernet 
6.>	Ping
Objective: -
1.>	To create topology and wireless connections between access point and devices.
2.>	Remove default Ethernet card from devices and plug in wireless adapter like WPC300N.
3.>	Assign security WEP key to access point and connect through devices wirelessly by providing WEP key in pc wireless.
4.>	Ping pc connected to access point wirelessly with pc connected to access point with wires.
5.>	Ping different devices and check connectivity by sending packed data unit through simulation mode.
Result: -
 
Experiments 9:
Aim: - to implement wide area network topology.
Theory: -
A wide area network is a telecommunications network that extends over a large geographic area for the primary purpose of computer networking. Wide area networks are often established with leased telecommunications circuits.
Commands: -
1.>	Enable
2.>	Configure terminal
3.>	Ip address 
4.>	No shutdown
5.>	Interface fastethernet
6.>	Netstat-r 
7.>	Show ip route
Objective: -
1.>	Create topology and connect LAN’s router using serial DCE cable by adding a serial port in the router (HWlC-2T).
2.>	Ping pc of LAN 1 to pc of LAN 2 and check connectivity.
3.>	Add address of default gateway network in routing interface protocols of both the router.
4.>	Check ip route on pc’s and routers 
Result: -
 
Experiments 10:
Aim: - to capture and analyze packets in Wire shark
Theory: -
Wire shark is an open source packet analyzer. It is used for network troubleshooting, analysis, software and communications protocol development, and education. 
Steps: -
1.>	Select the interface for which you want to capture packets from the list shown on starting window in wire shark.
2.>	Either double click on the interface or go to capture tab and select start to start capturing packets.
3.>	When you are done capturing packets go to capture tab and select stop to stop capturing packets.
4.>	Then you can apply filter if you want to see some specific protocol packets.
5.>	You can plot graph between protocols.
6.>	And by double clicking on the packet you will get detailed information about the packet.
