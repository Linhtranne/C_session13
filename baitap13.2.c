#include<stdio.h>
#include<string.h>
void reverse(char*str){
	int len = strlen(str);
	for (int i = len - 1 ; 1>=0 ; i--){
		printf("%c",str[i]);
	}
	printf("\n");
}
int main(){
	char str[100], c,  new_c ;
	int choice, i, count ;
	
	do {
		printf("MENU\n");
		printf("1. Nhap vao chuoi ki tu\n");
		printf("2. In ra noi dung chuoi \n");
		printf("3. Nhap vao 1 ki tu, dem so lan xuat hien ky tu trong chuoi \n");
		printf("4. Nhap vao 2 ki tu, thay the cac ki tu thu 2 trong chuoi bang ki tu thu nhat \n");
		printf("5. Nhap vao 1 ki tu, xoa bo cac ki tu trong chuoi \n");
		printf("6. Thoat \n");

		printf("Nhap lua chon cua ban ");
		scanf("%d" ,&choice);
		switch(choice){
			case 1:
                printf("Nhap chuoi ki tu: ");
                scanf("%s", str);
                break;
            case 2:
                printf("Chuoi : %s\n", str);
                break;
            case 3:
                printf("Nhap ki tu: ");
                scanf(" %c", &c);
                count = 0;
                for (i = 0; i < strlen(str); i++) {
                    if (str[i] == c) {
                        count++;
                    }
                }
                printf("So lan xuat hien cua '%c' trong chuoi: %d\n", c, count);
                break;
            case 4:
                printf("Nhap ki tu thu nhat : ");
                scanf(" %c", &c);
                printf("Nhap ki tu thu hai: ");
                scanf(" %c", &new_c);
                for (i = 0; i < strlen(str); i++) {
                    if (str[i] == new_c) {
                        str[i] = c;
                    }
                }
                printf("Chuoi sau khi thay the : %s\n", str);
                break;
            case 5:
                printf("Nhap ki tu : ");
                scanf(" %c", &c);
                for (i = 0; i < strlen(str); ) {
                    if (str[i] == c) {
                        memmove(&str[i], &str[i + 1], strlen(str) - i);
                    } else {
                        i++;
                    }
                }
                printf("Chuoi sau khi xoa: %s\n", str);
                break;
            case 6:
                printf("Thoat\n");
                break;
            default:
                printf("Lua chon khong hop le !\n");
        }
    } while (choice != 6);

    return 0;
}