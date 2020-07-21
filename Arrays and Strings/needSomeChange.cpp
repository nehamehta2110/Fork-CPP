/*Your task is to complete the function swapElements(), which should swap each ith
 element with (i+2)th element. No need to print or return the array.*/
#include <iostream>
using namespace std;

/*Function to swap array elements
* arr : array input
* sizeof_array : number of elements in array
*/
void swapElements(int arr[], int sizeof_array){
    int temp = 0;
    // Your code here
    for (int j =0; j<sizeof_array-2; j++)
    {
        temp = arr[j];
        arr[j] = arr[j+2];
        arr[j+2] = temp;
    }
    
}

// Driver code to test swapElements
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
        
        // calling function to swap the array swap elements
	    swapElements(arr, sizeof_array);
	    
	    // Printing the modified array
	    for(int i = 0;i<sizeof_array;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}