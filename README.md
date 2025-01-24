# SuperTrunfo
Jogo super trunfo baseado em países

Projeto criado a partir da disciplina Introdução à Programação de Computadores, do curso de REDES DE COMPUTADORES da Universidade Estácio.

Cenário

A TechNova, empresa líder em inovação tecnológica, está desenvolvendo um sistema para o jogo Super Trunfo com o tema países e contratou você para essa atividade. O objetivo é cadastrar cartas representando cidades de diferentes estados, utilizando variáveis, operadores e funções de entrada e saída em C. Cada carta incluirá informações como estado, código da carta, nome da cidade, população, PIB, área e número de pontos turísticos, além de propriedades como densidade populacional e PIB per capita , calculadas a partir das outras informações contidas.


# Funcionalidades do sistema

O sistema permitirá ao usuário cadastrar cartas de cidades para o jogo Super Trunfo, fornecendo informações detalhadas como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos. Com base nesses dados, o sistema calculará automaticamente a densidade populacional e o PIB per capita . As entradas serão feitas via terminal de comando e, após o cadastro, os dados serão exibidos de forma clara e organizada.

O sistema permitirá ao usuário cadastrar as cartas do jogo, fornecendo informações detalhadas sobre cada cidade representada, de acordo com as seguintes orientações:

Cada carta será identificada pela letra do estado seguida de um número de 01 a 04 (por exemplo, A01, A02, B01, B02).
Para cada carta, o usuário deverá inserir os dados que foram utilizados no nível básico. Com base nesses dados, o sistema calculará automaticamente:
Densidade populacional (float) : Calculada como população dividida pela área da cidade. Isso dá uma medida de quantas pessoas vivem por quilômetro quadrado.
PIB per capita (float) : Calculado como PIB total da cidade dividido pela população. Isso dá uma medida da média de produção econômica por pessoa.
Entrada e saída de dados
Os requisitos para a entrada de dados são:

O sistema será operado inteiramente via terminal ou prompt de comando.
O usuário será solicitado a inserir os dados de cada carta de forma interativa.
Cada entrada será solicitada de maneira clara, indicando o dado específico que está sendo solicitado (por exemplo, "Digite o estado:", "Digite o código da carta:", "Digite o nome da cidade:", "Digite a população:").
Os requisitos para a entrada de dados são:

Após o cadastro de cada cidade, o sistema exibirá os dados cadastrados de forma clara e organizada.
Cada propriedade da cidade será apresentada em uma linha separada com a descrição correspondente.

# Requisitos funcionais e não funcionais


Além dos requisitos do nível básico, para o nível intermediário será adicionado o seguinte:

O sistema deve calcular e exibir corretamente a densidade populacional e o PIB per capita .
Os requisitos não funcionais são:

Usabilidade : a interface do usuário CLI deve ser simples e fácil de usar, mesmo para pessoas sem familiaridade com linhas de comando. O software deve ser facilmente modificável para corrigir defeitos, adaptar-se a novos requisitos, aumentar a suportabilidade ou se adequar a novos ambientes.


Performance : o sistema deve executar as operações de entrada, cálculo e saída sem atrasos perceptíveis.

Documentação : o código deve ser bem documentado, incluindo comentários sobre a função de cada parte do código e instruções de uso do sistema.


Manutenibilidade : o código deve ser escrito de forma clara, empregando nomes de variáveis que permitam o fácil entendimento por um novo desenvolvedor.


