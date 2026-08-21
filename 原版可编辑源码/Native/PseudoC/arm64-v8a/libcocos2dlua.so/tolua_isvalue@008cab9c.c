
undefined8 tolua_isvalue(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar1 = -param_2;
    if (-1 < param_2) {
      iVar1 = param_2;
    }
    iVar2 = lua_gettop();
    if (iVar2 < iVar1) {
      *param_4 = param_2;
      param_4[1] = 0;
      *(char **)(param_4 + 2) = "value";
      return 0;
    }
  }
  return 1;
}

