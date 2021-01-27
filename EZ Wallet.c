#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define Enter 13
#define Tab 9
#define Delete 8
#define Space 32
#define Esc 27
//#define 0 0

struct login{
char username[100];
char number[100];
char mpin[50];
}u1;

void loadingUSB()
{

    //system("color 03");

    char a = 177, b = 219;

    gotoxy(50,12);
    printf("Fetching Data");


    gotoxy(40,14);
    for (int i = 0; i < 35; i++)
        printf("%c", a);


    printf("\r");

    gotoxy(40,14);
    for (int i = 0; i < 35; i++) {
        printf("%c", b);


        Sleep(50);
    }
}
void EZWindow()
{
    system("cls");
borderMain();

gotoxy(19,4);
    for (int i = 0; i<35; i++)
        {
            printf("\xB2");
            Sleep(20);
        }


    gotoxy(19,4);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,5);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,6);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,7);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,8);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,9);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,10);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,11);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,12);
    for (int i = 0; i<25; i++)
        {
            printf("\xB2");
            Sleep(20);
        }
    gotoxy(19,12);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,13);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,14);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,15);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,16);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,17);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,18);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,19);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,20);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,21);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,22);printf("\xb2\xb2");Sleep(20);
    gotoxy(19,23);printf("\xb2\xb2");Sleep(20);
        gotoxy(19,23);
    for (int i = 0; i<35; i++)
        {
            printf("\xB2");
            Sleep(20);
        }


        gotoxy(58,4);
    for (int i = 0; i<38; i++)
        {
            printf("\xB2");
            Sleep(20);
        }
    gotoxy(23,4);printf("\xb2\xb2");Sleep(20);
    gotoxy(94,5);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(92,6);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(90,7);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(88,8);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(86,9);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(84,10);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(82,11);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(80,12);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(78,13);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(76,14);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(74,15);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(72,16);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(70,17);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(68,18);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(66,19);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(64,20);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(62,21);printf("\xb2\xb2\xb2\xb2");Sleep(20);
    gotoxy(60,22);printf("\xb2\xb2\xb2\xb2");Sleep(20);

        gotoxy(58,23);
    for (int i = 0; i<38; i++)
        {
            printf("\xB2");
            Sleep(20);
        }
}
void usbScreen()    // use to print intput/warning
{
    system("cls");
            borderMain();
    gotoxy(51,8);
printf("BSCS 2E");
 gotoxy(32,9);
printf("Input your Admin Flashdrive to open this program!");
gotoxy(50,10);
getch();
loadingUSB();
system("cls");
borderMain();
}

void usbkey(){

FILE *point, *pointer, *pointer1, *pointer2;

char admin[] = "GROUPONEBSCS2E";
char pass[30];
usb0:


   usbScreen();
point = fopen("D://E-Wallet.db", "rb");
    if (point == NULL){
        usb:
        pointer = fopen ("E://E-Wallet.db", "rb");  /* variable change if your flash drive cannot change the directory letter*/


            if (pointer == NULL){
                usb1:
                pointer1 = fopen("F://E-Wallet.db", "rb");
                        if(pointer1 == NULL){
                            usb2:
                            pointer2 = fopen("G://E-Wallet.db", "rb");
                                if(pointer2 == NULL){
                                    gotoxy(14,12);
                                    printf("The encrypted file is not found! Please input the encrypted file in your flashdrive!");
                                    sleep(3);
                                    loadingBar();
                                goto usb0;
                            }
                            else{       //pointer2 else
                                fscanf(pointer2,"%s", pass);
                                if (strcmp(pass, admin)!=0){


                                    fclose(pointer2);
                                    goto usb0;
                                }
                            }
                    }
            else{       //pointer1 else
                fscanf(pointer1,"%s", pass);
                if (strcmp(pass, admin)!=0){

                    fclose(pointer1);
                    goto usb2;
                }
            }

        }
        else{      //pointer else
            fscanf(pointer,"%s", pass);
            if (strcmp(pass, admin)!=0){
                    fclose(pointer);
                goto usb1;
            }
        }
    }

else{   //point else
    fscanf(point,"%s", pass);
        if (strcmp(pass, admin)!=0){
                fclose(point);
            goto usb;
        }
    }
system("cls");
borderMain();
gotoxy(47,13);
printf("Program Decrypted.");
Sleep(500);
//getch();
system("cls");



}

void loadingBar()
{
    system("cls");
     char a = 177, b = 219;
    borderMain();
    gotoxy(53,12);
    printf("Loading");


    gotoxy(40,14);
    for (int i = 0; i < 35; i++)
        printf("%c", a);


    printf("\r");

    gotoxy(40,14);
    for (int i = 0; i < 35; i++) {
        printf("%c", b);


        Sleep(50);
    }
}


void processingBar()
{

system("cls");
     char a = 177, b = 219;
    borderMain();
    gotoxy(53,12);
    printf("Processing");


    gotoxy(40,14);
    for (int i = 0; i < 35; i++)
        printf("%c", a);


    printf("\r");

    gotoxy(40,14);
    for (int i = 0; i < 35; i++) {
        printf("%c", b);


        Sleep(50);
    }
}

COORD coord={0,0}; // global variable
                    //center of axis is set to the top left corner of the screen

void gotoxy(int x,int y)//funtion ng gotoxy
{
  	coord.X=x;
 	coord.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}



void borderMain()
{
    //upper border
    gotoxy(10,1);
    for (int i = 0; i<40; i++)
        {
            printf("\xB2");
        }

    printf("\xdb EZ WALLET \xdb");//middle of upper border

    for (int i = 0; i<39; i++)
        {
            printf("\xB2");
        }
//vertical border (left)
    gotoxy(10,2);printf("\xb2\xb2");
    gotoxy(10,3);printf("\xb2\xb2");
    gotoxy(10,4);printf("\xb2\xb2");
    gotoxy(10,5);printf("\xb2\xb2");
    gotoxy(10,6);printf("\xb2\xb2");
    gotoxy(10,7);printf("\xb2\xb2");
    gotoxy(10,8);printf("\xb2\xb2");
    gotoxy(10,9);printf("\xb2\xb2");
    gotoxy(10,10);printf("\xb2\xb2");
    gotoxy(10,11);printf("\xb2\xb2");
    gotoxy(10,12);printf("\xb2\xb2");
    gotoxy(10,13);printf("\xb2\xb2");
    gotoxy(10,14);printf("\xb2\xb2");
    gotoxy(10,15);printf("\xb2\xb2");
    gotoxy(10,16);printf("\xb2\xb2");
    gotoxy(10,17);printf("\xb2\xb2");
    gotoxy(10,18);printf("\xb2\xb2");
    gotoxy(10,19);printf("\xb2\xb2");
    gotoxy(10,20);printf("\xb2\xb2");
    gotoxy(10,21);printf("\xb2\xb2");
    gotoxy(10,22);printf("\xb2\xb2");
    gotoxy(10,23);printf("\xb2\xb2");
    gotoxy(10,24);printf("\xb2\xb2");
    gotoxy(10,25);printf("\xb2\xb2");
//vertical border (right)
    gotoxy(100,2);printf("\xb2\xb2");
    gotoxy(100,3);printf("\xb2\xb2");
    gotoxy(100,4);printf("\xb2\xb2");
    gotoxy(100,5);printf("\xb2\xb2");
    gotoxy(100,6);printf("\xb2\xb2");
    gotoxy(100,7);printf("\xb2\xb2");
    gotoxy(100,8);printf("\xb2\xb2");
    gotoxy(100,9);printf("\xb2\xb2");
    gotoxy(100,10);printf("\xb2\xb2");
    gotoxy(100,11);printf("\xb2\xb2");
    gotoxy(100,12);printf("\xb2\xb2");
    gotoxy(100,13);printf("\xb2\xb2");
    gotoxy(100,14);printf("\xb2\xb2");
    gotoxy(100,15);printf("\xb2\xb2");
    gotoxy(100,16);printf("\xb2\xb2");
    gotoxy(100,17);printf("\xb2\xb2");
    gotoxy(100,18);printf("\xb2\xb2");
    gotoxy(100,19);printf("\xb2\xb2");
    gotoxy(100,20);printf("\xb2\xb2");
    gotoxy(100,21);printf("\xb2\xb2");
    gotoxy(100,22);printf("\xb2\xb2");
    gotoxy(100,23);printf("\xb2\xb2");
    gotoxy(100,24);printf("\xb2\xb2");
    gotoxy(100,25);printf("\xb2\xb2");
//bottom border
    gotoxy(10,26);
    for (int i = 0; i<92; i++)
        {
            printf("\xB2");
        }
}
void choiceBox1()
{
   //choice box 1
    gotoxy(36,10);                   // upper border
    for (int i = 0; i<13; i++)
        {
            printf("\xb2");
        }
    gotoxy(48,11);printf("\xb2");    // right border
    gotoxy(36,11);printf("\xb2");    // left border

    gotoxy(36,12);                   // bottom border
    for (int i = 0; i<13; i++)
        {
            printf("\xb2");
        }
}
void choiceBox2()
{
    //choice box 2

gotoxy(63,10);
    for (int i = 0; i<12; i++)
        {
            printf("\xb2");
        }
    gotoxy(74,11);printf("\xb2");
    gotoxy(63,11);printf("\xb2");

    gotoxy(63,12);
    for (int i = 0; i<12; i++)
        {
            printf("\xb2");
        }

}
void cI1()                          //Cash in highlight
{

    gotoxy(33,10);                   // upper border
    for (int i = 0; i<13; i++)
        {
            printf("\xdb");
        }
    gotoxy(33,11);printf("\xdb");    // right border
    gotoxy(45,11);printf("\xdb");    // left border

    gotoxy(33,12);                   // bottom border
    for (int i = 0; i<13; i++)
        {
            printf("\xdb");
        }
        Sleep(700);
}
void sM2() // send money highlight
{


gotoxy(33,12);
    for (int i = 0; i<16; i++)
        {
            printf("\xdb");
        }
    gotoxy(33,13);printf("\xdb");
    gotoxy(48,13);printf("\xdb");

    gotoxy(33,14);
    for (int i = 0; i<16; i++)
        {
            printf("\xdb");
        }
            Sleep(700);
}

void pB3()                          //Pay Bill highlight
{

    gotoxy(33,14);                   // upper border
    for (int i = 0; i<15; i++)
        {
            printf("\xdb");
        }
    gotoxy(33,15);printf("\xdb");    // right border
    gotoxy(47,15);printf("\xdb");    // left border

    gotoxy(33,16);                   // bottom border
    for (int i = 0; i<15; i++)
        {
            printf("\xdb");
        }
        Sleep(700);
}
void bL4()              // Buy a load highlight
{


gotoxy(63,10);
    for (int i = 0; i<16; i++)
        {
            printf("\xdb");
        }
    gotoxy(63,11);printf("\xdb");
    gotoxy(78,11);printf("\xdb");

    gotoxy(63,12);
    for (int i = 0; i<16; i++)
        {
            printf("\xdb");
        }
            Sleep(700);
}

void Lo5()                          //log out highlight
{

    gotoxy(63,12);                   // upper border
    for (int i = 0; i<12; i++)
        {
            printf("\xdb");
        }
    gotoxy(63,13);printf("\xdb");    // right border
    gotoxy(74,13);printf("\xdb");    // left border

    gotoxy(63,14);                   // bottom border
    for (int i = 0; i<12; i++)
        {
            printf("\xdb");
        }
        Sleep(700);
}
void ext6() // exit highlight
{


gotoxy(63,14);
    for (int i = 0; i<10; i++)
        {
            printf("\xdb");
        }
    gotoxy(63,15);printf("\xdb");
    gotoxy(72,15);printf("\xdb");

    gotoxy(63,16);
    for (int i = 0; i<10; i++)
        {
            printf("\xdb");
        }
            Sleep(700);
}

void extTagLine()
{
            system("cls");
            borderMain();
                gotoxy(20,8);

                    printf("Thank you for using Ez wallet and I hope to see you again making EZ MONEY.");
                    gotoxy(53,13);
                    printf("BSCS 2E");
                    gotoxy(45,15);
                    printf("Reyes, Aaron Christian D.");
                    gotoxy(47,16);
                    printf("Casino, Wilfredo Jr.");
                    gotoxy(46,17);
                    printf("Gahoy, Jervin Gabriel");
                    gotoxy(48,18);
                    printf("Alejo, John Ryan");
                    gotoxy(47,19);
                    printf("Fidelino, Kristina");
                    gotoxy(48,20);
                    printf("Dalangin, Jerecho");
                    gotoxy(48,21);
                    printf("Ravela, Rubylynn");
                    gotoxy(50,22);
                    printf("Alon, Jasmin");
                    getch();
            loadingBar();

}

/*********************** Main ****************/
int main(){
    system("color FC");
        //usbkey();
      //EZWindow();
    FILE *file, *fp;


    int cpnum[100], suoli, nmbr, number[100], i=0, mp, pin ;
    char yon;
    char pw;
    char userlogin[50];
    char pass[100];     //Passoword
    char ext[5]=".db";
    //char dpath[100]="D:\\Documents\\School\\DATA STRUCTURES AND ALGORITHM\\E- Wallet Project\\Code\\User Info\\";
    char user[100]="";
    char user2[100]="";
    char users[100]="";
     signuporlogin:

        system("cls");
        borderMain();
            gotoxy(36,8);
                printf("Choose if you want to Sign Up or Log In");

            gotoxy(38,11);
                printf("1.Sign Up");
            gotoxy(65,11);
                printf("2.Log In");
            gotoxy(39,14);
                printf("Enter the number you want to pick: ");
                scanf("%d", &suoli);

    switch(suoli)
    {
case 1:
    choiceBox1(); /* means the user chose sign up*/
        gotoxy(24,17);
        printf("Do you want to continue to sign-up? [Enter for yes or any key for no] ");
        yon=getch();

    system("cls");

        switch(yon)
                {
                    case Enter:
                        break;
                    default:
                        system("cls");
                        goto signuporlogin;
                }


        UN:
    borderMain();
    gotoxy(25,4);
    printf("\xdb NOTE: You cannot change your username once you inputed it! \xdb");
    gotoxy(24,5);
    printf("\xdb Do you want to return? [esc for yes and any key to continue] \xdb");

        if(getch() != Esc){
               system("cls");
               borderMain();
                 gotoxy(25,4);
                printf("\xdb NOTE: You cannot change your username once you inputed it! \xdb\n");
        }
        else{
             system("cls");
            goto signuporlogin;
        }

        gotoxy(37,8);
        printf("> Username:");
        scanf("%s", u1.username);

        strcpy(user2, u1.username);

        file = fopen("Users.db", "r");
        //printf("\nUser2: %s\nu1.username: %s\n", user2, u1.username);

         while( fread(&u1, sizeof(struct login), 1, file) == 1 ){
                    if (strcmp(user2, u1.username)==0){
                    system("cls");
                    borderMain();
                    gotoxy(25,13);
                    printf("\xb2 The username already exists. Please use a different username. \xb2");
                    goto UN;
               }
         }
        fclose(file);

        strcpy(u1.username, user2);

        //printf("\n\nu1.username: %s\n", u1.username);

        strcat(user, u1.username);
        strcat(user, ext);

 /*. . . . . . . . . .new screen from here . . . . . */
    borderMain();
    gotoxy(25,4);
    printf("        \xdb NOTE:PLEASE ENTER 11 DIGIT NUMBER ONLY! \xdb           ");
    gotoxy(33,5);
    printf("\xdb   THIS CANNOT BE CHANGED AFTER INPUT!   \xdb");
    gotoxy(37,8);
    printf("  Username:"); printf("%s",u1.username);
/*. . . . . . . . .to here. . . . . . . . . . . */

        file = fopen("Users.db", "ab");

        gotoxy(37,10);
        printf("> Phone Number: ");

        nums2:

        for(i=0;i<11;i)
        {
            nmbr=getch();

            if(nmbr==Enter){
                u1.number[i]=0;
                system ("cls");
                borderMain();
                    gotoxy(43,4);
                        printf("\xdb INVALID PHONE NUMBER! \xdb");
                    gotoxy(43,5);
                        printf("\xdb   Please try again.   \xdb");
                    gotoxy(37,8);
                        printf("  Username:"); printf("%s",u1.username);
                    gotoxy(37,10);
                        printf("> Phone Number: ");

                for(i=0;i>i;i++){
                    u1.number[i]=0;
                }

                goto nums2;
            }
            else if(nmbr==Delete)
            {
                u1.number[i-1]=0;

                if(i>0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else if(nmbr>='a'&& nmbr <='z' || nmbr >='A' && nmbr <= 'Z'){
                                u1.number[i]=0;
                                 system ("cls");
                borderMain();
                    gotoxy(43,4);
                        printf("\xdb INVALID PHONE NUMBER! \xdb");
                    gotoxy(43,5);
                        printf("\xdb   Please try again.   \xdb");
                    gotoxy(37,8);
                        printf("  Username:"); printf("%s",u1.username);
                    gotoxy(37,10);
                        printf("> Phone Number: ");


                for(i=0;i>i;i++){
                    u1.number[i]=0;
                }

                goto nums2;

            }
            else
            {
                u1.number[i]=nmbr;
                printf("%d",u1.number[i]-48);

                i++;
            }
        }

        //fopen(user, "a");
        //fprintf(file, "%s", u1.number);


        //fprintf(file, "\t\t");
/*. . . . . . . . . .new screen from here . . . . . */
    system("cls");
    borderMain();
    gotoxy(33,5);
    printf("\xdb YOU CAN'T CHANGE IT AFTER YOU INPUT IT! \xdb");
    gotoxy(37,8);
    printf("  Username:"); printf("%s",u1.username);
    gotoxy(37,10);
    printf("  Phone Number: ");printf("%s",u1.number);
/*. . . . . . . . .to here. . . . . . . . . . . */

        gotoxy(33,4);
        printf("\xdb  NOTE: PLEASE ENTER 4 DIGIT MPIN ONLY!  \xdb");
        gotoxy(37,12);
        printf("> 4-digit MPIN:");


        mpin:

        for(i=0;i<4;i)
            {
                mp=getch();

                if(mp==Enter)
                    {
                    u1.mpin[i]= 0 ;
system("cls");
    borderMain();
    gotoxy(33,4);
        printf("\xdb          Warning: INVALID MPIN!         \xdb");
    gotoxy(37,8);
        printf("  Username:"); printf("%s",u1.username);
    gotoxy(37,10);
        printf("  Phone Number: ");printf("%s",u1.number);
    gotoxy(33,5);
        printf("\xdb  NOTE: PLEASE ENTER 4 DIGIT MPIN ONLY!  \xdb");
    gotoxy(37,12);
        printf("> 4-digit MPIN:");

                    for(i=0;i>i;i++){
                        u1.mpin[i]=0;
                    }
                    goto mpin;
                    }
                else if(mp==Delete)
                    {
                        if(i>0)
                        {
                            i--;
                            printf("\b \b");
                        }
                    }
                else if(mp>='a'&& mp <='z' || mp >='A' && mp <= 'Z'){
                                u1.mpin[i]=0;
                                system("cls");
    borderMain();
    gotoxy(33,4);
        printf("\xdb          Warning: INVALID MPIN!         \xdb");
    gotoxy(37,8);
        printf("  Username:"); printf("%s",u1.username);
    gotoxy(37,10);
        printf("  Phone Number: ");printf("%s",u1.number);
    gotoxy(33,5);
        printf("\xdb  NOTE: PLEASE ENTER 4 DIGIT MPIN ONLY!  \xdb");
    gotoxy(37,12);
        printf("> 4-Digit MPIN:");


                for(i=0;i>i;i++){
                    u1.mpin[i]=0;
                }

                goto mpin;

            }
                else if(mp==Tab||mp==Space)
                    {
                        continue;
                    }
                else
                    {
                        u1.mpin[i]=mp;
                        printf("*");

                        i++;
                    }
            }

            //fprintf(file, "%s\n", u1.mpin);

            for (i=0;i<100;i++){
                user[i] = 0;
            }
         system("cls");
        borderMain();
        gotoxy(45,4);
        printf("\xdb USER INFORMATION \xdb");
        gotoxy(38,10);
        printf("Username: %s",user2);
        gotoxy(38,12);
        printf("Number: %s",u1.number);
        gotoxy(38,14);
        printf("MPIN: %s",u1.mpin);
        gotoxy(40,17);
        Sleep(500);
        printf("> Press any key when its done. <");
        getch();


        system("cls");
        borderMain();
        processingBar();
system("cls");
borderMain();
    gotoxy(45,12);
        printf("Registered Successfully!");

        fwrite(&u1, sizeof(struct login),1, file);

        fclose(file);

        /*
        printf("\n\nDo you want to clear the screen? [y for yes and any key for no] ");
        scanf("%s", &yon);

        if (yon == 'y' || yon == 'Y'){
        system("cls");
        }
*/
        getch();
        borderMain();
        loadingBar();
        system("cls");
        goto signuporlogin;


    case 2: //login
        choiceBox2();

        gotoxy(24,17);
        printf("Do you want to continue to log-in? [Enter for yes or any key for no] ");
        yon=getch();

    system("cls");

        switch(yon)
                {
                    case Enter:
                        break;
                    default:
                        system("cls");
                        goto signuporlogin;
                }


            file = fopen("Users.db", "ab");



            un:

            file = fopen("Users.db", "rb");
        gotoxy(40,13);
        printf("                                                ");   // for the loop
        borderMain();
        gotoxy(37,5);
        printf("        \xdb Please enter username \xdb          ");
        gotoxy(24,6);
        printf("\xdb Do you want to return? [esc for yes and any key to continue] \xdb");

        if(getch() != Esc){
               system("cls");
               borderMain();
                         gotoxy(37,5);
        printf("        \xdb Please enter username \xdb          ");
            }
        else{
             system("cls");
            goto signuporlogin;
        }

        gotoxy(38,10);
            printf("> Username: ");
            scanf("%s", userlogin);



        gotoxy(37,5);
        printf("\xdb Never share your MPIN with anyone! \xdb");
                gotoxy(38,10);
            printf("  Username: %s", userlogin);

                gotoxy(38,12);
            printf("> 4-Digit MPIN: ");


            password:                                                                             //Password Label

            for(i=0;i<=3;i)
                {                                                                                 //While loop
                pw =getch();                                                                       //'pw' = getcharacter

                if(pw==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    system("cls");
                    borderMain();
                        gotoxy(42,13);
                            printf("Please enter a 4-digit MPIN only") ;                             //'pass[i]' array will become 0
                                Sleep(700);
                    break;                                                                        //Exit the loop
                }

                else if(pw==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }
                else if(pw>='a'&& pw <='z' || pw >='A' && pw <= 'Z'){

                        pass[i]=0;
                        system("cls");
                        borderMain();
                        gotoxy(50,10);
                            printf("INVALID MPIN!");
                        gotoxy(40,13);
                            printf("Please input your MPIN number only.");
                                Sleep(700);
                        for(i=0;i>i;i++){
                            pass[i]=0;
                        }

                        goto password;
                }

                else if(pw==Tab||pw==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    pass[i] = pw;                                                                   //'pass[i]' array will store the character
                    printf("*");

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }

       while( fread(&u1, sizeof(struct login), 1, file) == 1 ){
/*
            printf("\n\nUsername: %s", u1.username);
            printf("\nNumber: %s ", u1.number);
            printf("\nMPIN: %s \n", u1.mpin);
*/
            if (strcmp(userlogin, u1.username)==0 && strcmp(pass, u1.mpin)==0)
                    goto enter;


            }
                    system("cls");
                    borderMain();
                    gotoxy(40,13);
                    printf("Please input valid username and mpin!");
                    Sleep(1000);


                    goto un;


         enter:
            printf("\n\nusername: %s\nmpin: %s\ninputed mpin: %s", u1.username, u1.mpin, pass);
            loadingBar();

        break;

//fclose(file);
        default:
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto signuporlogin;
    }



FILE *fpointer, *fpointer2;

struct login;

fpointer = fopen("E-WALLET Log.txt", "w");


fprintf(fpointer,"ACTIVITY LOG\n");

char activitylog[25];
char transactions[100];
char accountname[100];
char accountnumber[100];
char an;


int choice, balance=0, cob, amount, onlinebank, cpnumber[11], bills, load,  num, send;


        strcat(users, userlogin);
        strcat(users, ext);



Menu:

    fpointer2 = fopen (users, "r");
    fscanf(fpointer2, "%d", &balance);


system("cls");
borderMain();

//printf("\n%d\n", balance);
//printf("\n%s", users);
gotoxy(45,4);
printf("BALANCE: %d Pesos", balance);
gotoxy(50,6);
for (int i = 0; i<12; i++)
        {
            printf("\xb2");
        }
gotoxy(50,7);
printf("\xb2\xb2  Menu  \xb2\xb2");
gotoxy(50,8);
for (int i = 0; i<12; i++)
        {
            printf("\xb2");
        }

gotoxy(35,11);
printf("1.Cash In ");
gotoxy(35,13);
printf("2.Send Money");
gotoxy(35,15);
printf("3.Pay Bills");
gotoxy(65,11);
printf("4.Buy a Load");
gotoxy(65,13);
printf("5.Logout");
gotoxy(65,15);
printf("6.Exit");
gotoxy(35,18);
printf("Enter the number you want to pick:");


Menu2:
scanf("%d", &choice);

switch(choice)
{
    case 1: //CASH IN
    cI1();
        //fopen("E-WALLET Log.txt", "a");

        fprintf(fpointer,"\nYou Pick Cash In");

        COB:
        system("cls");
            borderMain();

        gotoxy(45,5);
            printf("(SELECT CASH IN METHOD):");
        gotoxy(45,8);
            printf("1.Over the Counter");
        gotoxy(45,10);
            printf("2.Online Banks");
        gotoxy(45,12);
            printf("3.Back");
        gotoxy(40,15);
            printf("Enter the number you want to pick:");

        scanf("%d",&cob);

        switch(cob)
        {
            case 1:

                fopen("E-WALLET Log.txt", "a");

                fprintf(fpointer,"\nPick Over the counter");

				system("cls");
            borderMain();
				gotoxy(25,3);
                    printf("Over the Counter (You can go to any branch of these official partners):");
                gotoxy(47,5);
                    printf("\xb2 MACHINE CASH IN \xb2");
                gotoxy(35,7);
                    printf(" TouchPay");
                gotoxy(35,8);
                    printf(" Pay&Go");
                gotoxy(35,9);
                    printf(" Shell Select");
                gotoxy(35,10);
                    printf(" Mercury Drug");
                gotoxy(33,13);
                    printf(">");
                gotoxy(35,13);
                    printf("SUPERMARKET");
                gotoxy(35,15);
                    printf(" Puregold");
                gotoxy(35,16);
                    printf(" Savemore");
                gotoxy(35,17);
                    printf(" SM Hypermarket");
                gotoxy(35,18);
                    printf(" All Day Supermarket");
                gotoxy(35,19);
                    printf(" Easy Day Shop");
            /*******************************/
                gotoxy(63,7);
                    printf(">");
                gotoxy(65,7);
                    printf("PAWNSHOP");
                gotoxy(65,9);
                    printf(" Villarica");
                gotoxy(65,10);
                    printf(" Palawan");
                gotoxy(65,11);
                    printf(" Tambunting");
                gotoxy(65,12);
                    printf(" RD Pawnshop");
                gotoxy(63,15);
                    printf(">");
                gotoxy(65,15);
                    printf("CONVENIENCE STORE");
                gotoxy(65,17);
                    printf(" 7-Eleven");
                gotoxy(65,18);
                    printf(" Ministop");
                gotoxy(65,19);
                    printf(" Lawson");
                gotoxy(25,22);
                    printf("Do you want to return to the menu? [Enter for yes or any key for no]");

                yon=getch();
                loadingBar();
                switch(yon)
                {
                    case Enter:
                        goto Menu;
                        break;
                    default:
                       extTagLine();
                        break;
                }
                break;

            case 2:

                fopen("E-WALLET Log.txt", "a");

                fprintf(fpointer,"\nYou Pick Online Banking");

                system("cls");
				borderMain();
				gotoxy(51,3);
                printf("Online Bank");
                gotoxy(15,5);
                printf("Hassle free online transaction available at anytime:(NOTE:*DATA CHARGES MAY APPLY.)");
                gotoxy(48,7);
                printf("PREFFERED BANKS");
                gotoxy(48,8);
                printf("1.BPI");
                gotoxy(48,9);
                printf("2.UnionBank");
                gotoxy(48,10);
                printf("3.BDO");
                gotoxy(48,12);
                printf("OTHER BANKS");
                gotoxy(48,13);
                printf("4.LandBank");
                gotoxy(48,14);
                printf("5.MetroBank");
                gotoxy(48,15);
                printf("6.PNB");
                gotoxy(48,16);
                printf("7.PSBank");
                gotoxy(48,17);
                printf("8.Security Bank");
                gotoxy(48,18);
                printf("9.Back");
                gotoxy(35,20);
                printf("Enter the number of your refered online bank:");


                OB:

                scanf("%d", &onlinebank);

                switch(onlinebank){

            case 1: //BPI
			 system("cls");
				borderMain();
				gotoxy(40,6);
                printf("\xb2 Bank of the Philippine Islands \xb2");
                gotoxy(31,10);
                printf("Please input your Account Name:");
                scanf("%s", accountname);

                OB1:
                gotoxy(20,12);
                printf("Please input your 10-Digit Account Number:");

                for(i=0;i<=9;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(20,14);
                    borderMain();
                    printf("Please enter your 12-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    Sleep(700);                          //'pass[i]' array will become 0
                    system("cls");
                    goto OB1;
                    break;                                                                        //Exit the loop
                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                         gotoxy(43,15);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
    gotoxy(43,16);printf("\xdb");
    gotoxy(70,16);printf("\xdb");

    gotoxy(43,17);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
                        gotoxy(45,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto OB1;

                }


                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                    printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;


            case 2: //UnionBank

				system("cls");
				borderMain();
				gotoxy(50,6);
                printf("\xb2 UnionBank \xb2");;
                gotoxy(31,10);
                printf("Please input your Account Name:");
                scanf("%s", accountname);

                OB2:
                gotoxy(20,12);
                printf("Please input your 12-Digit Account Number:");

                for(i=0;i<=11;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(20,14);
                    borderMain();
                    printf("Please enter your 12-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    Sleep(700);                            //'pass[i]' array will become 0
                    system("cls");
                    goto OB2;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
 gotoxy(43,15);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
    gotoxy(43,16);printf("\xdb");
    gotoxy(70,16);printf("\xdb");

    gotoxy(43,17);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
                        gotoxy(45,16);
                printf("INVALID ACCOUNT NUMBER!! ");
                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto OB2;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                    printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;


            case 3: //BDO
				system("cls");
				borderMain();
				gotoxy(48,6);
                printf("\xb2 Banco de Oro \xb2");
                gotoxy(31,10);
                printf("Please input your Account Name:");
                scanf("%s", accountname);

                OB3:
                gotoxy(20,12);
                printf("Please input your 12-Digit Account Number:");

                for(i=0;i<=11;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(20,14);
                    borderMain();
                    printf("Please enter your 12-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    Sleep(700);
                    system("cls");
                    goto OB3;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
 gotoxy(43,15);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
    gotoxy(43,16);printf("\xdb");
    gotoxy(70,16);printf("\xdb");

    gotoxy(43,17);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
                        gotoxy(45,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto OB3;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;


            case 4: //LandBank
				system("cls");
				borderMain();
				gotoxy(40,6);
                printf("\xb2 Land Bank of the Philippines \xb2");
                gotoxy(31,10);
                printf("Please input your Account Name:");
                scanf("%s", accountname);

                OB4:
                gotoxy(20,12);
                printf("Please input your 10-Digit Account Number:");

                for(i=0;i<=9;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(20,14);
                    borderMain();
                    printf("Please enter your 12-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    Sleep(700);                          //'pass[i]' array will become 0
                    system("cls");
                    goto OB4;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
 gotoxy(43,15);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
    gotoxy(43,16);printf("\xdb");
    gotoxy(70,16);printf("\xdb");

    gotoxy(43,17);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
                        gotoxy(45,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto OB4;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;

            case 5: //MetroBank
				system("cls");
				borderMain();
				gotoxy(50,6);
                printf("\xb2 Metrobank \xb2");
                gotoxy(31,10);
                printf("Please input your Account Name:");
                scanf("%s", accountname);

                OB5:
                gotoxy(20,12);
                printf("Please input your 13-Digit Account Number:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(20,14);
                    borderMain();
                    printf("Please enter your 12-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    Sleep(700);                         //'pass[i]' array will become 0
                    system("cls");
                    goto OB5;
                    break;                                                                        //Exit the loop
                }

                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
 gotoxy(43,15);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
    gotoxy(43,16);printf("\xdb");
    gotoxy(70,16);printf("\xdb");

    gotoxy(43,17);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
                        gotoxy(45,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto OB5;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;

            case 6: //PNB
				system("cls");
				borderMain();
				gotoxy(43,6);
                printf("\xb2 Philippine National Bank \xb2");
                gotoxy(31,10);
                printf("Please input your Account Name:");
                scanf("%s", accountname);

                OB6:
                gotoxy(20,12);
                printf("Please input your 16-Digit Account Number:");

                for(i=0;i<=15;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(20,14);
                    borderMain();
                    printf("Please enter your 12-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    Sleep(700);                        //'pass[i]' array will become 0
                    system("cls");
                    goto OB6;
                    break;                                                                        //Exit the loop
                }

                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
 gotoxy(43,15);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
    gotoxy(43,16);printf("\xdb");
    gotoxy(70,16);printf("\xdb");

    gotoxy(43,17);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
                        gotoxy(45,16);
                printf("INVALID ACCOUNT NUMBER!! ");
                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto OB6;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;

            case 7: //PsBank
				system("cls");
				borderMain();
				gotoxy(43,6);
                printf("\xb2 Philippine Savings Bank \xb2");
                gotoxy(31,10);
                printf("Please input your Account Name:");
                scanf("%s", accountname);

                OB7:
                gotoxy(20,12);
                printf("Please input your 12-Digit Account Number:");

                for(i=0;i<=11;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(20,14);
                    borderMain();
                    printf("Please enter your 12-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    Sleep(700);                       //'pass[i]' array will become 0
                    system("cls");
                    goto OB7;
                    break;                                                                        //Exit the loop
                }

                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
 gotoxy(43,15);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
    gotoxy(43,16);printf("\xdb");
    gotoxy(70,16);printf("\xdb");

    gotoxy(43,17);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
                        gotoxy(45,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto OB7;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                    printf("%d ",accountnumber[i]-48);
                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;



            case 8: //Security Bank
				system("cls");
				borderMain();
				gotoxy(48,6);
                printf("\xb2 Security Bank \xb2");
                gotoxy(31,10);
                printf("Please input your Account Name:");
                scanf("%s", accountname);

                OB8:
                gotoxy(20,12);
                printf("Please input your 13-Digit Account Number:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(20,14);
                    borderMain();
                    printf("Please enter your 12-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    Sleep(700);                           //'pass[i]' array will become 0
                    system("cls");
                    goto OB8;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
 gotoxy(43,15);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
    gotoxy(43,16);printf("\xdb");
    gotoxy(70,16);printf("\xdb");

    gotoxy(43,17);
    for (int i = 0; i<28; i++)
        {
            printf("\xdb");
        }
                        gotoxy(45,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto OB8;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;

            case 9: //Back

                    fopen("E-WALLET Log.txt", "a");
                    fprintf(fpointer,"\nBack to the Menu");

                    goto Menu;
                    break;
            default:
                    borderMain();
                    gotoxy(20,14);
                    printf("Please enter valid number: ") ;                             //'pass[i]' array will become 0
                    Sleep(700);
                    system("cls");
                    goto OB;
                    break;

                }

                amnt:
                loadingBar();
                system("cls");
                borderMain();
                gotoxy(30,10);
                printf("Amount limit to cash in is 500,000 PESOS");
                gotoxy(30,12);
                printf("Please input how much money you want to cash in:");
                gotoxy(40,14);
                scanf("%d", &amount);

                if (amount >500000){
                    system("cls");
                    borderMain();
                    gotoxy(30,14);
                    printf("Please input the limited amount only!");
                    goto amnt;

                }


                processingBar();
                system("cls");
                borderMain();
                gotoxy(38,8);
                printf("Your old balance was  %d PESOS",balance);
                gotoxy(38,10);
                printf("You Cashed In %d PESOS", amount);

                balance+=amount;
                gotoxy(38,12);
                printf("Your new balance is %d PESOS", balance);
                getch();

                fprintf(fpointer,"\nYou cash-in %d PESOS to your e-wallet account.", amount);

        fpointer2 = fopen (users, "w");
        fprintf(fpointer2,"%d", balance);
        fclose(fpointer2);
                system("cls");
                borderMain();
                gotoxy(25,14);
                printf("Do you want to return to the menu? [Enter for yes or any key for no]");
                yon=getch();
                loadingBar();
                switch(yon)
                {
                    case Enter:
                        goto Menu;
                        break;

                    default:
                        extTagLine();
                        break;
                }

                break;

        case 3: //Back
                        fopen("E-WALLET Log.txt", "a");

                        fprintf(fpointer,"\nBack to the Menu");
                        goto Menu;

        default:
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto COB;
        }
        break;

    case 2: //Send Money
    sM2();
        fopen("E-WALLET Log.txt", "a");


    SMpart2:
     	   system("cls");
		borderMain();
        gotoxy(40,6);
        printf("Choose if you want Send Money through:");
        gotoxy(40,9);
        printf("1.E-Wallet");
        gotoxy(40,10);
        printf("2.Online Banking");
        gotoxy(40,12);
        printf("3.Back");
        gotoxy(40,14);
        printf("Enter the number you want to pick:");
    SM:
        scanf("%d", &send);

        switch(send){

    case 1: //E-Wallet

        fprintf(fpointer,"\nYou Send Money thru E-Wallet");

		system("cls");
		borderMain();
		gotoxy(52,5);
        printf("SEND MONEY");
        gotoxy(20,10);
        printf("Please input how much money you want to send: ");
        scanf("%d", &amount);

        gotoxy(20,12);
        printf("Please input the 11-digit of the receiver: ");

        nums3:
        for(i=0;i<11;i)
        {
            num=getch();

            if(num==Enter){
                number[i]=0;
                gotoxy(51,14);
                printf("INVALID!");
                goto nums3;
            }
            else if(num>='a'&& num <='z' || num >='A' && num <= 'Z'){
                u1.number[i]=0;
                gotoxy(20,14);
                printf("INVALID!Please input the 11-digit number you want to send: ");

                for(i=0;i>i;i++){
                    u1.number[i]=0;
                }

                goto nums3;

            }
            else if(num==Delete)
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else
            {
                number[i]=num;
                printf("%d",number[i]-48);
                i++;
            }
        }

        if (balance<amount)
        {

            borderMain();
            gotoxy(20,18);
            printf("You don't have enough balance to complete this transaction.");
            getch();
        }
        else
        {
            processingBar();
            system("cls");
            borderMain();
            gotoxy(30,8);
            printf("Your old balance is %d PESOS",balance);
            gotoxy(30,10);
            printf("Cash deducted is %d PESOS from your account", amount);

             balance -=amount;
             gotoxy(30,12);
             printf("Your new balance is %d PESOS", balance);

             fprintf(fpointer, "\nYou Send Money thru E-Wallet with the amount of %d PESOS", amount);

        fpointer2 = fopen (users, "w");
        fprintf(fpointer2,"%d", balance);
        fclose(fpointer2);

        }

        break;


    case 2: //Send Money thru Online bank

         fprintf(fpointer,"\nYou Send Money thru Online Back");
 system("cls");
				borderMain();
				gotoxy(51,3);
                printf("Online Bank");
                gotoxy(15,5);
                printf("Hassle free online transaction available at anytime:(NOTE:*DATA CHARGES MAY APPLY.)");
                gotoxy(48,7);
                printf("PREFFERED BANKS");
                gotoxy(48,8);
                printf("1.BPI");
                gotoxy(48,9);
                printf("2.UnionBank");
                gotoxy(48,10);
                printf("3.BDO");
                gotoxy(48,12);
                printf("OTHER BANKS");
                gotoxy(48,13);
                printf("4.LandBank");
                gotoxy(48,14);
                printf("5.MetroBank");
                gotoxy(48,15);
                printf("6.PNB");
                gotoxy(48,16);
                printf("7.PSBank");
                gotoxy(48,17);
                printf("8.Security Bank");
                gotoxy(48,18);
                printf("9.Back");
                gotoxy(35,20);
                printf("Enter the number of your refered online bank:");


        OBpart2:
                scanf("%d", &onlinebank);

                switch(onlinebank){

            case 1: //BPI

				system("cls");
				borderMain();
  				gotoxy(40,6);
                printf("\xb2 Bank of the Philippine Islands \xb2");
                gotoxy(31,10);
                printf("Please input the Account Name:");
                scanf("%s", accountname);

                SM1:
                gotoxy(28,12);
                printf("Please input the 10-Digit Account Number of the receiver:");

                for(i=0;i<=9;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(28,14);
                    printf("Please enter the 10-Digit Account Number!") ;                             //'pass[i]' array will become 0
                    system("cls");
                    goto SM1;
                    break;                                                                        //Exit the loop
                }

                 else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                gotoxy(28,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto SM1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;


            case 2: //UnionBank
				system("cls");
				borderMain();
                gotoxy(50,6);
                printf("\xb2 UnionBank \xb2");;
                gotoxy(31,10);
                printf("Please input the Account Name:");
                scanf("%s", accountname);

                SM2:
                gotoxy(28,12);
                printf("Please input the 12-Digit Account Number of the receiver:");

                for(i=0;i<=11;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(28,14);
                    printf("Please enter your 12-Digit Account Number!") ;                             //'pass[i]' array will become 0
                    system("cls");
                    goto SM2;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                gotoxy(28,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto SM2;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;


            case 3: //BDO
				system("cls");
				borderMain();
				gotoxy(48,6);
                printf("\xb2 Banco de Oro \xb2");
                gotoxy(31,10);
                printf("Please input the Account Name:");
                scanf("%s", accountname);

                SM3:
                gotoxy(28,12);
                printf("Please input the 12-Digit Account Number of the receiver:");

                for(i=0;i<=11;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(28,14);
                    printf("Please enter the 12-Digit Account Number!") ;                             //'pass[i]' array will become 0
                    system("cls");
                    goto SM3;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                gotoxy(28,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto SM3;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;


            case 4: //LandBank
            	system("cls");
				borderMain();
				gotoxy(40,6);
                printf("\xb2 Land Bank of the Philippines \xb2");
                gotoxy(31,10);
                printf("Please input the Account Name:");
                scanf("%s", accountname);

                SM4:
                gotoxy(28,12);
                printf("Please input the 10-Digit Account Number of the receiver:");

                for(i=0;i<=9;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(28,14);
                    printf("Please enter the 10-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    system("cls");
                    goto SM4;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                gotoxy(28,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto SM4;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;

            case 5: //MetroBank
				system("cls");
				borderMain();
				gotoxy(50,6);
                printf("\xb2 Metrobank \xb2");
                gotoxy(31,10);
                printf("Please input the Account Name:");
                scanf("%s", accountname);

                SM5:
                gotoxy(28,12);
                printf("Please input the 13-Digit Account Number of the receiver:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(28,14);
                    printf("Please enter the 13-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    system("cls");
                    goto SM5;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                gotoxy(28,16);
                printf("INVALID ACCOUNT NUMBER!!");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto SM5;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;

            case 6: //PNB
				system("cls");
				borderMain();
				gotoxy(43,6);
                printf("\xb2 Philippine National Bank \xb2");
                gotoxy(31,10);
                printf("Please input the Account Name:");
                scanf("%s", accountname);

                SM6:
                gotoxy(28,12);
                printf("Please input the 13-Digit Account Number of the receiver:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(28,14);
                    printf("Please enter the 13-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    system("cls");
                    goto SM6;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                gotoxy(28,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto SM6;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;

            case 7: //PsBank
				system("cls");
				borderMain();
                				gotoxy(43,6);
                printf("\xb2 Philippine Savings Bank \xb2");
                gotoxy(31,10);
                printf("Please input the Account Name:");
                scanf("%s", accountname);

                SM7:
                gotoxy(28,12);
                printf("Please input the 12-Digit Account Number of the receiver");

                for(i=0;i<=11;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(28,14);
                    printf("Please enter the 12-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    system("cls");
                    goto SM7;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                gotoxy(14,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto SM7;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                    printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;



            case 8: //Security Bank
				system("cls");
				borderMain();
                				gotoxy(48,6);
                printf("\xb2 Security Bank \xb2");
                gotoxy(31,10);
                printf("Please input the Account Name:");
                scanf("%s", accountname);

                SM8:
                gotoxy(28,12);
                printf("Please input the 13-Digit Account Number of the receiver:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
                    gotoxy(14,14);
                    printf("Please enter the 13-Digit Account Number! ") ;                             //'pass[i]' array will become 0
                    system("cls");
                    goto SM8;
                    break;                                                                        //Exit the loop
                }
               else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                gotoxy(28,16);
                printf("INVALID ACCOUNT NUMBER!! ");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto SM8;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                    printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }
                break;

            case 9:

                    goto SMpart2;
                    break;
            default:

                    borderMain();
                    gotoxy(20,14);
                    printf("Please enter valid number ") ;                             //'pass[i]' array will become 0
                    Sleep(700);
                    system("cls");
                    goto OBpart2;
                    break;
                }

        getch();
		system("cls");
		borderMain();
		gotoxy(20,8);
        printf("SEND MONEY");
        gotoxy(20,10);
        printf("Please input how much money you want to send: ");
        scanf("%d", &amount);

                if (balance<amount)
        {
            gotoxy(20,12);
            printf("You don't have enough balance to complete this transaction.");
        }
        else
        {

            processingBar();
            system("cls");
            borderMain();
            gotoxy(20,8);
            printf("Your old balance is %d PESOS", balance);
            gotoxy(20,10);
            printf("Cash deducted is %d PESOS from your account",amount);

             balance -=amount;
             gotoxy(20,12);
             printf("Your new balance is %d PESOS", balance);

             fprintf(fpointer, "\nYou Send Money thru Online Bank with the amount of %d PESOS", amount);



        fpointer2 = fopen (users, "w");
        fprintf(fpointer2,"%d", balance);
        fclose(fpointer2);

        }


        break; //break ng online bank

        case 3: //BACK
                    fopen("E-WALLET Log.txt", "a");
                    fprintf(fpointer,"\nBack to the Menu");

                    goto Menu;
                    break;

        default:
                    borderMain();
                    gotoxy(20,14);
                    printf("Please enter valid number: ") ;                             //'pass[i]' array will become 0
                    Sleep(700);
                    system("cls");
                    goto SM;
                    break;
        }

            getch();
            system("cls");
            borderMain();
            gotoxy(25,14);
            printf("Do you want to return to the menu? [Enter for yes or any key for no]");
                yon=getch();
                loadingBar();
                switch(yon)
                {
                    case Enter:
                        goto Menu;
                        break;

                    default:
                        extTagLine();
                        break;
                }

        break;
    case 3:         // Pay bills
        pB3();

        fopen("E-WALLET Log.txt", "a");

        fprintf(fpointer,"\nPay Bills");

        system("cls");
            borderMain();
				gotoxy(50,3);
                printf("\xb2 PAY BILLS \xb2");
                gotoxy(40,5);
                printf("Please pick one of the following:");
                gotoxy(48,7);
                printf("1.Electric Utilities");
                gotoxy(48,8);
                printf("2.Water Utilities");
                gotoxy(48,9);
                printf("3.Cable/Internet");
                gotoxy(48,10);
                printf("4.Telecoms");
                gotoxy(48,11);
                printf("5.Credit Cards");
                gotoxy(48,12);
                printf("6.Loans");
                gotoxy(48,13);
                printf("7.Transportation");
                gotoxy(48,14);
                printf("8.Insurance");
                gotoxy(48,15);
                printf("9.Healthcare");
                gotoxy(48,16);
                printf("10.Back");
                gotoxy(35,19);
                printf("Enter the number you want to proceed:");
        PB:

        scanf("%d", &bills);

        int electric, water, cable, tele,credit, loans, trans, insur, health;

        switch(bills){

    case 1:
  	system("cls");
		borderMain();
		gotoxy(45,4);
                printf("\xb2 ELECTRIC UTILITIES \xb2");

                gotoxy(48,7);
                printf("1. Meralco");
                gotoxy(48,8);
                printf("2. CELCO");
                gotoxy(48,9);
                printf("3. CEPALCO");
                gotoxy(48,10);
                printf("4. Davao Light");
                gotoxy(48,11);
                printf("5. Iligan Light");
                gotoxy(48,12);
                printf("6. PALECO");


        EU:

            borderMain();
                gotoxy(40,17);
        printf("Enter the number you want to pick: ");
        scanf("%d", &electric);

        system("cls");
        borderMain();
        gotoxy(35,8);
        printf("Please input your Account Name:");
                scanf("%s", accountname);

                EU1:
    system("cls");
    borderMain();
    gotoxy(35,8);
        printf("Please input your Account Name: %s",accountname);

        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");                            //'pass[i]' array will become 0
                    system("cls");
                    goto EU1;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;


                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }
                                system("cls");
                                borderMain();
                                gotoxy(43,12);
                printf("\xb2 INVALID ACCOUNT NUMBER!! \xb2");
                Sleep(700);
                system("cls");
                goto EU1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }

        if (electric>6){
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto EU;
        }
        break;
    case 2:
    	system("cls");

    borderMain();
                		gotoxy(45,4);
                printf("\xb2 WATER UTILITIES \xb2");

                gotoxy(45,7);
                printf("1. Maynilad");
                gotoxy(45,8);
                printf("2. Bulakan Water Company");
                gotoxy(45,9);
                printf("3. Laguna Water");
                gotoxy(45,10);
                printf("4. Manila Water");

        WU:

            borderMain();
                gotoxy(40,17);
        printf("Enter the number you want to pick: ");
        scanf("%d", &water);

        system("cls");
        borderMain();
        gotoxy(35,8);
        printf("Please input your Account Name:");
                scanf("%s", accountname);

                WU1:
    system("cls");
    borderMain();
    gotoxy(35,8);
        printf("Please input your Account Name: %s",accountname);

        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");


                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");                            //'pass[i]' array will become 0
                    system("cls");
                    goto WU1;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                system("cls");
                                borderMain();
                                gotoxy(43,12);
                printf("\xb2 INVALID ACCOUNT NUMBER!! \xb2");
                Sleep(700);
                system("cls");

                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto WU1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }

        if (water>4){
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto WU;
        }
        break;
    case 3:
    	system("cls");
    borderMain();
                		gotoxy(48,4);
                printf("\xb2 CABLE/INTERNET \xb2");

                gotoxy(45,7);
                printf("1. PLDT");
                gotoxy(45,8);
                printf("2. Sky Cable");
                gotoxy(45,9);
                printf("3. Sky Broadband");
                gotoxy(45,10);
                printf("4. Converge ICT");
                gotoxy(45,11);
                printf("5. Cignal");

        CI:

            borderMain();
                gotoxy(40,17);
        printf("Enter the number you want to pick: ");
        scanf("%d", &cable);

        system("cls");
        borderMain();
        gotoxy(35,8);
        printf("Please input your Account Name:");
                scanf("%s", accountname);

                CI1:

    system("cls");
    borderMain();
    gotoxy(35,8);
        printf("Please input your Account Name: %s",accountname);

        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");                           //'pass[i]' array will become 0
                    system("cls");
                    goto CI1;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                system("cls");
                                borderMain();
                                gotoxy(43,12);
                printf("\xb2 INVALID ACCOUNT NUMBER!! \xb2");
                Sleep(700);
                system("cls");
                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto CI1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }


        if (cable>5){
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto CI;
        }
        break;
    case 4:
    	system("cls");
		borderMain();
                gotoxy(51,4);
                printf("\xb2 TELECOMS \xb2");

                gotoxy(45,7);
                printf("1. PLDT");
                gotoxy(45,9);
                printf("2. GLOBE AT HOME");
                gotoxy(45,11);
                printf("3. SMART");

        TL:


            borderMain();
                gotoxy(40,17);
        printf("Enter the number you want to pick: ");
        scanf("%d", &tele);
system("cls");
        gotoxy(35,8);
        borderMain();
        printf("Please input your Account Name:");
                scanf("%s", accountname);

                TL1:

    system("cls");
    borderMain();
    gotoxy(35,8);
        printf("Please input your Account Name: %s",accountname);

        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");                           //'pass[i]' array will become 0
                    system("cls");
                    goto TL1;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                system("cls");
                                borderMain();
                                gotoxy(43,12);
                printf("\xb2 INVALID ACCOUNT NUMBER!! \xb2");
                Sleep(700);
                system("cls");
                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto TL1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }

        if (tele>3){
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto TL;
        }
        break;
    case 5:  //credit cards
    	system("cls");
		borderMain();
                		gotoxy(48,4);
                printf("\xb2 CREDIT CARDS \xb2");

                gotoxy(45,7);
                printf("1. BPI Credit Card");
                gotoxy(45,9);
                printf("2. BDO MC/VISA");
                gotoxy(45,11);
                printf("3. PNB Credit Card");
                gotoxy(45,13);
                printf("4. Metrobank/ PSB Credit Cards");
                gotoxy(45,15);
                printf("5. Security Bank Mastercard");

        CC:

            borderMain();
                gotoxy(40,17);
        printf("Enter the number you want to pick: ");
        scanf("%d", &credit);

system("cls");
        gotoxy(35,8);
        borderMain();
        printf("Please input your Account Name:");
                scanf("%s", accountname);

                CC1:

    system("cls");
    borderMain();
    gotoxy(35,8);
        printf("Please input your Account Name: %s",accountname);

        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");                          //'pass[i]' array will become 0
                    system("cls");
                    goto CC1;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                system("cls");
                                borderMain();
                                gotoxy(43,12);
                printf("\xb2 INVALID ACCOUNT NUMBER!! \xb2");
                Sleep(700);
                system("cls");
                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto CC1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }

        if (credit>5){
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto CC;
        }
        break;
    case 6:
    	system("cls");
		borderMain();
                		gotoxy(52,4);
                printf("\xb2 LOANS \xb2");

                gotoxy(45,7);
                printf("1. Tala");
                gotoxy(45,9);
                printf("2. Pahiram");
                gotoxy(45,11);
                printf("3. Easycash");
                gotoxy(45,13);
                printf("4. CIMB Bank");
                gotoxy(45,15);
                printf("5. Citibank Card Services");

        LNS:

            borderMain();
                gotoxy(40,17);
        printf("Enter the number you want to pick: ");
        scanf("%d", &loans);

system("cls");
        gotoxy(35,8);
        borderMain();
        printf("Please input your Account Name:");
                scanf("%s", accountname);

                LNS1:

    system("cls");
    borderMain();
    gotoxy(35,8);
        printf("Please input your Account Name: %s",accountname);

        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");
                            //'pass[i]' array will become 0
                    system("cls");
                    goto LNS1;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                system("cls");
                                borderMain();
                                gotoxy(43,12);
                printf("\xb2 INVALID ACCOUNT NUMBER!! \xb2");
                Sleep(700);
                system("cls");
                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto LNS1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }

        if (loans>5){
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto LNS;
        }
        break;
    case 7:
    	system("cls");
		borderMain();
                		gotoxy(48,4);
                printf("\xb2 TRANSPORTATION \xb2");

                gotoxy(45,7);
                printf("1. AirAsia");
                gotoxy(45,9);
                printf("2. Cebu Pacific");
                gotoxy(45,11);
                printf("3. Philippine Airlines");
                gotoxy(45,13);
                printf("4. Autosweep RFID");
                gotoxy(45,15);
                printf("5. EasyTrip");

        TP:

            borderMain();
                gotoxy(40,17);
        printf("Enter the number you want to pick: ");
        scanf("%d", &trans);

system("cls");
        gotoxy(35,8);
        borderMain();
        printf("Please input your Account Name:");
                scanf("%s", accountname);

                TP1:

    system("cls");
    borderMain();
    gotoxy(35,8);
        printf("Please input your Account Name: %s",accountname);

        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");                           //'pass[i]' array will become 0
                    system("cls");
                    goto TP1;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                system("cls");
                                borderMain();
                                gotoxy(43,12);
                printf("\xb2 INVALID ACCOUNT NUMBER!! \xb2");
                Sleep(700);
                system("cls");
                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto TP1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }


        if (trans>5){
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto TP;
        }
        break;
    case 8:     //Insurance
    	system("cls");
		borderMain();
                		gotoxy(50,4);
                printf("\xb2 INSURANCE \xb2");

                gotoxy(45,7);
                printf("1. Pru Life UK");
                gotoxy(45,9);
                printf("2. PhilamLife");
                gotoxy(45,11);
                printf("3. Manulife Philippines");
                gotoxy(45,13);
                printf("4. AXA Phil");
                gotoxy(45,15);
                printf("5. Insular Life");


        INS:

            borderMain();
                gotoxy(40,17);
        printf("Enter the number you want to pick: ");
        scanf("%d", &insur);

system("cls");
        gotoxy(35,8);
        borderMain();
        printf("Please input your Account Name:");
                scanf("%s", accountname);

                INS1:

    system("cls");
    borderMain();
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");



                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");                            //'pass[i]' array will become 0
                    system("cls");
                    goto INS1;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                system("cls");
                                borderMain();
                                gotoxy(43,12);
                printf("\xb2 INVALID ACCOUNT NUMBER!! \xb2");
                Sleep(700);
                system("cls");
                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto INS1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }



        if (insur>5){
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto INS;
        }
        break;
    case 9:
    	system("cls");
		borderMain();
                		gotoxy(49,4);
                printf("\xb2 HEALTHCARE \xb2");

                gotoxy(45,7);
                printf("1. Medicard");
                gotoxy(45,9);
                printf("2. KonsultaMD");
                gotoxy(45,11);
                printf("3. iConnex");
                gotoxy(45,13);
                printf("4. Fortune Medicare");

        HC:

            borderMain();
                gotoxy(40,17);
        printf("Enter the number you want to pick: ");
        scanf("%d", &health);


system("cls");
        gotoxy(35,8);
        borderMain();
        printf("Please input your Account Name:");
                scanf("%s", accountname);

                HC1:

  system("cls");
    borderMain();
    gotoxy(35,8);
        printf("Please input your Account Name: %s",accountname);

        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");

                for(i=0;i<=12;i)
                {                                                                                 //While loop
                an=getch();                                                                       //'pw' = getcharacter

                if(an==Enter)                                                                     //If the user press enter
                {
                    pass[i]= 0 ;
        gotoxy(20,10);
        printf("Please input your 13-Digit Account Number:");                          //'pass[i]' array will become 0
                    system("cls");
                    goto HC1;
                    break;                                                                        //Exit the loop
                }
                else if(an>='a'&& an <='z' || an >='A' && an <= 'Z'){
                                accountnumber[i]=0;
                                system("cls");
                                borderMain();
                                gotoxy(43,12);
                printf("\xb2 INVALID ACCOUNT NUMBER!! \xb2");
                Sleep(700);
                system("cls");
                for(i=0;i>i;i++){
                    accountnumber[i]=0;
                }

                goto HC1;

                }

                else if(an==Delete)                                                               //Else if the user press the backspace button
                {
                    if(i>0)                                                                       //If 'i' is greater than 0
                    {
                        i--;                                                                      //'i' will decrement by 1
                        printf("\b \b");                                                          //It will backspace, space and backspace again to back the cursor
                    }
                }

                else if(an==Tab||an==Space)                                                       //Else if the user press tab and space
                {
                    continue;                                                                     //It will just continue
                }
                else                                                                              //Else
                {
                    accountnumber[i] = an;                                                                   //'pass[i]' array will store the character
                     printf("%d ",accountnumber[i]-48);

                    i++;                                                                     //Displays "*" to show that the user is storing the characters to 'pass[i]' array
                }
            }

        if (health>4){
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
            goto HC;
        }
        break;
    case 10:
        fopen("E-WALLET Log.txt", "a");
        fprintf(fpointer,"\nBack to the Menu");

        goto Menu;
    default:
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
        goto PB;
        }

        gotoxy(25,12);
        printf("Please input how much money you want to pay: ");
        scanf("%d", &amount);


        if (balance<amount)
        {
                 processingBar();
            system("cls");
            borderMain();
            gotoxy(20,8);
            printf("Your old balance is %d PESOS", balance);
            gotoxy(20,10);
            printf("Cash deducted is %d PESOS from your account",amount);

             balance -=amount;
             gotoxy(20,12);
             printf("Your new balance is %d PESOS", balance);

        fpointer2 = fopen (users, "w");
        fprintf(fpointer2,"%d", balance);
        fclose(fpointer2);

        }
            getch();
            system("cls");
            borderMain();
            gotoxy(25,14);
            printf("Do you want to return to the menu? [Enter for yes or any key for no]");
            yon=getch();
            loadingBar();
            switch(yon)
                {
                    case Enter:
                        goto Menu;
                        break;

                    default:
                        extTagLine();
                        break;
                }
        break;
    case 4:     //Buy a load
        bL4();

        fopen("E-WALLET Log.txt", "a");

        fprintf(fpointer,"\nBuy a Load");
            system("cls");
            borderMain();
     		gotoxy(49,4);
                printf("\xb2 BUY A LOAD \xb2");

                gotoxy(30,7);
                printf("Please input the 11-digit number:");

        nums1:
        for(i=0;i<11;i)
        {
            num=getch();

            if(num==Enter){
                number[i]=0;
            system("cls");
            borderMain();
            gotoxy(25,7);
                printf("INVALID NUMBER! Please input a 11-digit number:");
                goto nums1;
            }
            else if(num>='a'&& num <='z' || num >='A' && num <= 'Z'){
                                u1.number[i]=0;
            gotoxy(25,7);
                printf("INVALID NUMBER! Please input a 11-digit number:");

                for(i=0;i>i;i++){
                    u1.number[i]=0;
                }

                goto nums1;

            }
            else if(num==Delete)
            {
                if(i>0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else
            {
                number[i]=num;
                printf("%d",number[i]-48);
                i++;
            }

        }
        gotoxy(30,9);
        printf("Enter Amount: ");
        scanf("%d", &amount);

        if (balance<amount)
        {
            system("cls");
            borderMain();
            gotoxy(28,13);
            printf("You don't have enough balance to complete this transaction.");
        }
        else
        {

            system("cls");
            borderMain();
           gotoxy(40,8);
                printf("Your old balance is %d PESOS", balance);
                gotoxy(40,10);
                printf("Cash deducted is %d PESOS",amount);
                 balance-=amount;
                 gotoxy(40,12);
                 printf("Your new balance is %d PESOS", balance);

                 fprintf(fpointer, "\nYou Buy a Load with the amount of %d PESOS.", amount);

        fpointer2 = fopen (users, "w");
        fprintf(fpointer2,"%d", balance);
        fclose(fpointer2);

        }
        getch();
        system("cls");
        borderMain();
        gotoxy(25,14);
        printf("Do you want to return to the menu? [Enter for yes or any key for no]");
        yon=getch();
            loadingBar();
            switch(yon)
                {
                    case Enter:
                        goto Menu;
                        break;

                    default:
                        extTagLine();
                        break;
                }
        break;
    case 5:     // log out
        Lo5();
        fopen("E-WALLET Log.txt", "a");
        fprintf(fpointer, "\nYou Log-Out");
        system("cls");
     char a = 177, b = 219;
    system("cls");
    borderMain();
    gotoxy(53,12);
    printf("Loading");


    gotoxy(40,14);
    for (int i = 0; i < 35; i++)
        printf("%c", a);


    printf("\r");

    gotoxy(40,14);
    for (int i = 0; i < 35; i++) {
        printf("%c", b);


        Sleep(50);


    }
		//strcpy(username," ");
	//	strcpy(number," ");
	//	strcpy(mpin," ");

            for (i=0;i<100;i++){
                users[i] = 0;
            }
        fclose(fpointer);
        system("cls");
	    goto signuporlogin;
		break;

    case 6:
        ext6();
        fopen("E-WALLET Log.txt", "a");
        extTagLine();

        fprintf(fpointer,"\nYou Exit");

        break;

    default:
            system("cls");
            borderMain();
            gotoxy(38,17);
            printf("\xdb Please input valid number only! \xdb");
            Sleep(700);
            system("cls");
        goto Menu2;
}
Exit:
fclose(fpointer);
//fclose(fpointer2);

    getch();
    return 0;
}
