
undefined8 tolua_istablearray(undefined8 param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_4 != 0) {
    iVar1 = lua_gettop(param_1);
    iVar2 = -param_2;
    if (-1 < param_2) {
      iVar2 = param_2;
    }
    if (iVar1 < iVar2) goto LAB_008cb084;
  }
  iVar2 = lua_type(param_1,param_2);
  if (iVar2 != 5) {
    *param_5 = param_2;
    param_5[1] = 0;
    *(char **)(param_5 + 2) = "table";
    return 0;
  }
LAB_008cb084:
  if (0 < param_3) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      lua_pushnumber((double)iVar2,param_1);
      lua_gettable(param_1,param_2);
      iVar1 = lua_type(param_1,0xffffffff);
      if ((iVar1 != 5) && ((param_4 == 0 || (iVar1 = lua_type(param_1,0xffffffff), iVar1 != 0)))) {
        *param_5 = param_2;
        param_5[1] = 1;
        *(char **)(param_5 + 2) = "table";
        return 0;
      }
      lua_settop(param_1,0xfffffffe);
    } while (param_3 != iVar2);
  }
  return 1;
}

