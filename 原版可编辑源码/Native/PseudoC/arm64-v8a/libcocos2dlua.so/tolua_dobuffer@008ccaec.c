
void tolua_dobuffer(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = luaL_loadbuffer(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return;
  }
  lua_pcall(param_1,0,0,0);
  return;
}

