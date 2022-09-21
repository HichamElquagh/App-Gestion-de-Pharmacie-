#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>



// c'est pour ajouter les prouduit
typedef struct {
    int choix,code,quantiteproduit;
    float prix;
    char nomproduit[100];
    char date[100];
    }   saisirproduit;
    saisirproduit elments [100];

    // c'est pour le tri par alphabet
    saisirproduit changer;

    // des variable pour  statistique d'achat
    float totalprix=0;
    float moyenprix=0;
    float maxprix=0;
    float minprix=0;
    //
    int conteur=0;
    int nombredachat = 0;

   // les fonctions
    void ajouterproduit();
    void rechercheproduit();
    void afficher();
    void achatproduit();
    void etatdestock();
    void allimenter();
    void supprimerstock();
    void statistiquevente();

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
        printf("\t 2 : Rechercher    \n");
        printf("\t 3 : pour l'affichage  \n");
        printf("\t 4 : pour achat \n ");
        printf("\t 5 : Gestion de stock \n ");
        printf("\t 6 : alimenter le stock \n ");
        printf("\t 7 : Supprimer \n ");
        printf("\t 8 : statistique de vente \n");
        printf("\t veuillez choisir un nombre :  ");
        scanf("%d",&choix);
        printf("\t  ----------------------------------------------------------  \n");
        printf("\n");
             switch (choix) {
                 case 1 :
                    ajouterproduit();
                    break;
                 case 2 :
                     rechercheproduit();
                    break;
                 case 3 :
                    afficher();
                    break;
                 case 4 :
                     achatproduit();
                    break;
                     case 5 :
                     etatdestock();
                    break;
                     case 6 :
                      allimenter();
                    break;
                    case 7 :
                    supprimerstock();
                    break;
                    case 8 :
                    statistiquevente();
                    break;
                    default :
                    printf("\t veuillez choisir un nombre entre 1 et 4 : \n");
                    printf("\n");
                    break;
            }
    }
    while(choix>=1 && choix >=4);
    };
// 1 c'est pour choisir entre combien de produit va ajouter
void ajouterproduit(){
    int n,n1;
    printf("\t 1 : voulez vous ajouter un produit \n ");
    printf("\t 2 : voulez vous ajouter plusieurs produits \n ");
    ici :
    printf("\t veuillez choisir entre 1 et 2 :  ");
    scanf("%d",&n);
    if (n>=3||n<=0)
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
        scanf("%f",&elments[conteur].prix);
        printf("\n");
        conteur++;
        system("cls");
        }
    printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
    getch();
    system("cls");
    designmenu ();
    affichemenu();

}
// 2 cette fonction pour rechercher le produits
void rechercheproduit(){
    int choixrecherche,i;
    int code,quantite11;
    printf("\t 1 : chercher un produit par code : \n");
    printf("\t 2 : chercher un produit par quantite : \n");
    printf("\t entrer un nombre : ");
    scanf("%d",&choixrecherche);
    if (choixrecherche==1){
        printf("\t veuillez entrer le code de produit : ");
        scanf("%d",&code);
        printf("\t---------------------------------------------------------------\n");
        printf("\t|| NOM DE PRODUIT || SON CODE || LA QUANTITE || LE PRIX ||   \n");
        printf("\t----------------------------------------------------------------\n");
        for( i=0;i<conteur;i++){
            if (code==elments[i].code){
                printf("\t %s            ||        %d  ||        %d    ||     %.2f ||     \n",elments[i].nomproduit,elments[i].code,elments[i].quantiteproduit,elments[i].prix);
                printf("\t-------------------------------------------------------------------\n");
            }
        }
        printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
        getch();
        system("cls");
        designmenu ();
        affichemenu();
    }
    else if (choixrecherche==2){
        printf("\t veuillez entrer la quantite de produit : ");
        scanf("%d",&quantite11);
        printf("\t-------------------------------------------------------------------\n");
        printf("\t|| NOM DE PRODUIT || SON CODE || LA QUANTITE || LE PRIX ||   \n");
        printf("\t-------------------------------------------------------------------\n");
        for( i=0;i<conteur;i++){
             if (quantite11==elments[i].quantiteproduit){
                printf("\t %s            ||        %d  ||        %d    ||     %.2f DH||     \n",elments[i].nomproduit,elments[i].code,elments[i].quantiteproduit,elments[i].prix);
                printf("\t-------------------------------------------------------------------\n");
             }
        }
        printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
        getch();
        system("cls");
        designmenu ();
        affichemenu();
    }
 }
// 3 c'est une fonction pour laffichage des produits
void afficher(){
    int isprixnom;
    printf("\t----------------------------------------------------------------------------------------\n");
    printf("\t|| NOM DE PRODUIT    || SON CODE     || LA QUANTITE     || LE PRIX        ||  LE  TTC ||   \n");
    printf("\t----------------------------------------------------------------------------------------\n");
    for(int i=0 ; i<conteur ;i++){
       printf("\t||    %s           || %d         ||  %d             || %.2f DH        ||   %.2f DH || \n",elments[i].nomproduit,elments[i].code,elments[i].quantiteproduit,elments[i].prix,elments[i].prix+(elments[i].prix*0.15));
       printf("\t----------------------------------------------------------------------------------------\n");
    }
    printf ("\t 1 : lister par nom \n ");
    printf(" \t 2 : lister par prix \n ");
    printf(" \t enter un nombre : ");
    scanf("%d",&isprixnom);
    if (isprixnom==1){
        triparnom();
    }
    if (isprixnom==2){
        triparnombre();
    }
}

// tri par nom
void triparnom(){
    int i,j;
    for( i=0;i<conteur;i++){
        for( j=i+1;j<conteur ;j++){
            if (strcmp(elments[i].nomproduit,elments[j].nomproduit)>0){
                 changer=elments[i];
                 elments[i]=elments[j];
                 elments[j]=changer;
            }
        }
    }
    printf("\t----------------------------------------------------------------------------------------\n");
    printf("\t|| NOM DE PRODUIT    || SON CODE     || LA QUANTITE     || LE PRIX        ||  LE  TTC ||   \n");
    printf("\t----------------------------------------------------------------------------------------\n");
    for(int i=0 ; i<conteur ;i++){
       printf("\t||    %s           || %d         ||  %d             || %.2f DH        ||   %.2f DH || \n",elments[i].nomproduit,elments[i].code,elments[i].quantiteproduit,elments[i].prix,elments[i].prix+(elments[i].prix*0.15));
       printf("\t----------------------------------------------------------------------------------------\n");
    }
    printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
    getch();
    system("cls");
    designmenu ();
    affichemenu();
};
//  tri par nombre
void triparnombre(){
    int i,j;
    for( i=0;i<conteur;i++){
        for( j=i+1;j<conteur ;j++){
            if (elments[i].prix<elments[j].prix){
                 changer=elments[i];
                 elments[i]=elments[j];
                 elments[j]=changer;
            }
        }
    }
    printf("\t----------------------------------------------------------------------------------------\n");
    printf("\t|| NOM DE PRODUIT    || SON CODE     || LA QUANTITE     || LE PRIX        ||  LE  TTC ||   \n");
    printf("\t----------------------------------------------------------------------------------------\n");
    for(int i=0 ; i<conteur ;i++){
       printf("\t||    %s           || %d         ||  %d             || %.2f DH        ||   %.2f DH || \n",elments[i].nomproduit,elments[i].code,elments[i].quantiteproduit,elments[i].prix,elments[i].prix+(elments[i].prix*0.15));
       printf("\t----------------------------------------------------------------------------------------\n");
    }
    printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
    getch();
    system("cls");
    designmenu ();
    affichemenu();
};

// 4 cette fonction pour l'achat de produit
void achatproduit(){
    int quantite,code;
    int n,i;
    time_t t = time(NULL);

    laaa :
    printf ("\t veuillez entrer la quantite :  ");
    scanf("%d",&quantite);
    printf ("\n");
    printf ("\t veuillez entrer le code de produit : ");
    scanf("%d",&code);
    for (int i=0;i<conteur;i++){
        if(code == elments[i].code){
            if(elments[i].quantiteproduit<quantite){
                printf("quantite introuvable");
                goto laaa;
            }
        }
    }
    for (int i=0;i<conteur;i++){
        if(code == elments[i].code){
            printf("\t la date d'achat est : %s",ctime(&t));
            printf("\n");
            strcpy(elments[i].date,ctime(&t));
            elments[i].quantiteproduit = elments[i].quantiteproduit-quantite;
            float totalpye = ((elments[i].prix*0.15)+elments[i].prix)*quantite;
            totalprix=(totalpye)+totalprix;
                if (totalpye > maxprix )
                maxprix=totalpye;
                    if (totalpye< minprix  || minprix == 0 ) {
                        minprix=totalpye;
                    }
            nombredachat++;
                          break;
        }
    }
    printf("\n");
    printf("\t voila votre achat est valider \n ");
    printf("\n");
    printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
    getch();
    system("cls");
    designmenu ();
    affichemenu();

}

// 5 cette fonction pour etat de stock
void etatdestock(){
     printf("\t--------------------------------------------------------------\n");
     printf("\t|| NOM DE PRODUIT || SON CODE || LA QUANTITE || LE PRIX ||   \n");
     printf("\t------------------------------------------------------------\n");
        for(int i=0;i<conteur;i++){
            if (elments[i].quantiteproduit<3){
                printf("\t %s            ||        %d  ||        %d    ||     %.2f DH||     \n",elments[i].nomproduit,elments[i].code,elments[i].quantiteproduit,elments[i].prix);
                printf("\t-------------------------------------------------------------\n");
                }
        }
    printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
    getch();
    system("cls");
    designmenu ();
    affichemenu();
}

// 6 cette fonction pour allimenter
void allimenter() {
    int i;
    int allquantite,allcode;
    bool found = false;
    printf("\t veuillez entrer la quantiter ajouter  : ");
    scanf("%d",&allquantite);
    ci :
    printf("\t veuillez entrer le code de produit : ");
    scanf("%d",&allcode);
    for(i=0;i<conteur;i++){
        if(allcode == elments[i].code)
            found = true;
    }
    if(found == false)
        goto ci;
    for( i=0 ; i<conteur ; i++){
        if(allcode==elments[i].code)
            elments[i].quantiteproduit=elments[i].quantiteproduit+allquantite;
   }
    printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
    getch();
    system("cls");
    designmenu ();
    affichemenu();
}
// 7 cette fonction pour supprimer les produit
supprimerstock(){
    int supcode;
    printf("\t pour supprimer un produit \n");
    printf("\t veuillez entrer le code de produit : ");
    scanf("%d",&supcode);
    for(int i=0;i<conteur;i++){
        if (supcode==elments[i].code){
            for(int j=i;j<conteur;j++){
                elments[j]=elments[j+1];
            }
            conteur--;
        }

    }
    printf("\t voila le produit est supprimer \n");
    printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
    getch();
    system("cls");
    designmenu ();
    affichemenu();

}
// 8 cette fonction pour statistique de vente
statistiquevente(){
    int n=1;
    float moyenne=totalprix/nombredachat;

    printf("\t---------------------------------------------------------------------------------------\n");
    printf("\t|| TOTAL DES PRIX         || MOYENNE         || LE MAX           ||  LE MIN        || \n");
    printf("\t---------------------------------------------------------------------------------------\n");
    for(int i=0 ; i<n ;i++){
        printf("\tLA DATE d'achat est  : \t %s ",elments[i].date);
        printf("\n");
        printf("\t||  %.2f DH             ||  %.2f DH          ||  %.2f DH           ||  %.2f DH        || \n",totalprix,moyenne,maxprix,minprix);
        printf("\t----------------------------------------------------------------------------------------\n");
    }
    printf ("\t cliquer sur entrer pour retour au menu :[-] \n ");
    getch();
    system("cls");
    designmenu ();
    affichemenu();
}








