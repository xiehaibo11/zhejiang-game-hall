
undefined8
tolua_isusertype(undefined8 param_1,int param_2,undefined8 param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
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
  if ((iVar2 != 0) && (uVar3 = lua_isusertype(param_1,param_2,param_3), (int)uVar3 == 0)) {
    *param_5 = param_2;
    param_5[1] = 0;
    *(undefined8 *)(param_5 + 2) = param_3;
    return uVar3;
  }
  return 1;
}

