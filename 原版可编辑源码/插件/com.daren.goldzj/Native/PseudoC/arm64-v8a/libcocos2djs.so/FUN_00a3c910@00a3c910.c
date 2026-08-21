
undefined8 FUN_00a3c910(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  lVar4 = *param_1;
                    /* try { // try from 00a3c924 to 00b3c92b has its CatchHandler @ 00a3c9f8 */
  *(undefined1 *)(param_1 + 0x77) = 0;
                    /* try { // try from 00a3c92c to 00b3c943 has its CatchHandler @ 00a3ca3c */
  if ((*(char *)((long)param_1 + 0x3be) != '\0') && (*(char *)(lVar4 + 0x612) == '\0')) {
                    /* try { // try from 00a3c97c to 00b3ca93 has its CatchHandler @ 00a3c86c */
    ppuVar1 = &PTR_DAT_01c6de50;
    if ((undefined **)param_1[0x80] != &PTR_DAT_01c6dd20) {
      ppuVar1 = &PTR_s_SMTPS_01c6ded0;
    }
    UNRECOVERED_JUMPTABLE = (code *)ppuVar1[1];
    param_1[0x80] = (long)ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00a3c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
    return uVar3;
  }
                    /* try { // try from 00a3c944 to 00b3c94b has its CatchHandler @ 00a3ca10 */
  lVar2 = (*(code *)PTR_calloc_01d1b760)(0x28,1);
                    /* try { // try from 00a3c94c to 00b3c97b has its CatchHandler @ 00a3ca18 */
  *(long *)(lVar4 + 0x218) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar3 = 0;
    *(long *)(lVar4 + 0x8cc0) = *(long *)(lVar4 + 0x8cc0) + 1;
  }
  return uVar3;
}

