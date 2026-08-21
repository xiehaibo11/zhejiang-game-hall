
void FUN_00c2c9c4(long *param_1,int param_2,long param_3,long param_4)

{
  if ((int)param_1[3] <= param_2) {
    if (param_2 == 0) {
      lua_pushlstring(param_1[2],param_3,param_4 - param_3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1[2],0x725);
  }
  if (param_1[(long)param_2 * 2 + 5] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1[2],0x74d);
  }
  if (param_1[(long)param_2 * 2 + 5] != -2) {
    lua_pushlstring(param_1[2],param_1[(long)param_2 * 2 + 4]);
    return;
  }
  lua_pushinteger(param_1[2],(param_1[(long)param_2 * 2 + 4] - *param_1) + 1);
  return;
}

