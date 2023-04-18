#include<stdio.h>
int input (int a[100], int n);
int output (int a[100], int n);
void SelectionSort (int a[100], int n);
int main() {
	int n, a[100];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	input(a,n);
	SelectionSort(a,n);
	output(a,n);
return 0;
}
int input (int a[100], int n) {
	printf("Nhap gia tri cua mang a: \n");
	for (int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	} 	
}
int output (int a[100], int n) {
	printf("Gia tri cua mang a: ");
	for (int i = 0; i < n; i++) {
		printf("%4d",a[i]);
	} 
}	
void SelectionSort (int a[100], int n) {
  int i, j, minIndex, temp;

  for (i = 0; i < n - 1; i++) {
    minIndex = i;
    for (j = i + 1; j < n; j++) {
      if (a[j] < a[minIndex]) {
        minIndex = j;
      }
    }
    temp = a[i];
    a[i] = a[minIndex];
    a[minIndex] = temp;
  }
}
