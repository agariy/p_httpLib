/*
    Projet: Http request lib
    Dev: P_Agariy

    [ ETAPES ]
        - Create socket
        - use struct Addrinfo
        - use getaddrinfo to find ip of domain
        - connect to serv 
        - send data : GET /Path.html HTTP/1.1\r\nHost: www.example.com\r\n\r\n
        - recv response

    [ STRUCTURE ]
        struct addrinfo {
            int     ai_flags;
            int     ai_family;
            int     ai_socktype;
            int     ai_protocol;
            size_t  ai_addrlen;
            struct  sockaddr *ai_addr;
            char    *ai_canonname;     
            struct  addrinfo *ai_next; 
        };

        int getaddrinfo(const char *node,
                const char *service,
                const struct addrinfo *hints,
                struct addrinfo **res);
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <string.h>


int main(){
    printf("Hello world\n");
    return 0;
}