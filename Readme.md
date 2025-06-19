# 🧠 Jogo da Memória em C

<p align="center">
  <img src="https://github.com/guiibrag4/JogoDaMemoria_C/assets/131495236/8bf7a203-eee7-4ca4-b4b9-9899de91490e" width="70%" alt="Menu do Jogo da Memória"/>
</p>

<p align="center">
  <strong>Um clássico jogo da memória desenvolvido em linguagem C para ser executado no terminal.</strong>
</p>

<p align="center">
  <a href="#-sobre-o-projeto">Sobre</a> •
  <a href="#-funcionalidades">Funcionalidades</a> •
  <a href="#-tecnologias">Tecnologias</a> •
  <a href="#-como-jogar">Como Jogar</a> •
  <a href="#-como-rodar-o-projeto">Como Rodar</a> •
  <a href="#-melhorias-futuras">Melhorias</a>
</p>

---

## 📖 Sobre o Projeto

Este projeto é um jogo da memória desenvolvido como um trabalho para a disciplina de Estrutura de Dados. O principal objetivo é exercitar e estimular a memória e a concentração do jogador através de um desafio simples e divertido, jogado diretamente no terminal.

O jogo foi implementado inteiramente na linguagem C, utilizando conceitos fundamentais da programação e manipulação de estruturas de dados para criar a lógica de embaralhamento, seleção e verificação de pares de cartas.

---

## ✨ Funcionalidades

- **Menu Interativo**: Um menu inicial simples para `Jogar`, ver as `Instruções` ou `Sair`.
- **Nível de Dificuldade**: Atualmente, o nível `Fácil` (matriz 4x4) está implementado e funcional. Os níveis médio e difícil ainda não foram concluídos.
- **Visualização Inicial**: As cartas são exibidas por 10 segundos no início de cada partida para memorização.
- **Bônus Durante o Jogo**: Em momentos específicos (ao atingir certos acertos ou ao restar poucas tentativas), as cartas são exibidas novamente como uma ajuda.
- **Contagem de Tentativas e Acertos**: O jogo monitora o número de tentativas restantes e os pares corretamente encontrados.
- **Jogar Novamente**: Ao final de uma partida, você pode escolher jogar novamente ou encerrar o aplicativo.

---

## 🛠️ Tecnologias

O projeto foi desenvolvido utilizando as seguintes tecnologias e bibliotecas:

- **Linguagem**: C
- **Bibliotecas Padrão**:
  - `stdio.h`: Para manipulação de entrada e saída padrão (como `printf`).
  - `stdlib.h`: Para uso das funções `rand()` e `srand()` para embaralhar as cartas.
  - `time.h`: Para gerar números verdadeiramente aleatórios a cada execução.
  - `unistd.h`: Para utilizar a função `sleep()` que pausa a execução do programa.
  - `locale.h`: Para permitir o uso de acentos e caracteres do português no terminal.

---

## 🎮 Como Jogar

1.  **Inicie o Jogo**: Execute o programa. No menu principal, digite `1` para começar.
2.  **Memorize as Cartas**: As cartas serão exibidas por 10 segundos. Tente memorizar a posição dos pares!
3.  **Escolha as Cartas**: O tabuleiro será escondido. Você deve inserir as coordenadas `(linha, coluna)` para virar duas cartas.
4.  **Forme os Pares**:
    - Se as cartas escolhidas forem iguais, é um acerto! Elas permanecerão viradas.
    - Se forem diferentes, elas serão escondidas novamente e uma tentativa será descontada.
5.  **Vença o Jogo**: Encontre todos os 8 pares de cartas no nível fácil antes que suas 14 tentativas acabem para vencer!

<details>
<summary><b>Clique para ver Screenshots do Jogo</b></summary>
<br>
<table>
  <tr>
    <td align="center">
      <img src="https://github.com/guiibrag4/JogoDaMemoria_C/assets/131495236/09b9170b-caac-473a-9cc4-b27ae123b76f" width="430px" height="280px" alt="Instruções"/>
      <br><sub><b>Tela de Instruções</b></sub>
    </td>
    <td align="center">
      <img src="https://github.com/guiibrag4/JogoDaMemoria_C/assets/131495236/95089bab-fa2f-4692-a592-af4b3a1c23c1" width="430px" height="280px" alt="Jogo em Andamento"/>
      <br><sub><b>Gameplay</b></sub>
    </td>
  </tr>
  <tr>
    <td align="center">
      <img src="https://github.com/guiibrag4/JogoDaMemoria_C/assets/131495236/7d5fd087-2994-44ac-b1b0-0b3bc3fedfe8" width="430px" height="280px" alt="Vitória"/>
      <br><sub><b>Tela de Vitória</b></sub>
    </td>
  </tr>
</table>
</details>

---

## 🚀 Como Rodar o Projeto

Você pode clonar o repositório e compilá-lo usando um compilador C.

### Clonando o Repositório
```sh
git clone [https://github.com/guiibrag4/MemoryGame.git](https://github.com/guiibrag4/MemoryGame.git)
cd MemoryGame