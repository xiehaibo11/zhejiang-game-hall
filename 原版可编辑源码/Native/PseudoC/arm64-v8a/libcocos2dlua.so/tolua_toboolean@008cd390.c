
ulong tolua_toboolean(undefined8 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = lua_gettop();
  iVar1 = -param_2;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  if (iVar2 < iVar1) {
    return (ulong)param_3;
  }
  uVar3 = lua_toboolean(param_1,param_2);
  return uVar3;
}

