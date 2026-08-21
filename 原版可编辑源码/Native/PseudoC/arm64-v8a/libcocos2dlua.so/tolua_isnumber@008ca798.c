
undefined8 tolua_isnumber(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    iVar2 = lua_gettop(param_1);
    iVar1 = -param_2;
    if (-1 < param_2) {
      iVar1 = param_2;
    }
    if (iVar2 < iVar1) {
      return 1;
    }
  }
  uVar3 = lua_isnumber(param_1,param_2);
  if ((int)uVar3 != 0) {
    return 1;
  }
  *param_4 = param_2;
  param_4[1] = 0;
  *(char **)(param_4 + 2) = "number";
  return uVar3;
}

