/*
 * helper.h
 *
 *  Created on: Mar 26, 2017
 *      Author: dmitry
 */

#ifndef HELPER_H_
#define HELPER_H_

#include "header.h"

int createNewSocket();
void bundSocket(int socketDescriptor, u_short port);
timeval setTimeout(int seconds);

#endif // HELPER_H_
