/**************************************/
/* Author : Asmaa Aboushady           */
/* Date   : 8/28/2024                 */
/**************************************/


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Var,BitNo)        Var = Var | (1<<BitNo)  /* Set Bit */
#define CLEAR_BIT(Var,BitNo)      Var = Var & ~(1<<BitNo) /* Clear Bit */
#define TOGGLE_BIT(Var,BitNo)     Var = Var ^ (1<<BitNo)  /* Toggle Bit */
#define ASSIGN(Var,Byte)          Var = Byte              /* Assign Byte */
#define GET_BIT(Var,BitNo)        (Var>>BitNo) & 1 /* Get Bit */

#endif