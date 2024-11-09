#include <stdio.h>
#include <stdio.h>

int main() {
    int arr[20], n, count, i, j;
    int visited[20] = {0};  // Array to mark visited elements

    printf("Enter Size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip if already counted and printed
        }

        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark all occurrences as visited
            }
        }

        if (count > 1) {  // Only print if the number is repeated
            printf("%d : %d\n", arr[i], count);
        }
    }

    return 0;
}
