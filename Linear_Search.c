#include <stdio.h>
#include<stdbool.h>

int main()
{
    int n;  //declaring datatype for size of array
    
    printf("Enter the Size of Array:");
    scanf("%d",&n); //getting input from user for size of the array
    
    int arr[n];     //declaring array data type
    
    for(int i = 0; i < n; i++){     //getting the array elements for the array
        
        printf("Enter the Value:");
        scanf("%d",&arr[i]);
    }
    
    int target;     //declaring datatype for target
    
    printf("Enter the Target value:");
    scanf("%d",&target);    //getting target value from user
    
    bool found = false;     //setting found as false since element not found
    
    for(int i = 0; i < n; i++){
        if(arr[i]==target){
            printf("Element found at index %d\n",i);
            found = true;
            break;
            
        }
    }
    
    if(!found){
        printf("Element not Found");    //If element not Found
    }
    
}

OUTPUT_1:

Enter the Size of Array:5
Enter the Value:10
Enter the Value:20
Enter the Value:30
Enter the Value:40
Enter the Value:50
Enter the Target value:60
Element not Found

OUTPUT_2:

Enter the Size of Array:5
Enter the Value:1
Enter the Value:2
Enter the Value:30
Enter the Value:4
Enter the Value:5
Enter the Target value:30
Element found at index 2