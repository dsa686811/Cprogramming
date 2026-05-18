#include <stdio.h>

// 배열의 합계를 계산하는 함수
int sum_array(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// 버블 정렬 함수 (버그 포함 🐛)
void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i  ; j++) {  // ← 버그: size - i - 1 이어야 함
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 배열 출력 함수
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int data[] = { 64, 34, 25, 12, 22, 11, 90 };
    int size = sizeof(data) / sizeof(data[0]);

    printf("정렬 전: ");
    print_array(data, size);

    bubble_sort(data, size);

    printf("정렬 후: ");
    print_array(data, size);

    printf("합계: %d\n", sum_array(data, size));

    return 0;
}