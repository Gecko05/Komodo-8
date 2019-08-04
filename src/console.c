#include "console.h"

void K8_Draw(){

}

void K8_Update(){
  SSD1351_update();
}

void luaDemo(){
  lua_State *L;
  L = luaL_newstate();
  luaL_openlibs(L);
  char *script = "function doSum(a, b) \
                  return a + b   \
                  end";
  int error = luaL_loadstring(L, script) || lua_pcall(L, 0, 0, 0);
  if (error) {
    SSD_PRINTF("%s", lua_tostring(L, -1));
    lua_pop(L, 1);  /* pop error message from the stack */
  }
  else {
    SSD_PRINTF("No error");
    lua_getglobal(L, "doSum");
    lua_pushinteger(L, 2);
    lua_pushinteger(L, 3);
    lua_call(L, 2, 1);
    int res;
    res = luaL_checkinteger(L, 1);
    SSD_PRINTF("\nResult: %i", res);
  }

  lua_close(L);
}

