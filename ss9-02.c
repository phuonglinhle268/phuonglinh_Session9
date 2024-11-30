#include <stdio.h>

int main() {
    int arr[100]; 
    int n = 100;
	int position, new;
    printf("Nhap luong phan tu voi toi da 100 phan tu: ");
    scanf("%d", &n);
    if (n > 100) {
        printf("So luong phan tu khong hop le \n");
        return 1;
    }
    printf("Nhap cac phan tu cho mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap vi tri can sua (0 den %d): ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &new);
    arr[position] = new;
    
    printf("Mang sau khi sua: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
