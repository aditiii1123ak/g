#inculde<stdio.h>
main()
{
     //1.Dispalys the menu
     printf("Pick an item:\n1.Pen\n2. Pen\n3. Eraser\n4. Book");
     //2. Read thier choice 
     int choice=0;
     scanf("%d,&choice);
     //3. Displays based on choice 
       
       switch(choice)
       {
         case 1:
              printf("You Picked Pen");
         case 2:
              printf("you Picked Pencil);
         case 3:
              printf("you Picked Eraser);
         case 4:
              printf("You Pick Book);
         default: printf("Invalid choice");
       }
 }      
