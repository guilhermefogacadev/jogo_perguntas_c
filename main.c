#include <stdio.h>
#include<time.h>
#include <locale.h>
#include <stdlib.h>
int pon = 5,i,o,f,s;
char a;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int S;

    printf("\n\n");
    printf("BEM VINDO AO SHOW MILHAO\n");
    printf("\n\n\n");
    printf("DESEJA INICIAR\n");
    printf("\n***********\n");
    printf("\n (0)sim\n (1)NAO\n\n");
    printf("***********\n");
    printf("\n");
    scanf("%d",&S);

    if(S == 0)
    {
        q1();
    }
    else
    {
        printf("\nEspero sua volta\n");
        return 0;
    }

    return 0;
}
int fim()
{
    system("pause");
    system("cls");
    if (f == 0)
    {
        printf("Que pena vo�� errou !!!");
        return 0;
    }
    else
    {
        printf("parab�ns vo�� finalizou o QUIZ !!!! ");
        printf("Sua pontuas�o foi de %d",pon);
    }
}
int sair()
{
 printf("deseja sair?");
 printf("\n (0)sim\n (1)NAO\n\n");

 scanf("%d",&s);

    if(s == 0)
    {
        pon = pon/2;
        printf("Sua pontua��o finalfoi de %d",pon);
        exit(0);
    }
    else
    {
        pon = pon * 2;
    }
}
int sorteia()
{
    srand(time(NULL));
    i = rand()%5;
    o = rand()%5;
    return i,o;
}
int q1()
{
    system("pause");
    system("cls");
    sorteia();

    if(i == 0)
    {
        printf("Qual a recompensa da aula da tia suzan?\n");
        //(chocolate,bala,chiclete,bolo,suco)
        printf("A)chocolate\nB)bala\nC)chiclete\nD)bolo\nE)suco\n");
        scanf("%s",&a);
        if(a=='A')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }

    }
    else
    {
        if(i == 1)
        {
            printf("Qual plataforma os alunos de programa��o estruturada mais odeia?\n");
            //(youtube,twitch,uri,twitter,vk)
            printf("A)youtube\nB)twitch\nC)uri\nD)twitter\nE)vk\n");
            scanf("%s",&a);
            if(a=='C')
            {
                puts("Certa resposta!!");
            }
            else
            {
                fim();
                return 0;
            }

        }
        else
        {
            if(i == 2)
            {
                printf("Boolean corresponde a quais probabilidades?\n");
                //(verdadeiro e falso, 1 e 2 , 1 e 3, 1 e 4,0 e 5.A)
                printf("A)verdadeiro e falso\nB)1 e 2 \nC)1 e 3\nD)1 e 4\nE)0 e 5.A\n");
                scanf("%s",&a);
                if(a=='A')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(i == 3)
                {
                    printf("Um for � oq ?\n");
                    //(la�o de repeti��o,condicional,n�o faz nada, pula uma linha, exibe for para o usuario.A)
                    printf("A)la�o de repeti��o\nB)condicional\nC)n�o faz nada\nD)pula uma linha\nE)exibe for para o usuario.A\n");
                    scanf("%s",&a);
                    if(a=='A')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(i == 4)
                    {
                        printf("O que o printf faz?\n");
                        //(exibe informa��o para o usuario,n�o faz nada, pula linha, � um tipo de dado, retorna um valor.A)
                        printf("A)exibe informa��o para o usuario\nB)n�o faz nada\nC)pula linha\nD)� um tipo de dado\nE)retorna um valor.A\n");
                        scanf("%s",&a);
                        if(a=='A')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q2();
    return 0;

}
int q2()
{
    system("pause");
    system("cls");
    sorteia();

    if(o == 0)
    {
        printf("%c referencia qual tipo de dado ?\n");
        //(inteiro, caracter,string, boolean, float. B)
        printf("A)inteiro\nB)caracter\nC)string\nD)boolean\nE)float. B\n");
        scanf("%s",&a);
        if(a=='B')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(o == 1)
        {
            printf("O que o scanf faz?\n");
            //(recolhe informa��o do  usuario,n�o faz nada, pula linha, � um tipo de dado, retorna um valor.A)
            printf("A)recolhe informa��o do  usuario\nB)n�o faz nada\nC)pula linha\nD)� um tipo de dado\nE)retorna um valor.A\n");
            scanf("%s",&a);
            if(a=='A')
            {
                puts("Certa resposta!!");
            }
            else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(o == 2)
            {
                printf("D referencia qual tipo de dado ?\n");
                //(inteiro, caracter,string, boolean, float. A)
                printf("A)inteiro\nB)caracter\nC)string\nD)boolean\nE)float. A\n");
                scanf("%s",&a);
                if(a=='A')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(o == 3)
                {
                    printf("A palavra reservada IF significa ?\n");
                    //(condi��o, la�o de repeti��o, n�o faz nada, nega algo,pula linha.A)
                    printf("A)condi��o\nB)la�o de repeti��o\nC)n�o faz nada\nD)nega algo\nE)pula linha.A\n");
                    scanf("%s",&a);
                    if(a=='A')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(o == 4)
                    {
                        printf("Quais bibliotecas um codigo em C por padr�o necessita?\n");
                        //(studio.h e stdlib.h, caracter,string, math, grafic. B)
                        printf("A)studio.h e stdlib.h\nB)caracter\nC)stringznD)math\nE)grafic. A\n");
                        scanf("%s",&a);
                        if(a=='A')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q3();
    return 0;

}
int q3()
{
    system("pause");
    system("cls");
    sorteia();

    if(i == 0)
    {
        printf("f referencia qual tipo de dado ?\n");
        //(inteiro, caracter,string, boolean, float. E)
        printf("A)inteiro\nB)caracter\nC)string\nD)boolean\nE)float. E\n");
        scanf("%s",&a);
        if(a=='E')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(i == 1)
        {
            printf("s referencia qual tipo de dado?\n");
            //(inteiro, caracter,double, boolean, float. B)
            printf("A)inteiro\nB)caracter\nC)string\nD)boolean\nE)float. E\n");
            scanf("%s",&a);
            if(a=='E')
            {
                puts("Certa resposta!!");
            }
            else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(i == 2)
            {
                printf("A palavra reservada ELSE significa ?\n");
                //(Quando a condi��o do if n�o � aceita, la�o de repeti��o, n�o faz nada, nega algo,pula linha.A)
                printf("A)Quando a condi��o do if n�o � aceita\nB)la�o de repeti��o\nC)n�o faz nada\nD)nega algo\nE)pula linha.A\n");
                scanf("%s",&a);
                if(a=='A')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(i == 3)
                {
                    printf("A palavra reservada WHILE significa?\n");
                    //(condi��o, la�o de repeti��o, n�o faz nada, nega algo,pula linha.A)
                    printf("A)condi��o\nB)la�o de repeti��o\nCn�o faz nada\nD)nega algo\nE)pula linha.A\n");
                    scanf("%s",&a);
                    if(a=='A')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(i == 4)
                    {
                        printf("O que � uma matriz?\n");
                        //(vetor bimiensional, igreja de uma cidade, inicio de uma fun��o,la�o de repeti��o,condi��o.A)
                        printf("A)vetor bimiensional\nB)igreja de uma cidade\nC)inicio de uma fun��o\nD)la�o de repeti��o\nE)condi��o.A\n");
                        scanf("%s",&a);
                        if(a=='A')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q4();
    return 0;

}
int q4()
{
    system("pause");
    system("cls");
    sorteia();

    if(o == 0)
    {
        printf("O que � um vetor?\n");
        //(condi��o, igreja de uma cidade, inicio de uma fun��o,la�o de repeti��o,estrutura de dados que armazena uma cole��o de elementos.E)
        printf("A)condi��o\nB)igreja de uma cidade\nC)inicio de uma fun��o\nD)la�o de repeti��o\nE)estrutura de dados que armazena uma cole��o de elementos.E\n");
        scanf("%s",&a);
        if(a=='E')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(o == 1)
        {
            printf("O tipo de dado int se refere a que tipo de dado?\n");
            //(inteiro, caracter,string, boolean, float. A)
            printf("A)inteiro\nB)caracter\nC)string\nD)boolean\nE)float. A\n");
            scanf("%s",&a);
            if(a=='A')
            {
                puts("Certa resposta!!");
            }
            else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(o == 2)
            {
                printf("O tipo de dado char se refere a que tipo de dado?\n");
                //(inteiro, caracter,string, boolean, float. B)
                printf("A)inteiro\nB)caracter\nC)string\nD)boolean\nE)float. B\n");
                scanf("%s",&a);
                if(a=='B')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(o == 3)
                {
                    printf("O tipo de dado double se refere a que tipo de dado?\n");
                    //(inteiro, caracter,string, valor quebrado, float. D)
                    printf("A)inteiro\nB)caracter\nC)string\nD)valor quebrado\nE)float. D\n");
                    scanf("%s",&a);
                    if(a=='D')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(o == 4)
                    {
                        printf("O tipo de dado float se refere a que tipo de dado?\n");
                        //(inteiro, caracter,string, boolean, flutuante. E)
                        printf("A)inteiro\nB)caracter\nC)string\nD)boolean\nE)flutuante. E\n");
                        scanf("%s",&a);
                        if(a=='E')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q5();
    return 0;

}
int q5()
{
    system("pause");
    system("cls");
    sorteia();
    if(i == 0)
    {
        printf("O uso de & significa o que na linguagem C?\n");
        //(ponteiro, condi��o, la�o de repeti��o, loop, nada. A)
        printf("A)ponteiro\nB)condi��o\nC)la�o de repeti��o\nD)loop\nE)nada. A\n");
        scanf("%s",&a);
        if(a=='A')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(i == 1)
        {
            printf("O que a palavra reservada return executa?\n");
            //(Chama outras fun��es,Inicia o c�digo,Retorna Algo,� apenas uma variavel, N�o faz nada.C)
            printf("A)Chama outras fun��es\nB)Inicia o c�digo\nC)Retorna Algo\nD)� apenas uma variavel\nE)N�o faz nada.C\n");
            scanf("%s",&a);
            if(a=='C')
            {
                puts("Certa resposta!!");
            }
                else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(i == 2)
            {
                printf("O que o barra n executa?\n");
                //(Pula uma linha,Exibe a letra N,N�o faz Nada,Nega Algo,Conta quantas letras N tem na palavra. A)
                printf("A)Pula uma linha\nB)Exibe a letra N\nC)N�o faz Nada\nD)Nega Algo\nE)Conta quantas letras N tem na palavra. A\n");
                scanf("%s",&a);
                if(a=='A')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(i == 3)
                {
                    printf("O que o simbolo + significa?\n");
                    //(soma,divisao,multiplica��o,resto da divisao,subtra��o. A)
                    printf("A)soma\nB)divisao\nC)multiplica��o\nDresto da divisao\nE)subtra��o. A\n");
                    scanf("%s",&a);
                    if(a=='A')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(i == 4)
                    {
                        printf("O que o simbolo - significa?\n");
                        //(soma,divisao,multiplica��o,resto da divisao,subtra��o. E)
                        printf("A)soma\nB)divisao\nC)multiplica��o\nD)resto da divisao\nE)subtra��o. E\n");
                        scanf("%s",&a);
                        if(a=='E')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q6();
    return 0;

}
int q6()
{
    system("pause");
    system("cls");
    sorteia();

    if(o == 0)
    {
        printf("O que o simbolo += significa?\n");
        //(soma,divisao,multiplica��o,resto da divisao,subtra��o. A)
        printf("A)soma\nB)divisao\nC)multiplica��o\nD)resto da divisao\nE)subtra��o. A\n");
        scanf("%s",&a);
        if(a=='A')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(o == 1)
        {
            printf("O que o simbolo ++ significa?\n");
            //(soma,divisao,multiplica��o,resto da divisao,subtra��o. A)
            printf("A)soma\nB)divisao\nC)multiplica��o\nD)resto da divisao\nE)subtra��o. A\n");
            scanf("%s",&a);
            if(a=='A')
            {
                puts("Certa resposta!!");
            }
            else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(o == 2)
            {
                printf("Qual a materia a Prof(a) Giani ministra?\n");
                //(Programa��o, Calculo II, Probabilidade e Estatistica, Linguagem Estruturada,Banco de Dados. D)
                printf("A)Programa��o\nB)Calculo II\nC)Probabilidade e Estatistica\nD)Linguagem Estruturada\nE)Banco de Dados. D\n");
                scanf("%s",&a);
                if(a=='D')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(o == 3)
                {
                    printf("29- Qual a materia o Prof Vitor Marchini ministra?\n");
                    //(Programa��o, Calculo II, Probabilidade e Estatistica, Linguagem Estruturada,Banco de Dados. C)
                    printf("A)Programa��o\nB)Calculo II\nC)Probabilidade e Estatistica\nD)Linguagem Estruturada\nE)Banco de Dados. C\n");
                    scanf("%s",&a);
                    if(a=='C')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(o == 4)
                    {
                        printf("Qual a materia o Prof Evandro Nakamura ministra?\n");
                        //(Programa��o, Calculo II, Probabilidade e Estatistica, Linguagem Estruturada,Banco de Dados. B)
                        printf("A)Programa��o\nB)Calculo II\nC)Probabilidade e Estatistica\nD)Linguagem Estruturada\nE)Banco de Dados. B\n");
                        scanf("%s",&a);
                        if(a=='B')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q7();
    return 0;

}
int q7()
{
    system("pause");
    system("cls");
    sorteia();

    if(i == 0)
    {
        printf("Qual a materia a Prof(a) Suzan ministra ?\n");
        //(Programa��o, Calculo II, Probabilidade e Estatistica, Linguagem Estruturada,Banco de Dados. A)
        printf("A)Programa��o\nB)Calculo II\nC)Probabilidade e Estatistica\nD)Linguagem Estruturada\nE)Banco de Dados. A\n");
        scanf("%s",&a);
        if(a=='A')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(i == 1)
        {
            printf("???????");
        }
        else
        {
            if(i == 2)
            {
                printf("Se a variavel x recebe o valor 10 , em seguinda o comando x++ � executado, qual o resultado de x\n?");
                //(4,6,7,11,8. D)
                printf("A)4\nB)6\nC)7\nD11\nE)8. D\n");
                scanf("%s",&a);
                if(a=='D')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(i == 3)
                {
                    printf("34- Se a variavel x recebe o valor 10 , em seguinda o comando x-- � executado, qual o resultado de x\n?");
                  //(11,10,7,0,9. E)
                printf("A)11\nB)10\nC)7\nD)0\nE)9. E\n");
                scanf("%s",&a);
                if(a=='E')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
                }
                else
                {
                    if(i == 4)
                    {
                        printf("Se a variavel x recebe o valor 10 , em seguinda o comando x=x+1 � executado, qual o resultado de x?\n");
                        //(10,9,7,11,8. D)
                        printf("A)10\nB)9\nC)7\nD)11\nE)8. D\n");
                        scanf("%s",&a);
                        if(a=='D')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q8();
    return 0;

}
int q8()
{
    system("pause");
    system("cls");
    sorteia();

    if(o == 0)
    {
        printf("Se a variavel x recebe o valor 10 , em seguinda o comando x=x-1 � executado, qual o resultado de x?\n");
        //(4,11,9,10,8. D)
        printf("A)4\nB)11\nC)9\nD)10\nE)8. D\n");
        scanf("%s",&a);
        if(a=='D')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(o == 1)
        {
            printf("Analise o seguinte c�digo if(x>10), quais valores x ter� que assumir para satisfazer a condi��o?\n");
            //(Valores maiores que 10,Valores maiores que 9,Valores maiores que 8,Valores maiores que 1,Valores maiores que 8. A)
            printf("A)Valores maiores que 10\nB)Valores maiores que 9\nC)Valores maiores que 8\nD)Valores maiores que 1\nE)Valores maiores que 8. A\n");
            scanf("%s",&a);
            if(a=='A')
            {
                puts("Certa resposta!!");
            }
            else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(o == 2)
            {
                printf("Analise o seguinte c�digo if(x!=10), quais valores x ter� que assumir para satisfazer a condi��o?\n");
                //Valores diferentes que 10,Valores diferentes que 9,Valores diferentes que 8,Valores diferentes que 1,Valores diferentes que 8. A)
                printf("A)Valores diferentes que 10\nB)Valores diferentes que 9\nC)Valores diferentes que 8\nD)Valores diferentes que 1\nE)Valores diferentes que 8. A\n");
                scanf("%s",&a);
                if(a=='A')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(o == 3)
                {
                    printf("Analise o seguinte c�digo if(x<10), quais valores x ter� que assumir para satisfazer a condi��o?\n");
                    //(Valores menores que 10,Valores menores que 9,Valores menores que 8,Valores menores que 1,Valores menores que 8. A)
                    printf("A)Valores menores que 10\nB)Valores menores que 9\nC)Valores menores que 8\nD)Valores menores que 1\nE)Valores menores que 8. A\n");
                    scanf("%s",&a);
                    if(a=='A')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(o == 4)
                    {
                        printf("Analise o seguinte c�digo if(x==10), quais valores x ter� que assumir para satisfazer a condi��o?\n");
                        //(Valores iguais a 10,Valores iguais a 9,Valores iguais a  8,Valoresiguais a 1,Valores iguais a  8. A)
                        printf("A)Valores iguais a 10\nB)Valores iguais a 9\nC)Valores iguais a  8\nD)Valoresiguais a 1\nE)Valores iguais a  8. A\n");
                        scanf("%s",&a);
                        if(a=='A')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q9();
    return 0;

}
int q9()
{
    system("pause");
    system("cls");
    sorteia();

    if(i == 0)
    {
        printf("Analise o seguinte c�digo if(x>10) else{ printf(Entrou), quais valores x ter� que assumir entrar no else?\n");
        //(Valores menores que 10,Valores menores que 9,Valores menores que 8,Valores menores que 1,Valores menores que 8. A)
        printf("A)Valores menores que 10\nB)Valores menores que 9\nC)Valores menores que 8\nD)Valores menores que 1\nE)Valores menores que 8. A\n");
        scanf("%s",&a);
        if(a=='A')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(i == 1)
        {
            printf("Analise o seguinte c�digo if(x!=10) else{ printf(Entrou), quais valores x ter� que assumir entrar no else?\n");
            //(Valores diferentes a 10,Valores iguais a 9,Valores iguais a 8,Valores iguais a 1,Valores iguais a 8. A)
            printf("A)Valores diferentes a 10\nB)Valores iguais a 9\nC)Valores iguais a 8\nD)Valores iguais a 1\nE)Valores iguais a 8. A\n");
            scanf("%s",&a);
            if(a=='A')
            {
                puts("Certa resposta!!");
            }
                else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(i == 2)
            {
                printf("Analise o seguinte c�digo if(x<10) else{ printf(Entrou), quais valores x ter� que assumir entrar no else?\n");
                //(Valores maiores que 10,Valores maiores que 9,Valores maiores que 8,Valores maiores que 1,Valores maiores que 8. A)
                printf("A)Valores maiores que 10\nB)Valores maiores que 9\nC)Valores maiores que 8\nD)Valores maiores que 1\nE)Valores maiores que 8. A\n");
                scanf("%s",&a);
                if(a=='A')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(i == 3)
                {
                    printf("Analise o seguinte c�digo if(x==10) else{ printf(Entrou), quais valores x ter� que assumir entrar no else?\n");
                    //(Valores iguais que 10,Valores diferentes que 9,Valores diferentes que 8,Valores diferentes que 1,Valores diferentes que 8. A)
                    printf("A)Valores iguais a 10\nB)Valores iguais a 9\nC)Valores iguais a  8\nD)Valoresiguais a 1\nE)Valores iguais a  8. A\n");
                    scanf("%s",&a);
                    if(a=='A')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(i == 4)
                    {
                        printf("Analise o seguinte c�digo int valor =1, valor--, valor=0. Qual a sa�da?\n");
                        //(11,10,7,0,9. E)
                        printf("A)11\nB)10\nC)7\nD)0\nE)9. E\n");
                        scanf("%s",&a);
                        if(a=='E')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q10();
    return 0;

}
int q10()
{
    system("pause");
    system("cls");
    sorteia();

    if(o == 0)
    {
        printf("Analise o seguinte c�digo int valor =2, valor++. Qual a sa�da?\n");
        //(11,3,7,0,9. B)
        printf("A)11\nB)3\nC)7\nD)0\nE)9. B\n");
        scanf("%s",&a);
        if(a=='B')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(o == 1)
        {
            printf("Analise o seguinte c�digo int valor =3, valor+=1. Qual a sa�da?\n");
            //(11,10,7,0,4. E)
            printf("A)11\nB)10\nC)7\nD)0\nE)4. E\n");
            scanf("%s",&a);
            if(a=='E')
            {
                puts("Certa resposta!!");
            }
            else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(o == 2)
            {
                printf("Analise o seguinte c�digo int valor =4, valor=3, valor++. Qual a sa�da?\n");
                //(4,10,7,0,9. A)
                printf("A)4\nB)10\nC)7\nD)0\nE)9. A\n");
                scanf("%s",&a);
                if(a=='A')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(o == 3)
                {
                    printf("O que && significa na linguagem C?\n");
                    //(soma, e ,multiplica��o,resto da divisao,subtra��o. B)
                    printf("A)soma\nB)e\nC)multiplica��o\nD)resto da divisao\nE)subtra��o. B\n");
                    scanf("%s",&a);
                    if(a=='B')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(o == 4)
                    {
                        printf("O que || significa na linguagem C?\n");
                        //(soma,divisao,multiplica��o,resto da divisao,ou. E)
                        printf("A)soma\nB)divisao\nC)multiplica��o\nD)resto da divisao\nE)ou. E\n");
                        scanf("%s",&a);
                        if(a=='E')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q11();
    return 0;

}
int q11()
{
    system("pause");
    system("cls");
    sorteia();

    if(i == 0)
    {
        printf("O que o simbolo * significa em C?\n");
        //(soma,divisao,multiplica��o,resto da divisao,subtra��o. C)
        printf("A)soma\nB)divisao\nC)multiplica��o\nD)resto da divisao\nE)subtra��o. C\n");
        scanf("%s",&a);
        if(a=='C')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(i == 1)
        {
            printf("Analise o seguinte c�digo if(x>=10), quais valores x ter� que assumir para satisfazer a condi��o?\n");
            //(x maior que 10, x maior ou igual a 10, x igual a 10, x menor que 10, x diferente de 10.B)
            printf("A)x maior que 10\nB)x maior ou igual a 10\nC)x igual a 10\nD)x menor que 10\nE)x diferente de 10.B\n");
            scanf("%s",&a);
            if(a=='B')
            {
                puts("Certa resposta!!");
            }
            else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(i == 2)
            {
                printf("Analise o seguinte c�digo if(x<=10), quais valores x ter� que assumir para satisfazer a condi��o?\n");
                //(x maior que 10, x maior ou igual a 10, x igual a 10, x menor que 10, x diferente de 10.d)
                printf("A)x maior que 10\nB)x maior ou igual a 10\nC)x igual a 10\nD)x menor que 10\nE)x diferente de 10.d\n");
                scanf("%s",&a);
                if(a=='D')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(i == 3)
                {
                    printf("O que o simbolo / significa em C?\n");
                    //(soma,divisao,multiplica��o,resto da divisao,subtra��o.B)
                    printf("A)soma\nB)divisao\nC)multiplica��o\nD)resto da divisao\nE)subtra��o.B\n");
                    scanf("%s",&a);
                    if(a=='B')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(i == 4)
                    {
                        printf("O que o simbolo % significa em C?\n");
                        //(soma,divisao,multiplica��o,resto da divisao,subtra��o. D)
                        printf("A)soma\nB)divisao\nC)multiplica��o\nD)resto da divisao\nE)subtra��o. D\n");
                        scanf("%s",&a);
                        if(a=='D')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    sair();
    q12();
    return 0;

}
int q12()
{
    system("pause");
    system("cls");
    sorteia();

    if(o == 0)
    {
        printf("Analise o seguinte c�digo int vetor[1], vetor[0]=1; vetor[1]=0. Qual o valor do vetor na posi��o 3?\n");
        //(1,2,3,4,ERRO.E)
        printf("A)1\nB)2\nC)3\nD)4\nE)ERRO.E\n");
        scanf("%s",&a);
        if(a=='E')
        {
            puts("Certa resposta!!");
        }
        else
        {
            fim();
            return 0;
        }
    }
    else
    {
        if(o == 1)
        {
            printf("Analise o seguinte c�digo int vetor[1], vetor[0]=0; vetor[1]=1. Qual o valor do vetor na posi��o 0?\n");
            //(1,0,3,4,ERRO.B)
            printf("A)1\nB)0\nC)3\nD)4\nE)ERRO.B\n");
            scanf("%s",&a);
            if(a=='B')
            {
                puts("Certa resposta!!");
            }
            else
            {
                fim();
                return 0;
            }
        }
        else
        {
            if(o == 2)
            {
                printf("Analise o seguinte c�digo int vetor[1], vetor[0]=1; vetor[1]=2. Qual o valor do vetor na posi��o 1?\n");
                //(1,2,3,4,ERRO.B)
                printf("A)1\nB)2\nC)3\nD)4\nE)ERRO.B\n");
                scanf("%s",&a);
                if(a=='B')
                {
                    puts("Certa resposta!!");
                }
                else
                {
                    fim();
                    return 0;
                }
            }
            else
            {
                if(o == 3)
                {
                    printf("Analise o seguinte c�digo int vetor[1], vetor[0]=0; vetor[1]=1. Qual o valor do vetor na posi��o 3?\n");
                    //(1,2,3,4,ERRO.E)
                    printf("A)1\nB)2\nC)3\nD)4\nE)ERRO.E\n");
                    scanf("%s",&a);
                    if(a=='E')
                    {
                        puts("Certa resposta!!");
                    }
                    else
                    {
                        fim();
                        return 0;
                    }
                }
                else
                {
                    if(o == 4)
                    {
                        printf("Analise o seguinte c�digo int vetor[1], vetor[0]=1; vetor[1]=1. Qual o valor do vetor na posi��o 0?\n");
                        //(1,2,3,4,ERRO.A)
                        printf("A)1\nB)2\nC)3\nD)4\nE)ERRO.A\n");
                        scanf("%s",&a);
                        if(a=='A')
                        {
                            puts("Certa resposta!!");
                        }
                        else
                        {
                            fim();
                            return 0;
                        }
                    }
                }
            }
        }
    }
    f = 1;
    fim();
    return 0;

}
