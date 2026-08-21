
undefined8 tolua_isuserdata(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    iVar1 = lua_gettop(param_1);
    iVar2 = -param_2;
    if (-1 < param_2) {
      iVar2 = param_2;
    }
    if (iVar1 < iVar2) {
      return 1;
    }
  }
  iVar2 = lua_type(param_1,param_2);
  if ((iVar2 != 0) && (uVar3 = lua_isuserdata(param_1,param_2), (int)uVar3 == 0)) {
    *param_4 = param_2;
    param_4[1] = 0;
    *(char **)(param_4 + 2) = "userdata";
    return uVar3;
  }
  return 1;
}

