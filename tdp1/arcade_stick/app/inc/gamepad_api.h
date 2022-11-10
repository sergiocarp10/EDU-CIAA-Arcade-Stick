#ifndef _GAMEPAD_API_H_
   #define _GAMEPAD_API_H_

   /*==================[inclusiones]============================================*/
   
   #include "sapi_datatypes.h"

   
   /*==================[definici�n de tipos]============================================*/
   
   
   /*==================[declaraciones de funciones p�blicas]====================*/
   
   int8_t USB_ValorX(uint8_t valor);
   
   uint8_t USB_MarcarBoton(uint8_t numero);
   void USB_PresionarBotones();

   /*==================[end of file]============================================*/
   
#endif