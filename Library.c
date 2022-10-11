#include<stdlib.h>
#include<math.h>
#define R  6371
//To find Angle between two linear Equations 
float find_angle(float a, float b,float c, float d){
    float m1,m2,tan_thita,Degree_angle,Radians;
    m1=(-a/b);
    m2=(-c/d);
    tan_thita=fabs((m2-m1)/(1+m1*m2));
    Radians=atan(tan_thita);
    Degree_angle=(180*Radians/3.14159);
    return Degree_angle;
}
//To find distance between two points longitude and latitude
float find_distance(float l1,float lo1, float l2, float lo2){
    float red1,red2,red3,red4;
    red1=(l1*3.141592/180);
    red2=(lo1*3.141592/180);
    red3=(l2*3.141592/180);
    red4=(lo2*3.141592/180);

    float dlat,dlong,temp,Distance;
    dlat=red3-red1;
    dlong=red4-red2;

    temp=pow(sin(dlat / 2), 2) + cos(red1) * cos(red3) * pow(sin(dlong / 2), 2);

    Distance = 2*R*asin(sqrt(temp));
    return Distance;
}
//To find Area under Triangle
float find_area(float x1, float y1, float x2, float y2, float x3, float y3){
    float Area,Temp_area;
    Temp_area = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    Area = abs(Temp_area);
    return Area;
}