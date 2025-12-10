#include<stdio.h>

int main(){

	int a; //declaration of variables
	int b;
	
	printf("Enter the first Number:");
	scanf("%d",&a); //getting input from user to swap
	
	printf("Enter the second Number:");
	scanf("%d",&b);

	int temp; //temporary variable to store the original value before swapping
	printf("Numbers before are Swapping %d and %d\n",a,b);

	temp = a;
	a = b;
	b = temp; // Both Numbers swapped

	printf("The Swapped Values are %d and %d",a,b);

}


OUTPUT:

Enter the first Number:5
Enter the second Number:6
Numbers before are Swapping 5 and 6
The Swapped Values are 6 and 5