
/* LuaJavaBridge::fetchArrayElements(lua_State*, int) */

int LuaJavaBridge::fetchArrayElements(lua_State *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  do {
    lua_rawgeti(param_1,param_2,iVar2 + 2);
    iVar1 = lua_type(param_1,0xffffffff);
    iVar2 = iVar2 + 1;
    param_2 = param_2 + -1;
  } while (iVar1 != 0);
  lua_settop(param_1,0xfffffffe);
  return iVar2;
}

