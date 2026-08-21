
long luaL_prepbuffer(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = param_1 + 3;
  if (*param_1 - (long)plVar2 != 0) {
    lua_pushlstring(param_1[2],plVar2,*param_1 - (long)plVar2);
    *param_1 = (long)plVar2;
    iVar1 = (int)param_1[1] + 1;
    *(int *)(param_1 + 1) = iVar1;
    if (1 < iVar1) {
      FUN_00c12700(param_1 + 1,param_1 + 2);
      return (long)plVar2;
    }
  }
  return (long)plVar2;
}

