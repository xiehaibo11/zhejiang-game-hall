
undefined8 buffer_meth_setstats(undefined8 param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = NEON_ucvtf(param_2[2]);
  dVar3 = (double)luaL_optnumber(uVar2,param_1,2);
                    /* try { // try from 009d1548 to 00ad155b has its CatchHandler @ 009d8040 */
  uVar2 = NEON_ucvtf(param_2[1]);
  param_2[2] = (double)(long)dVar3;
                    /* try { // try from 009d1560 to 00ad15cb has its CatchHandler @ 009d814c */
  dVar3 = (double)luaL_optnumber(uVar2,param_1,3);
  param_2[1] = (double)(long)dVar3;
  iVar1 = lua_isnumber(param_1,4);
  if (iVar1 != 0) {
    dVar3 = (double)timeout_gettime();
    dVar4 = (double)lua_tonumber(param_1,4);
    *param_2 = dVar3 - dVar4;
  }
  lua_pushnumber(0x3ff0000000000000,param_1);
  return 1;
}

