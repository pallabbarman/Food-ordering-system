#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void bfast();
void lunch();
void dinner();
void m_m();
void exit();

COORD coord = {0,0};

void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int num;
float price;
float total;
char choice;
int again;

void main()
{
	m_m();
}

void m_m()
{
	char choice = ' ' ;

  printf("                Welcome to Bros Restaurant.          \n ");
  printf("             +============================+          \n\n");
  printf("  && Please select the meal that you would like to purchase && \n\n");
  printf("\t\t      [A] Breakfast\n");
  printf("\t\t      [B] Lunch\n");
  printf("\t\t      [C] Dinner\n");
  printf("\t\t      [D] Exit\n\n");
  printf("Enter your choice here : ");
  scanf("%c", &choice);
  system("cls");

    {
		if (toupper(choice) == 'A')
              bfast();
        else if (toupper(choice) == 'B')
              lunch();
        else if (toupper(choice) == 'C')
              dinner();
        else if (toupper(choice) == 'D')
              exit(0);
        else if (toupper(choice) != 'A', 'B' , 'C' , 'D')
            {
               m_m();
            }
	}

}

void bfast() ///Breakfast Menu Screen
{

  int choice = 0;
  int quantity = 0;
  int again = 0;

  printf("                  $  Breakfast Menu  $ \n\n");
  printf("             +============================+          \n\n");
  printf("  && Please select the food that you would like to purchase && \n\n");
  printf("\t\t   [1] Porata    - RM 05 TK\n");
  printf("\t\t   [2] Pitha     - RM 05 TK\n");
  printf("\t\t   [3] Nan ruti  - RM 15 TK\n");
  printf("\t\t   [4] Dal vaji  - RM 20 TK\n");
  printf("\t\t   [5] Sandwich  - RM 50 TK\n");
  printf("\t\t   [6] Burger    - RM 70 TK\n");
  printf("\t\t   [7] Noodles   - RM 50 TK\n");
  printf("\t\t   [8] Rice      - RM 20 TK\n");
  printf("\t\t   [9] Dim Vaji  - RM 20 TK\n");
  printf("\t\t   [10] Vorta    - RM 10 TK\n");
  printf("\t\t   [11] Modify             \n");
  printf("\t\t   [12] Back To Menu         ");


  printf("\nEnter your choice here : ");
  scanf("%d", &choice);
  {
     if (choice == 1)
	   {
           printf("\nIngredient : Moyda,Ata,Salt,Oil,Water\n\n");
	       printf("Enter quantity : ");
	       scanf("%d", &quantity);
           total = 5 * quantity ;
           printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
	       printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
           scanf("%d", &again);
           system("cls");

			 if (again == 1 )
				 bfast();
			 else if (again == 2 )
                 m_m();
			 else if (again != 1 , 2)
				{
				   printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
				   exit(0);
				}
       }
	else if ( choice == 2)
       {
		  printf("\nIngredient : Parboiled rice,Atop chal,Salt,Ginger,Garlic,Water,Chili,Sugar\n\n");
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 5 * quantity ;
		  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
          printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
          scanf("%d", &again);
          system("cls");

			 if (again == 1 )
				bfast();
			 else if (again == 2 )
				m_m();
			 else if (again != 1 , 2)
				{
				   printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
				   exit(0);
				}
        }
    else if ( choice == 3 )
        {
			  printf("\nIngredient : Moyda,Ata,Salt,Oil,Water\n\n");
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 15 * quantity ;
			  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
              printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   bfast();
                }
			  else if (again == 2 )
				{
				   m_m();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 4 )
        {
			  printf("\nIngredient : Dal,Vegetable,Slat,Oil,Green chili,Onion,Garlic,Red chili\n\n");
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 20 * quantity ;
			  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
              printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   bfast();
                }
			  else if (again == 2 )
				{
				   m_m();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 5 )
        {
			  printf("\nIngredient : Roasted bread,Meat,Egg,Vegetable,Salt,Oil,Fruit jelly \n\n");
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 50 * quantity ;
			  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
              printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   bfast();
                }
			  else if (again == 2 )
				{
				   m_m();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 6 )
        {
			  printf("\nIngredient : Roasted bread,Meat,Egg,Vegetable,Salt,Oil,Fruit jelly \n\n");
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 70 * quantity ;
			  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
              printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   bfast();
                }
			  else if (again == 2 )
				{
				   m_m();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 7 )
        {
			  printf("\nIngredient : Noodles,Vegetable,Oil,Salt,Masala,Egg,Meat,Sauce \n\n");
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 50 * quantity ;
			  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
              printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   bfast();
                }
			  else if (again == 2 )
				{
				   m_m();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 8 )
        {
			  printf("\nIngredient : Rice,Water \n\n");
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 20 * quantity ;
			  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
              printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   bfast();
                }
			  else if (again == 2 )
				{
				   m_m();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 9 )
        {
			  printf("\nIngredient : Egg,Onion,Salt,Oil,Turmeric,Chili \n\n");
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 20 * quantity ;
			  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
              printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   bfast();
                }
			  else if (again == 2 )
				{
				   m_m();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 10 )
        {
			  printf("\nIngredient : Potato,Brinjal,Small fish,Vegetable,Salt,Oil,Chili \n\n");
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 10 * quantity ;
			  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
              printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
              scanf("%d", &again);
              system("cls");

			  if (again == 1 )
				{
				   bfast();
                }
			  else if (again == 2 )
				{
				   m_m();
				}
              else if (again != 1 , 2)
                {
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					 exit(0);
                }
        }
    else if ( choice == 11 )
        {
            FILE *fp, *ft;
            char another, choice;

            struct emp
             {
               char name[40];
               int pri;
             };

    struct emp e; // structure variable creation

    char empname[40]; // string to store name of the food

    long int recsize; // size of each record of food

    fp = fopen("EMP.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("EMP.DAT","wb+");
        if(fp == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }

    // size of each record i.e. size of structure variable e
    recsize = sizeof(e);

    while(1)
    {
        system("cls"); //clear the console window
        gotoxy(30,10); // move the cursor to position 30, 10 from top-left corner
        printf("1. Add Food");
        gotoxy(30,12);
        printf("2. Display Food");
        gotoxy(30,14);
        printf("3. Delete Food");
        gotoxy(30,16);
        printf("4. Back To Menu");
        gotoxy(30,18);
        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END); // search the file and move cursor to end of the file
            // here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter Item Name: ");
                scanf("%s",e.name);
                printf("\nEnter Price: ");
                scanf("%d", &e.pri);
                fwrite(&e,recsize,1,fp); // write the record in the file
                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp); //this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  // read the file and fetch the record one record per fetch
            {
                printf("\nItem is %s",e.name);
                printf("\nPrice is: %d",e.pri);
            }
            getch();
            break;
        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of Food to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  // create a intermediate file for temporary storage
                rewind(fp); // move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  // read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  // if the entered record match
                    {
                        fwrite(&e,recsize,1,ft); // move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("EMP.DAT"); // remove the original file
                rename("Temp.dat","EMP.DAT"); // rename the temp file to original file name
                fp = fopen("EMP.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);// close the file
            system("cls");
            bfast();
        }
    }

        }
    else if ( choice == 12 )
        {
            m_m();

        }
    else if (choice != 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10, 11 , 12)
        {

            system("cls");
            printf("\n\n\t\t   Invalid Choice Entered\n\n");
            bfast();
        }
  }

}


void lunch() /// Lunch Screen Menu
{
  int choice;
  int quantity;
  int again;

  printf("                   $  Lunch Menu  $ \n\n");
  printf("             +============================+          \n\n");
  printf("  && Please select the food that you would like to purchase && \n\n");
  printf("\t\t   [1] Normal Rice       - RM 20 TK\n");
  printf("\t\t   [2] Egg curry         - RM 25 TK\n");
  printf("\t\t   [3] Small fish curry  - RM 35 TK\n");
  printf("\t\t   [4] Fish vorta        - RM 25 TK\n");
  printf("\t\t   [5] Ilish curry       - RM 70 TK\n");
  printf("\t\t   [6] Rui curry         - RM 60 TK\n");
  printf("\t\t   [7] Chingri vuna      - RM 60 TK\n");
  printf("\t\t   [8] Shorshe ilish     - RM 80 TK\n");
  printf("\t\t   [9] Telapia vuna      - RM 40 TK\n");
  printf("\t\t   [10] Chicken vuna     - RM 70 TK\n");
  printf("\t\t   [11] Chicken fry      - RM 60 TK\n");
  printf("\t\t   [12] Chicken grill    - RM 80 TK\n");
  printf("\t\t   [13] Chili chicken    - RM 50 TK\n");
  printf("\t\t   [14] Roast chicken    - RM 70 TK\n");
  printf("\t\t   [15] Mutton vuna      - RM 100 TK\n");
  printf("\t\t   [16] Chicken biriyani - RM 150 TK\n");
  printf("\t\t   [17] Mutton biriyani  - RM 180 TK\n");
  printf("\t\t   [18] Kachchi biriyani - RM 150 TK\n");
  printf("\t\t   [19] Polau            - RM 50 TK\n");
  printf("\t\t   [20] Fried rice       - RM 60 TK\n");
  printf("\t\t   [21] Thehari          - RM 100 TK\n");
  printf("\t\t   [22] Vuna khichuri    - RM 80 TK\n");
  printf("\t\t   [23] Dal              - RM 05 TK\n");
  printf("\t\t   [24] Pancake          - RM 35 TK\n");
  printf("\t\t   [25] Chocolate cake   - RM 50 TK\n");
  printf("\t\t   [26] Fruit cake       - RM 30 TK\n");
  printf("\t\t   [27] Salad            - RM 10 TK\n");
  printf("\t\t   [28] Lassi            - RM 30 TK\n");
  printf("\t\t   [29] Borhani          - RM 35 TK\n");
  printf("\t\t   [30] Drinks           - RM 30 TK\n");
  printf("\t\t   [31] Modify                     \n");
  printf("\t\t   [32] Back To Menu               \n");

  printf("\nEnter your choice here : ");
  scanf("%d", &choice);
  {
     if (choice == 1)
	   {
	      printf("\nIngredient : Rice,Water \n\n");
	      printf("Enter quantity : ");
	      scanf("%d", &quantity);
	      total = 20 * quantity ;
	      printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
	        {
		       printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
               scanf("%d", &again);
		       system("cls");
		       if (again == 1 )
			      lunch();
               else if (again == 2 )
				  m_m();
		       else if (again != 1 , 2)
               {
			      printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			      exit(0);
			   }
            }
       }
	else if ( choice == 2)
       {
		  printf("\nIngredient : Egg,Onion,Ginger,Turmeric,Water,Salt,Masala,Vegetable \n\n");
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 25 * quantity ;
		  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
		  {
		    printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
		    scanf("%d", &again);
		    system("cls");
		    if (again == 1 )
			   lunch();
		    else if (again == 2 )
				m_m();
		    else if (again != 1 , 2)
			{
			   printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			   exit(0);
			}
		  }
       }
    else if ( choice == 3 )
        {
            printf("\nIngredient : Small fish,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Masala \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 35 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
            {
				printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 4 )
        {
            printf("\nIngredient : Small fish,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Masala \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 25 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
            {
				printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 5 )
        {
            printf("\nIngredient : Ilish fish,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 70 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
            {
				printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 6 )
        {
            printf("\nIngredient : Rui fish,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
            {
				printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					  lunch();
				else if (again == 2 )
                      m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 7 )
        {
            printf("\nIngredient : Chingri,Onion,Ginger,Turmeric,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
            {
				printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 8 )
        {
            printf("\nIngredient : Ilish,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Red chili,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
            {
				printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 9 )
        {
            printf("\nIngredient : Telapia,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 40 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
            {
				printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 10 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil,Red chili,etc \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 70 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
            {
				printf("Would you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 11 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Salt,Green chili,Red chili,Moyda,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 12 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Red chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 13 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Red chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 50 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 14 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Mixed masala,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 70 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 15 )
        {
            printf("\nIngredient : Mutton,Onion,Ginger,Turmeric,Salt,Green chili,Red chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 100 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 16 )
        {
            printf("\nIngredient : Chicken,Polau rice,Biriyani masala,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 150 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 17 )
        {
            printf("\nIngredient : Mutton,Polau,Biriyani masala,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 180 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 18 )
        {
            printf("\nIngredient : Mutton/Chicken,Bashmati rice,Biriyani masla,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 150 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 19 )
        {
            printf("\nIngredient : Polau rice,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 50 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 20 )
        {
            printf("\nIngredient : Polau rice,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 21 )
        {
            printf("\nIngredient : Chicken,Theheri masala,Mixed masala,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 100 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 22 )
        {
            printf("\nIngredient : Polau rice,Moong dal,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
        else if ( choice == 23 )
        {
            printf("\nIngredient : Dal,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Red chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 5 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
        else if ( choice == 24 )
        {
            printf("\nIngredient : Flour,Butter,Milk,Baking powder,Salt,Sugar,Egg,Vanilla flavor \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 35 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 25 )
        {
            printf("\nIngredient : Flour,Butter,Milk,Baking powder,Salt,Sugar,Egg,Chocolate \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 50 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 26 )
        {
            printf("\nIngredient : Flour,Butter,Milk,Baking powder,Salt,Sugar,Egg,Fruit juicy,Dry fruits \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 30 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 27 )
        {
            printf("\nIngredient : Vegetable,Salt \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 10 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 28 )
        {
            printf("\nIngredient : Plain yogurt,Ice cool water,Sugar \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 30 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 29 )
        {
            printf("\nIngredient : Yogurt,Mustard powder,Red chili powder,Ginger paste,Sugar,Salt,Water \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 35 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 30 )
        {
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 30 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 31 )
        {
            FILE *fp, *ft;
            char another, choice;

            struct emp
             {
               char name[40];
               int pri;
             };

    struct emp e; // structure variable creation

    char empname[40]; // string to store name of the food

    long int recsize; // size of each record of food

    fp = fopen("EMP.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("EMP.DAT","wb+");
        if(fp == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }

    // size of each record i.e. size of structure variable e
    recsize = sizeof(e);

    while(1)
    {
        system("cls"); //clear the console window
        gotoxy(30,10); // move the cursor to position 30, 10 from top-left corner
        printf("1. Add Food");
        gotoxy(30,12);
        printf("2. Display Food");
        gotoxy(30,14);
        printf("3. Delete Food");
        gotoxy(30,16);
        printf("4. Back To Menu");
        gotoxy(30,18);
        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END); // search the file and move cursor to end of the file
            // here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter Item Name: ");
                scanf("%s",e.name);
                printf("\nEnter Price: ");
                scanf("%d", &e.pri);
                fwrite(&e,recsize,1,fp); // write the record in the file
                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp); //this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  // read the file and fetch the record one record per fetch
            {
                printf("\nItem is %s",e.name);
                printf("\nPrice is: %d",e.pri);
            }
            getch();
            break;
        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of Food to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  // create a intermediate file for temporary storage
                rewind(fp); // move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  // read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  // if the entered record match
                    {
                        fwrite(&e,recsize,1,ft); // move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("EMP.DAT"); // remove the original file
                rename("Temp.dat","EMP.DAT"); // rename the temp file to original file name
                fp = fopen("EMP.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);// close the file
            system("cls");
            lunch();
        }
    }

        }
    else if ( choice == 32 )
        {
            m_m();

        }
    else if (choice != 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32)
                    {

						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						lunch();
                    }
  }

}


void dinner() /// Dinner Menu Screen
{
  int choice;
  int quantity;
  int again;

  printf("                    $  Dinner Menu  $ \n\n");
  printf("             +============================+          \n\n");
  printf("  && Please select the food that you would like to purchase && \n\n");
  printf("\t\t   [1] Rice              - RM 20 TK\n");
  printf("\t\t   [2] Egg curry         - RM 25 TK\n");
  printf("\t\t   [3] Small fish curry  - RM 35 TK\n");
  printf("\t\t   [4] Ilish curry       - RM 25 TK\n");
  printf("\t\t   [5] Rui curry         - RM 60 TK\n");
  printf("\t\t   [6] Chingri vuna      - RM 60 TK\n");
  printf("\t\t   [7] Shorshe ilish     - RM 80 TK\n");
  printf("\t\t   [8] Nan ruti          - RM 15 TK\n");
  printf("\t\t   [9] french fry        - RM 20 TK\n");
  printf("\t\t   [10] Chicken vuna     - RM 70 TK\n");
  printf("\t\t   [11] Chicken fry      - RM 60 TK\n");
  printf("\t\t   [12] Chicken grill    - RM 80 TK\n");
  printf("\t\t   [13] Chili chicken    - RM 50 TK\n");
  printf("\t\t   [14] Roast chicken    - RM 70 TK\n");
  printf("\t\t   [15] Mutton vuna      - RM 100 TK\n");
  printf("\t\t   [16] Chicken biriyani - RM 150 TK\n");
  printf("\t\t   [17] Mutton biriyani  - RM 180 TK\n");
  printf("\t\t   [18] Kachchi biriyani - RM 150 TK\n");
  printf("\t\t   [19] Polau            - RM 50 TK\n");
  printf("\t\t   [20] Fried rice       - RM 60 TK\n");
  printf("\t\t   [21] Thehari          - RM 100 TK\n");
  printf("\t\t   [22] Vuna khichuri    - RM 80 TK\n");
  printf("\t\t   [23] Dal              - RM 05 TK\n");
  printf("\t\t   [24] Pancake          - RM 35 TK\n");
  printf("\t\t   [25] Chocolate cake   - RM 50 TK\n");
  printf("\t\t   [26] Fruit cake       - RM 30 TK\n");
  printf("\t\t   [27] Salad            - RM 10 TK\n");
  printf("\t\t   [28] Lassi            - RM 30 TK\n");
  printf("\t\t   [29] Borhani          - RM 35 TK\n");
  printf("\t\t   [30] Drinks           - RM 30 TK\n");
  printf("\t\t   [31] Flat White coffee- RM 60 TK\n");
  printf("\t\t   [32] Long Black coffee- RM 80 TK\n");
  printf("\t\t   [33] Cappuccino       - RM 80 TK\n");
  printf("\t\t   [34] Mochaccino       - RM 70 TK\n");
  printf("\t\t   [35] Normal Tea       - RM 05 TK\n");
  printf("\t\t   [36] Milk Tea         - RM 10 TK\n");
  printf("\t\t   [37] Cham Cham sweet  - RM 300 TK\n");
  printf("\t\t   [38] Rosmalai         - RM 280 TK\n");
  printf("\t\t   [39] Kalojam          - RM 220 TK\n");
  printf("\t\t   [40] Sweet curd       - RM 30 TK\n");
  printf("\t\t   [41] Modify                     \n");
  printf("\t\t   [42] Back To Menu               \n");


  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
      if (choice == 1)
	   {
	      printf("\nIngredient : Rice,Water \n\n");
	      printf("Enter quantity : ");
	      scanf("%d", &quantity);
	      total = 20 * quantity ;
	      printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
	        {
		       printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
               scanf("%d", &again);
		       system("cls");
		       if (again == 1 )
			      dinner();
               else if (again == 2 )
				  m_m();
		       else if (again != 1 , 2)
               {
			      printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			      exit(0);
			   }
       }
}
	else if ( choice == 2)
       {
		  printf("\nIngredient : Egg,Onion,Ginger,Turmeric,Water,Salt,Masala,Vegetable \n\n");
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 25 * quantity ;
		  printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
		  {
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		    scanf("%d", &again);
		    system("cls");
		    if (again == 1 )
			   dinner();
		    else if (again == 2 )
				m_m();
		    else if (again != 1 , 2)
			{
			   printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
			   exit(0);
			}
		  }
       }
    else if ( choice == 3 )
        {
            printf("\nIngredient : Small fish,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Masala \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 35 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 4 )
        {
            printf("\nIngredient : Ilish fish,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 70 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 5 )
        {
            printf("\nIngredient : Rui fish,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 6 )
        {
            printf("\nIngredient : Chingri,Onion,Ginger,Turmeric,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 7 )
        {
            printf("\nIngredient : Ilish,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Red chili,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 8 )
        {
            printf("\nIngredient : Moyda,Ata,Salt,Oil,Water \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 15 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 9 )
        {
            printf("\nIngredient :  \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 20 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 10 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Salt,Green chili,Red chili,Moyda,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 70 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 11 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Salt,Green chili,Red chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 12 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Salt,Green chili,Red chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 13 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Red chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 50 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 14 )
        {
            printf("\nIngredient : Chicken,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Mixed masala,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 70 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 15 )
        {
            printf("\nIngredient : Mutton,Onion,Ginger,Turmeric,Salt,Green chili,Red chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 100 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 16 )
        {
            printf("\nIngredient : Chicken,Polau rice,Biriyani masala,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 150 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 17 )
        {
            printf("\nIngredient : Mutton,Polau,Biriyani masala,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 180 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 18 )
        {
            printf("\nIngredient : Mutton/Chicken,Bashmati rice,Biriyani masla,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 150 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 19 )
        {
            printf("\nIngredient : Polau rice,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 50 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 20 )
        {
            printf("\nIngredient : Polau rice,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 21 )
        {
            printf("\nIngredient : Chicken,Theheri masala,Mixed masala,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 100 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 22 )
        {
            printf("\nIngredient : Polau rice,Moong dal,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 23 )
        {
            printf("\nIngredient : Dal,Onion,Ginger,Turmeric,Vegetable,Salt,Green chili,Red chili,Water,Garam masala,Oil \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 5 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 24 )
        {
            printf("\nIngredient : Flour,Butter,Milk,Baking powder,Salt,Sugar,Egg,Vanilla flavor \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 35 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 25 )
        {
            printf("\nIngredient : Flour,Butter,Milk,Baking powder,Salt,Sugar,Egg,Chocolate \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 50 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 26 )
        {
            printf("\nIngredient : Flour,Butter,Milk,Baking powder,Salt,Sugar,Egg,Fruit juicy,Dry fruits \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 30 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 27 )
        {
            printf("\nIngredient : Vegetable,Salt \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 10 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 28 )
        {
            printf("\nIngredient : Plain yogurt,Ice cool water,Sugar \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 30 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 29 )
        {
            printf("\nIngredient : Yogurt,Mustard powder,Red chili powder,Ginger paste,Sugar,Salt,Water \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 35 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 30 )
        {
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 30 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 31 )
        {
            printf("\nIngredient :  Espresso,Milk \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 60 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 32 )
        {
            printf("\nIngredient :  Espresso,Milk,Hot water \n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 33 )
        {
            printf("\nIngredient : Milk,Cinnamon stick,Sugar,Ground cinnamon\n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 80 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 34 )
        {
            printf("\nIngredient :Vanilla syrup,Water,Granulated sugar,Teaspoon vanilla extract coffee,Fresh espresso,Milk,Caramel sauce\n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 70 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 35 )
        {
            printf("\nIngredient :Tea,Hot water,Sugar\n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 5 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 36 )
        {
            printf("\nIngredient :Tea,Milk,Hot water,Sugar\n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 10 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 37 )
        {
            printf("\nIngredient :Flour,Cream,Sugar,Saffron,Lemon juice,Coconut flakes\n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 300 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 38 )
        {
            printf("\nIngredient :Flour,Sugar,Chana,Milk\n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 280 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 39 )
        {
            printf("\nIngredient :Flour,Cream,Sugar,Saffron,Milk,Coconut flakes\n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 220 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
    else if ( choice == 40 )
        {
            printf("\nIngredient :Milk,Cream,Sugar,Curd,Water\n\n");
            printf("Enter quantity : ");
            scanf("%d", &quantity);
            total = 30 * quantity ;
            printf("\nYour total amount is RM %.2f TK , Please pay at the counter\n ", total);
            {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else if (again == 2 )
                    m_m();
				else if (again != 1 , 2)
					{
					  printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
					  exit(0);
					}
            }
        }
     else if ( choice == 41 )
       {
           FILE *fp, *ft;
            char another, choice;

            struct emp
             {
               char name[40];
               int pri;
             };

    struct emp e; // structure variable creation

    char empname[40]; // string to store name of the food

    long int recsize; // size of each record of food

    fp = fopen("EMP.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("EMP.DAT","wb+");
        if(fp == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }

    // size of each record i.e. size of structure variable e
    recsize = sizeof(e);

    while(1)
    {
        system("cls"); //clear the console window
        gotoxy(30,10); // move the cursor to position 30, 10 from top-left corner
        printf("1. Add Food");
        gotoxy(30,12);
        printf("2. Display Food");
        gotoxy(30,14);
        printf("3. Delete Food");
        gotoxy(30,16);
        printf("4. Back To Menu");
        gotoxy(30,18);
        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END); // search the file and move cursor to end of the file
            // here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter Item Name: ");
                scanf("%s",e.name);
                printf("\nEnter Price: ");
                scanf("%d", &e.pri);
                fwrite(&e,recsize,1,fp); // write the record in the file
                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp); //this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  // read the file and fetch the record one record per fetch
            {
                printf("\nItem is %s",e.name);
                printf("\nPrice is: %d",e.pri);
            }
            getch();
            break;
        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of Food to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  // create a intermediate file for temporary storage
                rewind(fp); // move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  // read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  // if the entered record match
                    {
                        fwrite(&e,recsize,1,ft); // move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("EMP.DAT"); // remove the original file
                rename("Temp.dat","EMP.DAT"); // rename the temp file to original file name
                fp = fopen("EMP.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);// close the file
            system("cls");
            dinner();
        }
    }

       }
     else if ( choice == 42 )
        {
            m_m();
        }
     else if (choice != 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42)
            {
                system("cls");
                printf("\n\n\t\t   Invalid Choice Entered\n\n");
                dinner();

            }
  }

}

void exit(back)  /// Exit Screen
{
  printf("   \n\n\n        Thank you for coming to Bros Restaurant\n\n");
  printf("                   Have a nice day!\n\n");
  printf("                  Please come again  \n\n");
  getch();
  exit(0);

}


