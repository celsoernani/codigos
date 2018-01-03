#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct cadastro{
char nome[20];
char disci[20];
float nota;
};
struct cadastro p[30];
void pesquisar(struct hihi *x,char *achar,int tam){
    int i=0 ;
    for(i=0;i<=tam;i++){
            if((strcmp(x[i].nome,achar)==0)){
               printf("Nome encontrado!\n");
               puts(x[i].nome);
               puts(x[i].disciplina);
               printf("%f",x[i].nota);
               }
               else{
                printf("Nome nao encontrado no banco de dados.")
               }

}

int main()
{

    char pesquisa[20];
    int i=0;
    char resp="s";
                                        while((resp =='s') || (i<=30)){

    printf("Digite o nome do %d aluno:\n",i+1);
        gets(p[i].nome);
        fflush(stdin);
    printf("Digite a disciplina do %d aluno:\n",i+1);
        gets(p[i].disci);
        fflush(stdin);
    printf("Digite a nota do %d aluno:\n",i+1);
        scanf("%f", &p[i].nota);

fflush(stdin);

            printf("Deseja cadastrar um novo aluno ?\n");
                    scanf("%c", &resp);
            fflush(stdin);
            i=i+1;
                                            }
                                        }
                                        if((resp=='n') || (i>30)){
                                                system("cls");
                                        printf("Voce entrou na tela de pesquisa, digite um nome que deseja pesquisar:\n");
                                        printf("Digite o nome que deseja pequisar\n");
                                        gets(pesquisa);
                                        pesquisar(cadastro,pesquisa,i);


                                        }


    return 0;
}



    //while (strcmp(pesquisa,"FIM")){

      //     printf("Aluno: \n");
        //   gets(pesquisa);
         //  setbuf(stdin,NULL);
          // for(i=0;i<n;i++)
            //    if (strcmp(pesquisa,type[i].nome)){
              //      printf("");
                //}else{
                  //  printf("Disciplina: ");
                    //puts(type[i].disciplina);
                    //printf("Media: %.2f\n",type[i].media);
                    //i = n-1;
                //}
   // }
