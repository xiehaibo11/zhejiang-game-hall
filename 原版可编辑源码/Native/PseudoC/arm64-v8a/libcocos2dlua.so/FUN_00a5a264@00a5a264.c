
uint FUN_00a5a264(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
                    /* try { // try from 00a5a26c to 00b5a2a3 has its CatchHandler @ 00a5a42c */
  return uVar1 >> 0x10 | uVar1 << 0x10;
}

