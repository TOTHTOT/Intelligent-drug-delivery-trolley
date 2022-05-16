/*
 * @Author: TOTHTOT
 * @Date: 2022-04-05 18:59:08
 * @LastEditTime: 2022-04-13 18:36:17
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \USERe:\Learn\stm32\实例\智能送药小车(FreeRTOS_F103C8T6)\HARDWARE\GRAYSENSOR\graysensor.h
 */
#ifndef __GRAYSENSOR_H
#define __GRAYSENSOR_H

#include "sys.h"

#define GRAYSENSOR_RIGHT PBin(0)
#define GRAYSENSOR_LEFT PBin(1)
#define GOOSE_LOAD PAin(1)            //药物装载

void GraySensor_Init(void);
short Car_Staright_Control(void);

#endif /* __GRAYSENSOR_H */


