#include <stdio.h>
#include <stdlib.h>
#include<string.h>



// c'est pour ajouter les prouduit
typedef struct {
    int choix,code,quantiteproduit;
    int prix;
    char nomproduit[100];
               }saisirproduit;
    saisirproduit elments [100];
   typedef struct {
    int jour,mois,anne;
               }stdate;
     stdate date;
    int code[100];
    int quantite[100];
    int conteur=0;
     //typedef struct {
    //int choix,code,quantiteproduit,prix;
    //char nomproduit[100];
    //int date [100];
               //}achatproduit1;
       //achatproduit1 elements1[100];

int main() {

     designmenu ();
     affichemenu();

return 0;
}
// l'en tete de menu
void designmenu (){
    printf("\n");
    printf("\t      \t           \t      ------------GESTION DE PHARMACIE------------ \n");
    printf("\n");
    printf("\t \t                *********************************************************\n ");
    printf("\n");
    printf("\t  ----------------------------------------------------------  \n");
};
// c'est le menu du programe
void affichemenu ()  {

int choix;
do{
    printf("\t 1 : Ajouter les produits  \n ");
    printf("\t 2 : pour achat  \n");
    printf("\t 3 : pour l'affichage  \n");
    printf("\t 4 : Rechercher  \n ");
    printf("\t 5 : Supprimer \n ");
    printf("\t 6 : Gestion de stock \n ");
    printf("\t veuillez choisir un nombre :  ");
    scanf("%d",&choix);
    printf("\t  ----------------------------------------------------------  \n");
    printf("\n");
     switch (choix) {
         case 1 :
            ajouterproduit();
            break;
         case 2 :
            achatproduit();
            break;
         case 3 :
            afficher();
            break;
         case 4 :
             printf("voila");
            break;
         default :
            printf("\t veuillez choisir un nombre entre 1 et 4 : \n");
            printf("\n");
            break;
    }
}
while(choix>=1 && choix >=4);
};
// c'est pour choisir entre combien de produit va ajouter
 void ajouterproduit (){
     int n,n1;
    printf("\t 1 : voulez vous ajouter un produit \n ");
    printf("\t 2 : voulez vous ajouter plusieurs produits \n ");
    ici :
    printf("\t veuillez choisir entre 1 et 2 :  ");
    scanf("%d",&n);
    if (n>=3)
        goto ici;
        if (n==1)
            n1=n;
        if (n==2){
                printf("\n");
            printf("\t veuillez entrer le nombre de produit ajouter : ");
            scanf("%d",&n1);
        }
        system("cls");
    for(int i=0;i<n1;i++){
        printf("\n");
        printf("\t entrer le code de produit : ");
        scanf("%d",&elments[conteur].code);
        printf("\n");
        printf("\t entrer le nom de produit :  ");
        scanf("%s",&elments[conteur].nomproduit);
        printf("\n");
        printf(" \t entrer la quantite :  ");
        scanf("%d",&elments[conteur].quantiteproduit);
        printf("\n");
        printf(" \t entrer la prix :  ");
        scanf("%d",&elments[conteur].prix);
        printf("\n");
        conteur++;
        sleep(5);
        system("cls");
        designmenu ();
         affichemenu();
        }



}

void afficher(){
    printf("\t-------------------------------------------------------------------\n");
    printf("\t || NOM DE PRODUIT || SON CODE || LA QUANTITE || LE PRIX ||\n");
    printf("\t-------------------------------------------------------------------\n");
    for(int i=0;i<conteur;i++){
        printf("\t %s            ||        %d  ||        %d    ||     %d ||   \n",elments[i].nomproduit,elments[i].code,elments[i].quantiteproduit,elments[i].prix);
        printf("\t-------------------------------------------------------------------\n");
        }
        getch();
        designmenu ();
        affichemenu();

}
// cette fonction pour l'achat de produit
void achatproduit(){
    int n;
 printf("\t combien de produit que vous voulez acheter : ");
 scanf("%d",&n);
 printf ("\n");
   for (int i=0 ;i<n;i++) {
        printf ("\t veuillez entrer la quantite :  ");
        scanf("%d",&quantite[i]);
        printf ("\t veuillez entrer le code de produit : ");
        scanf("%d",&code[i]);
        if(code[i] == elments[i].code){
            printf("\t-------------------------------------------------------------------\n");
            printf("\t || NOM DE PRODUIT || SON CODE || LA QUANTITE || LE PRIX ||\n");
            printf("\t-------------------------------------------------------------------\n");
                 for(i=0 ; i<n ;i++){
                       printf("\t %s            ||        %d  ||        %d    ||     %d ||   \n",elments[i].nomproduit,elments[i].code,elments[i].quantiteproduit-quantite[i],elments[i].prix);
                       printf("\t-------------------------------------------------------------------\n");
                        }
                        }
                        }
                       sleep(6);
                       system("cls");
                       designmenu ();
                       affichemenu();
}

