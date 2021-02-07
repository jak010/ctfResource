#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_authentication(char * password) {
    int auth_flag = 0;
// buffer position is below
    char password_buffer[16];

    strcpy(password_buffer, password);
    
    if(strcmp(password_buffer,"briling") == 0) auth_flag=1;
    if(strcmp(password_buffer,"outgrabe") == 0) auth_flag=1;

    return auth_flag;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage : %s <password>\n" ,argv[0]);
    }

    if(check_authentication(argv[1])) {
        printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\n        Access Allow              \n");
        printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    } else {
        printf("\n Access Denined \n");
    }

}
