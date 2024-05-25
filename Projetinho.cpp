#include <stdio.h> //biblioteca de comunicação com usuário 
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro()
{
    char arquivo[40];
    char cpf [40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);
    
    strcpy(arquivo,cpf); //Responsavel por copiar os valores das string
    
    FILE *file; //cria o arquivo
    file = fopen(arquivo, "w"); //cria o arquivo
    fprintf(file,cpf); //salva ovalorda variavel 
    fclose(file); //fecha o arquivo
    
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);

    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a"); //cria o arquivo
    fprintf(file,nome); //salva ovalorda variavel 
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);
    
    file = fopen(arquivo, "a"); //cria o arquivo
    fprintf(file,sobrenome); //salva ovalorda variavel 
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a"); //cria o arquivo
    fprintf(file,cargo); //salva ovalorda variavel 
    fclose(file); //fecha o arquivo
    
    system ("pause");
    
}

int consulta()
{
    setlocale(LC_ALL, "Portuguese"); //Definindo linguagem 
	
	char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado: ");
    scanf("%s" ,cpf);
    
    FILE *file;
    file = fopen(cpf,"r"); 
    
	if(file == NULL)
    {
    	printf("Não foi possivel abrir o arquivo,não localizado!.\n");
    	
	}

    while(fgets(conteudo, 200, file) != NULL)
    {
    	printf("\nEssas são as imformações do usuário: ");
    	printf("%s", conteudo);
    	printf("\n\n");
    
	}
	
	system("pause");
	
}

int deletar()
{
	printf("Você escolheu deletar nomes!\n");
	system("pause");
}

int main ()
        {
        int opcao=0; //Definido variáveis
        int laco =1; 
        
        for(laco=1;laco=1;)
        { 
        	system("cls");
        	
        	setlocale(LC_ALL, "Portuguese"); //Definindo linguagem 
        	
        	printf("### Cartório da EBAC ###\n\n"); //inicio do menu
        	printf("Escolha a opção desejada do menu\n\n");
        	printf("\t1 - Registar nomes\n");
        	printf("\t2 - Consultar nomes\n");
        	printf("\t3 - Deletar nomes\n");
        	printf("\t4 - Sair do sistema");
        	printf("Opção: "); //fim do menu
        	
        	scanf("%d", &opcao); //armazenamento a escolha do usuário
        	
        	system("cls");
        	
        	switch(opcao) //inicio da seleção 
        	{    
			
			    case 1:
        	    registro();
        	    break;
        	    
        	    case 2:
        	    consulta();
				break;
        	    
        	    case 3:
        	    deletar();
				break;
				
				case 4:
				printf("Obrigado por utilizar nosso sistema! \n");
				return 0;
				break;
				
				default:
				printf("Essa opção não está disponivel!\n");
				system("pause");
				break;
			
			} 
		    }
			}//fim da seleção 
