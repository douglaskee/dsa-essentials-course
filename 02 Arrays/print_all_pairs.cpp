#include<iostream>
using namespace std;

//Problem : Print all subarrays of a given array
void printSubarrays(int* arr,int n){

	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k] <<",";
			}
			cout <<endl;
		}

	}

}

// Print the sum of each subarray & find out the largest sum
void maxSumSubarrays(int* arr,int n){//Brute force 
	int max,temp;

	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){
			temp=0;
			for(int k=i;k<=j;k++){
				cout<<arr[k] <<",";
				temp +=arr[k];
			}
			cout<<"		Sum of Subarray: "<<temp<<endl;
			if(temp>max){
				max=temp;
			}
		}
	}
	cout<<"Max Sum for Subarrays is: "<<max<<endl;	
}

void largestSubarraySum(int* arr, int n){//prefix sum solution
	int pfArr[n];
	pfArr[0]=arr[0];
	cout<<"Prefix Array: ";
	for(int i=1;i<n;i++){
		pfArr[i]=pfArr[i-1]+arr[i];
		cout<<pfArr[i]<<",";
	}
	cout<<endl;
	int largest = 0;
	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){
			int temp = i>0 ? pfArr[j]-pfArr[i-1] : pfArr[j];
			largest= max(temp,largest);
		}
	}
	cout<<"Max Sum for Subarrays is: "<<largest<<endl;

}

int main(){
	//Array Containing 
	int arr[] = {-2,3,4,5,-12,6,2,3};
	int n = sizeof(arr)/sizeof(int);

	printSubarrays(arr,n);

	maxSumSubarrays(arr,n);

	largestSubarraySum(arr,n);

	return 0;
}