
void luaL_pushresult(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1 + 3;
  if (*param_1 - (long)plVar1 == 0) {
    lua_concat(param_1[2],(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = 1;
    return;
  }
  lua_pushlstring(param_1[2],plVar1,*param_1 - (long)plVar1);
  *param_1 = (long)plVar1;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  lua_concat(param_1[2]);
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}

