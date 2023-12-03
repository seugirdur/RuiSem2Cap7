#define ex74

#include <stdio.h>
/*1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    Receba dados via teclado em uma funcao e imprima estes conteudos no video,
    em outra funcao, no seguinte formato.
     estrutura: char, int, long, float, double, unsigned char, unsigned int,
                unsigned long

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int             long          float           double
              unsigned char       unsigned int        unsigned long*/

#ifdef ex71

struct simples {
    char v_char;
    int v_int;
    long v_long;
    float v_float;
    double v_double;
    unsigned char v_uchar;
    unsigned int v_uint;
    unsigned long v_ulong;

};

int calcularIntComprimento(int num) {
    int comprimento = 0;
    while (num != 0) {
        num /= 10;
        comprimento++;
    }
    return comprimento;
}

int calcularLongComprimento(long num) {
    int comprimento = 0;
    while (num != 0) {
        num /= 10;
        comprimento++;
    }
    return comprimento;
}

int calcularFloatComprimento(float num) {
    int comprimento = 0;
    while ((int) num != 0) {
        num /= 10;
        comprimento++;
    }
    return comprimento;
}

int calcularDoubleComprimento(double num) {
    int comprimento = 0;
    while ( (int) num != 0) {
        num /= 10;
        comprimento++;
    }
    return comprimento;
}

int calcularUCharComprimento(unsigned char num) {
    int comprimento = 0;
    while (num != 0) {
        num /= 10;
        comprimento++;
    }
    return comprimento;
}

int calcularUIntComprimento(unsigned int num) {
    int comprimento = 0;
    while (num != 0) {
        num /= 10;
        comprimento++;
    }
    return comprimento;
}

int calcularULongComprimento(unsigned long num) {
    int comprimento = 0;
    while (num != 0) {
        num /= 10;
        comprimento++;
    }
    return comprimento;
}


static struct simples numeros;
int main() {
 printf("Digite um caractere: ");
    scanf("%c", &numeros.v_char);
        printf("Digite um número inteiro: ");

    scanf("%d", &numeros.v_int);
        printf("Digite um número longo: ");

    scanf("%ld", &numeros.v_long);
        printf("Digite um número de ponto flutuante: ");

    scanf("%f", &numeros.v_float);
        printf("Digite um número double: ");

    scanf("%lf", &numeros.v_double);
        printf("Digite um caractere sem sinal: ");

    scanf(" %c", &numeros.v_uchar);
        printf("Digite um número inteiro sem sinal: ");

    scanf(" %u", &numeros.v_uint);
        printf("Digite um número longo sem sinal: ");

    scanf(" %lu", &numeros.v_ulong);

    printf("%10s%10s%10s%10s%10s%10s%10s\n", "10", "20", "30", "40", "50", "60", "70");
    printf("123456789012345678901234567890123456789012345678901234567890123456789\n");
    printf("%*c%*d%*ld%*.1f%*.1lf\n", 5, numeros.v_char, calcularIntComprimento(numeros.v_int) + 10 - 1, numeros.v_int,  calcularLongComprimento(numeros.v_long) - calcularIntComprimento(numeros.v_int) + 16, numeros.v_long, calcularFloatComprimento(numeros.v_float) - calcularLongComprimento(numeros.v_long) + 16, numeros.v_float, calcularDoubleComprimento(numeros.v_double) - calcularFloatComprimento(numeros.v_float) + 16, numeros.v_double);
    printf("%*c%*u%*lu\n", 11, numeros.v_uchar, 19 + calcularUIntComprimento(numeros.v_uint), numeros.v_uint,
           9 + calcularULongComprimento(numeros.v_ulong), numeros.v_ulong);

    printf("\nDigite X para sair  \n");
    char saida;
    while(saida != 'X' && saida != 'x')
    {
        scanf(" %c", &saida);

        if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
        }
    }

    return 0;
}

#endif

#ifdef ex72
/* 2 - Escreva um programa com a estrutura de dados abaixo. Defina um vetor de
    estruturas de 4 elementos. Receba os dados pelo teclado em uma funcao
    e imprima-os no video em uma funcao. Utilize vetor de estruturas.
    Faca um menu com uma opcao para saida do programa.
		estrutura: nome, end, cidade, estado, cep                               */


struct Dados {
    char nome[20];
    char end[40];
    char cidade[30];
    char estado[3];
    char cep[9];

};
struct Dados dados[4];
char opc;
int i = 0;

void menu();

void entradadedados() {
    for (i = 0; i < 4; i++) {

        printf("Digite o nome[%d]: \n", i + 1);
        scanf("%s", &dados[i].nome);

        printf("Digite o Endereco[%d]: \n", i + 1);
        scanf("%s", &dados[i].end);

        printf("Digite a Cidade[%d]: \n", i + 1);
        scanf("%s", &dados[i].cidade);

        printf("Digite o estado[%d]: \n", i + 1);
        scanf("%s", &dados[i].estado);

        printf("Digite o CEP[%d]: \n", i + 1);
        scanf("%s", &dados[i].cep);

    }

    menu();
}

void exibirdados() {
    for (i = 0; i < 4; i++) {

        printf("Nome[%d]: %s \n", i + 1, dados[i].nome);

        printf("Endereco[%d]: %s \n", i + 1, dados[i].end);

        printf("Cidade[%d]: %s \n", i + 1, dados[i].cidade);

        printf("Estado[%d]: %s \n", i + 1, dados[i].estado);

        printf("CEP[%d]: %s \n", i + 1, dados[i].cep);

    }
    menu();
}


void finalizar() {
    printf("\nDigite X para sair  \n");
    char saida;
    while (saida != 'X' && saida != 'x') {
        scanf(" %c", &saida);

        if (saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
        }
    }
}

void menu() {
    printf("\n\nESTRUTURACAO DE DADOS\n\n\n\n");
    printf("Opcao 1 - Entrar Dados \n\n");
    printf("Opcao 2 - Exibir Dados \n\n");
    printf("Opcao 3 - Sair\n\n\n\n\n\n");

    fflush(stdin);
    scanf("%c", &opc);

    switch (opc) {
        case '1':
            entradadedados();
            break;
        case '2':
            exibirdados();
            break;
        case '3':
            finalizar();
            break;

        default:
            menu();
            break;
    }
}

void main() {
    menu();
}

#endif

#ifdef ex73


/*
    3 - Escreva um programa com a estrutura de dados abaixo. Receba 2 datas via
    teclado na funcao main(). Faca uma funcao que calcule o numero de dias
    entre elas e mostre o resultado no video na funcao main().
    Utilize vetor de estruturas.
                estrutura: dia, mes, ano                                         */

struct calend
{
    int dia;
    int mes;
    int ano;
};

int mesverif[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int calcularDias(struct calend data)
{
    int dias = 0;

    for (int i = 1; i < data.ano; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            dias += 366;
        }
        else
        {
            dias += 365;
        }
    }

    for (int i = 1; i < data.mes; i++)
    {
        dias += mesverif[i];
    }

    dias += data.dia;

    return dias;
}

int main()
{
    struct calend data[2];

    printf("Somar duas datas e devolver o número correspondente convertido em dias:\n\n");

    for (int i = 0; i < 2; i++)
    {
        printf("Digite a data %d: \n", i + 1);
        printf("Digite o ano: ");
        scanf("%d", &data[i].ano);

        // Restante do seu código para validar o ano...

        printf("Digite o mes: ");
        scanf("%d", &data[i].mes);

        // Restante do seu código para validar o mes...

        printf("Digite o dia: ");
        scanf("%d", &data[i].dia);

        // Restante do seu código para validar o dia...
    }

    int contd1 = calcularDias(data[0]);
    int contd2 = calcularDias(data[1]);

    int diferenca = contd2 - contd1;

    if (diferenca > 0)
    {
        printf("A quantidade de dias entre as datas é: %d\n", diferenca);
    }
    else if (diferenca < 0)
    {
        printf("A quantidade de dias entre as datas é: %d\n", -diferenca);
    }
    else
    {
        printf("A quantidade de dias entre as datas é: %d\n", 0);
        printf("Datas iguais! ");
    }

    printf("\nDigite X para sair  \n");

    char saida;

    while (1)
    {
        scanf(" %c", &saida);

        if (saida == 'X' || saida == 'x')
        {
            break;
        }
        else
        {
            printf("Erro, digite novamente  \n");
        }
    }

    return 0;
}

#endif

#ifdef ex74

/*
    4 - Escreva um programa com a estrutura de dados abaixo. Defina um vetor de
    estrutura de 4 elementos. Receba dados via teclado e imprima-os no video.
        Faca um menu com as seguintes opcoes:
        1 - receber todos os dados
        2 - imprime todos os dados
        3 - calcula o IMC de todas as pessoas.
        4 - sair
            Calculo do IMC = peso/(altura*altura).
            estrutura: nome, peso, altura                                          */




struct Dados
{
    char nome[20];
    float peso;
    float altura;

};

struct Dados dados[4];
char opc;
int i = 0;
float imc;

void menu();

void entradadedados()
{
    for(i=0; i<4;i++)
    {
        printf("Digite o Nome Pessoa [%d]: \n", i+1);
        scanf("%s",&dados[i].nome);

        printf("Digite o Peso Pessoa[%d]: \n", i+1);
        scanf("%f",&dados[i].peso);

        printf("Digite o Altura Pessoa[%d]: \n", i+1);
        scanf("%f",&dados[i].altura);

    }

    menu();
}

void imprimedados()
{

    for (i=0; i<4; i++)
    {

    printf("Nome Pessoa[%d]: %s \n", i+1, dados[i].nome );

    printf("Peso Pessoa[%d]: %f \n", i+1, dados[i].peso );

    printf("Altura Pessoa[%d]: %f \n", i+1, dados[i].altura );

    }
    menu();
}

void calculaimc()
{

    for (i=0; i<4; i++)
    {

    printf("Nome Pessoa[%d]: %s \n", i+1, dados[i].nome );

    imc = ((dados[i].peso)/(dados[i].altura*dados[i].altura));

    printf("IMC Pessoa[%d]: %f \n", i+1, imc);

    }
    menu();
}

void finalizar()
{
     printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x') {
        scanf(" %c", &saida);

            if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
            }
}
}

 void menu()
  {
       printf("\n\nCALCULO IMC\n\n\n\n");
     printf("Opcao 1 - Entrar Dados \n\n");
     printf("Opcao 2 - Imprimir Dados \n\n");
     printf("opcao 3 - Calcular IMC\n\n");
     printf("Opcao 4 - Sair\n\n\n\n\n\n");

    fflush(stdin);
    scanf("%c",&opc);

    switch(opc)
    {
        case '1': entradadedados();
        break;
        case '2': imprimedados();
        break;
        case '3': calculaimc();
        break;
        case '4': finalizar();
        break;

        default: menu();
        break;
    }
  }




void main()
{

    menu();


}


#endif

#ifdef ex75


#endif