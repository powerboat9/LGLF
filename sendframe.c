#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <net/if.h>
#include <netinet/ether.h>
#include <linux/if_packet.h>

void send()
    int socket;
    if ((socket = socket(AF_INET, SOCK_RAW, IPPROTO_RAW)) < 0) {
        perror("Could Not Create Socket");
    }
    
