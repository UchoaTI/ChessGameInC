#include <stdio.h>
#define STRTAM 40


void criaMenulinhaSuperior (){
    int i;
    printf("%c",201);
    for(i=0;i<STRTAM;i++)
    printf("%c",205);
    printf("%c\n", 187);
}

void criaMenulinhaRodape(int tamX){
	int i;
    printf("%c",200);
    for(i=0;i<STRTAM;i++)
        printf("%c",205);
    printf("%c\n", 188);
}

void criaMenuItem(int tamX, char str[]){
	
	
    printf("%c",186);
    
    printf("%-*s",tamX,str);
        
        	
    printf("%c\n", 186);

}

void criaMenuLinhaHorizontal(int tamX){
	int i;
	printf("%c", 204);
	for(i=0;i<tamX;i++)
	printf("%c", 205);
	printf("%c\n", 185);
}

void montaMenu(){
	
	criaMenulinhaSuperior ();
    criaMenuItem(STRTAM,"XADREZ BRABO");
    criaMenuLinhaHorizontal(STRTAM);
    criaMenuItem(STRTAM,"1 - JOGAR  ");
    criaMenuItem(STRTAM,"2 - SOBRE ");
    criaMenuItem(STRTAM,"3 - QUITarme-ei ");
	criaMenulinhaRodape (STRTAM);
	printf("\n");
}

void main(){
	int a;
	montaMenu();
	printf("Escolha:      ");
	scanf ("%d",&a);
	switch ( a )
  {
    case 1 :
    system("C:\\Users\\xboy5\\Desktop\\Xadrez\\bin\\Debug\\dasdad.exe");
    
    case 2 :
    printf ("DESENVOLVIDO POR: Rickson Reis \n Lucas Ismael \nLucas Eduardo.");
    break;
    
    case 3 :
    printf("era pra ser o rank mas alguem esqueceu");
}

}

