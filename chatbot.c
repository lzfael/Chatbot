#include <stdio.h>

void Consulta();
void InformacoesPlanoSaude();
void EspecialidadesMedicasDisponiveis();
void ExibirMenu();

int main() {
    printf("----------------------------------------\n");
    printf("Seja bem-vindo a Clinica do C!\n");
    printf("----------------------------------------\n");
    ExibirMenu();
    

    return 0;
}

void Consulta() {
    char firstName[100], lastName[100], especialidade[50], data[11], horario[6];

    printf("\nOla! Vamos agendar sua consulta.\n");

    printf("Qual seu primeiro nome? ");
    scanf("%s", firstName);

    printf("Qual seu ultimo nome? ");
    scanf("%s", lastName);

    printf("Qual especialidade medica voce precisa? ");
    scanf("%s", especialidade);

    printf("Para qual dia voce gostaria de agendar? (DD/MM/AAAA) ");
    scanf("%s", data);

    printf("Qual o melhor horario para voce? (HH:MM) ");
    scanf("%s", horario);

    printf("Obrigado! Sua consulta foi agendada:\n");
    printf("- Nome: %s %s\n", firstName, lastName);
    printf("- Especialidade: %s \n", especialidade);
    printf("- Data: %s \n", data);
    printf("- Horario: %s \n", horario);
}

void InformacoesPlanoSaude(){
    printf("\n--- Informacoes sobre Planos de Saude ---\n");
    printf("- Planos a partir de R$199,00 mensais.\n");
    printf("- Cobertura nacional.\n");
    printf("- Consultas ilimitadas.\n");
    printf("- Exames laboratoriais inclusos.\n");
    printf("- Atendimento de emergencia 24h.\n");
    printf("- Carencia: 24h para emergencias, 30 dias para consultas.\n");
    printf("- Aplicativo para agendamentos online.\n");
}

void EspecialidadesMedicasDisponiveis(){
    printf("\n--- Especialidades Medicas Disponiveis ---\n");
    printf("- Clinica Geral\n");
    printf("- Cardiologia\n");
    printf("- Dermatologia\n");
    printf("- Ortopedia\n");
    printf("- Pediatria\n");
    printf("- Ginecologia\n");
}

void ExibirMenu() {
    int opcao = 0;
    printf("\nComo posso ajudar voce hoje?\n");
    printf("1. Agendar Consulta\n");
    printf("2. Informacoes sobre nosso plano de saude\n");
    printf("3. Ver especialidades medicas disponiveis\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            Consulta();
            ExibirMenu();
            break;
        case 2:
            InformacoesPlanoSaude();
            ExibirMenu();
            break;
        case 3:
            EspecialidadesMedicasDisponiveis();
            ExibirMenu();
            break;
        default:
            printf("\nOpcao invalida! \n Tente Novamente:\n");
            ExibirMenu();
            break;
    }
}