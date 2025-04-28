#include <stdio.h>

void Consulta();
void InformacoesPlanoSaude();
void EspecialidadesMedicasDisponiveis();

int main() {
    int opcao = 0;

    printf("Seja bem-vindo a Clinica do C!\n");
    printf("Como posso ajudar voce hoje?\n");
    printf("1. Agendar Consulta\n");
    printf("2. Informacoes sobre nosso plano de saude\n");
    printf("3. Ver especialidades medicas disponiveis\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            Consulta();
            break;
        case 2:
            InformacoesPlanoSaude();
            break;
        case 3:
            EspecialidadesMedicasDisponiveis();
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
    }

    return 0;
}

void Consulta() {
    char nome[50], especialidade[50], data[11], horario[6];

    printf("\nOla! Vamos agendar sua consulta.\n");

    printf("Qual seu nome completo? ");
    scanf("%s", nome);

    printf("Qual especialidade medica voce precisa? ");
    scanf("%s", especialidade);

    printf("Para qual dia voce gostaria de agendar? (DD/MM/AAAA) ");
    scanf("%s", data);

    printf("Qual o melhor horario para voce? (HH:MM) ");
    scanf("%s", horario);

    printf("Obrigado! Sua consulta foi agendada:\n");
    printf("- Nome: %s \n", nome);
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