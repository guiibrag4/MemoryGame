# Jogo da Memória em C

Este é um projeto de um jogo da memória desenvolvido em linguagem C. O jogo é executado diretamente no terminal de linha de comando e tem como objetivo principal exercitar e estimular a memória e a concentração do jogador.

## 📸 Screenshots

<table>
  <tr>
    <td align="center">
      <img src="https://github.com/guiibrag4/JogoDaMemoria_C/assets/131495236/8bf7a203-eee7-4ca4-b4b9-9899de91490e" width="430px" height="280px" alt="Imagem 1" width="200"/>
    </td>
    <td align="center">
      <img src="https://github.com/guiibrag4/JogoDaMemoria_C/assets/131495236/09b9170b-caac-473a-9cc4-b27ae123b76f" width="430px" height="280px" alt="Imagem 2" width="200"/>
    </td>
  </tr>
  <tr>
    <td align="center">
      <img src="https://github.com/guiibrag4/JogoDaMemoria_C/assets/131495236/95089bab-fa2f-4692-a592-af4b3a1c23c1" width="430px" height="280px"" alt="Imagem 3" width="200"/>
    </td>
    <td align="center">
      <img src="https://github.com/guiibrag4/JogoDaMemoria_C/assets/131495236/7d5fd087-2994-44ac-b1b0-0b3bc3fedfe8" width="430px" height="280px" alt="Imagem 4" width="200"/>
    </td>
  </tr>
</table>

## 🚀 Funcionalidades

* **Menu Principal**: Permite ao jogador escolher entre "Jogar", ver as "Instruções" ou "Sair" do jogo.
* **Níveis de Dificuldade**: O jogador pode selecionar o nível de dificuldade antes de iniciar a partida.
* **Memorização Inicial**: No começo de cada partida, as cartas são exibidas por um breve período para que o jogador memorize suas posições.
* **Jogabilidade**: O jogador escolhe duas cartas por vez, e o sistema verifica se elas formam um par.
* **Contagem de Tentativas**: O jogo registra o número de tentativas e acertos do jogador.
* **Fim de Jogo**: Ao encontrar todos os pares, o jogador vence. O jogo oferece a opção de jogar novamente.

## 🛠️ Tecnologias Utilizadas

* **Linguagem**: C
* **Bibliotecas**:
    * `stdio.h`
    * `stdlib.h`
    * `locale.h`
    * `time.h`
    * `unistd.h`

## ⚙️ Como Rodar o Projeto

Para compilar e executar o jogo, você precisará de um compilador C, como o **GCC**.

### 1. Pré-requisitos

* **Compilador GCC**:
    * **No Windows**: Instale o [MinGW-w64](https://www.mingw-w64.org/) e adicione-o ao PATH do sistema.
    * **No Linux (Debian/Ubuntu)**: `sudo apt-get install build-essential`
    * **No macOS**: Instale as Ferramentas de Linha de Comando do Xcode com `xcode-select --install`

### 2. Compilação

Abra o terminal na pasta onde o arquivo `Main.c` está localizado e execute o seguinte comando:

```bash
gcc Main.c -o jogar
```

Este comando irá compilar o código-fonte (Main.c) e gerar um arquivo executável chamado JogoDaMemoria.

### 3. Execução
- No Windows
```sh
.\jogar.exe
```
- No Linux
```sh
./jogar.exe
```

✍️ Autor
Guilherme Braga Rios da Costa