https://ideone.com/uSsCER



#include <bits/stdc++.h>
using namespace std;


int getMax(int array[], int size) {
   int max = array[1];
   for(int i = 2; i<=size; i++) {
      if(array[i] > max)
         max = array[i];
   }
   return max; //the max element from the array
}
void sort(int *array, int size) {
   int output[size+1];
   int max = getMax(array, size);
   int count[max+1];     //create count array (max+1 number of elements)
   for(int i = 0; i<=max; i++)
      count[i] = 0;     //initialize count array to all zero
   for(int i = 1; i <=size; i++)
      count[array[i]]++;     //increase number count in count array.
   for(int i = 1; i<=max; i++)
      count[i] += count[i-1];     //find cumulative frequency
   for(int i = size; i>=1; i--) {
      output[count[array[i]]] = array[i];
      count[array[i]] -= 1; //decrease count for same numbers
   }
   for(int i = 1; i<=size; i++) {
      array[i] = output[i]; //store output array to main array
   }
}


//a function that will print the vector passed to it, elements seprated by space
void print(int ar[],int size)
{
	//traverse all the element and print them
	for(int i=0;i<size;i++)
	{
		cout<<ar[i]<<" ";	
	}
	cout<<"\n";
}

//the vector A will be sorted inplace and that's why passed with refrence


int main() {
	int A[]= {1,2,3,4,6,1,5,3,4,8};
	// your code goes here
	sort(A,sizeof(A)/sizeof(A[0]));
	cout<<"sorted vector: ";
	print(A,sizeof(A)/sizeof(A[0]));

	return 0;
}
