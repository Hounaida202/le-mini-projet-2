#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contacte
{ char nom[20];
  char num[15];
  char mail[50];
};


typedef struct contacte contact;
int main()
{
  int choix;
  contact c[50];
  int count=0;
   printf("welcome :)\n");
  do 
  {
     printf("choisissez votre choix:\n");
     printf("1: pour ajouter un contact\n");
     printf("2: pour modifier un contact\n");
     printf("3: pour supprimer un contact\n");
     printf("4: pour afficher tous les contacts\n");
     printf("5: pour rechercher un contact\n");
     printf("0: pour quitter : \n");
     scanf("%d",&choix);

      switch(choix)
     {
        case 1 :
        if(count<50)
        {
           printf("veuillez ajouter les informations de votre contact:\n");
           printf("le nom :\n");
           scanf(" %[^\n]",c[count].nom);
           printf("le numero de telephone :\n");
           scanf(" %[^\n]",c[count].num);
           printf("l adresse e mail :\n");
           scanf(" %[^\n]",c[count].mail);
           count++;
        }
        else
           printf("y a pas d espace pour un autre");
        break;
        
        case 2 :

           printf(" qu il est le nom du contact a modifier\n");
           char m[50];
           scanf(" %[^\n]",m);

          for(int i=0;i<count;i++)
        {
            if(strcmp(c[i].nom,m)==0)
          {
              printf("le neuveau nom est : \n");
              scanf(" %[^\n]",c[i].nom);

              printf("le neuveau numero de telephone est : \n");
              scanf(" %[^\n]",c[i].num);

              printf("la nouvelle adresse e mail est : \n");
              scanf(" %[^\n]",c[i].mail);
          }

            else
          {
              printf("le nom que vous avez tape n existe pas");
          }
        }
         break;

         
         case 3 :
           printf("qu il le nom a supprimer:\n");
           char s[50];
           scanf(" %[^\n]",s);
             for(int i=0;i<count;i++)
            {
                 if(strcmp(c[i].nom,s)==0)
               {
                    for(int j=i;j<count-1;j++)  
                    {
                       c[j]=c[j+1];
                    }
                       count--;
                       break;

               }

                 else
               {
                    printf("le nom n existe pas");
               }
            }


          break;



          case 4 :

             if(count!=0)
        {
                  printf("les contacts ajoutes sont:\n");
                   for(int i=0;i<count;i++)
                {
                    printf("le contact num %d : nom : %s , numero : %s , adresse e mail : %s\n",i+1,c[i].nom,c[i].num,c[i].mail);
                }
        }
             else
        {
                  printf("y a aucun contact");
        }
          break;



          case 5:
             printf(" qu il est le nom du contact chercher : \n");
             char ch[50];
             scanf(" %[^\n]",ch[50]);
                for(int i=0;i<count;i++)
            {
                   if(strcmp(c[i].nom,ch)==0)
                {
                      printf("le contact est existe\n");
                }
                   else
                {
                      printf("le nom existe pas\n");
                }
            }

           break;
           
           case 0:
              printf("BYE :( ");
           break;
           
           default:
           break;
 
      }     
    }
  while(choix!=0);
  return 0;
}