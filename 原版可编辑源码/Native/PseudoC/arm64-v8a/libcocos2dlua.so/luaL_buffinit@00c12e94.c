
void luaL_buffinit(long param_1,long *param_2)

{
  param_2[2] = param_1;
  *param_2 = (long)(param_2 + 3);
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}

