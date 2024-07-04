int main() {
    float total_conta = 100.0;
    float taxa_servico = 10.0;
    int num_pessoas = 2;

    float total_com_taxa = total_conta * (1 + taxa_servico / 100);

    float valor_por_pessoa = total_com_taxa / num_pessoas;

    printf("Cada pessoa deve pagar: R$ %.2f\n", valor_por_pessoa);

    return 0;
}