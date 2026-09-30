#include <stdio.h> 
int main(){
int a=0, b=0, resp=0, op;
char cont='p';
while(cont='s'){
    printf("===============================\n   Calculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
    scanf("%d", &op);
    if(op==5){
        printf("Obrigado por usar a calculadora! Até a próxima.");
return 0;
    }
    printf("Digite o primeiro número: ");
scanf("%d", &a);
printf("Digite o segundo número: ");
scanf("%d", &b);
switch(op){
    case 1:
    printf("Resultado: %d + %d = %d",a,b,a+b);
    break;
    case 2:
    printf("Resultado: %d - %d = %d",a,b,a-b);
    break;
    case 3:
    printf("Resultado: %d × %d = %d",a,b,a*b);
    break;
    case 4:
    if(b==0){
        printf("Erro: Divisão por zero não é permitida.");
        break;
    }
    else{
    printf("Resultado: %d ÷ %d = %d",a,b,a/b);
    break;
    }
}

while(cont!= 's' || cont!= 'n'){
    printf("\nDeseja realizar outra operação? (s/n):");
scanf(" %c", &cont);
if(cont=='s'){
    break;
}
else if(cont=='n'){
    printf("Obrigado por usar a calculadora! Até a próxima.");
    return 0;
}
else{
printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
}
}
}
}
