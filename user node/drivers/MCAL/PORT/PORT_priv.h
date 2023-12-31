/********************************************/
/*  author: Mohamed Walid               	*/
/*  version: V01                            */
/*  Date: 31 JUL 2023   					*/
/*  SWC : PORT                   			*/
/********************************************/


#ifndef 	PORT_PRIV_H
#define 	PORT_PRIV_H


#define PORT_PIN_OUTPUT  1
#define PORT_PIN_INPUT   0

#define  PORT_PIN_HIGH				1
#define  PORT_PIN_LOW				0
#define  PORT_PIN_PULL_UP_ACTIVE	1
#define  PORT_PIN_FLOATING			0

#define  PORTA_DIR_VALUE    CONC_BIT(PORT_DIR_PIN_NO_7 ,PORT_DIR_PIN_NO_6 ,PORT_DIR_PIN_NO_5 ,PORT_DIR_PIN_NO_4 ,PORT_DIR_PIN_NO_3 ,PORT_DIR_PIN_NO_2 ,PORT_DIR_PIN_NO_1 ,PORT_DIR_PIN_NO_0)
#define  PORTB_DIR_VALUE    CONC_BIT(PORT_DIR_PIN_NO_15 ,PORT_DIR_PIN_NO_14 ,PORT_DIR_PIN_NO_13 ,PORT_DIR_PIN_NO_12 ,PORT_DIR_PIN_NO_11 ,PORT_DIR_PIN_NO_10 ,PORT_DIR_PIN_NO_9 ,PORT_DIR_PIN_NO_8)
#define  PORTC_DIR_VALUE    CONC_BIT(PORT_DIR_PIN_NO_23 ,PORT_DIR_PIN_NO_22 ,PORT_DIR_PIN_NO_21 ,PORT_DIR_PIN_NO_20 ,PORT_DIR_PIN_NO_19 ,PORT_DIR_PIN_NO_18 ,PORT_DIR_PIN_NO_17 ,PORT_DIR_PIN_NO_16)
#define  PORTD_DIR_VALUE    CONC_BIT(PORT_DIR_PIN_NO_31 ,PORT_DIR_PIN_NO_30 ,PORT_DIR_PIN_NO_29 ,PORT_DIR_PIN_NO_28 ,PORT_DIR_PIN_NO_27 ,PORT_DIR_PIN_NO_26 ,PORT_DIR_PIN_NO_25 ,PORT_DIR_PIN_NO_24)

#define  PORTA_INITIAL_VALUE	CONC_BIT(PORT_PIN_7_INITIAL_VALUE ,PORT_PIN_6_INITIAL_VALUE ,PORT_PIN_5_INITIAL_VALUE ,PORT_PIN_4_INITIAL_VALUE ,PORT_PIN_3_INITIAL_VALUE ,PORT_PIN_2_INITIAL_VALUE ,PORT_PIN_1_INITIAL_VALUE ,PORT_PIN_0_INITIAL_VALUE)
#define  PORTB_INITIAL_VALUE    CONC_BIT(PORT_PIN_15_INITIAL_VALUE ,PORT_PIN_14_INITIAL_VALUE ,PORT_PIN_13_INITIAL_VALUE ,PORT_PIN_12_INITIAL_VALUE ,PORT_PIN_11_INITIAL_VALUE ,PORT_PIN_10_INITIAL_VALUE ,PORT_PIN_9_INITIAL_VALUE ,PORT_PIN_8_INITIAL_VALUE)
#define  PORTC_INITIAL_VALUE    CONC_BIT(PORT_PIN_23_INITIAL_VALUE ,PORT_PIN_22_INITIAL_VALUE ,PORT_PIN_21_INITIAL_VALUE ,PORT_PIN_20_INITIAL_VALUE ,PORT_PIN_19_INITIAL_VALUE ,PORT_PIN_18_INITIAL_VALUE ,PORT_PIN_17_INITIAL_VALUE ,PORT_PIN_16_INITIAL_VALUE)
#define  PORTD_INITIAL_VALUE    CONC_BIT(PORT_PIN_31_INITIAL_VALUE ,PORT_PIN_30_INITIAL_VALUE ,PORT_PIN_29_INITIAL_VALUE ,PORT_PIN_28_INITIAL_VALUE ,PORT_PIN_27_INITIAL_VALUE ,PORT_PIN_26_INITIAL_VALUE ,PORT_PIN_25_INITIAL_VALUE ,PORT_PIN_24_INITIAL_VALUE)

#endif