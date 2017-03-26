/*
 * main.cpp
 *
 *  Created on: Mar 26, 2017
 *      Author: dmitry
 */

#include "MyServer.h"

int main(int argc, char *argv[]) {
	MyServer server(3442);
	server.init();
	server.run();
}
