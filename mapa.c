#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX 80 // tamanho variaveis
#define CAD 20 //maximo cadastros

int gcontador = 0, escolha, achou;

struct dados{ /// utilizar struct informacoes para dados
	int codigo;
	char titulo[MAX];
	char descricao[MAX];
	int status;
	char gerente[MAX];
	int ano;
	char responsavel[MAX];
	int necessario;
	char observacao[MAX];
};

struct dados informacoes[CAD];

//Metodos

void cadastro();
void impressaotodos();
void afazer();
void fazendo();
void concluido();
void trancado();
void menu();
void impressao();
void limpatela();


void limpatela(){
	printf("\n");
    system("pause");
    system("cls");
}

void cadastro(){
    system("cls");
    fflush(stdin);
    printf("\nCADASTRO DE PROJETOS\n");
    printf("\n");
    char resposta = 's';
    int i = 0;
    int codigo = 0;

    while(resposta =='s' && gcontador <CAD){
        fflush(stdin);
        gcontador++;
        informacoes[gcontador].codigo = gcontador;
        printf("Código %d\n", gcontador);
        fflush(stdin);
        printf("Digite título:\n");
        fflush(stdin);
        gets(informacoes[gcontador].titulo);
        printf("Informe a descrição do projeto: \n");
        fflush(stdin);
        gets(informacoes[gcontador].descricao);
        printf("Informe o status do projeto:\n");
        printf("1 - A fazer | 2 - Fazendo | 3 - Concluido | 4 - Trancado\n");
        fflush(stdin);
        scanf("%d", &informacoes[gcontador].status);
        printf("Informe o gerente responsável: \n");
        fflush(stdin);
        gets(informacoes[gcontador].gerente);
        printf("Informe o ano: \n");
        fflush(stdin);
        scanf("%d", &informacoes[gcontador].ano);
        printf("Informe o responsavel pela resolução do projeto: \n");
        fflush(stdin);
        gets(informacoes[gcontador].responsavel);
        printf("Informe o tempo em DIAS necessário para finalizacao do projeto: \n");
        fflush(stdin);
        scanf("%d", &informacoes[gcontador].necessario);
        printf("Informe observações necessárias ao projeto: \n");
        fflush(stdin);
        gets(informacoes[gcontador].observacao);
        if (gcontador < CAD){
            printf("Deseja continuar com o cadastro?\n");
            printf("s - Sim  || n - Não\n");
            scanf("%s", &resposta);
            system("cls");
        }else{
            printf("Numero máximo de cadastros atingidos!!\n");
            system("pause");
            resposta == 'n';
            system("cls");
            }
    }
}

void impressaotodos(){
    system("cls");
    printf("\nIMPRESSÃO DE TODOS OS PROJETOS\n");
    printf("\n");
    fflush(stdin);
    int linha=1;
    if (gcontador >=1){
        while (linha <=gcontador){
            printf("Código: %d \n", informacoes[linha].codigo);
            printf("Título: %s \n", informacoes[linha].titulo);
            printf("Descrição: %s \n", informacoes[linha].descricao);
            if (informacoes[linha].status == 1){
            printf("Status: A fazer");
            }else if(informacoes[linha].status == 2){
            printf("Status: Fazendo");
            }else if(informacoes[linha].status == 3){
            printf("Status: Concluido");
            }else if(informacoes[linha].status ==4){
             printf("Status: Trancado");
            }
            printf("\n");
            printf("Gerente: %s \n", informacoes[linha].gerente);
            printf("Ano: %d \n", informacoes[linha].ano);
            printf("Responsavel pela execução do projeto: %s \n", informacoes[linha].responsavel);
            printf("Tempo necessário para finalização: %d \n", informacoes[linha].necessario);
            printf("Informações importantes ao projeto: %s\n", informacoes[linha].observacao);
            printf("\n");
        linha++;
        }
    }else{
        printf("Nenhum registro encontrado!\n");
        printf("\n");
        system("pause");
        system("cls");
    }
	limpatela();
}

void afazer(){
    int i;
    printf("\nPROJETOS COM O STATUS A FAZER\n");
    printf("\n");
    printf("\n\n");
    for (i=0; i <=gcontador; i++){
        if (informacoes[i].status == 2){
            printf("Código: %d \n",informacoes[i].codigo);
            printf("Título: %s \n",informacoes[i].titulo);
            printf("Descrição: %s \n",informacoes[i].descricao);
            printf("Gerente: %s \n",informacoes[i].gerente);
            printf("Ano: %d \n",informacoes[i].ano);
            printf("Responsavel pela execução do projeto: %s \n",informacoes[i].responsavel);
            printf("Tempo necessário para finalização: %d \n",informacoes[i].necessario);
            printf("Informações importantes ao projeto: %s\n", informacoes[i].observacao);
        }
//        else{
//            printf("Nenhum registro encontrado!\n");
//            printf("\n");
//            system("pause");
//            system("cls");
//        }
    }
	limpatela();
}

void fazendo(){
    int i;
    printf("\nPROJETOS COM O STATUS FAZENDO\n");
    printf("\n");
    for (i=0; i <=gcontador; i++){
        if (informacoes[i].status == 3){
            printf("Código: %d \n",informacoes[i].codigo);
            printf("Título: %s \n",informacoes[i].titulo);
            printf("Descrição: %s \n",informacoes[i].descricao);
            printf("Gerente: %s \n",informacoes[i].gerente);
            printf("Ano: %d \n",informacoes[i].ano);
            printf("Responsavel pela execução do projeto: %s \n",informacoes[i].responsavel);
            printf("Tempo necessário para finalização: %d \n",informacoes[i].necessario);
            printf("Informações importantes ao projeto: %s\n", informacoes[i].observacao);
        }
//		else{
//            printf("Nenhum registro encontrado!\n");
//            printf("\n");
//            system("pause");
//            system("cls");
//        }
    }
    limpatela();
}

void concluido(){
    int i;
    printf("\nPROJETOS COM O STATUS CONCLUIDO\n");
    printf("\n");
    for (i=0; i <=gcontador; i++){
        if (informacoes[i].status == 4){
            printf("Código: %d \n",informacoes[i].codigo);
            printf("Título: %s \n",informacoes[i].titulo);
            printf("Descrição: %s \n",informacoes[i].descricao);
            printf("Gerente: %s \n",informacoes[i].gerente);
            printf("Ano: %d \n",informacoes[i].ano);
            printf("Responsavel pela execução do projeto: %s \n",informacoes[i].responsavel);
            printf("Tempo necessário para finalização: %d \n",informacoes[i].necessario);
            printf("Informações importantes ao projeto: %s\n", informacoes[i].observacao);
        }
//		else{
//            printf("Nenhum registro encontrado!\n");
//            printf("\n");
//            system("pause");
//            system("cls");
//        }
    }
    limpatela();
}

void trancado(){
    int i;
    printf("\nPROJETOS COM O STATUS TRANCADO\n");
    printf("\n");
    for (i=0; i <=gcontador; i++){
        if (informacoes[i].status == 5){
            printf("Código: %d \n",informacoes[i].codigo);
            printf("Título: %s \n",informacoes[i].titulo);
            printf("Descrição: %s \n",informacoes[i].descricao);
            printf("Gerente: %s \n",informacoes[i].gerente);
            printf("Ano: %d \n",informacoes[i].ano);
            printf("Responsavel pela execução do projeto: %s \n",informacoes[i].responsavel);
            printf("Tempo necessário para finalização: %d \n",informacoes[i].necessario);
            printf("Informações importantes ao projeto: %s\n", informacoes[i].observacao);
        }
//		else{
//            printf("Nenhum registro encontrado!\n");
//            printf("\n");
//            system("pause");
//            system("cls");
//        }
    }
    limpatela();
}

void limpapausemenu(){
    system("pause");
    system("cls");
    menu();
}

void menu(){
    printf("\n");
    fflush(stdin);
    do{
        printf("Selecione a opção desejada no Menu: \n");
        printf("1 - Cadastro de Projetos\n");
        printf("2 - Listar Projetos\n");
        printf("0 - Sair do Programa\n");
        printf("\n");
        printf("Seleção: ");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
            printf("1 - Cadastro de Projetos.\n");
            cadastro();
            break;
        case 2:
            printf("2 - Listar Projetos\n");
            impressao();
            break;
        case 0:
            printf("Finalizando aplicação.\n");
            break;
        default:
            printf("Opção invalida!\n");
            printf("\n");
           // limpapausemenu();
           break;
        }
    }while(escolha != 0);
}

void impressao(){
    system("cls");
    printf("\nIMPRESSÃO DE PROJETOS\n");
    fflush(stdin);
    int escolha, contador, achou, j, status;
    printf("Selecione a opção desejada\n");
    printf("1 - Todos os projetos:\n");
    printf("2 - Todos os projetos com o Status: - A Fazer\n");
    printf("3 - Todos os projetos com o Status: - Fazendo\n");
    printf("4 - Todos os projetos com o Status: - Concluído\n");
    printf("5 - Todos os projetos com o Status: - Trancado\n");
    printf("0 - Menu principal\n");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            impressaotodos();
            break;
        case 2:
            afazer();
            break;
        case 3:
            fazendo();
            break;
        case 4:
            concluido();
            break;
        case 5:
            trancado();
            break;
        case 0:
            menu();
            break;
        default:
            printf("Opção Invalida!!\n");
            printf("\n");
            system("pause");
            break;
    }
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha;
	printf("=========================================================\n");
    printf("|             Nome: Andrey Gheno Piekas                 |\n");
    printf("|                 RA: 21095958-5                        |\n");
    printf("=========================================================\n");
    printf("\n");
    menu();
	return (0);
}
