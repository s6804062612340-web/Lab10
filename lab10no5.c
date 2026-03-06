#include<stdio.h>
#include<string.h>

typedef struct {
	char loginname[64];
	char password[64];
} account ;

typedef struct {
	char stdID[16];
	char nameSurname[25];
	account stdACC;
} hoststd;



int main(){
    account ac;
    char user[64] ,pass[64];
    int found=0;
    hoststd cs[5] = {
                    {"66-040626-2686-9","MR.A",{"user1", "passwd1"}},
                    {"66-040626-2686-1","MR.B",{"user2", "passwd2"}},
                    {"66-040626-2686-2","MR.C",{"user3", "passwd3"}},
                    {"66-040626-2686-3","MR.D",{"user4", "passwd4"}},
                    {"66-040626-2686-4","MR.E",{"user5", "passwd5"}}
                    };

    printf("Enter username : ");
    scanf(" %[^\n]",user);
    printf("Enter Pasword : ");
    scanf(" %[^\n]",pass);

    for(int i=0;i<5;i++){
        if((strcmp(cs[i].stdACC.loginname,user)==0) && (strcmp(cs[i].stdACC.password,pass)==0)){
            printf("Welcome\n");
            found=1;
            break;
        }
    } 
    if(!found){
        printf("\nIncorrect login or password\n");
    };

    return 0;
}

