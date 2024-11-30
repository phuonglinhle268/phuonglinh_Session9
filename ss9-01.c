#include <stdio.h>

int main() {
    int arr[100];
    int n = 100;
	int value, position; 
    printf("Nhap luonbg phan tu trong mang voi toi da la 100): ");
    scanf("%d", &n);
    if (n > 100) {
        printf("So luong phan tu khong hop le. \n");
        return 1;
    }
    printf("Nhap cac phan tu cho mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (0 den %d): ", n);
    scanf("%d", &position);
    if (position < 0 || position > n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    n++;
    printf("Mang sau khi chen: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
