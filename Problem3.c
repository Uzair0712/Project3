//We need to find the area under the triangle to fill the color black
#include<stdio.h>
#include"Library.h"
int main(){
    // We are given vertices of the shape
    //  These are (20.077,11.598) , (26.526, 90.138) , (23.674, 32.579)
    float Area;
    Area = find_area(20.077,11.598,26.526, 90.138,23.674, 32.579);
    printf("Area under the Shape that need to be colored is %f",Area);

    return 0;
}