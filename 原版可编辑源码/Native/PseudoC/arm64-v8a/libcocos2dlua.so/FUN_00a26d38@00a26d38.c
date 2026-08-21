
uint FUN_00a26d38(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = thunk_FUN_00a5e8bc();
                    /* try { // try from 00a26d58 to 00b26d5f has its CatchHandler @ 00a26d74 */
                    /* try { // try from 00a26d60 to 00b26d93 has its CatchHandler @ 00a26c48 */
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_00a38738(param_1,param_2), (uVar2 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00a26cb4 with catch @ 00a26d74
                       catch() { ... } // from try @ 00a26d58 with catch @ 00a26d74 */
                    /* catch() { ... } // from try @ 00a26c98 with catch @ 00a26d78
                       catch() { ... } // from try @ 00a26d08 with catch @ 00a26d78 */
    uVar1 = FUN_00a2b3d0(*(undefined4 *)(param_1 + (long)param_2 * 4 + 0x260),0xffffffff,0xffffffff,
                         0);
    uVar1 = 0 < (int)uVar1 & uVar1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

