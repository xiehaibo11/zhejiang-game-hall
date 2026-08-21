
undefined8 buffer_meth_getstats(undefined8 param_1,double *param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = NEON_ucvtf(param_2[2]);
  lua_pushnumber(uVar1);
  uVar1 = NEON_ucvtf(param_2[1]);
  lua_pushnumber(uVar1,param_1);
  dVar2 = (double)timeout_gettime();
  lua_pushnumber(dVar2 - *param_2,param_1);
  return 3;
}

