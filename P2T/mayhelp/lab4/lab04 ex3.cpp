#include <stdio.h>
#include <string.h>
#include <math.h>
struct TwoDPoint 
{
	float x, y;
};

void function1(struct TwoDPoint a, struct TwoDPoint b);
void function2(struct TwoDPoint a, struct TwoDPoint b);
int main() 
{
	struct TwoDPoint a;
	a.x=0;
	a.y=0;
	struct TwoDPoint b = {0.0};
	function1(a,b);
	function2(a,b);

	return 0;
}
	//function 1 takes data from user
	void function1(struct TwoDPoint a,struct TwoDPoint b){
		char input [100];
		puts("Please enter the x coordinates of the 1st point.");
		fgets(input , sizeof(input), stdin);
		sscanf(input ,"%f", &(a.x));
		puts("Please enter the y coordinates of the 1st point.");
		fgets(input , sizeof(input), stdin);
		sscanf(input ,"%f", &(a.y));
		
		puts("Please enter the x coordinates of the 2st point.");
		fgets(input , sizeof(input), stdin);
		sscanf(input ,"%f", &(b.x));
		puts("Please enter the y coordinates of the 2st point.");
		fgets(input , sizeof(input), stdin);
		sscanf(input ,"%f", &(b.y));
		
	}	
	
	void function2(struct TwoDPoint a,struct TwoDPoint b){
		double x_dist = (a.x - b.x), y_dist = (a.y - b.y);
		printf("The square of the distance between the two points is: %f\n", sqrt((x_dist*x_dist)+(y_dist*y_dist)));
	
	}

