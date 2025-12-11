#include <stdio.h>
#include<stdbool.h>

int main()
{
    int n;  //declaring datatype for size of array
    
     //to check element found or not
    
    printf("Enter the Size of Array:");
    scanf("%d",&n); //getting input from user for size of the array
    
    int arr[n];     //declaring array data type
    
    for(int i = 0; i < n; i++){     //getting the array elements for the elements
        
        printf("Enter the Value:");
        scanf("%d",&arr[i]);
    }
    
    int target; //declaring the target value
    
    printf("Enter the target Value:");      //getting target value from user 
    scanf("%d",&target);

    int lb = 0;     //declaring the lowerbound and upperbound to find the mid value
    int ub = n-1;
    
    bool found = false;
    
    while(lb<=ub){      //running the loop to find the target value
        
        int mid = lb + ((ub - lb)/2);
        
        if(arr[mid] == target){
            
            printf("Target Element Found %d\n",arr[mid]);
           
            found = true;   //changing found to true cause element found
            break;
        }
        
        else if(arr[mid]<target){
            
            lb = mid+1;
            
        }
        
        else{ 
            
            ub = mid-1;
        }
        
    }
    
    if(!found){     //if target not found this will print
        printf("Element not Found");
    }
    
}


OUTPUT_1:



Enter the Size of Array:5       | 
Enter the Value:10              |
Enter the Value:20              |
Enter the Value:30              |
Enter the Value:40              |
Enter the Value:50              |
Enter the target Value:50       |
Target Element Found 50         |

OUTPUT_2
Enter the Value:10              |
Enter the Value:20              |
Enter the Value:30              |
Enter the Value:40              |
Enter the Value:50              |
Enter the target Value:50       |
Target Element Found 50  
                                                          
       