/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-10.2.c
 *
 * Rule-10.2: Expressions of essentially character type shall not be used
 *            inappropriately in addition and subtraction operations
 *
 * Implemented by message(s):
 *   1810   An operand of 'essentially character' type is being added to
 *          another operand of 'essentially character' type.
 *
 *   1811   An operand of 'essentially character' type is being subtracted
 *          from an operand of 'essentially signed' type.
 *
 *   1812   An operand of 'essentially character' type is being subtracted
 *          from an operand of 'essentially unsigned' type.
 *
 *   1813   An operand of 'essentially character' type is being balanced
 *          with an operand of 'essentially floating' type in this
 *          arithmetic operation.
 *
 *
 *//* PRQA S 1810,1811,1812,1813 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

PC r1002_pca;
int32_t r1002_sa;
uint32_t r1002_ua;
float32_t r1002_fa;

extern int16_t rule_1002( void )
{
   r1002_pca + 'a';                                                   /* expect: 1810      */
   r1002_sa - r1002_pca;                                              /* expect: 1811      */
   r1002_ua - r1002_pca;                                              /* expect: 1812      */
   r1002_fa + r1002_pca;                                              /* expect: 1813      */

   return 0;
}


