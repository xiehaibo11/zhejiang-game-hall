
ulong FUN_00a0e968(byte param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
                    /* try { // try from 00a0e9e8 to 00b0e9ff has its CatchHandler @ 00a0eaa0 */
    lVar1 = (*(code *)PTR_malloc_01d1b740)(0x20);
    *param_2 = lVar1;
    if (lVar1 == 0) {
LAB_00a0ea28:
      *(undefined4 *)(param_2 + 3) = 1;
      return 0xffffffff;
    }
                    /* try { // try from 00a0ea00 to 00b0eb4f has its CatchHandler @ 00a0e6c8 */
    lVar2 = 0;
    param_2[2] = 0x20;
    param_2[1] = 0;
  }
  else {
                    /* try { // try from 00a0e98c to 00b0e993 has its CatchHandler @ 00a0eaf4 */
    lVar2 = param_2[1];
    uVar3 = param_2[2];
    if (uVar3 <= lVar2 + 1U) {
                    /* try { // try from 00a0e9a0 to 00b0e9ab has its CatchHandler @ 00a0eae8 */
      uVar4 = uVar3 * 2;
                    /* try { // try from 00a0e9c8 to 00b0e9d3 has its CatchHandler @ 00a0ea9c */
      if ((uVar4 < uVar3 || uVar3 == 0) ||
         (lVar1 = (*(code *)PTR_realloc_01d1b750)(lVar1,uVar4), lVar1 == 0)) goto LAB_00a0ea28;
      lVar2 = param_2[1];
      *param_2 = lVar1;
                    /* try { // try from 00a0e9d4 to 00b0e9df has its CatchHandler @ 00a0ea84 */
      param_2[2] = uVar4;
    }
  }
  *(byte *)(lVar1 + lVar2) = param_1;
  param_2[1] = param_2[1] + 1;
  return (ulong)param_1;
}

