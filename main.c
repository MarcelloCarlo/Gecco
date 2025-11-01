#include <stdio.h>
#include "server.h"

int main() {
    int p;

    printf("Enter port number to use:");
    scanf("%d", &p);

    struct Server server = server_Constructor(AF_INET, p, SOCK_STREAM, 0, 10, INADDR_ANY, launch);
    server.launch(&server);
    return 0;
}