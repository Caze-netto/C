#include <stdio.h>
#include<math.h>

int growing_plants(int upSpeed, int downSpeed, int desiredHeight){
    int days = (int)(desiredHeight)/(upSpeed - downSpeed);
    return days;
}


int main(){
    printf("Total de dias eh: %d", growing_plants(252,32,910));
}