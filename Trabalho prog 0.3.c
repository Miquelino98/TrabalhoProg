// FICHA DE D&D                                 By: "GRUPO INACAT"

#include<stdio.h>
#include<stdlib.h>

struct Personagem{
    char nome[30];
    char lore[150];
    char alinhamento[3];
    char nomejogador[15];
    char raca[15];
    int idade;
};

struct Atributos{
    int forca;
    int destreza;
    int constituicao;
    int inteligencia;
    int sabedoria;
    int carisma;
    int CA;
};

struct Raca{
    char nome[15];
    float deslocamento;
    int bonus;
    float tamanho;
    char idioma[10];
};

struct Classe{
    int vida;
    int riqueza;
    int atributo_primario;
};

struct Ficha{
    struct Personagem Personagem;
    struct Atributos Atributos;
    struct Raca Raca;
    struct Classe Classe;
};

void Informacoes(struct Personagem Personagem){
    //printf("Digite seu nome: ");
    //scanf("%s",personagem->nomejogador );
    printf("Digite o nome do seu personagem: ");
    scanf("%s", Personagem.nome);
    printf("Escreva a lore do seu personagem (150 caracteres): ");
    scanf("%s", Personagem.lore);
    printf("Digite a idade do seu personagem: ");
    scanf("%d", Personagem.idade); 
}

void SelecionarRaca(struct Raca)
{   
    int n;
    printf("Selecione uma Raca:\n1-Anao\n2-Elfo\n3-Halfling\n4-Humano\n5-Dragonato\n6-Gnomo\n7-Meio-Elfo\n8-Tiefling\n");       
    scanf("%d", n);
    
    /*        
        case 1:          
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            
            break;
        case 8:
            
            break;
        }*/
                              
}

void SelecionarClasse(struct Classe){
    int n;
    printf("Selecione sua Classe:\n1-Barbaro\n2-BArdo\n3-Bruxo\n4-Clerigo\n5-Druida\n6-Feiticeiro\n7-Guerreiro\n8-Ladino\n9-Mago\n10-Monge\n11-Paladino\n12-Patrulheiro");
        scanf("%d",n);
        /*switch (Classe)
        {
            
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            
            break;
        case 8:
            main
            break;
        case 9:
            
            break;
        case 10:
            
            break;   
        case 11:
            
            break;   
        case 12:
            
            break;               
        default:
            break;
        }*/
}

void MostrarFicha(struct Ficha jogador) {
    printf("Raca: ");

}

void main() {   
    printf("Bem-vindo ao DD!\n");                                                                                   //impressão de mensagem inicial;
    struct Ficha jogador;                                                                                          //declaracao de variavel Ficha;
    int opcao; 
    do{                                                                                                     //declaracao de variavel que recebe a escolha do usuario;
    printf("\n1 - Caracteristicas gerais\n2 - Classe\n3 - Raca\n4 - Descricao\n5 - Equipamentos\n");        //impressao de primeiro menu de escolha
        scanf("%d", &opcao);
        switch(opcao){                                                                       //switch para a realizacao da escolha estilo menu;
            case 0:
                break;
            case 1:                                                                           //caso usuario escolha o numero 1;
                Informacoes(jogador.Personagem);                                             //chamado da funcao informacoes, com passagem do endereco de memoria da variavel jogador.contexto;
                break;
            case 2:
                SelecionarClasse(jogador.Classe);
                break;
            case 3:    
                SelecionarRaca(jogador.Raca);                            //chamado da funcao Raca;                          
            case 4:
                break;
            case 5:              
            case 6:
                 MostrarFicha(jogador);
                break;
            default:
                break;
        }
    } while (opcao != 0);
}