
uint FUN_00a55d88(long param_1)

{
  uint uVar1;
  
                    /* try { // try from 00a55d88 to 00b55dc3 has its CatchHandler @ 00a55ecc */
  uVar1 = FUN_00a2b3d0(*(undefined4 *)(param_1 + 0x260),0xffffffff,0xffffffff,0);
  if (uVar1 == 0) {
                    /* try { // try from 00a55dd0 to 00b55e2b has its CatchHandler @ 00a55ed0 */
    uVar1 = 0;
  }
  else if ((uVar1 & 5) == 1) {
    uVar1 = FUN_00a26b74(param_1);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

