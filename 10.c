#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270
    };

    int target_id;
    scanf("%d", &target_id);

    int result = binary_search(books, 12, target_id);

    if (result != -1) {
        printf("Kitob topildi!\nIndeks: %d\n", result);
    } else {
        printf("Kitob topilmadi\n");
    }

    return 0;
}