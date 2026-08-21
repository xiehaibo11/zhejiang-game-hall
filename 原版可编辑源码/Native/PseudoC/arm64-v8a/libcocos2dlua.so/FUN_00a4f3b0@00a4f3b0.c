
undefined8 FUN_00a4f3b0(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  lVar4 = *param_1;
  lVar2 = (*(code *)PTR_calloc_01769a18)(0x48,1);
  *(long *)(lVar4 + 0x218) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    *(undefined1 *)(param_1 + 0x77) = 0;
    if ((*(char *)((long)param_1 + 0x3be) != '\0') && (*(char *)(lVar4 + 0x612) == '\0')) {
      ppuVar1 = &PTR_DAT_016a41c0;
      if ((undefined **)param_1[0x80] != &PTR_DAT_016a4090) {
        ppuVar1 = &PTR_s_IMAPS_016a4240;
      }
      UNRECOVERED_JUMPTABLE = (code *)ppuVar1[1];
      param_1[0x80] = (long)ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00a4f458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar3;
    }
    uVar3 = 0;
    *(long *)(lVar4 + 0x8cc0) = *(long *)(lVar4 + 0x8cc0) + 1;
  }
  return uVar3;
}

