#include <stdio.h>
int load_mem(){
    printf("MEM_OK");
    return 0;
}
int load_cpu(){
    printf("CPU_OK");
    return 0;
}
int main(){
    printf("BOOT:");
    load_mem();
    printf("|");
    load_cpu();
    printf(":END");
    return 0;
    
}