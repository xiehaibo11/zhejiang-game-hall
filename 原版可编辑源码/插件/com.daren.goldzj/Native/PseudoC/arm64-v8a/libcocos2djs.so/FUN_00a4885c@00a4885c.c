
undefined8
FUN_00a4885c(undefined8 param_1,long *param_2,undefined1 *param_3,long param_4,uint param_5,
            undefined8 *param_6)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
                    /* try { // try from 00a4887c to 00b488d3 has its CatchHandler @ 00a4887c
                       catch() { ... } // from try @ 00a4887c with catch @ 00a4887c
                       catch() { ... } // from try @ 00a48a34 with catch @ 00a4887c */
  if (7 < param_5) {
    uVar3 = 0;
    do {
      uVar1 = (int)uVar3 + 1;
      plVar2 = (long *)(param_4 + (ulong)uVar1);
      if (*plVar2 == 0x312e312f70747468) {
        *param_2 = (long)plVar2;
                    /* try { // try from 00a488f4 to 00b488ff has its CatchHandler @ 00a48ab0 */
        *param_3 = *(undefined1 *)(param_4 + uVar3);
        FUN_00a22d58(*param_6,"NPN, negotiated HTTP1.1\n");
        goto LAB_00a48900;
      }
      uVar1 = uVar1 + *(byte *)(param_4 + uVar3);
      uVar3 = (ulong)uVar1;
    } while (uVar1 + 8 <= param_5);
  }
  FUN_00a22d58(*param_6,"NPN, no overlap, use HTTP1.1\n");
                    /* try { // try from 00a488d4 to 00b488eb has its CatchHandler @ 00a48ab4 */
  *param_2 = (long)"http/1.1";
  *param_3 = 8;
LAB_00a48900:
                    /* try { // try from 00a48900 to 00b4890b has its CatchHandler @ 00a48aac */
  *(undefined4 *)(param_6 + 0xe4) = 2;
                    /* try { // try from 00a4890c to 00b48a33 has its CatchHandler @ 00a48ac4 */
  return 0;
}

