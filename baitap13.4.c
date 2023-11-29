#include <stdio.h>
#include <string.h>

void longestDistinctSubstring(char* str) {
    int n = strlen(str);
    int res = 0; 
    char result[256]; 

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int count = 0;
        char temp[256] = "";

        for (int j = i; j < n; j++) {
            if (visited[str[j]] == 0) {
                visited[str[j]] = 1;
                temp[count] = str[j];
                count++;
            } else {
                break;
            }
        }

        if (count > res) {
            res = count;
            strcpy(result, temp);
        }
    }

    printf("Chuoi phan biet co do dai lon nhat la  %d : %s\n", res, result);
}

int main(){
    char str[] = "abccadbc";
    longestDistinctSubstring(str);
    return 0;
}