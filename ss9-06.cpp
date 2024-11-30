#include <stdio.h>
#define MAX 100

int main() {
    int arr[MAX][MAX]; 
    int a, b; 
    int choice;
    printf("Nhap so dong cua ma tran: ");
    scanf("%d", &a);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &b);
    do {
        printf("MENU\n");
        printf("1.Nhap kich thuoc va gia tri cac phan tu cua mang \n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Nhap cac phan tu:\n");
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("arr[%d][%d] = ", i + 1, j + 1);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            case 2: 
                printf("Ma tran hien tai:\n");
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                {
                    int sum = 0;
                    printf("Cac phan tu la so le: ");
                    for (int i = 0; i < m; i++) {
                        for (int j = 0; j < n; j++) {
                            if (arr[i][j] % 2 != 0) {
                                printf("%d ", arr[i][j]);
                                tong += arr[i][j];
                            }
                        }
                    }
                    printf("Tong cac phan tu la: %d\n", sum);
                }
                break;
            case 4:
                {
                    int multi = 1;
                    printf("Cac phan tu tren duong bien la: ");
                    for (int i = 0; i < m; i++) {
                        for (int j = 0; j < n; j++) {
                            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                                printf("%d ", arr[i][j]);
                                tich *= arr[i][j];
                            }
                        }
                    }
                    printf("Tich cac phan tu tren la: %d\n", multi);
                }
                break;
            case 5:
                printf("Cac phan tu tren duong cheo chinh la: ");
                for (int i = 0; i < m && i < n; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Cac phan tu tren duong cheo phu la: ");
                for (int i = 0; i < m && i < n; i++) {
                    printf("%d ", arr[i][n - 1 - i]);
                }
                printf("\n");
                break;
            case 7:
                {
                    int max = -1e6, number = -1;
                    for (int i = 0; i < a; i++) {
                        int sum = 0;
                        for (int j = 0; j < n; j++) {
                            tong += arr[i][j];
                        }
                        if (sum > max) {
                            max = sum;
                            number = i;
                        }
                    }
                    printf("Dong co tong gia tri la dong %d voi tong = %d\n", number + 1, max);
                }
                break;
            case 8:
                printf("Thoat.\n");
                break;
            default:
                printf("Lua chon lai.\n");
                break;
        }
    } while (choice != 8); 

    return 0;
}
