//We need to find the angle at which two roads meet
#include<stdio.h>
#include"Library.h"
int main(){
    //Roads are given as linear equations 
    //those are:
    //5x + y - 3 = 0   &    2x + 3y + 1 = 0
    float Angle_at_Chowk; //Angle at which two roads meet
    Angle_at_Chowk = find_angle(5,1,2,3);
    //We are passing coefficient of x and y
    // we can use same function for any linear equations
    printf("Angle at which two roada meet is %f degrees",Angle_at_Chowk);

    return 0;
}