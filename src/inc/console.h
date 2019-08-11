#ifndef K8_CONSOLE_H
#define K8_CONSOLE_H

#include "ssd1351.h"
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <stdlib.h>
#include <stdio.h>
#include "lua_binding.h"

// Called by the FreeRTOS task
void K8_Draw();

void K8_Update();

void luaDemo();

#endif // K8_CONSOLE_H
