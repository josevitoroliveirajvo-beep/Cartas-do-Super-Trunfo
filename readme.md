# Cartas do Super Trunfo

Projeto em C que simula o cadastro e a leitura de cartas do jogo **Super Trunfo**, utilizando cidades brasileiras como tema.

## Sobre o Projeto

Cada carta representa uma cidade e possui os seguintes atributos:

| Atributo              | Tipo    | Exemplo                    |
|-----------------------|---------|----------------------------|
| Estado                | char    | A, B                       |
| Codigo da Carta       | string  | A01, B02                   |
| Nome da Cidade        | string  | Sao Paulo, Rio de Janeiro  |
| Populacao             | int     | 12325000                   |
| Area (km2)            | float   | 1521.11                    |
| PIB (bilhoes de R$)   | float   | 699.28                     |
| Pontos Turisticos     | int     | 50                         |

## Estrutura dos Arquivos

- **Cartas.c** - Cadastro interativo de duas cartas via terminal (entrada do usuario com `scanf`).
- **Cartas_leitura.c** - Leitura e exibicao formatada dos dados das duas cartas cadastradas.

## Como Compilar e Executar

```bash
# Compilar o cadastro de cartas
gcc Cartas.c -o cartas

# Executar
./cartas
```

```bash
# Compilar a leitura de cartas
gcc Cartas_leitura.c -o cartas_leitura

# Executar
./cartas_leitura
```

## Tecnologias

- Linguagem C
- Biblioteca padrao `stdio.h`
