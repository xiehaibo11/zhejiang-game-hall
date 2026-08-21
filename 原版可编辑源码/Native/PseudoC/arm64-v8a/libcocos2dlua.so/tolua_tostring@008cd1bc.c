
undefined8 tolua_tostring(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = lua_gettop();
  iVar1 = -param_2;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  if (iVar2 < iVar1) {
    return param_3;
  }
  uVar3 = lua_tolstring(param_1,param_2,0);
  return uVar3;
}

