#include "helper.h"

int createNewSocket() {
	int sockDesrcr = socket(AF_INET, SOCK_STREAM, 0);
	if (sockDesrcr == -1)
		throw "createNewSocket";

	return sockDesrcr;
}

void bundSocket(int socketDescriptor, u_short port) {
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = htonl(INADDR_ANY);
	addr.sin_port = htons(port);
	if (bind(socketDescriptor, (const sockaddr *) &addr, sizeof(addr)) == -1)
		throw "bundSocket";
	listen(socketDescriptor, 2);
}

timeval setTimeout(int seconds) {
	timeval timeout;
	timeout.tv_sec = seconds;
	timeout.tv_usec = 0;
	return timeout;
}
