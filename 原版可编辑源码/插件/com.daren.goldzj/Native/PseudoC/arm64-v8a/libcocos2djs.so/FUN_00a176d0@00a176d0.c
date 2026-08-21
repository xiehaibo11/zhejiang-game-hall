
undefined8 FUN_00a176d0(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (param_1 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_00a33f88(FUN_00a177b4);
    if (lVar2 == 0) {
      return 3;
    }
    lVar3 = *param_1;
    while (lVar3 != 0) {
      param_1 = param_1 + 1;
      lVar3 = (*(code *)PTR_strdup_01d1b758)();
      if (lVar3 == 0) {
        FUN_00a34128(lVar2,0);
        return 3;
      }
      iVar1 = FUN_00a33fc4(lVar2,*(undefined8 *)(lVar2 + 8),lVar3);
      if (iVar1 == 0) {
        FUN_00a34128(lVar2,0);
        (*(code *)PTR_free_01d1b748)(lVar3);
        return 3;
      }
      lVar3 = *param_1;
    }
  }
  if (lVar4 != 0) {
    FUN_00a34128(lVar4,0);
  }
  *param_2 = lVar2;
  return 0;
}

