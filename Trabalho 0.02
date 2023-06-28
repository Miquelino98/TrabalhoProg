#include <stdio.h>

struct Contexto             ///dados dos nomes e lore
{
    char Nome[15];
    char Lore[150];
};
struct Caracteristicas     ///dados de Classe e raça
{
    int Classe;
    int Raca;
};

struct Ficha               ///struct das struct de contexto e caracteristias
{
    struct Contexto contexto;
    struct Caracteristicas caracteristicas;
    
};

Informacoes(struct Contexto *contexto)    ///função para ler nome e lore
{         
printf("digite o seu nome\n");
scanf("%s",&contexto->Nome);
}


int SelecionarClasse()                   ///função para ler e modificar a Classe
 {                    

    printf("Selecione sua clase");
    int Classe;
    printf("\n1-Anao\n2-Elfo\n3-Halfling\n4-Humano\n5-Dragonato\n6-Gnomo\n7-Meio-Elfo\n8-Tiefling\n");

    scanf("%d", &Classe);

    return Classe;
}

void MostrarFicha(struct Ficha jogador)    ///função para mostrar a ficha (codigo temporario)
{
    printf("Classe: ");
    switch (jogador.caracteristicas.Classe) {
        case 1:
            printf("Anao.\n");
            break;
        case 2:
            printf("Elfo.\n");
            break;
        case 3:
            printf("Halfling.\n");
            break;
        case 4:
            printf("Humano.\n");
            break;
        case 5:
            printf("Dragonato.\n");
            break;
        case 6:
            printf("Gnomo.\n");
            break;
        case 7:
            printf("Meio-Elfo.\n");
            break;
        case 8:
            printf("Tiefling.\n");
            break;
        default:
            printf("Classe invalida.\n");
            break;
    }
}    

int main() {
    

    printf("Bem-vindo ao D&D.\n");
    
    struct Ficha jogador;
    
    int opcao;

    printf("0-Sair\n1-Nome e lore\n2-Classe\n3-Raca\n4-Descricao\n5-Equipamentos");      /// mostrar opções do menu para o jogador: 0-Sair   1-Nome 2-Classe 3-raça  4-descrição  5-Equipamentos*
do {
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 0:
        break;
    case 1:
        Informacoes(&jogador.contexto);
    case 2:
        jogador.caracteristicas.Classe = SelecionarClasse();
        break;
    case 3:
        MostrarFicha(jogador);
        break;
    case 4:
        break;
    case 5:
        break;
    default:
        break;
    }
    

    
}while (opcao!=0);
    
    

    return 0;
}
