#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#define controle 0

void startup()
{
    printf("\t\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t\t|  TRABALHO PC2   |\n");
    printf("\t\t\t\t\t\t===================\n");
    sleep(2);
    printf("\n\t\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t\t|     POKEDEX     |\n");
    printf("\t\t\t\t\t\t===================\n");
    sleep(2);
    printf("\n\t\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t\t|   INTEGRANTES   |\n");
    printf("\t\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|  VITOR GABRIEL  |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|   JO?O VITOR    |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|   LUAN JUNIO    |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t===================\n");
    sleep(5);
    system("cls");
    printf("\n\n\t\t\t\t\t\tInitializing");
    for(int i=0; i<6; i++)
    {
        printf(".");
        if(i%2==0)
        {
            sleep(1);
            system("cls");
            printf("\n\n\t\t\t\t\t\tInitializing.");
        }
        sleep(1);
    }

    int equipe;
    int loop=0;

    while(loop==0)
    {
        system("cls");
        printf("\t\t\t\t\t\t===================\n");
        printf("\t\t\t\t\t\t|     ESCOLHA \t  |\n\t\t\t\t\t\t|       SUA\t  |\n\t\t\t\t\t\t|     EQUIPE\t  |\n");
        printf("\t\t\t\t\t\t===================\n");
        printf("\t\t\t\t\t\t|\t\t  |\n");
        printf("\t\t\t\t\t\t|  (1)> Azul\t  |\n\t\t\t\t\t\t|  (2)> Vermelha  |\n\t\t\t\t\t\t|  (3)> Amarela\t  |\n");
        printf("\t\t\t\t\t\t|\t\t  |\n");
        printf("\t\t\t\t\t\t===================\n");
        printf("\t\t\t\t\t\t\t[ ]\b\b");
        scanf("%d", &equipe);
        fflush(stdin);

        FILE *arquivo;
        arquivo = fopen("Savequipe.txt", "w");
        fprintf(arquivo,"%d", equipe);
        fclose(arquivo);

        system("cls");

        if(equipe>0 && equipe<4)
            loop=1;
        else
        {
            system("cls");
            printf("\n\t\t\t\t     [Equipe invalida, selecione equipe 1 2 ou 3]\n\b");
            sleep(3);
            loop=0;
        }
    }

    if(equipe==1)
        system("color 1F");
    if(equipe==2)
        system("color 4F");
    if(equipe==3)
        system("color 6F");

    system("cls");

    printf("\t\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t\t|  loading system |\n");
    printf("\t\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t| Loading pokemon |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|      region     |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|      Kanto      |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t===================\n");
    sleep(3);
    system("cls");

    char nome[18];
    fflush(stdin);
    printf("\t\t\t\t\t\t Escolha seu nick:\n");
    printf("\t\t\t\t\t\t[                  ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    fgets(nome, 18, stdin);
    fflush(stdin);
    nome[strcspn(nome, "\n")]=0;

    FILE* arquivoid;
    arquivoid = fopen("savenome.txt", "w");

    fwrite(nome, sizeof(nome), 1, arquivoid);

    fclose(arquivoid);

    system("cls");
    printf("\t\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t\t|  loading system |\n");
    printf("\t\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|Seja bem vindo   |\n\t\t\t\t\t\t %s     \n", nome);
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t|\t\t  |\n");
    printf("\t\t\t\t\t\t===================\n");
    system("pause");
}

typedef struct
{
    char nome[15];
    int id, vida, atk, def, speed, Satk, Sdef;
    int hora, min, dia, mes, ano;
} pokemon;

void save_id(int cont)
{
    FILE* arquivoid;
    arquivoid = fopen("SaveID.txt", "w");

    if(arquivoid!= NULL)
    {
        fprintf(arquivoid, "%d", cont);
    }
    if(arquivoid == NULL)
    {
        printf("ERROR! Formate sua pokedex\n");
        return 0;
    }

    fclose(arquivoid);
}

void savepoke(pokemon *cad)
{
    FILE* arquivoid;
    arquivoid = fopen("SavePokemon.txt", "a");

    if(arquivoid!= NULL)
    {
        fwrite(cad, sizeof(pokemon), 1, arquivoid);
    }
    if(arquivoid == NULL)
    {
        printf("ERROR! Formate sua pokedex\n");
        return 0;
    }

    fclose(arquivoid);
}

void verif_id(int *verif)
{
    int id;
    FILE* arquivoid;
    arquivoid = fopen("SaveID.txt", "r");

    if(arquivoid!= NULL)
    {
        fscanf(arquivoid, "%d", &id);
        *verif = id;
    }

    fclose(arquivoid);
}

void lista(pokemon *cad)
{
    cad = calloc(1, sizeof(pokemon));

    FILE* arquivoid;
    arquivoid = fopen("SavePokemon.txt", "r");
    fseek(arquivoid, 0*sizeof(pokemon),SEEK_SET);

    if(arquivoid == NULL)
    {
        printf("ERROR! Formate sua pokedex\n");
        return 0;
    }

    printf("REGISTRO POKEMON\n\n");
    while(fread(cad, sizeof(pokemon), 1, arquivoid))
    {
        printf("|---------\n");
        printf("|ID    >%d | Hora %d:%d| Data %d/%d/%d\n", cad->id, cad->hora, cad->min, cad->dia, cad->mes, cad->ano);
        printf("|Nome  >%s\n", cad->nome);
        printf("|Vida  >%d\n", cad->vida);
        printf("|atk   >%d\n", cad->atk);
        printf("|def   >%d\n", cad->def);
        printf("|speed >%d\n", cad->speed);
        printf("|Satk  >%d\n", cad->Satk);
        printf("|Sdef  >%d\n", cad->Sdef);
        printf("|---------\n\n");
    }
    free(cad);
    fclose(arquivoid);
}

void verif_time()
{
    int equipe;
    FILE* arquivoid;
    arquivoid = fopen("Savequipe.txt", "r");

    if(arquivoid!= NULL)
    {
        fscanf(arquivoid, "%d", &equipe);

        if(equipe==1)
            system("color 1F");
        if(equipe==2)
            system("color 4F");
        if(equipe==3)
            system("color 6F");
    }
    if(arquivoid == NULL)
    {
        printf("ERROR! Formate sua pokedex\n");
        return 0;
    }

    fclose(arquivoid);
}

void login()
{
    char nick[18];
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    int log;
    log = tm.tm_hour;

    FILE* arquivoid;
    arquivoid = fopen("savenome.txt", "r");

    fread(nick, sizeof(nick), 1, arquivoid);

    printf("Bem vindo de volta %s, ", nick);

    if(log>=6 && log<=11)
        printf("Bom dia!!\n");
    if(log>=12 && log<=17)
        printf("Boa tarde!!\n");
    if(log>=18 && log<=5)
        printf("Bom dia!!\n");

    printf("CARREGANDO DADOS, AGUARDE!!\n");
    fclose(arquivoid);
}

int main()
{
    setlocale(LC_ALL,"");

    pokemon cad;

    int opcao;
    int cont=1;
    verif_id(&cont);

    if(cont==1)
        startup();

    verif_time();

    if(cont!=1)
    {
        login();
        sleep(4);
    }

    while(controle==0)
    {
        system("cls");
        srand(time(NULL));
        printf("____________MENU_____________\n");
        printf("Op??es|_____________________|\n");
        printf("  1   | Registro pokemon    |\n");
        printf("______|_____________________|\n");
        printf("  2   | Pokemons capturados |\n");
        printf("______|_____________________|\n");
        printf("  3   | Sair e salvar       |\n");
        printf("______|_____________________|");
        printf("\n\t\t     Op??o[ ]\b\b");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao)
        {
        case 1:
            system("cls");
            printf("REGISTRO POKEMON\n");
            printf("Nome: ");
            fgets(cad.nome, 15, stdin);
            cad.nome[strcspn(cad.nome, "\n")]=0;

            cad.id = cont;
            cad.vida = rand()%100;
            cad.atk = rand()%100;
            cad.def = rand()%100;
            cad.speed = rand()%100;
            cad.Satk = rand()%100;
            cad.Sdef = rand()%100;

            system("cls");
            printf("DADOS DO POKEMON REGISTRADO\n");
            printf("\t|---------\n");
            printf("\t|Nome  >%s\n", cad.nome);
            printf("\t|ID    >%d\n", cad.id);
            printf("\t|Vida  >%d\n", cad.vida);
            printf("\t|atk   >%d\n", cad.atk);
            printf("\t|def   >%d\n", cad.def);
            printf("\t|speed >%d\n", cad.speed);
            printf("\t|Satk  >%d\n", cad.Satk);
            printf("\t|Sdef  >%d\n", cad.Sdef);
            printf("\t|---------\n\n");

            time_t mytime;
            mytime = time(NULL);
            struct tm tm = *localtime(&mytime);

            cad.hora = tm.tm_hour;
            cad.min = tm.tm_min;
            cad.dia = tm.tm_mday;
            cad.mes = tm.tm_mon+1;
            cad.ano = tm.tm_year+1900;

            savepoke(&cad);

            cont ++;
            save_id(cont);

            system("pause");
            break;

        case 2:
            system("cls");

            if(cont==1)
            {
                printf("Nenhum pokemon capturado\n");
                system("pause");
                break;
            }

            lista(&cad);
            system("pause");
            break;

        case 3:
            system("cls");
            printf("N?o desligue seu terminal ate terminarmos de salvar os dados");
            sleep(3);
            system("cls");
            printf("Dados salvos\n\n");
            system("pause");
            return 0;
            break;

        default:
            system("cls");
            printf("Op??o invalida");
            sleep(2);
            break;
        }
    }
}
