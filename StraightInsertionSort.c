#include <stdio.h>

int main(){
	int i;
	int a[10] = { 2, 5, 3, 1, 6, 7, 6, 9, 10, 8 };
	void StraightInsertionSort(int *);

	StraightInsertionSort(a);

	for (i = 0; i < 10; i++){
		printf("%d\n", a[i]);
	}

	return 0;
}
void StraightInsertionSort(int *a){
	int i, j;
	int temp;
	for (i = 1; i < 10; i++){
		temp = a[i];
		j = i - 1;
		while (j >= 0 && temp < a[j]){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}