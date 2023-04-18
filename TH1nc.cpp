#include <stdio.h>
void input (int a[], int n);
void output (int a[], int n);
int LinearSearch (int a[], int n, int keyL);
int BinarySearch (int a[], int n, int keyB);
void SelectionSort (int a[], int n);
void InsertionSort (int a[], int n);
int main() {
	int n;
  		printf("Nhap so phan tu cua mang: ");
  		scanf("%d", &n);
	int a[n];

	input(a,n);
		printf("Mang vua nhap la:\n");
	output(a,n);
	
	int keyL;
    printf("\nNhap gia tri can tim kiem bang LinearSearch: ");
    scanf("%d", &keyL);
    int indexL = LinearSearch(a, n, keyL);
    if (indexL == -1) {
        printf("Khong tim thay gia tri %d trong mang.\n", keyL);
    } else {
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang.\n", keyL, indexL);
    }
    
    int keyB;
    printf("\nNhap gia tri can tim kiem bang BinarySearch: ");
    scanf("%d", &keyB);
    int indexB = BinarySearch(a, n, keyB);
    if (indexB == -1) {
        printf("Khong tim thay gia tri %d trong mang.\n", keyB);
    } else {
        printf("Gia tri %d duoc tim thay tai vi tri %d trong mang.\n", keyB, indexB);
    }

    printf("\nMang sau khi duoc Selection Sort: \n");			
	SelectionSort(a,n);
	output(a,n);
	printf("\nMang sau khi duoc Insertion Sort: \n");
	InsertionSort(a,n);
	output(a,n);

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
	
  	for (p = a; p < a + n; p++) {
    	printf("%4d ", *p);
  	}
}
int LinearSearch(int a[], int n, int keyL) {
    for (int i = 0; i < n; i++) {
        if (a[i] == keyL) {
            return i;
        }
    }
    return -1;
}
int BinarySearch (int a[], int n, int keyB) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == keyB) {
            return mid;
        } else if (a[mid] < keyB) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
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
}
void InsertionSort (int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

