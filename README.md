# C calculator
  The objective of this project is to enable most users to use a light calculator alternative.

  [License: MIT](https://github.com/FelipePatsche/Calculadora/blob/main/LICENSE.md)
  
<img width="355" height="168" alt="ezgif-80f4244d0e0c4714" src="https://github.com/user-attachments/assets/0ad23ec5-36c6-467a-88b4-1f122c0c7b88" />

## Prerequisites

  - gcc 15 or above (guaranteed)
  - stdio (default library)
    
### A little help

  If you don't know too much about coding or you don't have gcc downloaded, use this shortcut to download and/or learn more:
    [Neps Academy](https://neps.academy/br/course/introducao-a-programacao/lesson/instalando-a-ide)

## Instalation
- Download everything that needs in the Prerequisite section [Prerequistes](#Prerequisites)

## Examples
The first thing that apears is the interface. the user can select 
- to __add__ two numbers with the number __'1'__
- to __subtract__ two numbers with the number __'2'__
- to __multiply__ two numbers with the number __'3'__
- to __divide__ two numbers with the number __'4'__
-  to __exit__ with the number __'5'__.
```Interface
  ===============================
  Calculadora Simples
  ===============================
  Selecione uma operação:
  1. Adição
  2. Subtração
  3. Multiplicação
  4. Divisão
  5. Sair
  Opção:
  ```
When you choose, something like this will apear:
```
Digite o primeiro número:
```
So you write an integer or and decimal number for the __operated__, __only this__.

After that, apears:
```
Digite o segundo número: 
```
So you write an integer or and decimal number for the __operator__, __only this__.

Than the result apears, and after that it asks if you want to do other operation or exit ('s' to 'yes' and 'n' to 'no'):
```
===============================
Calculadora Simples
===============================
Selecione uma operação:
1. Adição
2. Subtração
3. Multiplicação
4. Divisão
5. Sair
Opção: 1
Digite o primeiro número: 2
Digite o segundo número: 1
Resultado: 3
Deseja realizar outra operação? (s/n): s
===============================
Calculadora Simples
===============================
Selecione uma operação:
1. Adição
2. Subtração
3. Multiplicação
4. Divisão
5. Sair
Opção: 5
Obrigado por usar a calculadora! Até a próxima.
```
Possible errors:
- You can't divide by 0;
- The bottom limit and the top limit for ant integer or a decimal number is -2.147.483.648 and 2.147.483.647;
- It will respect up to 7 decimal digits.


## Structure
```Structure
  Calculadora/
      |-abc.c
      |-README.md
      |-LICENSE.md
```
## License

This project is under the MIT license.

You can access the license of this project by going to the LICENSE.md file or clicking on this shortcut: [License: MIT](https://github.com/FelipePatsche/Calculadora/blob/main/LICENSE.md)


