#include <stdio.h>
#include <string.h>

char username[15], password[15];

int page();
int login();
int mainmenu();
int title();

int page()
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("|                                      GANPAT UNIVERTSITY                                     |\n");
    printf("|                                  BRANCH - CYBER SECURITY(CS)                                |\n");
    printf("|                                          BATCH - 12                                         |\n");
    printf("|                                   ENROLLMENT NO. - CS14                                     |\n");
    printf("|                        PROJECT TITLE - PID 274 SmartDrone                                   |\n");
    printf("|                                        ESFP-I PROJECT                                       |\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

int title()
{
    printf("\n\n***********************************************************************************************");
    printf("\n                              S M A R T  D R O N E    ");
    printf("\n***********************************************************************************************");
}

int mainmenu()
{
    printf("-------------------------------------------Main Menu-------------------------------------------");
    printf("\n\n1. About Us\n");
    printf("\n2. Usage \n");
    printf("\n3. Design\n");
    printf("\n4. Contact\n");
    printf("\n5. Exit\n");
    int choice2;
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice2);
    printf("\n-----------------------------------------------------------------------------------------------");
    switch (choice2)
    {
    case 1:
        printf("\n\n----------------------------------------About Us-----------------------------------------------\n\n");
        char ch;
        FILE *fp;
        fp = fopen("About.txt", "r");
        while ((ch = getc(fp)) != EOF)
        {
            printf("%c", ch);
        }
        fclose(fp);
        printf("\n\n-----------------------------------------------------------------------------------------------\n\n");
        mainmenu();
        break;

    case 2:
        printf("\n\n----------------------------------------Usage-----------------------------------------------\n\n");
        char ch1;
        FILE *fp1;
        fp1 = fopen("usage.txt", "r");
        while ((ch1 = getc(fp1)) != EOF)
        {
            printf("%c", ch1);
        }
        fclose(fp1);
        printf("\n\n-----------------------------------------------------------------------------------------------\n\n");
        mainmenu();
        break;    
    
    case 3:
        printf("\n\n----------------------------------------Design-----------------------------------------------\n\n");
        char ch2;
        FILE *fp2;
        fp2 = fopen("design.txt", "r");
        while ((ch2 = getc(fp2)) != EOF)
        {
            printf("%c", ch2);
        }
        fclose(fp2);
        printf("\n\n-----------------------------------------------------------------------------------------------\n\n");
        mainmenu();
        break;

        
    case 4:
        printf("\n\nContact Us on: ");
        printf("\n\n24/7 Toll-free Number: 1234567890");
        printf("\n\nEmail: SmartDrone@gmail.com\n\n");
        mainmenu();
        break;

    
}
}
int login()
{
    printf("\n\n-----------------------------------------------------------------------------------------------");

    printf("\n\nEnter Username: ");
    scanf("%s", &username);

    printf("\nEnter Password: ");
    scanf("%s", &password);

    if (strcmp(username, "username") == 0 && strcmp(password, "password") == 0)
    {
        printf("\nLogin Successful....\n\n");
        printf("\n-----------------------------------------------------------------------------------------------\n\n");
        mainmenu();
    }
    else
    {
        printf("\nWrong username or password....\n\n");
        printf("\n-----------------------------------------------------------------------------------------------\n\n");
        login();
    }
}

int main()
{
    page();
    title();
    login();

    return 0;
}