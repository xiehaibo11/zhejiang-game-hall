
ulong FUN_00c2e060(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = lua_type(param_1,2);
  if (iVar1 == 0) {
    uVar2 = lua_lessthan(param_1,param_2);
    return uVar2;
  }
  lua_pushvalue(param_1,2);
  lua_pushvalue(param_1,param_2 + -1);
  lua_pushvalue(param_1,param_3 + -2);
  lua_call(param_1,2,1);
  uVar2 = lua_toboolean(param_1,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  return uVar2 & 0xffffffff;
}

