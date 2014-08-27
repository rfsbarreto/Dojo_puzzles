#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>

using namespace std;

typedef struct point{
 int x,y
} point;

//float get_distance

float get_angle_c(float a,float b,float c){
	float cos_c= (pow(a,2) + pow(b,2) - pow(c,2))/(2*b*c);
	return acos(cos_c);
}

float intersection( point p1, point p2, point p3, point p4){

}
