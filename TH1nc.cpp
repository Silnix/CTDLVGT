#include <stdio.h>
void input (int a[], int n);
void output (int a[], int n);
int LinearSearch(int a[], int n, int key);
//void SelectionSort (int a[], int n);
int main() {
	int n;
  		printf("Nhap so phan tu cua mang: ");
  		scanf("%d", &n);
	int a[n];

	input(a,n);
	output(a,n);
	
	int key;
    printf("\nNhap gia tri can tim kiem: ");
    scanf("%d", &key);
    int index = LinearSearch(a, n, key);
    if (index == -1) {
        printf("Khong tim thay gia tri %d trong mang.\n", key);
    } else {
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang.\n", key, index);
    	}
			
//	SelectionSort(a,n);


return 0;
}
void input (int a[], int n) {
	int *p;

  	printf("Nhap cac phan tu cua mang:\n");
  	for (p = a; p < a + n; p++) {
		scanf("%d", p);
  	}
}

void output (int a[], int n) {
	int *p;

	printf("Mang vua nhap la:\n");
  	for (p = a; p < a + n; p++) {
    	printf("%4d ", *p);
  	}
}
int LinearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}
/*
void SelectionSort (int a[], int n) {
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
  printf("Mang sau khi duoc Selection Sort: \n");
}
*/

