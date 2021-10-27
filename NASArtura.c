#include<stdlib.h>
#include<stdio.h>
#include<conio.c>
#include <time.h>

int tecla, p=1, posicao=0, d;
bool sair = false;
//-------------------------------------------------------------------
void bordas(int ci,int li, int cf, int lf, int cor) {
	int i;
    
	textcolor(cor);
	textbackground(0);
    
	for (i=ci;i<=cf;i++){ //desenha as linhas horizontais
        	gotoxy(i,li);  printf("%c",205);
        	gotoxy(i,lf); printf("%c",205);
    	}
	for (i=li;i<=lf;i++){ //desenha as linhas verticais
		gotoxy(ci,i); printf("%c",186);
        	gotoxy(cf,i); printf("%c",186);
    	}
    	gotoxy(ci,li);  printf("%c",201);
    	gotoxy(cf,li);  printf("%c",187);
    	gotoxy(ci,lf); printf("%c",200);
    	gotoxy(cf,lf); printf("%c",188);
    
    	printf("\n\n");
    
}
//-------------------------------------------------------------------
void menu() {

      do{
        textcolor(10); 
        textbackground(0);
        gotoxy (10,10); printf(" JOGAR ");
        gotoxy (10,11); printf(" REGRAS ");
        gotoxy (10,12); printf(" CREDITOS ");
        gotoxy (10,13); printf(" SAIR  ");
        
        textcolor(2);
        textbackground(15);
        
        switch (p){
		case 1:gotoxy(10,10); printf(" JOGAR "); break;     
		case 2:gotoxy(10,11); printf(" REGRAS "); break;     
		case 3:gotoxy(10,12); printf(" CREDITOS "); break;           
		case 4:gotoxy(10,13); printf(" SAIR  "); break;           
        }    
        tecla=getch();
        if (tecla==224 || tecla==0)
		tecla=getch();
        switch (tecla){
		case 72:p--; break;     
		case 80:p++; break;            
        }
	if (p==0) p=5;
	if (p==6) p=1;
	}
	while (tecla!=27 && tecla!=13);

	gotoxy(1,25);
}
//-------------------------------------------------------------------
void casas() {
	if (posicao == 0){
		gotoxy(4,3); printf("Posicao %d terra - DECOLAR", posicao);
     } 
     
	if (posicao == 1){
		gotoxy(4,3); printf("Posicao %d MERCURIO - MUNDO PEQUENO", posicao);
		gotoxy(4,5); printf("Mercurio e o menor planeta do nosso sistema solar , apenas um pouco ");
        	gotoxy(4,6); printf("maior que a Lua da Terra ");	
	}

	if (posicao == 2){
		gotoxy(4,3); printf("Posicao %d MERCURIO - SUPERFICIE ASPERA", posicao);
		gotoxy(4,5); printf("Mercurio e um planeta rochoso, tambem conhecido como um planeta terrestre. ");
        	gotoxy(4,6); printf("Mercurio tem uma superficie solida e cheia de crateras, ");
        	gotoxy(4,7); printf("muito parecida com a lua da Terra.");
	}

	if (posicao == 3){
		gotoxy(4,3); printf("Posicao %d MERCURIO - QUEM APAGOU A LUA", posicao);
		gotoxy(4,5); printf("Mercurio nao tem luas e nao ha aneis ao redor dele.");
	}

	if (posicao == 4){
		gotoxy(4,3); printf("Posicao %d VENUS  - LONGOS DIAS, ANOS CURTOS\n", posicao);
		gotoxy(4,5); printf("Venus gira muito lentamente em seu eixo? um dia em Venus dura 243 ");
        	gotoxy(4,6); printf("dias terrestres. O planeta orbita o Sol mais rapido  que a Terra, no ");
        	gotoxy(4,7); printf("entanto, entao um ano em Venus leva apenas cerca de 225 dias terrestres, ");
        	gotoxy(4,8); printf("tornando um dia venusiano mais longo do que seu ano!\n");
	}
	
	if (posicao == 5){
		gotoxy(4,3); printf("Posicao %d VENUS - ASSISTENCIA GRAVITACIONAL\n", posicao);
		gotoxy(4,5); printf("Voce usou a assitencia gravitacional do planeta Venus, va para casa 19.");
		posicao = 19;
	}
	
	if (posicao == 6){
		gotoxy(4,3); printf("Posicao %d VENUS - ESPACO ESPECIAL\n", posicao);
		gotoxy(4,5); printf("Voce inesperadamente acabou sendo atingido por uma asteroide, o ");
        	gotoxy(4,6); printf("mesmo acabou danificando seu sistema de navegacao, avance 1(uma) ");
        	gotoxy(4,7); printf("casa e fique la por 3 rodadas para consertar seu sistema");
	}
	
	if (posicao == 7){
		gotoxy(4,3); printf("Posicao %d VENUS - QUEM PEIDOU\n", posicao);
		gotoxy(4,5); printf("Venus esta permanentemente envolta em espessas nuvens toxicas de acido ");
        	gotoxy(4,6); printf("sulfurico que comecam a uma altitude de 45 a 70 quilometros. As nuvens ");
        	gotoxy(4,7); printf("cheiram a ovos podres!\n");
	}

	if (posicao == 8){
		gotoxy(4,3); printf("Posicao %d VENUS - ALGUEM PODE DESLIGAR O AQUECEDOR\n", posicao);
		gotoxy(4,5); printf("Apesar de Mercurio ser o planeta mais proximo do Sol, e Venus que possui ");
        	gotoxy(4,6); printf("a atmosfera mais quente. E uma media impressionante de 450 C.\n");
	}
	
	if (posicao == 9){
		gotoxy(4,3); printf("Posicao %d VENUS - TERRENO DIVERSIFICADO\n", posicao);
		gotoxy(4,5); printf("Venus tem uma superficie solida coberta de vulcoes, fendas e montanhas  ");
        	gotoxy(4,6); printf("semelhantes a cupulas, com planicies vulcanicas expansivas e vastos");
        	gotoxy(4,7); printf("planaltos.\n");
	}
	
	if (posicao == 10){
		gotoxy(4,3); printf("Posicao %d MARTE - PLANETA ENFERRUJADO\n", posicao);
		gotoxy(4,5); printf("Marte e conhecido como o Planeta Vermelho porque minerais de ferro no solo ");
        	gotoxy(4,6); printf("marciano oxidam, ou enferrujam, fazendo com que o solo e a atmosfera ");
        	gotoxy(4,7); printf("parecam vermelhos.\n");
	}
	
	if (posicao == 11){
		gotoxy(4,3); printf("Posicao %d - DUAS LUAS\n", posicao);
		gotoxy(4,5); printf("Marte tem duas luas chamadas Phobos e Deimos.\n");
	}
	
	if (posicao == 12){
		gotoxy(4,3); printf("Posicao %d MARTE - MUITAS MISSOES\n", posicao);
		gotoxy(4,5); printf("Varias missoes visitaram este planeta, de flybys e orbitadores a rovers ");
        	gotoxy(4,6); printf("na superficie. O primeiro verdadeiro sucesso da missao a Marte foi o ");
        	gotoxy(4,7); printf("mariner 4 em 1965\n");
	}
	
	if (posicao == 13){
		gotoxy(4,3); printf("Posicao %d - BLITZ ESPACIAL", posicao);
		gotoxy(4,5); printf("Oh nao, você foi capturado por uma raca de policiais alienigena que esta procurando ");
        	gotoxy(4,6); printf("por um relogio esquisito, e ainda por cima estao revistando sua nave, ");
        	gotoxy(4,7); printf("fique parado por 3 rodadas ate terminar a revista");
	}
	
	if (posicao == 14){
		gotoxy(4,3); printf("Posicao %d - ESCOLTA PRESIDENCIAL", posicao);
		gotoxy(4,5); printf("Você acabou se encontrando com uma escolta do presidente spook,");
        	gotoxy(4,6); printf("mantenha sua nave atrás deles e espere uma rodada para jogar.");
	}
	
	if (posicao == 15){
		gotoxy(4,3); printf("Posicao %d MARTE - IRONMAN", posicao);
		gotoxy(4,5); printf("Voce encontrou um cara com uma armadura de ferro preso em uma ");
        	gotoxy(4,6); printf("nave no meio do espaco sem combustivel. Como você e uma boa pessoa, voce ");
        	gotoxy(4,7); printf("doou 2 vidas para que ele possa retornar a jornada dele, e com isso voce ");
        	gotoxy(4,8); printf("ganhou um novo mapa espacial que lhe mostra como avancar 3 casas ");
        	posicao = 18;
	}
	
	if (posicao == 16){
		gotoxy(4,3); printf("Posicao %d JUPITER - COMBUSTIVEL ESPACIAL", posicao);
		gotoxy(4,5); printf("Uffa, você encontrou um meteorito rico em hidrazina, um componente ");
        	gotoxy(4,6); printf("propriamente necessário para a produção de combustível de seu foguete, ");
        	gotoxy(4,7); printf("encha seu tanque para que assim possa continuar sua jornada");
	}

	if (posicao == 17){
		gotoxy(4,3); printf("Posicao %d JUPITER - O MAIOR PLANETA\n", posicao);
		gotoxy(4,5); printf("Onze Terras poderiam caber atraves do equador de Jupiter. Se a Terra fosse ");
        	gotoxy(4,6); printf("do tamanho de uma uva, Jupiter teria o tamanho de uma bola de basquete\n");
	}

	if (posicao == 18){
		gotoxy(4,3); printf("Posicao %d JUPITER - SEM CHAO\n", posicao);
		gotoxy(4,5); printf("Nao e possivel pisar na superficie de Jupiter, pois sua superficie e feita ");
        	gotoxy(4,6); printf("por gases\n");
	}

	if (posicao == 19){
		gotoxy(4,3); printf("Posicao %d JUPITER - SUPER TEMPESTADE\n", posicao);
		gotoxy(4,5); printf("A Grande Mancha Vermelha de Jupiter e uma tempestade gigantesca que tem ");
        	gotoxy(4,6); printf("cerca de duas vezes o tamanho da Terra e se arrasta ha mais de um seculo.\n");
	}
	
	if (posicao == 20){
		gotoxy(4,3); printf("Posicao %d SATURNO - MINI SISTEMA SOLAR\n", posicao);
		gotoxy(4,5); printf("Saturno tem 53 luas conhecidas com mais 29 luas aguardando confirmacao de ");
        	gotoxy(4,6); printf("sua descoberta e ou seja, um total de 82 luas.\n");
	}
	
	if (posicao == 21){
		gotoxy(4,3); printf("Posicao %d - BLITZ ESPACIAL", posicao);
		gotoxy(4,5); printf("Wow, voce foi parado por uma blitz espacial feita por alguns ");
        	gotoxy(4,6); printf("capangas de um cara chamado Thanos, me parece que eles estao procurando uma ");
        	gotoxy(4,7); printf("tal de joias do infinito, ainda bem que você nao sabe nada disso, e por isso ");
        	gotoxy(4,8); printf("voce nao vai entrar nesta confusao. Avance 1 casa");
        	posicao = 22;
	}
	
	if (posicao == 22){
		gotoxy(4,3); printf("Posicao %d - GREVE ESPACIAL", posicao);
		gotoxy(4,5); printf("Eita, voce acabou encontrando uma greve de naves espaciais que estao ");
        	gotoxy(4,6); printf("reinvindicando os direitos dos aliens poderem realizar suas caças as vacas ");
        	gotoxy(4,7); printf("no planeta terra, e estão deixando passar apenas algumas naves da policia ");
        	gotoxy(4,8); printf("e ambulancia passar. Fique parado por 4 rodadas");
	}

	if (posicao == 23){
		gotoxy(4,3); printf("Posicao %d - FOFURA NO ESPACO", posicao);
		gotoxy(4,5); printf("Oh nao, você acabou entrando no territorio dos Sith e acabou ");
		gotoxy(4,6); printf("se encontrando com o Darth Vader, infelizmente ele viu que você tinha uma ");
		gotoxy(4,7); printf("pelucia do R2D2 e acabou ficando magoado, apos isso ele lhe inforcou sem as ");
		gotoxy(4,8); printf("maos e foi embora, felizmente voce perdeu apenas 2 de vida.");
	}
	
	if (posicao == 24){
		gotoxy(4,3); printf("Posicao %d SATURNO - SENHOR DOS ANEIS\n", posicao);
		gotoxy(4,5); printf("Saturno tem o sistema de aneis mais espetacular, com sete aneis e ");
        	gotoxy(4,6); printf("varias lacunas e divisoes entre eles.\n");
	}
	
	if (posicao == 25){
		gotoxy(4,3); printf("Posicao %d SATURNO - FORCA CENTRIFUGA\n", posicao);
		gotoxy(4,5); printf("Saturno gira tao rapidamente em seu eixo que o planeta se tornou achatado. ");
		gotoxy(4,6); printf("A distancia do seu centro ate os polos e de 54.000 km, enquanto a distancia do ");
		gotoxy(4,7); printf("centro ao equador e de 60.300 km. Ou seja, seu ponto de equador e ");
		gotoxy(4,8); printf("aproximadamente 6,300 km mais distante do centro do que os polos.\n");
	}
	
	if (posicao == 26){
		gotoxy(4,3); printf("Posicao %d SATURNO - ASSISTENCIA GRAVITACIONAL", posicao);
		gotoxy(4,5); printf("Voce usuou a tecnica de assistencia gravitacional que adicionou impulso ");
        	gotoxy(4,6); printf("e aumentou a energia da orbita de sua nave, va para 35.");
		posicao = 35;
	}
	
	if (posicao == 27){
		gotoxy(4,3); printf("Posicao %d URANUS - REI GELADO\n", posicao);
		gotoxy(4,5); printf("Urano e um gigante do gelo. A maior parte de sua massa e um fluido ");
		gotoxy(4,6); printf("quente e denso de materiais gelados agua, metano e amonia acima de");
		gotoxy(4,7); printf("um pequeno nucleo rochoso.\n");
	}
	
	if (posicao == 28){
		gotoxy(4,3); printf("Posicao %d URANUS - JOIA AZUL\n", posicao);
		gotoxy(4,5); printf("Ao absorver a porcao vermelha da luz solar, o gas metano da atmosfera ");
        	gotoxy(4,6); printf("de Urano da ao planeta seus belos tons azul-esverdeados\n");
	}
	
	if (posicao == 29){
		gotoxy(4,3); printf("Posicao %d URANUS - ESTACOES DO ANO\n", posicao);
		gotoxy(4,5); printf("Devido a sua rotacao diferente, as esta??es no planeta pode durar cerca ");
		gotoxy(4,6); printf("de 21 anos, causado enormes variacao de dia e noite em urano.\n");
	}
	
	if (posicao == 30){
		gotoxy(4,3); printf("Posicao %d URANUS - OUTRO MUNDO ANELADO\n", posicao);
		gotoxy(4,5); printf("Urano possui 13 aneis formados por particulas que variam de tamanho entre ");
		gotoxy(4,6); printf("graos de poeira a pequenos pedregulhos.\n");
	}
	if (posicao == 31){
		gotoxy(4,3); printf("Posicao %d URANUS - GRANDE LUAR\n", posicao);
		gotoxy(4,5); printf("Urano tem 27 luas conhecidas, e elas tem o nome de personagens das obras de ");
		gotoxy(4,6); printf("William Shakespeare e Alexander Pope.\n");	
	}

	if (posicao == 32){
		gotoxy(4,3); printf("Posicao %d URANUS - UM POUCO SOLITARIO\n", posicao);
		gotoxy(4,5); printf("Voyager 2 e a unica nave espacial a voar por Urano. Nenhuma nave orbitou este ");
        	gotoxy(4,6); printf("planeta distante para estuda-lo longa e de perto.\n");
	}

	if (posicao == 33){
		gotoxy(4,3); printf("Posicao %d SISTEMA SOLAR - CEU ESTRELADO\n", posicao);
		gotoxy(4,5); printf("Nosso sistema solar e composto por uma estrela, oito planetas, e incontaveis ");
        	gotoxy(4,6); printf("corpos menores, como planetas anoes, asteroides e cometas.\n");
	}

	if (posicao == 34){
		gotoxy(4,3); printf("Posicao %d SISTEMA SOLAR - ENCONTRE-ME NO BRACO DE ORION", posicao);
		gotoxy(4,5); printf("Nosso sistema solar orbita o centro da galaxia Via Lactea a cerca ");
        	gotoxy(4,6); printf("de 828.000 km/h. Estamos em um dos quatro bracos em espiral da galaxia.\n");
	}
	
	if (posicao == 35){
		gotoxy(4,3); printf("Posicao %d SISTEMA SOLAR - O SOL\n", posicao);
		gotoxy(4,5); printf("Apesar de ser considerado uma estrela de tamanho bem na media, o Sol e tao ");
        	gotoxy(4,6); printf("grande que caberiam um milhao de Terras em seu interior.");
	}
	
	if (posicao == 36){
		gotoxy(4,3); printf("Posicao %d SISTEMA SOLAR - PROMOCAO ESPACIAL", posicao);
		gotoxy(4,5); printf("Minha nossa nossa nossa, voce acaba de encontrar uma base espacial que esta ");
        	gotoxy(4,6); printf("com uma super promoção na alien friday. Encha sua vida e concerte sua nave.");
	}
	
	if (posicao == 37){
		gotoxy(4,3); printf("Posicao %d ESPACO - A GRANDE GALAXIA\n", posicao);
		gotoxy(4,5); printf("Se tentassemos atravessar a Via Lactea na velocidade da luz, levariamos ");
        gotoxy(4,6); printf("100 mil anos para completar o trajeto.\n");
	}

	if (posicao == 38){
		gotoxy(4,3); printf("Posicao %d ESPACO - TUDO EM VOLTA DE SAGITARIO\n", posicao);
		gotoxy(4,5); printf("O centro da Via Lactea esta na direcao da constelacao de Sagitario, ");
		gotoxy(4,6); printf("onde ha varias nebulosas e aglomerados de estrelas. Essa a ");
		gotoxy(4,7); printf("parte mais brilhante da galaxia.\n");
	}
	
	if (posicao == 39){
		gotoxy(4,3); printf("Posicao %d ESPACO - CEU ESTRELADO\n", posicao);
		gotoxy(4,5); printf("Ha mais estrelas no universo do que graos de areia em todas as ");
		gotoxy(4,6); printf("praias da Terra, somente em nossa galaxia, existem entre ");
		gotoxy(4,7); printf("200 a 400 milhoes de estrelas\n");
	}
	
	if (posicao == 40){
		gotoxy(4,3); printf("Posicao %d ESPACO - SOMOS APENAS GRAOS DE AREIA\n", posicao);
		gotoxy(4,5); printf("Existem mais de 140 bilhoes de galaxias em todo espaco, sera que em ");
        	gotoxy(4,6); printf("todas essas nao ha a possibilidade de houver vida");
	}
	
	if (posicao == 41){
		gotoxy(4,3); printf("Posicao %d ESPACO - CHUVA DE METEOROS", posicao);
		gotoxy(4,5); printf("Voce esbarrou com uma chuva de meteoros, tera que se abrigar na casa 37, ");
		gotoxy(4,6); printf("volte para casa 37. ");
		posicao = 37;
	}
	
	if (posicao == 42){
		gotoxy(4,3); printf("Posicao %d ESPACO - ROBOS VAO LONGE\n", posicao);
		gotoxy(4,5); printf("A Voyager 1 e a Voyager 2 da NASA sao a unica nave espacial a deixar ");
	}
	
	if (posicao == 43){
		gotoxy(4,3); printf("Posicao %d ESPACO - UMA LUZ VERDE", posicao);
		gotoxy(4,5); printf("Eita, voce encontrou com a tropa dos lanternas verdes, pegue uma ");
		gotoxy(4,6); printf("vacuo com eles e chegue mais rspido ao destino. Avance 4 casas.");
	}
	
	if (posicao == 44){
		gotoxy(4,3); printf("Posicao %d ESPACO - NINGUEM PODE TE OUVIR GRITAR\n", posicao);
		gotoxy(4,5); printf("O espaco e um grande vacuo, ou seja, nao existe ar. Como o som sao ");
		gotoxy(4,6); printf("ondas de vibracoes do ar, se torna impossivel a existencia de som\n");
	}
	
	if (posicao == 45){
		gotoxy(4,3); printf("Posicao %d ESPACO - CARONA ESPACIAL", posicao);
		gotoxy(4,5); printf("Voce usou a ajuda de uma outra nave para navegar no espaco, ");
        	gotoxy(4,6); printf("va até a casa 51.");
		posicao = 51;
	}
	
	if (posicao == 46){
		gotoxy(4,3); printf("Posicao %d ESPACO - O BURACO NEGRO MAIS DISTANTE\n", posicao);
		gotoxy(4,5); printf("O buraco negro mais distante ja descoberto esta em uma gal?xia a ");
		gotoxy(4,6); printf("cerca de 13,1 bilhoes de anos-luz da Terra. A idade do universo atualmente ");
		gotoxy(4,7); printf("e estimada em 13,8 bilhoes de anos-luz, entao esse buraco negro ja existia ");
		gotoxy(4,8); printf("cerca de apenas 690 milhoes de anos apos o Big Bang.\n");	
	}

	if (posicao == 47){
		gotoxy(4,3); printf("Posicao %d ESPACO - CAMERA LENTA\n", posicao);
		gotoxy(4,5); printf("Se voce sobrevoar um buraco negro, sua extrema atracao gravitacional ");
		gotoxy(4,6); printf("desaceleraria cada vez mais o tempo e distorceria o espaco.");
	}

	if (posicao == 48){
		gotoxy(4,3); printf("Posicao %d ESPACO - NASCE UM BURACO NEGRO\n", posicao);
		gotoxy(4,5); printf("Os buracos negros maiores, do tamanho de estrelas, geralmente se formam ");
		gotoxy(4,6); printf("quando uma estrela muito grande colapsa. Quando isso acontece, ocorre ");
		gotoxy(4,7); printf("uma supernova, que e a explosao de uma estrela.\n");
	}

	if (posicao == 49){
		gotoxy(4,3); printf("Posicao %d ESPACO - PROBLEMAS TECNICOS", posicao);
		gotoxy(4,5); printf("Ocorrou um erro no software da sua nave e voce saiu fora do curso, ");
        	gotoxy(4,6); printf("volte para casa 33.");
		posicao = 33;
	}
	
	if (posicao == 50){
		gotoxy(4,3); printf("Posicao %d ESPACO - ASTEROIDE DIFERENTE", posicao);
		gotoxy(4,5); printf("Voce encontrou um asteroide com formato bonito e ficou olhando, ");
		gotoxy(4,6); printf("Perca uma rodada.");
	}
	
	if (posicao == 51){
		gotoxy(4,3); printf("Posicao %d NETUNO - ", posicao);
		gotoxy(4,5); printf("Voce encontrou lixo espacial no cinturao de netuno, e decidiu limpar ");
		gotoxy(4,6); printf("o espaco. Perca uma rodada.");
	}
	
	if (posicao == 52){
		gotoxy(4,3); printf("Posicao %d ESPACO - O ANO GALATICO\n", posicao);
		gotoxy(4,5); printf("O ano galatico e o tempo necessario para que o Sol complete uma volta ");
		gotoxy(4,6); printf("em torno do centro da nossa galaxia, um tempo de, aproximadamente, ");
		gotoxy(4,7); printf("250 milhoes de anos");
	}
	
	if (posicao == 53){
		gotoxy(4,3); printf("Posicao %d ESPACO - MAIS PLANETAS\n", posicao);
		gotoxy(4,5); printf("Sabemos de milhares de planetas - chamados exoplanetas - orbitando ");
		gotoxy(4,6); printf("outras estrelas em nossa galaxia. Voce olha para o ceu noturno, cada ");
		gotoxy(4,7); printf("estrela que voce ve tem, em media, pelo menos um planeta.\n");
	}
	
	if (posicao == 54){
		gotoxy(4,3); printf("Posicao %d SISTEMA SOLAR - CINTURAO DE ASTEROIDES\n", posicao);
		gotoxy(4,5); printf("Apesar de haver asteroides espalhados por todo o Sistema Solar, a maior ");
		gotoxy(4,6); printf("parte deles esta localizada entre as orbitas de Marte e Jupiter, regiao ");
		gotoxy(4,7); printf("conhecida como Cinturao de Asteroides\n");
	}
	
	if (posicao == 55){
		gotoxy(4,3); printf("Posicao %d SISTEMA SOLAR - DEIXANDO O BERCO\n", posicao);
		gotoxy(4,5); printf("Mais de 300 naves roboticas exploraram destinos alam da orbita da Terra, ");
		gotoxy(4,6); printf("incluindo 24 astronautas americanos que fizeram a viagem da Terra ata a Lua.\n");
	}
	
	if (posicao == 56){
		gotoxy(4,3); printf("Posicao %d NETUNO - PEQUENOS METEOROS", posicao);
		gotoxy(4,5); printf("Voce estava perto de netuno e esbarrou com alguns meteoritos.");
		gotoxy(4,6); printf("Desvie deles e siga em frente.");
	}
	
	if (posicao == 57){
		gotoxy(4,3); printf("Posicao %d NETUNO - OITAVO ANDARILHO\n", posicao);
		gotoxy(4,5); printf("Netuno orbita nosso Sol, uma estrela, e o oitavo planeta do Sol ");
		gotoxy(4,6); printf("a uma distancia de cerca de 4,5 bilhoes de quilometros.\n");
	}
	
	if (posicao == 58){
		gotoxy(4,3); printf("Posicao %d NETUNO - ASSISTENCIA GRAVITACIONAL", posicao);
		gotoxy(4,5); printf("Voce calculou errado a assistencia gravitacional e foi para no lugar errado");
		gotoxy(4,5); printf("Volte para casa 52.");
		posicao = 52;
	}
	
	if (posicao == 59){
		gotoxy(4,3); printf("Posicao %d NETUNO - BURACO NEGRO GULOSO", posicao);
		gotoxy(4,5); printf("Voce foi sugado por um buraco negro, volte para casa 28.");
		posicao = 28;
	}
	
	if (posicao == 60){
		gotoxy(4,3); printf("Posicao %d NETUNO - UM DIA CURTO, MAS UM LONGO ANO\n", posicao);
		gotoxy(4,5); printf("Netuno leva cerca de 16 horas para girar uma vez em seu proprio eixo, ");
		gotoxy(4,6); printf("completando um dia netuniano. Porem, ele demora cerca de 165 anos ");
		gotoxy(4,7); printf("terrestres para orbitar o sol.\n");
	}
	
	if (posicao == 61){
		gotoxy(4,3); printf("Posicao %d SISTEMA SOLAR - CHANCE\n", posicao);
		gotoxy(4,5); printf("Segundo calculos estatisticos, temos uma chance mil vezes maior de ");
		gotoxy(4,6); printf("morrer em consequencia da colisao de um asteroide na Terra do que ");
		gotoxy(4,7); printf("de ganhar na loteria.\n");
	}
	
	if (posicao == 62){
		gotoxy(4,3); printf("Posicao %d SISTEMA SOLAR - LUGARES FAMILIAR", posicao);
		gotoxy(4,5); printf("Mais perto da Terra ja e possivel avistar algo satelites familiares.");
	}
	
	if (posicao == 63){
		gotoxy(4,3); printf("Posicao %d TERRA - LIXO ESPACIAL\n", posicao);
		gotoxy(4,5); printf("Lixo espacial pode ser qualquer objeto feito pelo homem e deixado ");
		gotoxy(4,6); printf("flutuando no espaco. Os cientistas estimam que haja pelo menos 500.000 ");
        	gotoxy(4,7); printf("pecas de lixo espacial atualmente em orbita.\n");
	}
	
	if (posicao == 64){
		gotoxy(4,3); printf("Posicao %d TERRA - A LUA ME TRAIU\n", posicao);
		gotoxy(4,5); printf("A teoria mais aceita sobre a origem de nossa lua e que a ");
		gotoxy(4,6); printf("mesma ja fez parte de nosso planeta, mas devido a uma colisao ");
		gotoxy(4,7); printf("com outro objeto, a fez separar e entrar em orbita\n");
	}
	
	if (posicao == 65){
		gotoxy(4,3); printf("Posicao %d TERRA - QUASE LA", posicao);
		gotoxy(4,5); printf("Voce esta a uma casa da terra e já consegue ve-la");
		gotoxy(4,6); printf("Aguente mais um pouco.");
	}
	
	if (posicao == 66){
                gotoxy(4,3); printf("PARABENS, VOCE VOLTOU PARA TERRA!!");
    }
}
//-------------------------------------------------------------------
void dado(){
	gotoxy(6,10); printf("Rolando o Dado \n \n" );
	srand(time(NULL));
	d = rand()%6+1;
	gotoxy(6,11); printf("Dado: %d", d);

	gotoxy(1,25);
	system("pause");
}
//-------------------------------------------------------------------
void jogar() {
	char jogador1;
     
	gotoxy(5,5); printf("Digite o nome do jogador 1: ");
	scanf("%s", &jogador1);
	
	system("cls");
	bordas(1,3,80,25,10);
	
	do {
		casas();
		dado();
		posicao = posicao + d;
		system("cls");
		bordas(1,3,80,25,10);

	}
	while(posicao <= 66);
	gotoxy(1,25);
	system("pause");
}
//-------------------------------------------------------------------
void regras() {
     
	gotoxy(8,4); printf("REGRAS");
	gotoxy(8,7); printf("Este jogo e um jogo de tabuleiro comum, serao 65 casas nas quais");
	gotoxy(8,8); printf("21 terao algum evento especial, tais como: ");
	gotoxy(8,10); printf("Avancar algumas casas;");
	gotoxy(8,11); printf("Voltar algumas casas;");
	gotoxy(8,12); printf("Perder vida;");
	gotoxy(8,13); printf("Ganhar vida;");
	gotoxy(8,15); printf("As casa normais apresentarao fatos reais sobre o sistema solar.");
     
	gotoxy(1,25);
	system ("pause");
}
//-------------------------------------------------------------------
void creditos() {
     
	gotoxy(8,4); printf("CREDITOS");
	gotoxy(8,7); printf("Projeto desenvolvido por: ");
	gotoxy(8,8); printf("Aryana Bandeira");
	gotoxy(8,9); printf("Lucas Piva");
	gotoxy(8,10); printf("Jose Ricardo");
	gotoxy(8,11); printf("Pedro Bravin");
	gotoxy(8,12); printf("Vitor Abrantes");
	gotoxy(8,14); printf("Criadora do tabuleiro utilizado: ");
	gotoxy(8,15); printf("Nadezhda Deineka");
     
	gotoxy(1,25);
	system ("pause");
}
//-------------------------------------------------------------------
int main(){
    
	system("mode 80,25");
	system("cls");
	bordas(1,3,80,25,10);
    
	do {
		menu();
		system("cls");
		bordas(1,3,80,25,10);
        
		if (tecla==13) {
			switch(p) {
				case 1:   //jogar
					system ("cls");
					bordas(1,3,80,25,10);
					jogar();

				case 2: //regras
				 	system ("cls");
				 	bordas(1,3,80,25,10);
				 	regras(); 
				break;

				case 3: //creditos
				 	system ("cls");
				 	bordas(1,3,80,25,10);
				 	creditos();
				break;

				case 4: //sair
				 	system ("cls");
				 	bordas(1,3,80,25,10);
				 	sair = true;
				 	gotoxy (31,11); printf("Volte sempre!!");
				 	gotoxy(1,25);
				 	system ("pause");
				 	exit(0);
				break;
	    		}
    		}
    }
	while (sair == true);  //Fim do laço do menu.
	return 0;
}
