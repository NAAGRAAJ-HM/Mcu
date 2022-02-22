#pragma once
/*****************************************************/
/* File   : Mcu_SchM.h                               */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_Mcu.h"

#include "SchM_Client.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_Mcu_SchM : public interface_SchM_Client{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, MCU_CODE) MainFunction(void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern interface_Mcu_SchM *SchM_Client_ptr_Mcu;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

