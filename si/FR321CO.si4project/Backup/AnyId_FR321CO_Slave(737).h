
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef ANYID_FR321CO_SLAVE_H
#define ANYID_FR321CO_SLAVE_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 AnyId_FR321CO_Slave_valueRangeTest (UNS8 typeValue, void * value);
const indextable * AnyId_FR321CO_Slave_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

extern UNS8 AnyId_FR321CO_Slave_obj1008[10];
extern UNS8 AnyId_FR321CO_Slave_obj1009[10];
extern UNS8 AnyId_FR321CO_Slave_obj100A[10];
/* Master node data struct */
extern CO_Data AnyId_FR321CO_Slave_Data;
extern UNS8 HardParams_DeviceAddr;		/* Mapped at index 0x2000, subindex 0x01 */
extern UNS8 HardParams_Bud;		/* Mapped at index 0x2000, subindex 0x02 */
extern UNS8 HardParams_CanFilterMode;		/* Mapped at index 0x2000, subindex 0x03 */
extern UNS16 HardParams_CanFilterIdLow;		/* Mapped at index 0x2000, subindex 0x04 */
extern UNS16 HardParams_CanFilterIdHigh;		/* Mapped at index 0x2000, subindex 0x05 */
extern UNS16 HardParams_CanFilterMaskIdLow;		/* Mapped at index 0x2000, subindex 0x06 */
extern UNS16 HardParams_CanFilterMaskIdHigh;		/* Mapped at index 0x2000, subindex 0x07 */
extern UNS16 HardParams_RfidRfu;		/* Mapped at index 0x2000, subindex 0x08 */
extern UNS8 RfidParams_Protocol;		/* Mapped at index 0x2001, subindex 0x01 */
extern UNS8 RfidParams_RBlkNum;		/* Mapped at index 0x2001, subindex 0x02 */
extern UNS16 RfidParams_AutoAddr;		/* Mapped at index 0x2001, subindex 0x03 */
extern UNS16 RfidParams_AutoLen;		/* Mapped at index 0x2001, subindex 0x04 */
extern UNS8 RfidParams_InvtTim;		/* Mapped at index 0x2001, subindex 0x05 */
extern UNS8 RfidParams_IdleTim;		/* Mapped at index 0x2001, subindex 0x06 */
extern UNS8 RfidParams_KeepTim;		/* Mapped at index 0x2001, subindex 0x07 */
extern UNS16 RfidParams_RfidRfu;		/* Mapped at index 0x2001, subindex 0x08 */
extern UNS8 DeviceParams_TagOpState;		/* Mapped at index 0x2002, subindex 0x01 */
extern UNS8 DeviceParams_OpDevice;		/* Mapped at index 0x2002, subindex 0x02 */
extern UNS16 DeviceParams_OpAddr;		/* Mapped at index 0x2002, subindex 0x03 */
extern UNS16 DeviceParams_OpLen;		/* Mapped at index 0x2002, subindex 0x04 */
extern UNS32 DeviceParams_OpFrame0;		/* Mapped at index 0x2002, subindex 0x05 */
extern UNS32 DeviceParams_OpFrame1;		/* Mapped at index 0x2002, subindex 0x06 */
extern UNS32 DeviceParams_OpFrame2;		/* Mapped at index 0x2002, subindex 0x07 */
extern UNS32 DeviceParams_OpFrame3;		/* Mapped at index 0x2002, subindex 0x08 */
extern UNS32 DeviceParams_OpFrame4;		/* Mapped at index 0x2002, subindex 0x09 */
extern UNS32 DeviceParams_OpFrame5;		/* Mapped at index 0x2002, subindex 0x0A */
extern UNS32 DeviceParams_OpFrame6;		/* Mapped at index 0x2002, subindex 0x0B */
extern UNS32 DeviceParams_OpFrame7;		/* Mapped at index 0x2002, subindex 0x0C */
extern UNS32 DeviceParams_Rfu;		/* Mapped at index 0x2002, subindex 0x0D */
extern UNS32 Tag15693_UidLow;		/* Mapped at index 0x2003, subindex 0x01 */
extern UNS32 Tag15693_UidHigh;		/* Mapped at index 0x2003, subindex 0x02 */
extern UNS32 Tag15693_Block0;		/* Mapped at index 0x2003, subindex 0x03 */
extern UNS32 Tag15693_Block1;		/* Mapped at index 0x2003, subindex 0x04 */
extern UNS32 Tag15693_Block2;		/* Mapped at index 0x2003, subindex 0x05 */
extern UNS32 Tag15693_Block3;		/* Mapped at index 0x2003, subindex 0x06 */
extern UNS32 Tag15693_Block4;		/* Mapped at index 0x2003, subindex 0x07 */
extern UNS32 Tag15693_Block5;		/* Mapped at index 0x2003, subindex 0x08 */
extern UNS32 Tag15693_Block6;		/* Mapped at index 0x2003, subindex 0x09 */
extern UNS32 Tag15693_Block7;		/* Mapped at index 0x2003, subindex 0x0A */
extern UNS8 Tag15693_15693Block[10];		/* Mapped at index 0x2003, subindex 0x0B */
extern UNS8 Tag15693Block[64];		/* Mapped at index 0x2004, subindex 0x01 - 0x40 */
extern UNS8 ComData_OpState;		/* Mapped at index 0x2100, subindex 0x01 */
extern UNS8 ComData_RcvBuffer[10];		/* Mapped at index 0x2100, subindex 0x02 */
extern UNS8 ComData_RspBuffer[10];		/* Mapped at index 0x2100, subindex 0x03 */
extern UNS8 ComData_TestState;		/* Mapped at index 0x2100, subindex 0x04 */
extern UNS64 ComData_OkTick;		/* Mapped at index 0x2100, subindex 0x05 */
extern UNS64 ComData_AlllTick;		/* Mapped at index 0x2100, subindex 0x06 */

#endif // ANYID_FR321CO_SLAVE_H
