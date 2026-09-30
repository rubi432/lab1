#include <stdio.h> 
int ping(){
    printf("PING");
    return 0;
}
int pong(){
    printf("PONG");
    return 0;
}
int handshake(){
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
    return 0;
}
int main(){
    int node_id =5,packet_size,total_transfer;
    packet_size=node_id*4;
    total_transfer=packet_size*3;
    handshake();printf(":%d\n",packet_size);
    handshake();printf(":%d\n",total_transfer);
    printf("SESSION:CLOSED");
    return 0;
}