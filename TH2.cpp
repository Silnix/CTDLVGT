#include <stdio.h>
void input (int a[], int n);
void output (int a[], int n);
void SelectionSort (int a[], int n);
void InsertionSort (int a[], int n);
void InterchangeSort (int a[], int n);
void BubbleSort (int a[], int n);
void heapify (int a[], int n, int i);
void HeapSort (int a[], int n);
void QuickSort (int a[], int left, int right);
int main() {
	int n;
  		printf("Nhap so phan tu cua mang: ");
  		scanf("%d", &n);
	int a[n];
	
	input(a,n);
		printf("Mang vua nhap la:\n");
	output(a,n);
		printf("\nMang sau khi duoc Selection Sort: \n");			
	SelectionSort(a,n);
	output(a,n);
		printf("\nMang sau khi duoc Insertion Sort: \n");
	InsertionSort(a,n);
	output(a,n);
		printf("\nMang sau khi duoc Interchange Sort: \n");			
	InterchangeSort(a,n);
	output(a,n);
		printf("\nMang sau khi duoc Bubble Sort: \n");			
	BubbleSort(a,n);
	output(a,n);
		printf("\nMang sau khi duoc Heap Sort: \n");			
	HeapSort(a,n);
	output(a,n);
		printf("\nMang sau khi duoc Quick Sort: \n");			
	QuickSort(a, 0, n - 1);
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
void InterchangeSort (int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void BubbleSort (int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void heapify (int a[], int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && a[l] > a[largest])
        largest = l;

    if (r < n && a[r] > a[largest])
        largest = r;

    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}
void HeapSort (int a[], int n) {
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(a, n, i);

    for (int i = n-1; i >= 0; i--) {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a, i, 0);
    }
}
void QuickSort (int a[], int left, int right) {
    int i, j, pivot, temp;
    if (left < right) {
        pivot = left;
        i = left;
        j = right;
        while (i < j) {
            while (a[i] <= a[pivot] && i < right)
                i++;
            while (a[j] > a[pivot])
                j--;
            if (i < j) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        QuickSort(a, left, j - 1);
        QuickSort(a, j + 1, right);
    }
}
