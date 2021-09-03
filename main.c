
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int choix;
    float a,b,c;
    int r,d,e;
    int n;
     debut :
    printf("---BIENVENUE---\n");
    printf("-----MENU-----\n");
    printf("  1-somme\n");
    printf("  2-produit\n");
    printf("  3-soustraction\n");
    printf("  4-division\n");
    printf("  5-pgcd \n");
    printf("  6-racine\n");
    printf("  7-puissance\n");
    printf("------------------------\n");
    printf("veuiller inserer le numero de operation que vous voulez effectuer : \n");
    scanf("%d",&choix);
    switch(choix){
        case 1 : printf("veuiller entrer les deux nombres\n");
                 scanf("%f %f",&a,&b);
                 printf("la somme des deux nombres %.2f+%.2f=%.2f\n",a,b,a+b);
                 break;
        case 2 :  printf("veuiller entrer les deux nombres\n");
                 scanf("%f %f",&a,&b);
                 printf("le produit des deux nombres %.2f*%.2f=%.2f\n",a,b,a*b);
                 break;
        case 3 : printf("veuiller entrer les deux nombres\n");
                 scanf("%f %f",&a,&b);
                 printf("la difference entre ces deux nombres %.2f-%.2f=%.2f\n",a,b,a-b);
                 break;
        case 4 : printf("veuiller entrer les deux nombres\n");
                 scanf("%f %f",&a,&b);
                 if(b==0)
                    printf("IMPOSSIBLE d'effectuer cette operation\n");
                    else
                    printf("la division entre ces deux nombres %.2f/%.2f=%.2f\n",a,b,a/b);
                break;
        case 5:  printf("veuiller entrer les deux nombres\n");
                 scanf("%d %d",&d,&e);
                 r=d%e;
                 do{
                    d=e;
                    e=r;
                 }while(r==0);
            printf("le pgcd entre ces deux nombres est %d\n",e);
                break;
        case 6 : printf("veuiller entrer un nombre\n");
                 scanf("%f",&a);
                 if(a<0)
                    printf("IMPOSSIBLE d'effectuer cette operation\n");
                    else
                    printf("le racine de ce nombre %.2f=%.2f\n",a,sqrt(a));
                break;
        case 7 : printf("veuiller entrer les deux nombres\n");
                 scanf("%f %f",&a,&b);
                 c=pow(a,b);
                    printf("%.2f puissance %.2f est %.2f\n",a,b,c);
                break ;
            default : printf("ERREUR,veuiller taper un nombre convenable de 1 jusqu'a 7\n");

    }
   printf("vous voulez effectuer une autre operation - si oui taper 1 sinon 0 - \n");
             scanf("%d",&n);
             if(n==1)
                goto debut;






    return 0;
}
