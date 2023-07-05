#include <stdio.h>

int countSequences(int n) {
    int a = 1, b = 2, c = 4;  // Початкові значення для довжин послідовностей довжиною 1, 2 та 3
    int count;

    if (n == 1) {
        count = a;
    } else if (n == 2) {
        count = b;
    } else if (n == 3) {
        count = c;
    } else {
        for (int i = 4; i <= n; i++) {
            count = (a + b + c) % 12345;  // Обчислення кількості послідовностей для поточної довжини
            a = b;
            b = c;
            c = count;
        }
    }

    return count;
}

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}
