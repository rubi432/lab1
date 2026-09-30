#include <stdio.h>
int main(){
    int reactor_core=12,reactor_corev2,reactor_corekvadrat;
    reactor_corev2 = reactor_core * 2;
    reactor_corekvadrat = reactor_core * reactor_core;
    printf("%d\t%d\t%d",reactor_core,reactor_corev2,reactor_corekvadrat);
    return 0;
}