
undefined8 FUN_00a389c8(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  lVar4 = *param_1;
  lVar2 = (*(code *)PTR_calloc_01d1b760)(0x48,1);
  *(long *)(lVar4 + 0x218) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    *(undefined1 *)(param_1 + 0x77) = 0;
    if ((*(char *)((long)param_1 + 0x3be) != '\0') && (*(char *)(lVar4 + 0x612) == '\0')) {
      ppuVar1 = &PTR_DAT_01c6d9f0;
      if ((undefined **)param_1[0x80] != &PTR_DAT_01c6d8c0) {
        ppuVar1 = &PTR_s_IMAPS_01c6da70;
      }
      UNRECOVERED_JUMPTABLE = (code *)ppuVar1[1];
      param_1[0x80] = (long)ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00a38a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar3;
    }
    uVar3 = 0;
    *(long *)(lVar4 + 0x8cc0) = *(long *)(lVar4 + 0x8cc0) + 1;
  }
  return uVar3;
}

