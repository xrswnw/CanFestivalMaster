/*
This file is part of CanFestival, a library implementing CanOpen Stack.

Copyright (C): Edouard TISSERANT and Francis DUPIN
AVR Port: Andreas GLAUSER and Peter CHRISTEN

See COPYING file for copyrights details.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef __APPLICFG_AVR__
#define __APPLICFG_AVR__

#include <string.h>
#include <stdio.h>

// Integers
#define INTEGER8 signed char
#define INTEGER16 short
#define INTEGER24
#define INTEGER32 long
#define INTEGER40
#define INTEGER48
#define INTEGER56
#define INTEGER64

// Unsigned integers
#define UNS8   unsigned char
#define UNS16  unsigned short
#define UNS32  unsigned long
#define UNS64  unsigned long long
/*
#define UNS24
#define UNS40
#define UNS48
#define UNS56
#define UNS64
*/ 


// Reals
#define REAL32	float
#define REAL64 double
#include "can.h"
#include "AnyID_CanFestival_RS485.h"
// MSG functions
// not finished, the strings have to be placed to the flash and printed out 
// using the printf_P function
// Definition of MSG_ERR
// ---------------------
//#define DEBUG_ERR_CONSOLE_ON						//开启DEBUG		
//#define DEBUG_WAR_CONSOLE_ON			
//Uart_WriteStr
//stm32f103测试，开启debug硬件错误，怀疑内存问题
//实际调试，编译器代码优化，中级，否则硬件错误，怀疑内存问题

#ifdef DEBUG_ERR_CONSOLE_ON
#define MSG_ERR(num, str, val)      do{\
									   	Debug_InfoClear();\
									   	sprintf(g_nRs485DebugInfo, "0x%X,%s,0x%X", num, str, val);\
									   	Uart_Delayms(10);\
										Uart_WriteErrStr(g_nRs485DebugInfo);\
									   }while(0)
#else
#    define MSG_ERR(num, str, val)
#endif

/// Definition of MSG_WAR
// ---------------------
#ifdef DEBUG_WAR_CONSOLE_ON
#define MSG_WAR(num, str, val)     do{\
									   	Debug_InfoClear();\
									   	sprintf(g_nRs485DebugInfo, "0x%X,%s,0x%X", num, str, val);\
									   	Uart_Delayms(10);\
									   	Uart_WriteWarStr(g_nRs485DebugInfo);\
									  }while(0)
#else
#    define MSG_WAR(num, str, val)			//debug暂留，可重映射输出
#endif

typedef void* CAN_HANDLE;

typedef void* CAN_PORT;

#endif


