#include <stdio.h>
int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;
    int maxSoFar = arr[0], currentSum = arr[0];
    for (int i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i]) currentSum += arr[i];
        else currentSum = arr[i];
        if (currentSum > maxSoFar) maxSoFar = currentSum;
    }
    printf("Max: %d\n", maxSoFar);
    return 0;
}
