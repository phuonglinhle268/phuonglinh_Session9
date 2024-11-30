#include <stdio.h>
#define MAX 100

int mang(int ar[]) {
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	printf("Nhap cac phan tu: ");
	for (int i = 0; i < n; i++) {
		printf("Phan tu %d: ", i + 1);
		scanf("%d", &arr[i]);
	} 
	return n; 
} 
int display(int arr[], int n) {
	if (n == 0) {
		printf("Mang rong.\n");
		return n;
	}
	printf("Mang hien tai: ");
	for (int i = 0; i < n; i++) {
		printf("&d", arr[i]);
	}
	printf("\n");
	return n;
} 
int add(int arr[], int n) {
	if ( n < MAX) {
		printf("Nhap phan tu can them: ");
		scanf("%d", &arr[n]);
		return n + 1;
	} else {
		printf("Mang da day.\n");
		return n;
	}
}
int correct(int arr[], int n) {
	int number, new;
	print("Nhap gia tri phan tu can sua: ");
	scanf("%d", &number);
	if (number >= 0 && number < n) {
		printf("Nhap gia tri moi cho phan tu tai chi so %d: ", number);
		scanf("%d", &new);
		arr[number] = new;
		printf("Da sua pha tu tai chi so %d.\n", number);
	} else {
		printf("Chi so khong hop le \n");
	}
	return n;
}
int delete(int arr[], int n) {
	int number;
	printf("Nhap gia tri phan tu can xoa: ");
	scanf("%d", &number);
	if (number >= 0 && number < n) {
		for (int i = number; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		return n - 1;
	} else {
		printf("Chi so khong hop le \n");
		return n;
	}
}
int main() {
	int arr[MAX];
	int n = 0;
	int choice;
	do {
		printf("MENU\n");
		printf("1. Nhap vao mang\n");
		printf("2. Hien thi mang\n");
		printf("3. Them phan tu\n");
		printf("4. Sua phan tu\n");
		printf("5. Xoa phan tu\n");
		printf("6. Xoa\n");
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
				n = add(arr, n);
				break;
			case 4:
				n = correct(arr, n);
				break;
			case 5:
				n = delete(arr, n);
				break;
			case 6:
				printf("Thoat chuong trinh.\n");
				break;
			default:
				printf("Khong hop le. Chon lai.\n");
		}
	} while (choice != 6);
	
	return 0;
}
