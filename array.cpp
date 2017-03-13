#include <iostream>
#include <stdio.h>
using namespace std;

void sort(double* a, int first, int last) {
    int i = first,
    j = last;
    double tmp=0;
    double p = a[(first + last) / 2];
    do {
        while (a[i] < p)    i++;
        while (a[j] > p)    j--;
        if (i <= j)    {
            if (i < j)      {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
            i++;
            j--;
        }
    } while (i <= j);
    
    if (i < last) sort(a, i, last);
    if (first < j) sort(a, first,j); 
}

int main() {
	const int n=9;
	double arr[n]={2,3,3,6,7,8,9,0,-2};
	
	sort(arr, 0, n-1); // Не количество элементов, а последний элемент (индекс)!
	
	for(int i = 0; i<n; i++) {
		cout<<arr[i]<<endl;
	}	
	return 0;
}