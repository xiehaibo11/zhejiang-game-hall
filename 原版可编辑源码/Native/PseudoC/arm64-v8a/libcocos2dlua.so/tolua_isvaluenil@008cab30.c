
undefined8 tolua_isvaluenil(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = lua_gettop();
  iVar2 = -param_2;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if ((iVar1 < iVar2) || (iVar2 = lua_type(param_1,param_2), iVar2 != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *param_3 = param_2;
    param_3[1] = 0;
    *(char **)(param_3 + 2) = "value";
  }
  return uVar3;
}

