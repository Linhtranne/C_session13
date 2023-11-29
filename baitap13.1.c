#include <stdio.h>
#include <string.h>
void reverse(char* str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    int choice;

    do {
        printf("MENU\n");
        printf("1. Nhap vao chuoi ki tu \n");
        printf("2. In ra do dai chuoi va noi dung chuoi can nhap \n");
        printf("3. In ra chuoi dao nguoc\n");
        printf("4. In ra so luong chu cai trong chuoi\n");
        printf("5. In ra so luong chu so trong chuoi \n");
        printf("6. In ra so luong ki thuat dac biet trong chuoi\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap vao chuoi: ");
                scanf(" %[^\n]", str);
                break;
            case 2:
                printf("Do dai chuoi %c, noi dung chuoi: %s\n", strlen(str), str);
                break;
            case 3:
                printf("Chuoi dao nguoc: ");
                reverse(str);
                break;
            case 4: {
                int count = 0;
                for (int i = 0; i < strlen(str); i++) {
                    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) count++;
                }
                printf("So luong chu cai : %d\n", count);
                break;
            }
            case 5: {
                int count = 0;
                for (int i = 0; i < strlen(str); i++) {
                    if (str[i] >= '0' && str[i] <= '9') count++;
                }
                printf("So luong chu so : %d\n", count);
                break;
            }
            case 6: {
                    int count = 0;
                for (int i = 0; i < strlen(str); i++) {
                    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == ' ')) count++;
                }
                printf("So luong ki tu dac biet : %d\n", count);
                break;
            }
            case 7:
                printf("Thoat\n");
                break;
            default:
                printf("Chon sai roi .\n");
        }
    } while (choice != 7);

    return 0;
}