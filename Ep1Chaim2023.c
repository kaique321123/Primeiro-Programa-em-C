/*********************************************************************/
/**   ACH2001 - Introducao a Programacao                            **/
/**   EACH-USP - Primeiro Semestre de 2022                          **/
/**   Turma 01 - Prof. Marcos Lordello Chaim                        **/
/**                                                                 **/
/**   Primeiro Exercicio-Programa                                   **/
/**                                                                 **/
/**   <Kaique de Jesus Pessoa Santos>                   <14677144>  **/
/**                                                                 **/
/*********************************************************************/
//esportes = dia sim dia não (multiplos de 2)
//literatura = a cada 3 dias (multiplos de 3)
//fotografia = a cada 4 dias (multiplos de 4)
//xadrez = a cada 5 dias (multiplos de 5)
//canto = a cada 6 dias (multiplos de 6)

#include <stdio.h>

int verificaDataValida(int dia, int mes, int ano) {
  
int ultimos_dias[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    

if ((ano % 4 == 0) || (ano % 100 != 0 && ano % 400 == 0)) {
            ultimos_dias[2] = 29; // se for bissexto fevereiro tem 29
                                                          }
            else {
                   ultimos_dias[2] = 28; // se for ano normal fevereiro tem 28
                 }

if (dia >= 1 && dia <=  ultimos_dias[mes] && mes >= 1 && mes <= 12 && ano >0) {
                       
    printf("Data de inicio de ano letivo: %d/%d/%d\n", dia, mes, ano);
    printf("Proximos dias de encontro de todos os clubes: \n");
  
// PARA NÃO SAIR DO ANO INICIAL
int ano_inicial = ano;
              
int m = mes;
  
// VAI ATÉ DEZEMBRO A PARTIR DA DATA INDICADA    
while(m<=12){
             dia = dia + 60; // MAIS 60 DIAS, POIS O MMC DOS CLUBES DA 60
             m++;
 

//SE O DIA PASSAR DA QUANTIDADE DE DIAS QUE TEM NAQUELE MÊS COMEÇA A SOMAR O QUE SOBROU DO MMC NO OUTRO MÊS
while (dia > ultimos_dias[mes]){         
          
//SUBTRAIR DO DIA A QUANTIDADE DE DIAS DAQUELE MES
        dia = dia - ultimos_dias[mes];
        

//PARA IR TROCANDO OS MESES
        mes++;

//PARAR DE RODAR SE PASSAR DO ANO INICIAL
if (ano > ano_inicial) {
                    break;
                       }

} //LOOP QUE SOMA OS DIAS

if (ano == ano_inicial && mes<=12) {
           printf("%d/%d/%d\n", dia, mes, ano);
                                   }

} //LOOP QUE RODA OS MESES   
} //IF VERIFICA DATA
              
// DATA QUE NÃO EXISTE    
else {printf("Dados incorretos\n");
     }

return 0;
}

int main() {
    int dia, mes, ano;

    printf("Entre com a data de inicio:\n");
    printf("Entre com o dia: ");
    scanf("%d", &dia);
    printf("Entre com o mes: ");
    scanf("%d", &mes);
    printf("Entre com o ano: ");
    scanf("%d", &ano);

    verificaDataValida(dia, mes, ano);

    return 0;
}
