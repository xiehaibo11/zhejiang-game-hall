
uint FUN_00a3f3a0(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00a159e8(*(undefined4 *)(param_1 + 0x260),0xffffffff,0xffffffff,0);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else if ((uVar1 & 5) == 1) {
    uVar1 = FUN_00a1118c(param_1);
    uVar1 = uVar1 ^ 1;
                    /* try { // try from 00a3f3e4 to 00b3f3eb has its CatchHandler @ 00a3f710 */
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

