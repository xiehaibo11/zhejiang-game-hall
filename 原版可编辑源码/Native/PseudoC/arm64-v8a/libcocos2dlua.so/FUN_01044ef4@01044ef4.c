
undefined4 FUN_01044ef4(long param_1,ulong param_2,int param_3,int param_4)

{
  void *__dest;
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x280);
                    /* try { // try from 01044f18 to 01144f2f has its CatchHandler @ 01045940 */
  if (uVar1 == 0) {
    param_4 = param_4 - param_3;
    __dest = (void *)thunk_FUN_0104b1cc(0,(long)param_4,"rxflow buf");
                    /* try { // try from 01044f4c to 01144f6b has its CatchHandler @ 01045990 */
    *(void **)(param_1 + 0x280) = __dest;
    if (__dest == (void *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x2d8) = param_4;
      *(undefined4 *)(param_1 + 0x2dc) = 0;
      memcpy(__dest,(void *)(param_2 + (long)param_3),(long)param_4);
      uVar3 = 0;
    }
  }
  else {
    if (param_2 < uVar1) {
      uVar2 = (ulong)*(uint *)(param_1 + 0x2d8);
    }
    else {
      uVar2 = (ulong)*(uint *)(param_1 + 0x2d8);
                    /* try { // try from 01044f84 to 01144f93 has its CatchHandler @ 01045840 */
      if (param_2 + (long)(param_4 + -1) < uVar1 + uVar2) {
        return 1;
      }
    }
                    /* try { // try from 01044f9c to 01144fbf has its CatchHandler @ 01045930 */
    uVar3 = 1;
    _lws_log(1,"%s: conflicting rxflow buf, current %p len %d, new %p len %d\n","lws_rxflow_cache",
             uVar1,uVar2,param_2,param_4);
  }
                    /* try { // try from 01044fc0 to 01144fcb has its CatchHandler @ 0104583c */
  return uVar3;
}

