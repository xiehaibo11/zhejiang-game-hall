
undefined8 FUN_00912da8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00912da8 to 00a12dbf has its CatchHandler @ 00913160 */
  lVar1 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 00912dcc to 00a12de3 has its CatchHandler @ 0091312c */
  uVar2 = NEON_ucvtf((ulong)*(uint *)(lVar1 + 0xb4));
  tolua_pushnumber(uVar2,param_1);
  return 1;
}

