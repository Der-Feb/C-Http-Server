#ifndef SOCKET_H
#define SOCKET_H

int socket_create(int port);
int socket_accept(int server_fd);
void socket_close(int fd);

#endif