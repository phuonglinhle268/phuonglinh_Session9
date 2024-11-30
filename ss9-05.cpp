#include <stdio.h>
#define MAX 100

int check(int n) {
    if (n <= 1) return 0;  
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;  
    }
    return 1;  
}

int mang(int arr[]) {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return n;
}

int display(int arr[], int n) {
    printf("Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return n;
}
int evens_sum(int arr[], int n) {
    int sum = 0;
    printf("Cac phan tu chan la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("Tong cac phan tu chan la: %d\n", sum);
    return n;
}
int min_max(int arr[], int n) {
    if (n == 0) return n;
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Gia tri lon nhat la: %d\n", max);
    printf("Gia tri nho nhat la: %d\n", min);
    return n;
}
int primeNumber(int arr[], int n) {
    int sum = 0;
    printf("Cac so nguyen to la: ");
    for (int i = 0; i < n; i++) {
        if (check(arr[i])) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("Tong cac so nguyen to la: %d\n", sum);
    return n;
}
int appear(int arr[], int n) {
    int x, count = 0;
    printf("Nhap so can thong ke: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("So %d xuat hien %d lan trong mang.\n", x, count);
    return n;
}
int add(int arr[], int n) {
    int x, pos;
    printf("Nhap phan tu can them: ");
    scanf("%d", &x);
    printf("Nhap vi tri can chen (0-%d): ", n);
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("Khong hop li.\n");
        return n;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    return n + 1;
}

int main() {
    int arr[MAX];
    int n = 0;
    int choice;
    do {
        printf("MENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan li\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong \n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                n = mang(arr); 
                break;
            case 2:
                n = display(arr, n); 
                break;
            case 3:
                n = evens_number(arr, n); 
                break;
            case 4:
                n = min_max(arr, n);
                break;
            case 5:
                n = primeNumber(arr, n); 
                break;
            case 6:
                n = appear(arr, n); 
                break;
            case 7:
                n = add(arr, n); 
                break;
            case 8:
                printf("Thoat.\n");
                break;
            default:
                printf("Hay nhap lai.\n");
        }
    } while (choice != 8);

    return 0;

