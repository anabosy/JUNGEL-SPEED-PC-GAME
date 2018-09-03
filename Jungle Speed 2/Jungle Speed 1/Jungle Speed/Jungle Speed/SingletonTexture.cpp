#include "SingletonTexture.h"



SingletonTexture::SingletonTexture()
{
	allocate();
	create();
	loadFromFile();
	setRepeated();
	makeSmoothy();
}


SingletonTexture::~SingletonTexture()
{
}

void SingletonTexture::allocate()
{
	g1  = make_unique<sf::Texture>();
	b1  = make_unique<sf::Texture>();
	y1  = make_unique<sf::Texture>();
	r1  = make_unique<sf::Texture>();
	 	  
	g2  = make_unique<sf::Texture>();
	b2  = make_unique<sf::Texture>();
	y2  = make_unique<sf::Texture>();
	r2  = make_unique<sf::Texture>();
	  	  
	g3  = make_unique<sf::Texture>();
	b3  = make_unique<sf::Texture>();
	y3  = make_unique<sf::Texture>();
	r3  = make_unique<sf::Texture>();
	  	  
	g4  = make_unique<sf::Texture>();
	b4  = make_unique<sf::Texture>();
	y4  = make_unique<sf::Texture>();
	r4  = make_unique<sf::Texture>();
	   	  
	g5  = make_unique<sf::Texture>();
	b5  = make_unique<sf::Texture>();
	y5  = make_unique<sf::Texture>();
	r5  = make_unique<sf::Texture>();
	 	  
	g6  = make_unique<sf::Texture>();
	b6  = make_unique<sf::Texture>();
	y6  = make_unique<sf::Texture>();
	r6  = make_unique<sf::Texture>();
	   	  
	g7  = make_unique<sf::Texture>();
	b7  = make_unique<sf::Texture>();
	y7  = make_unique<sf::Texture>();
	r7  = make_unique<sf::Texture>();
	   	  
	g8  = make_unique<sf::Texture>();
	b8  = make_unique<sf::Texture>();
	y8  = make_unique<sf::Texture>();
	r8  = make_unique<sf::Texture>();
	  	  
	g9  = make_unique<sf::Texture>();
	b9  = make_unique<sf::Texture>();
	y9  = make_unique<sf::Texture>();
	r9  = make_unique<sf::Texture>();
	   	  
	g10 = make_unique<sf::Texture>();
	b10 = make_unique<sf::Texture>();
	y10 = make_unique<sf::Texture>();
	r10 = make_unique<sf::Texture>();
	   	  
	g11 = make_unique<sf::Texture>();
	b11 = make_unique<sf::Texture>();
	y11 = make_unique<sf::Texture>();
	r11 = make_unique<sf::Texture>();
	   	  
	g12 = make_unique<sf::Texture>();
	b12 = make_unique<sf::Texture>();
	y12 = make_unique<sf::Texture>();
	r12 = make_unique<sf::Texture>();
	  	  
	g13 = make_unique<sf::Texture>();
	b13 = make_unique<sf::Texture>();
	y13 = make_unique<sf::Texture>();
	r13 = make_unique<sf::Texture>();
	 	  
	g14 = make_unique<sf::Texture>();
	b14 = make_unique<sf::Texture>();
	y14 = make_unique<sf::Texture>();
	r14 = make_unique<sf::Texture>();
	   	  
	g15 = make_unique<sf::Texture>();
	b15 = make_unique<sf::Texture>();
	y15 = make_unique<sf::Texture>();
	r15 = make_unique<sf::Texture>();
	      
	g16 = make_unique<sf::Texture>();
	b16 = make_unique<sf::Texture>();
	y16 = make_unique<sf::Texture>();
	r16 = make_unique<sf::Texture>();
	   	  
	g17 = make_unique<sf::Texture>();
	b17 = make_unique<sf::Texture>();
	y17 = make_unique<sf::Texture>();
	r17 = make_unique<sf::Texture>();
	      
	g18 = make_unique<sf::Texture>();
	b18 = make_unique<sf::Texture>();
	y18 = make_unique<sf::Texture>();
	r18 = make_unique<sf::Texture>();


	sOutType1      = make_unique<sf::Texture>();
	sColorType2    = make_unique<sf::Texture>();
	sInType3       = make_unique<sf::Texture>();
	stick          = make_unique<sf::Texture>();
	openHand       = make_unique<sf::Texture>();
	colsedHand     = make_unique<sf::Texture>();
	hapeClosedCard = make_unique<sf::Texture>();
	hapeOpenCard   = make_unique<sf::Texture>();
	playButton     = make_unique<sf::Texture>();
	closeButton    = make_unique<sf::Texture>();
	helpButton     = make_unique<sf::Texture>();
	gameBg         = make_unique<sf::Texture>();
	muneBg         = make_unique<sf::Texture>();
}
void SingletonTexture::setRepeated()
{
	g1-> setRepeated(true);
	b1-> setRepeated(true);
	y1-> setRepeated(true);
	r1-> setRepeated(true);
		
	g2-> setRepeated(true);
	b2-> setRepeated(true);
	y2-> setRepeated(true);
	r2-> setRepeated(true);
		
	g3-> setRepeated(true);
	b3-> setRepeated(true);
	y3-> setRepeated(true);
	r3-> setRepeated(true);
		
	g4-> setRepeated(true);
	b4-> setRepeated(true);
	y4-> setRepeated(true);
	r4-> setRepeated(true);
		
	g5-> setRepeated(true);
	b5-> setRepeated(true);
	y5-> setRepeated(true);
	r5-> setRepeated(true);
		
	g6-> setRepeated(true);
	b6-> setRepeated(true);
	y6-> setRepeated(true);
	r6-> setRepeated(true);

	g7-> setRepeated(true);
	b7-> setRepeated(true);
	y7-> setRepeated(true);
	r7-> setRepeated(true);
		
	g8-> setRepeated(true);
	b8-> setRepeated(true);
	y8-> setRepeated(true);
	r8-> setRepeated(true);
		 
	g9-> setRepeated(true);
	b9-> setRepeated(true);
	y9-> setRepeated(true);
	r9-> setRepeated(true);
		
	g10->setRepeated(true);
	b10->setRepeated(true);
	y10->setRepeated(true);
	r10->setRepeated(true);
		 
	g11->setRepeated(true);
	b11->setRepeated(true);
	y11->setRepeated(true);
	r11->setRepeated(true);
		 
	g12->setRepeated(true);
	b12->setRepeated(true);
	y12->setRepeated(true);
	r12->setRepeated(true);
		 
	g13->setRepeated(true);
	b13->setRepeated(true);
	y13->setRepeated(true);
	r13->setRepeated(true);
		 
	g14->setRepeated(true);
	b14->setRepeated(true);
	y14->setRepeated(true);
	r14->setRepeated(true);
		 
	g15->setRepeated(true);
	b15->setRepeated(true);
	y15->setRepeated(true);
	r15->setRepeated(true);
		 
	g16->setRepeated(true);
	b16->setRepeated(true);
	y16->setRepeated(true);
	r16->setRepeated(true);
		 
	g17->setRepeated(true);
	b17->setRepeated(true);
	y17->setRepeated(true);
	r17->setRepeated(true);
		 
	g18->setRepeated(true);
	b18->setRepeated(true);
	y18->setRepeated(true);
	r18->setRepeated(true);


	sOutType1->setRepeated(true);
	sColorType2->setRepeated(true);
	sInType3->setRepeated(true);
	stick->setRepeated(true);
	openHand->setRepeated(true);
	colsedHand->setRepeated(false);
	hapeClosedCard->setRepeated(true);
	hapeOpenCard->setRepeated(true);
	playButton->setRepeated(true);
	closeButton->setRepeated(true);
	helpButton->setRepeated(true);
	gameBg->setRepeated(true);
	muneBg->setRepeated(true);


}
void SingletonTexture::create()
{
	g1-> create(CARD_WIDTH,CARD_WIDTH);
	b1-> create(CARD_WIDTH,CARD_WIDTH);
	y1-> create(CARD_WIDTH,CARD_WIDTH);
	r1-> create(CARD_WIDTH,CARD_WIDTH);
		 
	g2-> create(CARD_WIDTH,CARD_WIDTH);
	b2-> create(CARD_WIDTH,CARD_WIDTH);
	y2-> create(CARD_WIDTH,CARD_WIDTH);
	r2-> create(CARD_WIDTH,CARD_WIDTH);
		 
	g3-> create(CARD_WIDTH,CARD_WIDTH);
	b3-> create(CARD_WIDTH,CARD_WIDTH);
	y3-> create(CARD_WIDTH,CARD_WIDTH);
	r3-> create(CARD_WIDTH,CARD_WIDTH);
		 
	g4-> create(CARD_WIDTH,CARD_WIDTH);
	b4-> create(CARD_WIDTH,CARD_WIDTH);
	y4-> create(CARD_WIDTH,CARD_WIDTH);
	r4-> create(CARD_WIDTH,CARD_WIDTH);
		 
	g5-> create(CARD_WIDTH,CARD_WIDTH);
	b5-> create(CARD_WIDTH,CARD_WIDTH);
	y5-> create(CARD_WIDTH,CARD_WIDTH);
	r5-> create(CARD_WIDTH,CARD_WIDTH);
		 
	g6-> create(CARD_WIDTH,CARD_WIDTH);
	b6-> create(CARD_WIDTH,CARD_WIDTH);
	y6-> create(CARD_WIDTH,CARD_WIDTH);
	r6-> create(CARD_WIDTH,CARD_WIDTH);
		 
	g7-> create(CARD_WIDTH,CARD_WIDTH);
	b7-> create(CARD_WIDTH,CARD_WIDTH);
	y7-> create(CARD_WIDTH,CARD_WIDTH);
	r7-> create(CARD_WIDTH,CARD_WIDTH);
		 
	g8-> create(CARD_WIDTH,CARD_WIDTH);
	b8-> create(CARD_WIDTH,CARD_WIDTH);
	y8-> create(CARD_WIDTH,CARD_WIDTH);
	r8-> create(CARD_WIDTH,CARD_WIDTH);
		 
	g9-> create(CARD_WIDTH,CARD_WIDTH);
	b9-> create(CARD_WIDTH,CARD_WIDTH);
	y9-> create(CARD_WIDTH,CARD_WIDTH);
	r9-> create(CARD_WIDTH,CARD_WIDTH);
		 
	g10->create(CARD_WIDTH,CARD_WIDTH);
	b10->create(CARD_WIDTH,CARD_WIDTH);
	y10->create(CARD_WIDTH,CARD_WIDTH);
	r10->create(CARD_WIDTH,CARD_WIDTH);
		 
	g11->create(CARD_WIDTH,CARD_WIDTH);
	b11->create(CARD_WIDTH,CARD_WIDTH);
	y11->create(CARD_WIDTH,CARD_WIDTH);
	r11->create(CARD_WIDTH,CARD_WIDTH);
		 
	g12->create(CARD_WIDTH,CARD_WIDTH);
	b12->create(CARD_WIDTH,CARD_WIDTH);
	y12->create(CARD_WIDTH,CARD_WIDTH);
	r12->create(CARD_WIDTH,CARD_WIDTH);
		 
	g13->create(CARD_WIDTH,CARD_WIDTH);
	b13->create(CARD_WIDTH,CARD_WIDTH);
	y13->create(CARD_WIDTH,CARD_WIDTH);
	r13->create(CARD_WIDTH,CARD_WIDTH);
		 
	g14->create(CARD_WIDTH,CARD_WIDTH);
	b14->create(CARD_WIDTH,CARD_WIDTH);
	y14->create(CARD_WIDTH,CARD_WIDTH);
	r14->create(CARD_WIDTH,CARD_WIDTH);
		 
	g15->create(CARD_WIDTH,CARD_WIDTH);
	b15->create(CARD_WIDTH,CARD_WIDTH);
	y15->create(CARD_WIDTH,CARD_WIDTH);
	r15->create(CARD_WIDTH,CARD_WIDTH);
		 
	g16->create(CARD_WIDTH,CARD_WIDTH);
	b16->create(CARD_WIDTH,CARD_WIDTH);
	y16->create(CARD_WIDTH,CARD_WIDTH);
	r16->create(CARD_WIDTH,CARD_WIDTH);
		 
	g17->create(CARD_WIDTH,CARD_WIDTH);
	b17->create(CARD_WIDTH,CARD_WIDTH);
	y17->create(CARD_WIDTH,CARD_WIDTH);
	r17->create(CARD_WIDTH,CARD_WIDTH);
		 
	g18->create(CARD_WIDTH,CARD_WIDTH);
	b18->create(CARD_WIDTH,CARD_WIDTH);
	y18->create(CARD_WIDTH,CARD_WIDTH);
	r18->create(CARD_WIDTH,CARD_WIDTH);

	sOutType1->      create(CARD_WIDTH, CARD_WIDTH);
	sColorType2->    create(CARD_WIDTH, CARD_WIDTH);
	sInType3->       create(CARD_WIDTH, CARD_WIDTH);
	stick->          create(CARD_WIDTH, CARD_WIDTH);
	openHand->       create(CARD_WIDTH, CARD_WIDTH);
	colsedHand->     create(CARD_WIDTH, CARD_WIDTH);
	hapeClosedCard-> create(CARD_WIDTH, CARD_WIDTH);
	hapeOpenCard->   create(CARD_WIDTH, CARD_WIDTH);
	playButton->     create(CARD_WIDTH, CARD_WIDTH);
	closeButton->    create(CARD_WIDTH, CARD_WIDTH);
	helpButton->     create(CARD_WIDTH, CARD_WIDTH);
	gameBg->         create(SCREEN_WIDTH, SCREEN_HIGHT);
	muneBg->         create(SCREEN_WIDTH, SCREEN_HIGHT);


}

void SingletonTexture::makeSmoothy()
{
	g1->setSmooth(true);
	b1->setSmooth(true);
	y1->setSmooth(true);
	r1->setSmooth(true);
		
	g2->setSmooth(true);
	b2->setSmooth(true);
	y2->setSmooth(true);
	r2->setSmooth(true);
	
	g3->setSmooth(true);
	b3->setSmooth(true);
	y3->setSmooth(true);
	r3->setSmooth(true);
		
	g4->setSmooth(true);
	b4->setSmooth(true);
	y4->setSmooth(true);
	r4->setSmooth(true);
		
	g5->setSmooth(true);
	b5->setSmooth(true);
	y5->setSmooth(true);
	r5->setSmooth(true);
		
	g6->setSmooth(true);
	b6->setSmooth(true);
	y6->setSmooth(true);
	r6->setSmooth(true);
		
	g7->setSmooth(true);
	b7->setSmooth(true);
	y7->setSmooth(true);
	r7->setSmooth(true);
		
	g8->setSmooth(true);
	b8->setSmooth(true);
	y8->setSmooth(true);
	r8->setSmooth(true);
	
	g9->setSmooth(true);
	b9->setSmooth(true);
	y9->setSmooth(true);
	r9->setSmooth(true);

	g10->setSmooth(true);
	b10->setSmooth(true);
	y10->setSmooth(true);
	r10->setSmooth(true);

	g11->setSmooth(true);
	b11->setSmooth(true);
	y11->setSmooth(true);
	r11->setSmooth(true);

	g12->setSmooth(true);
	b12->setSmooth(true);
	y12->setSmooth(true);
	r12->setSmooth(true);

	g13->setSmooth(true);
	b13->setSmooth(true);
	y13->setSmooth(true);
	r13->setSmooth(true);

	g14->setSmooth(true);
	b14->setSmooth(true);
	y14->setSmooth(true);
	r14->setSmooth(true);

	g15->setSmooth(true);
	b15->setSmooth(true);
	y15->setSmooth(true);
	r15->setSmooth(true);

	g16->setSmooth(true);
	b16->setSmooth(true);
	y16->setSmooth(true);
	r16->setSmooth(true);

	g17->setSmooth(true);
	b17->setSmooth(true);
	y17->setSmooth(true);
	r17->setSmooth(true);

	g18->setSmooth(true);
	b18->setSmooth(true);
	y18->setSmooth(true);
	r18->setSmooth(true);

	sOutType1->      setSmooth(true);
	sColorType2->	 setSmooth(true);
	sInType3->		 setSmooth(true);
	stick->			 setSmooth(true);
	openHand->		 setSmooth(true);
	colsedHand->	 setSmooth(true);
	hapeClosedCard-> setSmooth(true);
	hapeOpenCard->	 setSmooth(true);
	playButton->	 setSmooth(true);
	closeButton->	 setSmooth(true);
	helpButton->	 setSmooth(true);
	gameBg->		 setSmooth(true);
	muneBg->		 setSmooth(true);


}
void SingletonTexture::loadFromFile()
{
	 g1->loadFromFile(B_TYPE_1_IMG);
	 b1->loadFromFile(G_TYPE_1_IMG);
	 y1->loadFromFile(R_TYPE_1_IMG);
	 r1->loadFromFile(Y_TYPE_1_IMG);

	 g2->loadFromFile(B_TYPE_2_IMG);
	 b2->loadFromFile(G_TYPE_2_IMG);
	 y2->loadFromFile(R_TYPE_2_IMG);
	 r2->loadFromFile(Y_TYPE_2_IMG);

	 g3->loadFromFile(B_TYPE_3_IMG);
	 b3->loadFromFile(G_TYPE_3_IMG);
	 y3->loadFromFile(R_TYPE_3_IMG);
	 r3->loadFromFile(Y_TYPE_3_IMG);

	 g4->loadFromFile(B_TYPE_4_IMG);
	 b4->loadFromFile(G_TYPE_4_IMG);
	 y4->loadFromFile(R_TYPE_4_IMG);
	 r4->loadFromFile(Y_TYPE_4_IMG);

	 g5->loadFromFile(B_TYPE_5_IMG);
	 b5->loadFromFile(G_TYPE_5_IMG);
	 y5->loadFromFile(R_TYPE_5_IMG);
	 r5->loadFromFile(Y_TYPE_5_IMG);

	 g6->loadFromFile(B_TYPE_6_IMG);
	 b6->loadFromFile(G_TYPE_6_IMG);
	 y6->loadFromFile(R_TYPE_6_IMG);
	 r6->loadFromFile(Y_TYPE_6_IMG);

	 g7->loadFromFile(B_TYPE_7_IMG);
	 b7->loadFromFile(G_TYPE_7_IMG);
	 y7->loadFromFile(R_TYPE_7_IMG);
	 r7->loadFromFile(Y_TYPE_7_IMG);

	 g8->loadFromFile(B_TYPE_8_IMG);
	 b8->loadFromFile(G_TYPE_8_IMG);
	 y8->loadFromFile(R_TYPE_8_IMG);
	 r8->loadFromFile(Y_TYPE_8_IMG);

	 g9->loadFromFile(B_TYPE_9_IMG);
	 b9->loadFromFile(G_TYPE_9_IMG);
	 y9->loadFromFile(R_TYPE_9_IMG);
	 r9->loadFromFile(Y_TYPE_9_IMG);
					 
	g10->loadFromFile(B_TYPE_10_IMG);
	b10->loadFromFile(G_TYPE_10_IMG);
	y10->loadFromFile(R_TYPE_10_IMG);
	r10->loadFromFile(Y_TYPE_10_IMG);

	g11->loadFromFile(B_TYPE_11_IMG);
	b11->loadFromFile(G_TYPE_11_IMG);
	y11->loadFromFile(R_TYPE_11_IMG);
	r11->loadFromFile(Y_TYPE_11_IMG);

	g12->loadFromFile(B_TYPE_12_IMG);
	b12->loadFromFile(G_TYPE_12_IMG);
	y12->loadFromFile(R_TYPE_12_IMG);
	r12->loadFromFile(Y_TYPE_12_IMG);

	g13->loadFromFile(B_TYPE_13_IMG);
	b13->loadFromFile(G_TYPE_13_IMG);
	y13->loadFromFile(R_TYPE_13_IMG);
	r13->loadFromFile(Y_TYPE_13_IMG);

	g14->loadFromFile(B_TYPE_14_IMG);
	b14->loadFromFile(G_TYPE_14_IMG);
	y14->loadFromFile(R_TYPE_14_IMG);
	r14->loadFromFile(Y_TYPE_14_IMG);

	g15->loadFromFile(B_TYPE_15_IMG);
	b15->loadFromFile(G_TYPE_15_IMG);
	y15->loadFromFile(R_TYPE_15_IMG);
	r15->loadFromFile(Y_TYPE_15_IMG);

	g16->loadFromFile(B_TYPE_16_IMG);
	b16->loadFromFile(G_TYPE_16_IMG);
	y16->loadFromFile(R_TYPE_16_IMG);
	r16->loadFromFile(Y_TYPE_16_IMG);

	g17->loadFromFile(B_TYPE_17_IMG);
	b17->loadFromFile(G_TYPE_17_IMG);
	y17->loadFromFile(R_TYPE_17_IMG);
	r17->loadFromFile(Y_TYPE_17_IMG);

	g18->loadFromFile(B_TYPE_18_IMG);
	b18->loadFromFile(G_TYPE_18_IMG);
	y18->loadFromFile(R_TYPE_18_IMG);
	r18->loadFromFile(Y_TYPE_18_IMG);

	sOutType1->     loadFromFile(S_OUT_TYPE_1_IMG);
	sColorType2->   loadFromFile(S_COLOR_TYPE_2_IMG);
	sInType3->      loadFromFile(S_IN_TYPE_3_IMG);
	stick->         loadFromFile(STICK_IMG);
	openHand->      loadFromFile(OPEN_HAND_IMG);
	colsedHand->    loadFromFile(CLOSED_HAND_IMG);
	hapeClosedCard->loadFromFile(HAPE_CLOSED_CARD_IMG);
	hapeOpenCard->  loadFromFile(HAPE_OPEN_CARD_IMG);
	playButton->    loadFromFile(PLAY_BUTTON_IMG);
	closeButton->   loadFromFile(CLOSE_BUTTON_IMG);
	helpButton->    loadFromFile(HELP_BUTTON_IMG);
	gameBg->        loadFromFile(GAME_BG_IMG);
	muneBg->        loadFromFile(MENU_BG_IMG);


}

SingletonTexture& SingletonTexture::instance() {
	static SingletonTexture inst;
	return inst;
}

unique_ptr<sf::Texture>& SingletonTexture::getTexture(IMG type)
{
	switch (type)
	{


	case B_TYPE_1:  return g1; break;
	case G_TYPE_1:	return b1; break;
	case R_TYPE_1:	return y1; break;
	case Y_TYPE_1:	return r1; break;
					     
	case B_TYPE_2:	return g2; break;
	case G_TYPE_2:	return b2; break;
	case R_TYPE_2:	return y2; break;
	case Y_TYPE_2:	return r2; break;
					   
	case B_TYPE_3:	return g3; break;
	case G_TYPE_3:	return b3; break;
	case R_TYPE_3:	return y3; break;
	case Y_TYPE_3:	return r3; break;
					    
	case B_TYPE_4:	return g4; break;
	case G_TYPE_4:	return b4; break;
	case R_TYPE_4:	return y4; break;
	case Y_TYPE_4:  return r4; break;
					   
	case B_TYPE_5:	return g5; break;
	case G_TYPE_5:	return b5; break;
	case R_TYPE_5:	return y5; break;
	case Y_TYPE_5:	return r5; break;
					    
	case B_TYPE_6:	return g6; break;
	case G_TYPE_6:	return b6; break;
	case R_TYPE_6:	return y6; break;
	case Y_TYPE_6:	return r6; break;
					    
	case B_TYPE_7:	return g7; break;
	case G_TYPE_7:	return b7; break;
	case R_TYPE_7:	return y7; break;
	case Y_TYPE_7:	return r7; break;
					     
	case B_TYPE_8:	return g8; break;
	case G_TYPE_8:	return b8; break;
	case R_TYPE_8:	return y8; break;
	case Y_TYPE_8:	return r8; break;
					   
	case B_TYPE_9:	return g9; break;
	case G_TYPE_9:	return b9; break;
	case R_TYPE_9:	return y9; break;
	case Y_TYPE_9:	return r9; break;
					     
	case B_TYPE_10: return g10; break;
	case G_TYPE_10: return b10; break;
	case R_TYPE_10: return y10; break;
	case Y_TYPE_10: return r10; break;

	case B_TYPE_11: return g11; break;
	case G_TYPE_11: return b11; break;
	case R_TYPE_11: return y11; break;
	case Y_TYPE_11: return r11; break;
					     
	case B_TYPE_12: return g12; break;
	case G_TYPE_12: return b12; break;
	case R_TYPE_12: return y12; break;
	case Y_TYPE_12: return r12; break;
					     
	case B_TYPE_13: return g13; break;
	case G_TYPE_13: return b13; break;
	case R_TYPE_13: return y13; break;
	case Y_TYPE_13: return r13; break;
					    
	case B_TYPE_14: return g14; break;
	case G_TYPE_14: return b14; break;
	case R_TYPE_14: return y14; break;
	case Y_TYPE_14: return r14; break;
					   
	case B_TYPE_15: return g15; break;
	case G_TYPE_15: return b15; break;
	case R_TYPE_15: return y15; break;
	case Y_TYPE_15: return r15; break;
					     
	case B_TYPE_16: return g16; break;
	case G_TYPE_16: return b16; break;
	case R_TYPE_16: return y16; break;
	case Y_TYPE_16: return r16; break;
					   
	case B_TYPE_17: return g17; break;
	case G_TYPE_17: return b17; break;
	case R_TYPE_17: return y17; break;
	case Y_TYPE_17: return r17; break;
				     
	case B_TYPE_18: return g18; break;
	case G_TYPE_18: return b18; break;
	case R_TYPE_18: return y18; break;
	case Y_TYPE_18: return r18; break;

	case S_OUT_TYPE_1: return      sOutType1;       break;
	case S_COLOR_TYPE_2: return    sColorType2;		break;
	case S_IN_TYPE_3: return 	   sInType3;		break;
	case STICK: return 			   stick;			break;
	case OPEN_HAND: return 		   openHand;		break;
	case CLOSED_HAND: return 	   colsedHand;		break;
	case HAPE_CLOSED_CARD: return  hapeClosedCard;	break;
	case HAPE_OPEN_CARD: return    hapeOpenCard;	break;
	case PLAY_BUTTON: return 	   playButton;		break;
	case CLOSE_BUTTON: return 	   closeButton;		break;
	case HELP_BUTTON: return  	   helpButton;		break;
	case GAME_BG: return           gameBg;          break;
	case MENU_BG: return           muneBg;          break;  
					 

	};
	return openHand;
}

