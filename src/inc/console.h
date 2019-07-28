#ifndef K8_CONSOLE_H
#define K8_CONSOLE_H

#include "ssd1351.h"

// Called by the FreeRTOS task
void K8_Draw();

void K8_Update();

#endif // K8_CONSOLE_H
