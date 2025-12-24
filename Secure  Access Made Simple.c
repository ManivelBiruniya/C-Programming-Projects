#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main() {
    char username[20], password[20];
    char loginUser[20], loginPass[20];


    printf("SECURE ACCESS MADE SIMPLE \n");

    printf("**Registration**\n ");
    printf(" Enter Your Username   : ");
    scanf("%s", &username);
    printf("  Enter Your Password   : ");
    scanf("%s", &password);

    printf("\n **Login**\n ");
    printf("Username   : ");
    scanf("%s", &loginUser);
    printf(" Password   : ");
    scanf("%s", &loginPass);



    if (strcmp(username, loginUser) == 0 && strcmp(password, loginPass) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Invalid username or password.\n");
    }

    return 0;
}
