#include <stdio.h>
#include <string.h>
#include <locale.h>
#define x  12


int main(void) {
	
	//VARIAVEIS;
	
	//inteiros.
	int mat[x],cont,cond,P=0;
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0;
	int sm1=0,sm2=0;
	
	//reais.
	float PADS,PSIS;
	
	
	setlocale(LC_ALL, "Portuguese");
	do
	{
		P++;
		
		for(cont=0;cont<x;cont++)
		{
			if(cont < 4)
			{
				if(cont == 0 )
				{
					printf("Digite o ano da matr�cula a cada d�gito tecle 'ENTER':\n");
				}
				scanf("%d",&mat[cont]);
			}
			
			if(cont == 4 )
			{
				printf("Digite o semestre que est� cursando  1 � para o primeiro; 2 � para o segundo.\n");
				scanf("%d",&mat[cont]);
			}
			
			if(cont == 5)
			{
				printf("Digite o curso ( 1 � ADM; 2 � ADS; 3 � CON; 4 � ENG; 5 � DIR; 6 � SIS; 7 � PSI; 8 � LOG ).\n");
				scanf("%d",&mat[cont]);
			}
			
			if(cont > 5)
			{
				if(cont == 6)
				{
					printf("Digite 6 n�meros aleat�rios, a cada n�mero digitado tecle 'ENTER'.\n");
			    }
				scanf("%d",&mat[cont]);
			}	
		}
		//.............................................................................................................
		switch (mat[4])//teste total de alunos matriculados por semestre
	    {
	        case 1:
	        {
	            sm1++; 
	        }
	        break;
	            
	        case 2:
	        {
	            sm2++; 
	        }
	            break;
	    }
	    
		switch (mat[5])//inicio teste quantos alunos por curso
		{
	        case 1:
	        {
	                c1++; 
	        }
	        break;
	        
	    	case 2:
	 		{
	        	c2++; 
	        }
	        break;
	            
	        case 3:
	        {
	        	c3++; 
	        }
	        break;
	            
	        case 4:
	        {
	            c4++; 
	        }
	        break;
	            
	        case 5:
	        {
	            c5++;
	        }
	        break;
	            
	        case 6:
	        {
	            c6++; 
	        }
	        break;
	            
	        case 7:
	        {
	            c7++; 
	        }
	        break;
	            
	        case 8:
	        {
	            c8++;
	        }
	            break; 
	    }
		//.............................................................................................................
		printf("A matr�cula digitada:");
		for(cont=0;cont<x;cont++)
		{	
			printf("[%d]",mat[cont]);
		}
		//.............................................................................................................
		printf("\n\n\nDeseja continuar ? S= 1 ou N= 2.\n");
		scanf("%d",&cond);
		while(cond <1 || cond >2)
		{
			printf("\nResposta errada  S= 1 ou N= 2. para continuar!\n");
			scanf("%d",&cond);
		}
		
	
	}while( cond == 1);	
	
	printf("\n\n");
	    
	PADS=(float)(100*c2)/P;//calculo percentual ADS
	PSIS=(float)(100*c6)/P;//calculo percentual SIS
	   
	    
	//a. total de alunos para cada curso;
	printf("Foi matriculado em cada curso:\n");
	printf("ADM=%d;\nADS=%d;\nCON=%d;\nENG=%d;\nDIR=%d;\nSIS=%d;\nPSI=%d;\nLOG=%d.\n",c1,c2,c3,c4,c5,c6,c7,c8);
		
	//b. percentual de alunos do curso de ADS e SIS, sobre o total de alunos lidos;
	if(c2 != 0)
	{
		printf("\nO percentual de alunos matriculado no curso de ADS � %.1f%.", PADS);
	}
	else
	{
		printf("\nO percentual de alunos matriculado no curso de ADS � O%.");	
	}
		
	if(c6 != 0)
	{
		printf("\nO percentual de alunos matriculado no curso de SIS � %.1f%.", PSIS);
	}
	else
	{
		printf("\nO percentual de alunos matriculado no curso de ISI � O%.");	
	}
		
		
	//c. Total de alunos matriculados por semestre;
	printf("\nO total de aluno matriculado por semestre �:\n1� Semestre= %d  \n2� Semestre= %d.\n",sm1,sm2);
		
	//d. qualprintf("\n\n"); o curso com o menor n�mero de matr�culas;
	if(c1<c2 && c1<c3 && c1<c4 && c1<c5&& c1<c6&& c1<c7&& c1<c8)//Teste curso 1
	{
		printf("O curso com o menor n�meros de matriculas � o ADM.");
	}
	else  if(c2<c1 && c2<c3 && c2<c4 && c2<c5&& c2<c6&& c2<c7&& c2<c8)//teste curso 2
	{
		printf("O curso com o menor n�meros de matriculas � o ADS.");
	}
	else  if(c3<c1 && c3<c2 && c3<c4 && c3<c5&& c3<c6&& c3<c7&& c3<c8)//teste curso 3
	{
		printf("O curso com o menor n�meros de matriculas � o CON.");
	}
	else if(c5<c1 && c5<c2 && c5<c3 && c5<c4&& c5<c6&& c5<c7&& c5<c8)//teste curso 5
	{
		printf("O curso com o menor n�meros de matriculas � o DIR.");
	}
	else if(c6<c1 && c6<c2 && c6<c3 && c6<c4&& c6<c5&& c6<c7&& c6<c8)//teste curso 6
	{
		printf("O curso com o menor n�meros de matriculas � o SIS.");
	}
	else if(c7<c1 && c7<c2 && c7<c3 && c7<c4&& c7<c5&& c7<c6&& c7<c8)//teste curso 7
	{
		printf("O curso com o maior n�meros de matriculas � o PSI.");
	}
	else if(c8<c1 && c8<c2 && c8<c3 && c8<c4&& c8<c5&& c8<c6&& c8<c7)//teste curso 8
	{
		printf("O curso com o menor n�meros de matriculas � o LOG.");
	}
	else 
	{
		printf("-------------------------------------------.------------------------------------------------");
		printf("\n|Houve mais de um curso com o n�mero iguais de matr�culas ou apenas uma matr�cula digitada.|\n");//se hover mais de 1 menor 
		printf("-------------------------------------------.------------------------------------------------");
	}
		
	printf("\n\n --> VOC� SAIU! <--");
		
	printf("\n\n\n\n");
	
return 0;	
}
