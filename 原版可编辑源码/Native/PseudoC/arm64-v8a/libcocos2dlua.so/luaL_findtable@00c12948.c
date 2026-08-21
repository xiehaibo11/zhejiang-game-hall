
char * luaL_findtable(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  
  lua_pushvalue();
  do {
    pcVar3 = strchr(param_3,0x2e);
    if (pcVar3 == (char *)0x0) {
      sVar4 = strlen(param_3);
      pcVar3 = param_3 + sVar4;
    }
    lua_pushlstring(param_1,param_3,(long)pcVar3 - (long)param_3);
    lua_rawget(param_1,0xfffffffe);
    iVar2 = lua_type(param_1,0xffffffff);
    if (iVar2 == 0) {
      lua_settop(param_1,0xfffffffe);
      uVar1 = param_4;
      if (*pcVar3 == '.') {
        uVar1 = 1;
      }
      lua_createtable(param_1,0,uVar1);
      lua_pushlstring(param_1,param_3,(long)pcVar3 - (long)param_3);
      lua_pushvalue(param_1,0xfffffffe);
      lua_settable(param_1,0xfffffffc);
    }
    else {
      iVar2 = lua_type(param_1,0xffffffff);
      if (iVar2 != 5) {
        lua_settop(param_1,0xfffffffd);
        return param_3;
      }
    }
    param_3 = pcVar3 + 1;
    lua_remove(param_1,0xfffffffe);
  } while (*pcVar3 == '.');
  return (char *)0x0;
}

