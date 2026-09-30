#include <stdio.h>
int main(){
    int god = 18,dni,chasi,sekundi;
    dni = god * 365;
    chasi = dni * 24;
    sekundi = chasi * 60 * 60;
    printf("Тики: %d | Часы: %d | Дни: %d | Годы:%d",sekundi,chasi,dni,god);
    return 0;
}