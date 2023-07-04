 #include <stdio.h> // comunicção com o usuario
 #include <stdlib.h>// alocação de espaço de memoria
 #include <locale.h>// alocação de texto por região 
 #include <string.h> // responsavel por cuidar das strings 
 
 int registro()
 {
char arquivo[40];
char cpf[40];
char nome[40];
char sobrenome[40];
char cargo[40];

printf("digite o cpf:");//coletanto informção de usuario 
scanf("%s", cpf);
strcpy(arquivo,cpf);// copiar o falor das strings

FILE *file;
file= fopen(arquivo,"w");
fprintf(file,cpf);
fclose(file);

file=fopen(arquivo,"a");
fprintf(file,",");
fclose(file);

printf("digite o nome a ser reistrado: ");
scanf("%s", nome);

file= fopen(arquivo,"a");
fprintf(file,nome);
fclose(file);


file=fopen(arquivo,"a");
fprintf(file,",");
fclose(file);

printf("digite o sobrenome a ser cadastrado: ");
scanf("%s", sobrenome);


file=fopen(arquivo,"a");
fprintf(file, sobrenome);
fclose(file);


file=fopen(arquivo,"a");
fprintf(file,",");
fclose(file);

printf("digite o cargo: ");
scanf("%s", cargo);

file = fopen(arquivo,"a");
fprintf(file,cargo);
fclose(file);
system("pause");
 }
 int consuta()
 {
 	setlocale(LC_ALL,"portuguese");
  char cpf[40];
  char conteudo[200];
  printf("digite o cpf a ser consutado: ");
  scanf("%s", cpf);
  
  FILE*file;
  file= fopen(cpf,"r");
  if(file==NULL)
  {
  	printf("não foi possivel abrir o arquivo, não localizado!!");
  }
  while(fgets(conteudo, 200, file)!=NULL)
  {
  	printf("\nessas são as informações do usúario:");
  	printf("%s", conteudo);
  	printf("\n\n");
  }
  system("pause");
  }
 flose(file);
 int deletar()
 {
 	char cpf[40];
 	
 	printf("digite o cpf a ser deletado: ");
 	scanf("%s", cpf);
 	
 	remove(cpf);
 	
 	FILE *file;
 	file= fopen(cpf, "r");
 	fclose(file);
	 if (file==NULL);
	 {
 		printf("cpf não encontrado\n");
 		system("pause");
	 }
 
 }
int main()
{
int opcao=0;//defini uma variavel
int laco=1;
	for(laco=1;laco=1;)
{
		system("cls");
	
	setlocale (LC_ALL, "portuguese");// definindo a linguagem 
	
     printf("	__cartório da EBAC__	\n\n");//inicio do menu
    printf("escolha a opção desejada no menu: \n\n");
    printf("\t1-registrar aluno:\n\n");
    printf("\t2-consultar aluno: \n\n");
    printf("\t3-deletar aluno:\n\n");
    printf("opção:");// fim do menu 

    scanf("%d",&opcao);// %d é respondavel por guardar um numero inteiro, e guardando as informaçes do usuario.

    system("cls");
    
    switch(opcao)
    { 
      case 1:
    	registro();
    	break;
	 
	    case 2:
		consuta();
        break;
  
      case 3:
 	   deletar();
        break;
      
     default:
 	   printf("essa opção não está disponvel, desculpe!!\n");
		system("pause");
		break;
     }
	}
}
