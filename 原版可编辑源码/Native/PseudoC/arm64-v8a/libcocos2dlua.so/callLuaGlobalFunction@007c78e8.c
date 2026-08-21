
/* LuaJavaBridge::callLuaGlobalFunction(char const*, char const*) */

int LuaJavaBridge::callLuaGlobalFunction(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  uVar1 = s_luaState;
  uVar2 = lua_gettop(s_luaState);
  lua_getfield(uVar1,0xffffd8ee,param_1);
  iVar4 = -1;
  iVar3 = lua_type(uVar1,0xffffffff);
  if (iVar3 == 6) {
    lua_pushstring(uVar1,param_2);
    iVar4 = lua_pcall(uVar1,1,1,0);
    if (iVar4 == 0) {
      dVar5 = (double)lua_tonumber(uVar1,0xffffffff);
      iVar4 = (int)dVar5;
    }
    else {
      iVar4 = -iVar4;
    }
  }
  lua_settop(uVar1,uVar2);
  return iVar4;
}

