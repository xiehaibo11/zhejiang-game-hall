
/* universe::call_function(lua_State*, int, int, int) */

void universe::call_function(lua_State *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  lua_rawgeti(param_1,0xffffd8f0,param_2,param_4);
  lua_insert(param_1,~param_3);
  lua_getfield(param_1,0xffffd8ee,"__G__TRACKBACK__");
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 6) {
    iVar1 = -2 - param_3;
    lua_insert(param_1,iVar1);
  }
  else {
    lua_settop(param_1,0xfffffffe);
    iVar1 = 0;
  }
  iVar2 = lua_pcall(param_1,param_3,param_4,iVar1);
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      pcVar3 = (char *)Translated::getInstance();
      uVar4 = lua_tolstring(param_1,0xffffffff,0);
      Translated::log(pcVar3,"[LUA ERROR] %s",uVar4);
      uVar4 = 0xfffffffe;
    }
    else {
      uVar4 = 0xfffffffd;
    }
    lua_settop(param_1,uVar4);
    return;
  }
  return;
}

