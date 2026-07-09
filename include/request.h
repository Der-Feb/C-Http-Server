#ifndef REQUEST_H
#define REQUEST_H

#define BUFFER_SIZE 4096

typedef struct {
    char method[16];
    char path[256];
    char version [16];
} HttpRequest;

int request_read(int cliend_fd, char *buffer, int size);
int request_parse(char *buffer, HttpRequest *request);

#endif