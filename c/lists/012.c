#include <stdio.h>
#include <stdbool.h>
#define FALSE 0
#define TRUE 1

int voosAvaliados = 37;
int totalVoos[] = {3056, 3927, 8885, 2627, 6884, 5104, 7447, 1057, 7828, 5900, 4396, 8339, 3296, 1464, 4910, 9881, 7067, 2574, 1387, 9026, 1929, 360, 982, 2986, 4867, 9613, 9621, 3208, 2977, 6458, 5728, 2825, 6358, 8969, 6226, 3885, 4963};
int totalAssentosVoos[] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};

struct SolocitacaoReserva{
    int cartaoID;
    int numeroVooEscolhido;
};

void lista_voos(){
    for (int cont = 0; cont < voosAvaliados; cont++){
        printf("Vôo %d\n", totalVoos[cont]);
    }
}

int verificar_assentos(int posicao){
    int assentos = FALSE;

    if (totalAssentosVoos[posicao] > 0){
        assentos = totalAssentosVoos[posicao];
    }
    return assentos;
}

int atualizar_assentos_disponiveis(int posicao, int numeroVooEscolhido){
    int status;
    int assentosAvaliados = verificar_assentos(posicao);
        
    if (assentosAvaliados == FALSE){
        printf("Sentimos muito. Não há lugares disponíveis.\n");
        status = FALSE;
    }else{
        printf("Há %d assentos disponíveis.\n", assentosAvaliados);
        printf("Deseja comprar um assento?\n");
        printf("Caso sim, digite 1.\n");
        printf("Se não, digite 0.\n");
        scanf("%d", &status);
    }

    if (status == TRUE){
        --totalAssentosVoos[posicao];
    }
    return status;
}

int atualizar_voos_disponiveis(int numeroVooEscolhido){
    int posicao = -1;
    int status = FALSE;
    int *newVoosAvaliados;
    newVoosAvaliados = &voosAvaliados;

    for(int cont = 0; cont < voosAvaliados; cont++){
        if (totalVoos[cont] == numeroVooEscolhido){
            posicao = cont;
            break;
        }
    }

    if(posicao != -1){
        status = atualizar_assentos_disponiveis(posicao, numeroVooEscolhido);

        if(status == TRUE){
            if(totalVoos[posicao] <= 0){
                for(int cont = posicao; cont < voosAvaliados - 1; cont++){
                    totalVoos[cont] = totalVoos[cont + 1];
                    totalAssentosVoos[cont] = totalAssentosVoos[cont + 1];
                    }
                --*newVoosAvaliados;
            }
        }
    }
    return status;
}

int verificar_voo(int cartaoID, int numeroVooEscolhido){
    int status = atualizar_voos_disponiveis(numeroVooEscolhido);

    if(status == TRUE){
        printf("Passagem aérea reservada para %d para o vôo %d \n", cartaoID, numeroVooEscolhido);
    }
    return status;
}

int livro_voos(int cartaoID, int numeroVooEscolhido){
    int statusLivroVoos=1;

    while (statusLivroVoos != FALSE) {
        printf("Para reservar um voo, precisamos que você digite seu cartão de identificação e o número de voo escolhido.\n");
        printf("Cartão ID:\n");
        scanf("%d", &cartaoID);
        
        printf("Número de vôo escolhido:\n");
        scanf("%d", &numeroVooEscolhido);

        int statusPerguntaReserva = verificar_voo(cartaoID, numeroVooEscolhido);

        if(statusPerguntaReserva == FALSE){
            printf("O vôo escolhido não está disponível. Deseja escolher outro?\n");
            printf("Para escolher outro, digite 1.\n");
            printf("Para sair, digite 0.\n");
            scanf("%d", &statusLivroVoos);
        }else{
            statusLivroVoos = FALSE;
        }
    }
}

int main(){
    struct SolocitacaoReserva SolocitacaoReservas;
    int statusLivro;

    printf("Bem-vindo(a)!!!\n");

    while(statusLivro != 3){
        printf("O que deseja fazer?\n");
        printf("Para reservar um voo, digite 1.\n");
        printf("Para listar todos os voos disponíveis, digite 2.\n");
        printf("Para sair, digite 3.\n");
        scanf("%d", &statusLivro);

        if (statusLivro == 1){
            livro_voos(SolocitacaoReservas.cartaoID, SolocitacaoReservas.numeroVooEscolhido);
        }else if (statusLivro == 2){
            lista_voos();
        }else{
            printf("Até a próxima!\n");
        }
    }
    return 0;
}