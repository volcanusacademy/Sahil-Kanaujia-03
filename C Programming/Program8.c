//switch program for area of rectangle and circle
#include<stdio.h>
int main(){
	int choice;
	float Length, width, radius,area;
	
	printf("Menu");
	printf("R\n");
	printf("C\n");
	print("Select\n");
	scanf("%d"&choice);
	switch (choice) {
        case 1:
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of rectangle: %.2f square units\n", area);
            break;
	 case 2:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of circle: %.2f square units\n", area);
            break;
	default:
            printf("Invalid choice.\n");
    }

    return 0;
}