#include <iostream>
using namespace std;

// 交換兩個元素的值.
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 最大堆的調整.
void maxHeapify(int arr[], int n, int i) {
    int largest = i;  // 初始化父節點為最大值.
    int left = 2 * i + 1;  // 左子節點的索引.
    int right = 2 * i + 2;  // 右子節點的索引.

    // 如果左子節點大於父節點.
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // 如果右子節點大於父節點.
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // 如果最大值不是父節點，則進行交換.
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        // 遞歸調整子樹.
        maxHeapify(arr, n, largest);
    }
}

// 堆積排序.
void heapSort(int arr[], int n) {
    // 建立最大堆.
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }

    // 逐步將最大值放到數列末尾.
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        // 重新調整堆.
        maxHeapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {30, 20, 15, 1, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 原始數列.
    cout << "原始數列：";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 堆積排序.
    heapSort(arr, n);

    // 排序後數列.
    cout << "排序後數列：";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
