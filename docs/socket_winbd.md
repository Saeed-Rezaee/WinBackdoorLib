#### the headers socket_winbd.h has a define named BUFFER_SIZE_DEFAULT which is an integer of 4096 bytes for the headers functions we have 7 currently there will probably be more in more advanced versions but for now we have this one

##### int connect(SOCKET socks_instance, struct sockaddr_in session);
##### the connect function takes in parameter a SOCKET instance and the structure sockaddr_in, the connect function returns -1 if there is an error otherwise 0 if all goes well
```cpp
#include "socket_winbd.h"

int main()
{
	SOCKET socks;
	WSADATA wsa;
	struct sockaddr_in session;
	
	WSAStartup(MAKEWORD(2, 2), &wsa);
	socks = WSASocket(AF_INET, SOCK_STREAM, IPPROTO_TCP, 0, 0, 0);
	
	session.sin_family = AF_INET;
	session.sin_addr.s_addr = inet_addr("192.168.1.20");
	session.sin_port = htons(555);
	
	int c = connect(socks, session);
	
	if (c != -1)
	{
		printf("Connected to 192.168.1.20");
	}
	else
	{
		printf("Error !");
	}

	return 0;
}
```

##### int send_data(SOCKET socks_instance, char* buffer);
##### the send_data function takes in parameter a socket instance and a buffer, it returns -1 in case of error 0 in case of success

#### int recv_data(SOCKET socks_instance, char* buffer, int len);
#### the function recv_data allows to receive data from the socket it takes in parameter a socket instance as well as a buffer and the length of the buffer

#### void execute_process(SOCKET socks_instance, char* process);
#### the execute_process function allows to attach a process in the socket and to stream it

#### servent* gservbyport(struct servent* get_service_name, int port);
#### the function gethostbyaddr_ipv4 allows to retrieve the hostname by the ip v4 address


#### servent* gservbyname(struct servent* get_service_port, const char* name);
#### this function allows to return the service of the specifier port it takes in parameter the serve structure just like gservbyport and also asks for the name in a buffer