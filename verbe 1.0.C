/*
	Une solution pour un programme
	de conjugaison en langage C

*/
#include <stdio.h>
#include <string.h>
// #include <conio.h>

void imperatif();
void infinitif();
void participe();
void participP();
char verbe [27] ;
char *vrbfin ;
int i,choix;

int main(){
char *pers[6] = {"je(j')", "tu", "il(elle)", "nous", "vous", "ils(elles)"} ;
do{
printf ("Entrez un verbe du deuxieme groupe : ") ;
gets (verbe) ; 
vrbfin = verbe + strlen(verbe) - 2 ;
}
while ( strcmp (vrbfin, "ir") ) ;

printf("A quel temps conjugais le verbe ?\n");
printf(" 1 pour le present\n");
printf(" 2 pour le passe simple\n");
printf(" 3 pour le futur\n");
printf(" 4 pour l'imparfait\n");
printf(" 5 pour le passe compose\n");
printf(" 6 pour le conditionnel present\n");
printf(" 7 pour le conditionnel passe\n");
printf(" 8 pour le plus-que-parfait\n");
printf(" 9 pour le passe anterieur\n");
printf("10 pour le subjonctif present\n");
printf("11 pour le subjonctif passe\n");
printf(" 0 pour les autres temps...: ");
scanf("%d",&choix);
switch(choix)
{
case 1: printf ("\nIndicatif présent :\n") ;

for (i=0 ; i<6 ; i++)
{
char *term[6]={"is", "is", "it", "issons", "issez", "issent" };
strcpy (vrbfin, term[i]) ;
printf ("%s %s\n", pers[i], verbe) ;
}
getch();
break;

case 2: printf("\nPasse simple :\n");
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"is", "is", "it", "imes", "ites", "irent" } ;

strcpy (vrbfin, term[i]) ;
printf ("%s %s\n", pers[i], verbe) ;
}
getch();
break;
case 3: printf("\nFutur simple :\n");
vrbfin= verbe + strlen(verbe);
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"ai", "as", "a", "ons", "ez", "ont" } ;
strcpy (vrbfin, term[i]) ;
printf ("%s %s\n", pers[i], verbe) ;
}
getch();
break;
case 4: printf("\nImparfait :\n");
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"issais", "issais", "issait", "issions", "issiez", "issaient" } ;

strcpy (vrbfin, term[i]) ;
printf ("%s %s\n", pers[i], verbe) ;
}
getch();
break;

case 5: printf("\nPasse compose :\n");
vrbfin= verbe + strlen(verbe)-1;
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"ai", "as", "a", "avons", "avez", "ont" } ;
char *pers[6] = {"j'", "tu", "il(elle)", "nous", "vous", "ils(elles)"} ;

strcpy (vrbfin,"") ;
printf ("%s %s %s\n", pers[i],term[i],verbe) ;
}
getch();
break;

case 6: printf("\nConditionnel present :\n");

vrbfin = verbe + strlen(verbe);
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"ais", "ais", "ait", "ions", "iez", "aient" } ;
strcpy (vrbfin, term[i]) ;
printf ("%s %s\n", pers[i], verbe) ;
}
getch();

break;
case 7: printf("\nConditionnel passe :\n");
vrbfin = verbe + strlen(verbe)-1;
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"aurais", "aurais", "aurait", "aurions", "auries", "auraient" } ;
char *pers[6] = {"j'", "tu", "il(elle)", "nous", "vous", "ils(elles)"} ;

strcpy (vrbfin,"") ;
printf ("%s %s %s\n", pers[i],term[i],verbe) ;
}
getch();
break;
case 8: printf("\nPlus-que-parfait :\n");
vrbfin= verbe + strlen(verbe)-1;
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"avais", "avais", "avait", "avions", "aviez", "avaient" } ;
char *pers[6] = {"j'", "tu", "il(elle)", "nous", "vous", "ils(elles)"} ;

strcpy (vrbfin,"") ;
printf ("%s %s %s\n", pers[i],term[i],verbe) ;
}
getch();
break;
case 9: printf("\nPasse anterieur :\n");
vrbfin = verbe + strlen(verbe)-1;
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"eus", "eus", "eut", "eumes", "eutes", "eurent" } ;
char *pers[6] = {"j'", "tu", "il(elle)", "nous", "vous", "ils(elles)"} ;

strcpy (vrbfin,"") ;
printf ("%s %s %s\n", pers[i],term[i],verbe) ;
}
getch();
break;
case 10: printf("\nSubjonctif present :\n");
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"isse", "isses", "isse", "issions", "issiez", "issent" } ;
strcpy (vrbfin, term[i]) ;
printf ("%s %s\n", pers[i], verbe) ;
}
getch();
break;
case 11: printf("\nSubjonctif passe :\n");
vrbfin= verbe + strlen(verbe)-1;
for (i=0 ; i<6 ; i++)
{
char *term[6] = {"aie", "aies", "ait", "ayons", "ayes", "aient" } ;
char *pers[6] = {"j'", "tu", "il(elle)", "nous", "vous", "ils(elles)"} ;

strcpy (vrbfin,"") ;
printf ("%s %s %s\n", pers[i],term[i],verbe) ;
}
getch();
break;

/*autres temps*/
case 0 : 
infinitif();
participe();
participP();
imperatif();
break; 
default: printf("\nChoix inconnu, recommencer\n\n");
while(choix != main())
break;

}
}
void infinitif(){
printf("\nInfinitif : %s\n",verbe);
}
void participe(){
char *term[1] = {"issant"} ;
strcpy (vrbfin, term[i]) ;
printf("\nParticipe : %s\n",verbe);
} 
void participP(){
vrbfin = verbe + strlen(verbe)-5;
strcpy (vrbfin,"") ;
printf("\nParticipe passe : %s\n",verbe);
}

void imperatif(){
printf("\nImperatif\n");
vrbfin = verbe + strlen(verbe)-1;
for (i=0 ; i<3 ; i++)
{
char *term[3] = {"is","issons","issez"} ;
strcpy (vrbfin,term[i]) ;
printf("\n%s",verbe);
}
}
