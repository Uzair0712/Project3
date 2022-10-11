//We need to find distance between two cities
#include<stdio.h>
#include"Library.h"
int main(){
    // We are given latitudes and longitudes of the cities
    // Latitude and Longitude values of Bhopal as 23.259933 N, 77.412613 E.
    // Latitude and Longitude values of Bangalore as 12.9716 N, 77.5946 E.
    float Distance;
    Distance = find_distance(23.259933,77.412613,12.9716,77.5946);
    // We are passing latitude and longitude of the cities
    // We can use same function to find distance of any two points 
    printf("Distance between Bhopal and Banglore is %f K.M.",Distance);

    return 0;
}