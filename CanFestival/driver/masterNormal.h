
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef MASTERNORMAL_H
#define MASTERNORMAL_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 masterNormal_valueRangeTest (UNS8 typeValue, void * value);
const indextable * masterNormal_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data masterNormal_Data;
extern INTEGER32 SlaveSysTick;		/* Mapped at index 0x2000, subindex 0x00*/
extern UNS8 g_nRfu8;		/* Mapped at index 0x2001, subindex 0x00*/
extern UNS16 g_nRfu16;		/* Mapped at index 0x2002, subindex 0x00*/
extern UNS32 g_nRfu32;		/* Mapped at index 0x2003, subindex 0x00*/
extern UNS64 g_nRfu64;		/* Mapped at index 0x2004, subindex 0x00*/
extern UNS8 masterNormal_obj1008[10];
#endif // MASTERNORMAL_H