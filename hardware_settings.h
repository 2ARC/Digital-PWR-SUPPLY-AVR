/*
 * Hardware settings for the digital dc power supply
 * http://www.tuxgraphics.org/electronics/
 *
 * In this file you can:
 * - calibrate the ampere and voltmeter
 * - choose your hardware type: 22V 3A or 30V 2.0A
 */
#ifndef CAL_HW_H
#define CAL_HW_H


/* ================= uncomment this section for the model 22V 2.5A */

//#define U_MAX 220
//#define I_MAX 250

// internal adc ref voltage (should be 2.56V, can vary from uC to uC)
//#define ADC_REF 2.60

// the divider R7/R8 [(R8+R7)/R8], you can calibrate here the voltmeter:
//#define U_DIVIDER 11.25

// the shunt for current measurement (R4||R14|R34), you can calibrate here the 
// amperemeter.
// If you use 3*1.5Ohm 2W then uncomment this:
//#define I_RESISTOR 0.50
// If you use 3*3.3Ohm 1W then uncomment this:
//#define I_RESISTOR 0.55
// short circuit protection limit (do not change unless you know what you do):
//#define SH_CIR_PROT 800

/* ================= uncomment this section for the model 30V 2.0A */


#define U_MAX 300 // alterado 13/05/2016
#define I_MAX 300 // alterado 13/05/2016

// internal adc ref voltage (should be 2.56V, can vary from uC to uC)
#define ADC_REF 5.0 // alterado 13/04/2017
//#define ADC_REF 2.62

// the divider R7/R8 [(R8+R7)/R8], you can calibrate here the voltmeter: 
#define U_DIVIDER 12.75 // alterado 13/05/2016 verificado na placa 820 9.86k
//#define U_DIVIDER 13.24

// the shunt for current measurement (R4||R14|R34), you can calibrate here the 
// amperemeter.
// If you use 3*1.5Ohm 2W then uncomment this:
// diminuir aumenta a corrente
#define I_RESISTOR 0.50
//#define I_RESISTOR 0.60

// short circuit protection limit (do not change unless you know what you do):
// 690=2.30A= (2.30A * 1023 * 0.75 / 2.56 )
#define SH_CIR_PROT 480
//#define SH_CIR_PROT 1172 // 5A * 1023 * 0.60 / 2.62
//#define SH_CIR_PROT 306 // 3A * 1023 * 0.50 / 5.0

#endif //CAL_HW_H

