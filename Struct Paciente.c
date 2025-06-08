#include <stdio.h>
#include <string.h>

struct Paciente {
    char nome[50];
    int idade;
    char telefone[15];
};

int main() {
    struct Paciente pacientes[3];
    int i;
    
    // Preenchendo os dados dos pacientes
    strcpy(pacientes[0].nome, "Luciana");
    pacientes[0].idade = 40;
    strcpy(pacientes[0].telefone, "1111-2222");
    
    strcpy(pacientes[1].nome, "Pedro");
    pacientes[1].idade = 25;
    strcpy(pacientes[1].telefone, "2222-3333");
    
    strcpy(pacientes[2].nome, "Rafaela");
    pacientes[2].idade = 41;
    strcpy(pacientes[2].telefone, "3333-4444");
    
    //Exibindo os dados dos pacientes
    for (i=0; i<3; i++) {
        printf("Paciente %d:\n", i+1);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Telefone: %s\n\n", pacientes[i].telefone);
    }
}

