
undefined8
tolua_isusertypearray
          (undefined8 param_1,int param_2,undefined8 param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_5 != 0) {
    iVar1 = lua_gettop(param_1);
    iVar2 = -param_2;
    if (-1 < param_2) {
      iVar2 = param_2;
    }
    if (iVar1 < iVar2) goto LAB_008cb2b0;
  }
  iVar2 = lua_type(param_1,param_2);
  if (iVar2 != 5) {
    *param_6 = param_2;
    param_6[1] = 0;
    *(char **)(param_6 + 2) = "table";
    return 0;
  }
LAB_008cb2b0:
  if (0 < param_4) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      lua_pushnumber((double)iVar2,param_1);
      lua_gettable(param_1,param_2);
      iVar1 = lua_type(param_1,0xffffffff);
      if (((iVar1 != 0) && (iVar1 = lua_isuserdata(param_1,0xffffffff), iVar1 == 0)) &&
         ((param_5 == 0 || (iVar1 = lua_type(param_1,0xffffffff), iVar1 != 0)))) {
        *(undefined8 *)(param_6 + 2) = param_3;
        *param_6 = param_2;
        param_6[1] = 1;
        return 0;
      }
      lua_settop(param_1,0xfffffffe);
    } while (param_4 != iVar2);
  }
  return 1;
}

