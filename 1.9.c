#include <stdio.h>
int phase_2(){
    printf("GAMMA\t");
    return 0;

}
int phase_1(){
    printf("ALPHA\t");
    phase_2();
    return 0;
}
int main(){
    printf("START\t");
    phase_1();
    printf("End");
    return 0;



}