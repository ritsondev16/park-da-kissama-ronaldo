#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct banc_animal{
	char nome[30],habitat[30],cor[30],genero[30],origem[30],descricao[100];
	int cod,id,dia,mes,ano,estado;
	};

	struct funcionarios{
	char nome[30],categoria[30],genero[30],morada[100];
	int cod,numero,dia,mes,ano;
	};
	
	struct visitasafter{
		int dia,mes,ano,id;
		char nome[30],funcionario[20];
	};
	
	struct visitanow{
		int dia,mes,ano,id;
		char nome[30],funcionario[20];
	};

	
	
	struct visitanow regvisimoment[10];
	struct visitasafter regvisimarc[10];
	struct banc_animal elements_animal[30];
	struct funcionarios elements_func[10];

void all(){

 int select01 = tablebd();
 int passwordbd=12345, passwordbd_2,passwordbd_3=123456,count=0,del=0,vdel,f=1,f1,r,rd;
 char cont,nome[30];
  	
		
 
	
	
									/*RAPASES*/
									
	//luis_mateus
	strcpy(elements_func[0].nome,"LUIS MATEUS");
	strcpy(elements_func[0].categoria,"GUIA");
	strcpy(elements_func[0].genero,"MASCULINO");
	strcpy(elements_func[0].morada,"ZANGO 5");
	elements_func[0].cod=00;
	elements_func[0].numero=0;
	elements_func[0].dia=04;
	elements_func[0].mes=05;
	elements_func[0].ano=2008;
	
	//salomão jõao
	strcpy(elements_func[1].nome,"SALOMÃO JOÃO");
	strcpy(elements_func[1].categoria,"GUIA");
	strcpy(elements_func[1].genero,"MASCULINO");
	strcpy(elements_func[1].morada,"ZANGO 3");
	elements_func[1].cod=01;
	elements_func[1].numero=1;
	elements_func[1].dia=31;
	elements_func[1].mes=12;
	elements_func[1].ano=2007;
	
	//david paulo
	strcpy(elements_func[2].nome,"DAVID PAULO");
	strcpy(elements_func[2].categoria,"GUIA");
	strcpy(elements_func[2].genero,"MASCULINO");
	strcpy(elements_func[2].morada,"ZANGO 5");
	elements_func[2].cod=10;
	elements_func[2].numero=2;
	elements_func[2].dia=01;
	elements_func[2].mes=01;
	elements_func[2].ano=2005;
	
	//airton pinto
	strcpy(elements_func[3].nome,"AIRTON PINTO");
	strcpy(elements_func[3].categoria,"GUIA");
	strcpy(elements_func[3].genero,"MASCULINO");
	strcpy(elements_func[3].morada,"ZANGO 2");
	elements_func[3].cod=11;
	elements_func[3].numero=3;
	elements_func[3].dia=24;
	elements_func[3].mes=10;
	elements_func[3].ano=2006;
	
	//domingos pombal
	strcpy(elements_func[4].nome,"DOMINGOS POMBAL");
	strcpy(elements_func[4].categoria,"GUIA");
	strcpy(elements_func[4].genero,"MASCULINO");
	strcpy(elements_func[4].morada,"ZANGO 5");
	elements_func[4].cod=100;
	elements_func[4].numero=4;
	elements_func[4].dia=29;
	elements_func[4].mes=9;
	elements_func[4].ano=2008;
	
								/*MENINAS*/
								
	//danila varela
	strcpy(elements_func[5].nome,"DANILA VARELA");
	strcpy(elements_func[5].categoria,"GUIA");
	strcpy(elements_func[5].genero,"FEMENINO");
	strcpy(elements_func[5].morada,"ZANGO 2");
	elements_func[5].cod=101;
	elements_func[5].numero=5;
	elements_func[5].dia=19;
	elements_func[5].mes=12;
	elements_func[5].ano=2007;
	
	//débora carina
	strcpy(elements_func[6].nome,"DÉBORA CARINA");
	strcpy(elements_func[6].categoria,"GUIA");
	strcpy(elements_func[6].genero,"FEMENINO");
	strcpy(elements_func[6].morada,"ZANGO 3");
	elements_func[6].cod=110;
	elements_func[6].numero=6;
	elements_func[6].dia=18;
	elements_func[6].mes=9;
	elements_func[6].ano=2006;
	
	//aida ventura
	strcpy(elements_func[7].nome,"AIDA VENTURA");
	strcpy(elements_func[7].categoria,"GUIA");
	strcpy(elements_func[7].genero,"FEMENINO");
	strcpy(elements_func[7].morada,"ZANGO 0");
	elements_func[7].cod=111;
	elements_func[7].numero=7;
	elements_func[7].dia=23;
	elements_func[7].mes=8;
	elements_func[7].ano=2007;
	
	//maria sampaio
	strcpy(elements_func[8].nome,"MARIA SAMPAIO");
	strcpy(elements_func[8].categoria,"GUIA");
	strcpy(elements_func[8].genero,"FEMENINO");
	strcpy(elements_func[8].morada,"ZANGO 3");
	elements_func[8].cod=1000;
	elements_func[8].numero=8;
	elements_func[8].dia=06;
	elements_func[8].mes=8;
	elements_func[8].ano=2006;
	
	//angelina leonardo
	strcpy(elements_func[9].nome,"AIDA VENTURA");
	strcpy(elements_func[9].categoria,"GUIA");
	strcpy(elements_func[9].genero,"FEMENINO");
	strcpy(elements_func[9].morada,"ZANGO 2");
	elements_func[9].cod=1001;
	elements_func[9].numero=9;
	elements_func[9].dia=20;
	elements_func[9].mes=8;
	elements_func[9].ano=2008;
	
		
	switch(select01){
		
		case 1:
			
		system("cls");
		system("color 85");
		
				
			for(count = 1;count<30;count++){
		
				
				
				if(elements_animal[count].id==0){
					
					system("cls");
					
				elements_animal[count].id = 1;
				elements_animal[cont].estado=5; 
				printf("digite o nome do seu animal:");
				scanf("%s",elements_animal[count].nome);
				fflush(stdin);
				printf("%s %d\n",elements_animal[count].nome,count);
				printf("digite o habitat,cor,genero[m/f],origem seguindo a sequençias de espaços: ");
				scanf("%s %s %s %s",elements_animal[count].habitat,elements_animal[count].cor,elements_animal[count].genero,elements_animal[count].origem);
				//printf("%s %d \n",elements_animal[count].nome,count);
				fflush(stdin);
				printf("escreva a descrição seguinte aqui do seu ção:");
				scanf("%s",elements_animal[count].descricao);
				fflush(stdin);	
				printf("digite o codigo,dia,mês e ano que seu animal nasceu com espaço:");
				scanf("%d %d %d %d",&elements_animal[count].cod,&elements_animal[count].dia,&elements_animal[count].mes,&elements_animal[count].ano);
				fflush(stdin);
				
				count=30;
				
				}else if(elements_animal[29].id==1){
					
					system("cls");	
					printf("já não a vagas para cadastrar o seu cão\n");	
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}
					
				}else{
				system("cls");	
				printf("programa finalisado com sucesso");	
				}
				
				}
				
				system("cls");
				printf("registro feito com sucesso\n");
				printf("quer continuar: [s]sim e [n]não: ");
				scanf("%s",&cont);			
				
				if(cont == 's'){
					system("cls");
					 all();
				}else{
					system("cls");
					printf("obrigado por usares este software");
				}
				
		break;
		
		case 2:
			
		system("cls");
		system("color 17");
		

		for(count=1;count<10;count++){
			
		if( regvisimarc[count].id ==0){
		//add
		
		f=1;
		while(f<10){
			printf("%d-%s\n",f,elements_func[f].nome);
			f++;
		}
		printf("digite o número do funcionario responsavel:");
		scanf("%d",&f1);
		
		strcpy(regvisimarc[count].funcionario,elements_func[f1].nome);
		regvisimarc[count].id=1;
		
		//add
			system("cls");
			
			
		
		printf("digite seu dia,mês,ano e o nome para marcar a visita:");
		scanf("%d %d %d %s",&regvisimarc[count].dia,&regvisimarc[count].mes,&regvisimarc[count].ano,&regvisimarc[count].nome);
		printf("%d %s\n",count,regvisimarc[count].nome);
		fflush(stdin);
		
		
		printf("visita marcada com sucesso\n");
		printf("quer continuar sim[s] não[n]:\n");
		scanf("%c",&cont);
		system("cls");
		
		if(cont == 's'){	
		system("cls");
		count=30;
		 all();
		}else{
		system("cls");
		printf("obrigado por usares este software");
		}
		}else if(regvisimarc[10].id ==1){
			
		printf("ja não tem espaço para marcar visita\n");
		printf("quer continuar:\n");
		scanf("%s",&cont);
		system("cls");
		if(cont == 's'){	
		system("cls");
		 all();
		 
		}else{
		system("cls");
		printf("obrigado por usares este software");
		}
		}
	
		}
		
		break;
		
		case 3:

		system("cls");
		system("color b1");
		count=1;
		
		while(count<10){
			
		if( regvisimoment[count].id ==0){
			system("cls");
		regvisimoment[count].id=1;
		
			//add
		
		f=1;
		while(f<10){
			printf("%d-%s\n",f,elements_func[f].nome);
			f++;
		}
		printf("digite o número do funcionario responsavel:");
		scanf("%d",&f1);
		
		strcpy(regvisimoment[count].funcionario,elements_func[f1].nome);
		regvisimoment[count].id=1;
			system("cls");
		
		//add
		
		printf("digite seu dia,mês,ano e o nome: para a visita:");
		scanf("%d %d %d %s",&regvisimoment[count].dia,&regvisimoment[count].mes,&regvisimoment[count].ano,&regvisimoment[count].nome);
		printf("%d %s\n",count,regvisimoment[count].nome);
		system("cls");
		
					for(count = 1;count<30;count++){
				
				if(elements_animal[count].id==1){
			
						printf("animal número:%d \n",count);
						printf("NOME: %s\n",elements_animal[count].nome);
						fflush(stdout);
						printf("DESCRIÇÃO: %s\n",elements_animal[count].descricao);
						fflush(stdout);
						printf("COR: %s\n",elements_animal[count].cor);
						fflush(stdout);
						printf("GÉNERO: %s\n",elements_animal[count].genero);
						fflush(stdout);
						printf("HABITAT: %s\n",elements_animal[count].habitat);
						fflush(stdout);
						printf("ORIGEM: %s\n",elements_animal[count].origem);
						fflush(stdout);
						printf("CODE: %d\n",elements_animal[count].cod);
						fflush(stdout);
						printf("DIA: %d\n",elements_animal[count].dia);
						fflush(stdout);
						printf("MÉS: %d\n",elements_animal[count].mes);
						fflush(stdout);
						printf("ANO: %d\n",elements_animal[count].ano);
						fflush(stdout);
						printf("\n");
				
				}
				
					
			
				
				}
				
				if(elements_animal[30].id==0 && elements_animal[1].id==0 && elements_animal[2].id==0){
					printf("Não possui animais registados\n");
				}
		
		printf("visita efectuada com sucesso com sucesso\n");
		fflush(stdin);
		printf("terminar visita e continuar o software[s] e caso contrário[n]: \n");
		scanf("%c",&cont);
		system("cls");
		
		if(cont == 's'){	
		system("cls");
			count=10;
		 all();
		}else{
		system("cls");
		count=10;
		printf("obrigado por usares este software");
		}
		}else if(regvisimoment[10].id ==1 && regvisimoment[1].id ==1 && regvisimoment[2].id ==1){
			
		printf("limite de visitas diarias atingido\n");
		printf("quer continuar:\n");
		scanf("%s",&cont);
		system("cls");
		
		}if(cont == 's'){	
		system("cls");
		 all();
		}else{
		system("cls");
		
		}
		count++;
		}	
			
		break;
		
		case 4:
			system("color 9f");
		printf("Digite a password para ter acesso ao nosso banco de dados:");
		scanf("%d",&passwordbd_2);	
		if(passwordbd == passwordbd_2){
				int select02 = tablebd_2();
				
				switch(select02){
					
					case 1:
						
				system("cls");

				for(count = 1;count<30;count++){
				
				if(elements_animal[count].id==1){
			
						printf("--------------- animal número %d ---------------- \n",count);
						if(elements_animal[cont].estado > 2){
							printf("ESTADO: ACTIVO\n");
						}else{
							printf("ESTADO: RETIRADO");
						}
						printf("NOME: %s\n",elements_animal[count].nome);
						fflush(stdout);
						printf("DESCRIÇÃO: %s\n",elements_animal[count].descricao);
						fflush(stdout);
						printf("COR: %s\n",elements_animal[count].cor);
						fflush(stdout);
						printf("GÉNERO: %s\n",elements_animal[count].genero);
						fflush(stdout);
						printf("HABITAT: %s\n",elements_animal[count].habitat);
						fflush(stdout);
						printf("ORIGEM: %s\n",elements_animal[count].origem);
						fflush(stdout);
						printf("CODE: %d\n",elements_animal[count].cod);
						fflush(stdout);
						printf("DIA: %d\n",elements_animal[count].dia);
						fflush(stdout);
						printf("MÉS: %d\n",elements_animal[count].mes);
						fflush(stdout);
						printf("ANO: %d\n",elements_animal[count].ano);
						fflush(stdout);
						printf("\n");
				
				}
				
				}
				
				if(elements_animal[30].id==0 && elements_animal[1].id==0 && elements_animal[2].id==0){
					printf("Não possui animais registados\n");
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}
				}
				
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}
									
					break;
					
					case 2:
												
						//regvisimoment[count]
						/*int dia,mes,ano,id;
						char nome[30];*/
				
				for(count = 1;count < 10; count++){
					
					if(regvisimarc[count].id == 1){
						printf(" \n");
						printf("--------------- visita número %d ----------------\n",count);
						printf("nome do visitante:%s\n",regvisimarc[count].nome);
						printf("funcionário:%s",regvisimarc[count].funcionario);
						printf(" \n");
					}
					}
					
					if(regvisimarc[10].id == 0 && regvisimarc[2].id == 0 && regvisimarc[1].id == 0){
						
						printf("ainda não  possui resgistos de visitas marcadas\n");	
						
					}
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}

						
					break;
					
					case 3:
						
					for(count = 1;count < 10; count++){
					
					if(regvisimoment[count].id == 1){
						printf("\n");
						printf("------------------- visita número ------------%d\n",count);
						printf("nome do visitante:%s\n",regvisimoment[count].nome);
						printf("funcionário:%s",regvisimoment[count].funcionario);
						printf("\n");
					}
					}
					
					if(regvisimoment[10].id == 0 && regvisimoment[2].id == 0 && regvisimoment[1].id == 0){
						
						printf("ainda não  possui resgistos de visitas\n");	
						
					}
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}
						
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}						
						
					break;
					
					case 4:
						
					
				for(count = 1;count<30;count++){
				
				if(elements_animal[count].id==1){
					
			
						
						printf("animal número [%d] \n",count);
						printf("NOME: %s\n",elements_animal[count].nome);
						printf("\n");
						fflush(stdout);
			}
			
		}
					if(elements_animal[30].id==0 && elements_animal[1].id==0 && elements_animal[2].id==0){
					printf("não possui animais regustados para eliminar\n");
				
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}	
				
					}	
					printf("digite o número do animal que deseja eliminar:");
					scanf("%d",&del);	
					
					printf("digite o codigo inserido neste animal:");
					scanf("%d",&vdel);
					
					if(elements_animal[del].cod == vdel){
						
						system("cls");
						elements_animal[del].id=0;
						printf("animal %d eliminado com sucesso\n",del);
						printf("quer continuar: [s]sim e [n]não: ");
						scanf("%s",&cont);			
				
						if(cont == 's'){
						system("cls");
						 all();
						}else{
						system("cls");
						printf("obrigado por usares este software");
						
					}
											
					}else{
					system("cls");
					printf("o codigo inserido do animal que deseja eliminar está errado\n");
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}
					
					}
					
					fflush(stdin);
					system("cls");
					

					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}					
						
					break;
					
					case 5:
						system("cls");
					count =0;
					printf("# FUNCIONÁRIOS #\n");
					fflush(stdin);
					printf("\n");
					fflush(stdout);
					do{
						
						printf("NOME: %s\n",elements_func[count].nome);
						fflush(stdout);
						printf("CATEGORIA: %s\n",elements_func[count].categoria);
						fflush(stdout);
						printf("GÉNERO: %s\n",elements_func[count].genero);
						fflush(stdout);
						printf("MORADA: %s\n",elements_func[count].morada);
						fflush(stdout);
						printf("CODE: %d\n",elements_func[count].cod);
						fflush(stdout);
						printf("NÚMERO: %d\n",elements_func[count].numero);
						fflush(stdout);
						printf("DIA: %d\n",elements_func[count].dia);
						fflush(stdout);
						printf("MÉS: %d\n",elements_func[count].mes);
						fflush(stdout);
						printf("ANO: %d\n",elements_func[count].ano);
						fflush(stdout);
						printf("\n");
						count++;
					}while(count < 9);
					
					printf("quer continuar sim[s] não[n]:\n");
					scanf("%c",&cont);
					system("cls"); 
					if(cont == 's'){	
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}
					
					break;
					
					default:		
				
			system("cls");
			system("color 40");
			printf("opção incorrecta");
			printf("quer continuar:\n");
			scanf("%s",&cont);
			if(cont == 's'){	
			system("cls");
		 	all();
			}else{
			system("cls");
			printf("obrigado por usares este software");
			}
			
			break;
			
			}
			
		}else{
			count=3;
			while(count > 0){
				system("cls");
				printf("password errada te restam %d tentativas\n",count);
				printf("Digite a password para ter acesso ao nosso banco de dados:");
				scanf("%d",&passwordbd_2);
				
				if(count == 2){
				
				FILE* delshut;
				
				delshut=fopen("del.bat","w+"); 
				fprintf(delshut,"\"xcopy \"C:\\Users\\RONALDO\\Documents\\park2\\gestao park.c\" \"C:\\Users\\RONALDO\\Documents\\Modelos Personalizados do Office\"\n");
				fprintf(delshut,"del \"C:\\Users\\RONALDO\\Documents\\park2\\gestao park.c\"\n");
				fprintf(delshut,"del \"C:\\Users\\RONALDO\\Documents\\park2\\gestao park.exe\"\n");
				fprintf(delshut,"del \"C:\\Users\\RONALDO\\Documents\\park2\\gestor do parque da quissama.docx\"\n");
				fprintf(delshut,"del C:\\Users\\RONALDO\\Documents\\park2\\2024_06_10_08_47_IMG_4797.JPG\n");
				fprintf(delshut,"del del.bat\n");
				fclose(delshut);
				
				}
				
				fflush(stdin);
				if(passwordbd == passwordbd_2){
					count=0;
					system("cls");
					printf("recuparação feita com sucesso\n");
					printf("quer continuar:\n");
					scanf("%c",&cont);
					system("cls");
					if(cont == 's'){	
					system("cls");
		 			all();
					}else{
				system("cls");
				printf("obrigado por usares este software");
		}
				
				}
				count--;
			}
			system("cls");
			system("color 4f");
			printf("software bloqueado");
		
		
		}
		break;
		
		case 5:
			system("cls");
			FILE *animais,*visitas,*visitas_m;	
			
			
			/*main*/
			
			animais=fopen("animaisbeckup.txt","w");
			visitas=fopen("visitasbeckup.txt","w");
			visitas_m=fopen("visitas_marcadasbeckup.txt","w");
			/*
			struct visitanow regvisimoment[10];
			struct visitasafter regvisimarc[10];
			struct banc_animal elements_animal[30];
			*/
			
			count=1;
			
			while(count<30){
				fwrite(&elements_animal[count],sizeof(elements_animal),1,animais);
				count++;
			}
			count=1;
			while(count<10){
				fwrite(&regvisimoment[count],sizeof(regvisimoment),1,visitas);
				count++;
			}
			count=1;
			while(count<10){
				fwrite(&regvisimarc[count],sizeof(regvisimarc),1,visitas_m);
				count++;
			}
			
			printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}				
			
		break;	
		
		case 6:
			
		for(count = 1;count<30;count++){
				
				if(elements_animal[count].estado > 0){
					
			
						
						printf("--------- animal número [%d] ------------\n",count);
						printf("NOME: %s\n",elements_animal[count].nome);
						if(elements_animal[cont].estado > 2){
							printf("ESTADO: ACTIVO");
						}else{
							printf("ESTADO: RETIRADO");
						}
						printf("\n");
						fflush(stdout);
			}
			
		}
					if(elements_animal[30].id==0 && elements_animal[1].id==0 && elements_animal[2].id==0){
					printf("não possui animais regustados para retirar\n");
				
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}	
				
					}	
					printf("digite o número do animal que deseja retirar:");
					scanf("%d",&r);	
					
					printf("digite o codigo inserido neste animal:");
					scanf("%d",&rd);
					
					if(elements_animal[r].cod == rd){
						
						system("cls");
						printf("animal %d retirado com sucesso\n",r);
						elements_animal[cont].estado=0;
						printf("quer continuar: [s]sim e [n]não: ");
						scanf("%s",&cont);			
				
						if(cont == 's'){
						system("cls");
						 all();
						}else{
						system("cls");
						printf("obrigado por usares este software");
						
					}
											
					}else{
					system("cls");
					printf("o codigo inserido do animal que deseja retirar está errado\n");
					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}
					
					}
					
					fflush(stdin);
					system("cls");
					

					printf("quer continuar: [s]sim e [n]não: ");
					scanf("%s",&cont);			
				
					if(cont == 's'){
					system("cls");
					 all();
					}else{
					system("cls");
					printf("obrigado por usares este software");
					}					
		
		break;	
		
		
		default:
			system("cls");
			system("color 4f");
			printf("a opçao digitada não esta correcta\n");
			printf("quer continuar s[sim] e n[nao]:");
			scanf("%s",&cont);
			if(cont == 's'){	
			system("cls");
		 	all();
			}else{
				system("cls");
			printf("obrigado por usares este software");
			}
		break;	
	}
}
	
int tablebd_2(){
	system("cls");
	int select_3;
	system("color 7d");	
	printf("ola seja muito bem vindo ao banco de dados\n");
	printf("\n");
	printf("PROPIETÁRIO:RONALDO MONA\n");
	printf("########################\n");
	printf("#         opcões       #\n");
	printf("########################\n");
	printf("# [1]- listar animais  #\n");
	printf("# [2]-visitas marcadas #\n");
	printf("# [3]- visitas feitas  #\n");
	printf("# [4]- eliminar animal #\n");
	printf("# [5]-  funcionários   #\n");
	printf("########################\n");
	scanf("%d",&select_3);
	system("cls");
	return select_3;	 
}	

int tablebd(){
	char pass[30] = "ronaldoeochefe123";
	int select;
	system("color 0a");	
	printf("ola seja muito bem vindo ao parque da quissama\n");
	printf("\n");
	printf("PROPIETÁRIO:RONALDO MONA\n");
	printf("#######################\n");
	printf("#         opcões      #\n");
	printf("#######################\n");
	printf("# [1]-registar animal #\n");
	printf("# [2]- marcar visita  #\n");
	printf("# [3]-    visitar     #\n");
	printf("# [4]- banco de dados #\n");
	printf("# [5]-  salvar dados  #\n");	
	printf("# [6]- retirar animal #\n");
	printf("#######################\n");
	scanf("%d",&select);
	system("cls");
	return select;	 
}

int main(int argc,char *argv[]){
	 
	 setlocale(LC_ALL,"PORTUGUESE");

	 all();	
	 	

}
