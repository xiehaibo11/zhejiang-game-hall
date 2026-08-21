
uint FUN_00a4387c(uint *param_1)

{
  uint uVar1;
  
                    /* try { // try from 00a4387c to 00b43887 has its CatchHandler @ 00a43a24 */
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}

