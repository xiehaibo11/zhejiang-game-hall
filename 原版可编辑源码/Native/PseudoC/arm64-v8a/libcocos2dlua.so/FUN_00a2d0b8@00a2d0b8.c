
undefined8 FUN_00a2d0b8(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 00a2d020 with catch @ 00a2d0b8 */
                    /* catch() { ... } // from try @ 00a2d038 with catch @ 00a2d0bc */
  lVar4 = *param_2;
  if (param_1 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_00a4a970(FUN_00a2d19c);
                    /* catch() { ... } // from try @ 00a2cfec with catch @ 00a2d0ec */
    if (lVar2 == 0) {
      return 3;
    }
    lVar3 = *param_1;
    while (lVar3 != 0) {
      param_1 = param_1 + 1;
      lVar3 = (*(code *)PTR_strdup_01769a10)();
      if (lVar3 == 0) {
        FUN_00a4ab10(lVar2,0);
        return 3;
      }
      iVar1 = FUN_00a4a9ac(lVar2,*(undefined8 *)(lVar2 + 8),lVar3);
      if (iVar1 == 0) {
        FUN_00a4ab10(lVar2,0);
        (*(code *)PTR_free_01769a00)(lVar3);
        return 3;
      }
      lVar3 = *param_1;
    }
  }
  if (lVar4 != 0) {
    FUN_00a4ab10(lVar4,0);
  }
  *param_2 = lVar2;
  return 0;
}

