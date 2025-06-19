#include <stdio.h>      /* Para funções básicas como printf() */
#include <stdlib.h>     /* Para usar srand e rand(), que geram números aleatórios */
#include <locale.h>     /* Para usar acentos e caracteres como ç no código */
#include <time.h>       /* Para inicializar a semente com números diferentes a cada execução do programa */
#include <unistd.h>     /* Para usar a função sleep() */

/* Indicando ao compilador qual é o cabeçalho da função, fazendo a declaração de seu tipo da mesma forma que se declara as variáveis. A de-
claração da função consiste na escrita do seu cabeçalho seguida de um ponto e vírgula. Isso irá evitar erros de duplicação de funções no
código e consequentemente erro de compilação, já que em C não se pode ter duas funções com o mesmo nome */
void Menu_Jogo();
void Desenho_Menu();
void Instrucoes();
void Escolha_Dificuldade();
void Asterisco_Revelacoes();
void Cartas_Facil();
void Cartas_Medio();
void Cartas_Dificil();
void Embaralhar();
void Imprime_Cartas_Facil();
void Jogar();

/* Struct que contém uma variável que será utilizada para conferir se um par de cartas foi virado e deixar esse par impresso na tela */
typedef struct sJogo_memoria {
  int Cartas_corretas_F[4][4];
} J;

int Cartas_F[4][4] = {{14,21,15,16},{15,20,19,14},{21,16,17,18},{18,19,20,17}};
J acertadas;

typedef struct sJogo {
  int x;
  int y;
} Coordenadas; /* Struct que contém as variáveis das coordenadas que serão usadas no código */

Coordenadas primeira; /* Variáveis globais */
Coordenadas segunda;

void Desenho_Menu() {
  /* Criada para fins estéticos no jogo. */
  int Carinha = 4, Carinha2 = 2, Carinha3 = 5;
  printf("-----------------------------------------------------------------------------------------------------------------------\n");
  puts("\n\n");
  printf("\t\t\t|--------------------------------------------------------------------|\n");
  printf("\t\t\t|--------------------------------------------------------------------|\n");
  printf("\t\t\t|--------------------------------------------------------------------|\n");
  printf("\t\t\t|   %c      %c      %c      JOGO DA MEMÓRIA      %c      %c      %c   |\n", (char)Carinha, (char)Carinha2, (char)Carinha3, (char)Carinha3, (char)Carinha2, (char)Carinha);
  printf("\t\t\t|--------------------------------------------------------------------|\n");
  printf("\t\t\t|--------------------------------------------------------------------|\n");
  printf("\t\t\t|--------------------------------------------------------------------|\n");
  printf("\n\n-----------------------------------------------------------------------------------------------------------------------\n");
}

void Instrucoes() {
  int i = 26, j, a = 24, b = 25, c = 26; //Variáveis definidas só para fins estéticos no jogo.
  char caracter;
  printf("\t\t\t\t");
  for (j = 0; j < 61; j++) {
    printf("%c", (char) i);
  }
  printf("\n");
  for (j = 0; j < 2; j++) {
    printf("        %c                                                            %c\n", (char) a, (char) b);
  }
  printf("        %c Nesse jogo, uma determinada quantidade de cartas escondi- %c\n", (char) a, (char) b);
  printf("        %c das aparecerá na sua tela por um breve momento. Você terá %c\n", (char) a, (char) b);
  printf("        %c  que adivinhar a posição de duas cartas iguais para con-  %c\n", (char) a, (char) b);
  printf("        %c  seguir um acerto. Um número de tentativas é determinado  %c\n", (char) a, (char) b);
  printf("        %c para cada nível de dificuldade no jogo, o jogador deverá  %c\n", (char) a, (char) b);
  printf("        %c  achar todos os pares de cartas antes do número de tenta- %c\n", (char) a, (char) b);
  printf("        %c      tivas acabar para que ele ganhe. Caso contrário,      %c\n", (char) a, (char) b);
  printf("        %c                      ele perde.                           %c\n", (char) a, (char) b);
  printf("        %c                                                           %c\n", (char) a, (char) b);
  printf("        %c                                                           %c\n", (char) a, (char) b);
  printf("        %c                      Boa sorte!!!!                        %c\n", (char) a, (char) b);
  for (j = 0; j < 1; j++) {
    printf("        %c                                                            %c\n", (char) a, (char) b);
  }
  printf("\t\t\t\t");
  for (j = 0; j < 61; j++) {
    printf("%c", (char) c);
  }
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  printf("Pressione enter para voltar...");

  /*O uso de getchar(); é feito para ter uma pausa no sistema, de forma que o usuário precisará apertar alguma tecla para que o código ten-
  ha continuidade.*/
  getchar(); //Esse getchar descarta o caractere que ainda estiver no buffer, se tiver;
  caracter = getchar(); //já esse, aguarda a entrada do usuário, são colocados 2 getchar() para que o programa funcione corretamente
}

void Menu_Jogo() {
  char opcao;
  Desenho_Menu();
  do {
    printf("\n\n\n\t\t\tSELECIONE UMA OPÇÃO: \n");
    printf("\t\t\t1- Jogar\n");
    printf("\t\t\t2- Instruções\n");
    printf("\t\t\t3- Sair\n");
    printf("\t\t\tOpção escolhida: ");
    scanf(" %c", &opcao);
    system("cls");
    switch (opcao) {
    case '1':
      Escolha_Dificuldade(); /* Caso queira jogar, a função Escolha_Dificuldade será chamada */
      break;
    case '2':
      Instrucoes(); /* Chama a função que demonstra as instruções do jogo */
      system("cls");
      Desenho_Menu();
      break;
    case '3':
      system("cls");
      char certeza;
      printf("Você tem certeza que deseja sair do jogo? Caso sim, deverá ser iniciado novamente para jogar...\n\n");
      do {
        printf("(1) Voltar para o jogo\n(2) Sair mesmo\n\nOpção: ");
        scanf(" %c", &certeza);
        system("cls");
      } while (certeza != '1' && certeza != '2');
      if (certeza == '1') {
        Menu_Jogo();
      } else if (certeza == '2') {
        printf("End Game.\n");
      }
      break;
    default:
      printf("Opção inválida, escolha novamente.\n");
      Desenho_Menu();
      break;
    }
  } while (opcao != '1' && opcao != '3');
}

/* Essa Matriz é responsável por imprimir uma matriz de asteriscos, que será utilizada diversas vezes para imprimir as cartas escondidas no
jogo, ela recebe como parâmetro linha e coluna para poder ser modificada de acordo com as dificuldades "Fácil", "Média" e "Difícil". */
void Asterisco_Revelacoes(int *teste1, int *teste2) {

  int i, j;
  printf("(x)\n\n"); /* formatação para aparecer o x como horizontal */
  for (i = 0; i < *teste1; i++) {
    printf(" %d ", i);
    for (j = 0; j < *teste2; j++) {
      if (acertadas.Cartas_corretas_F[i][j] == 1) {
        printf(" [%c] ", (char) Cartas_F[i][j] + 5);
      } else {
        printf(" [*] ");
      }
    }
    printf("\n\n");
  }
  printf("     0    1    2    3  (y)  \n\n"); /* y na vertical */
}

void Escolha_Dificuldade() {
  char nivel;
  int Design = 16;
  do {
    puts("Escolha o nível de dificuldade do jogo: \n\n(F) Fácil \n(M) Média \n(D) Difícil ");
    scanf(" %c", &