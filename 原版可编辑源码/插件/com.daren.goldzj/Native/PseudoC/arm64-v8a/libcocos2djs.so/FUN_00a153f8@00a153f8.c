
void FUN_00a153f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_00a18e40();
  if (*(long *)(param_1 + 0x8c50) != 0 || *(long *)(param_1 + 0x8c58) != 0) {
    lVar2 = auVar3._8_8_ + (param_2 % 1000) * 1000;
    lVar1 = auVar3._0_8_ + param_2 / 1000;
    if (999999 < lVar2) {
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + -1000000;
    }
    lVar1 = FUN_00a18ea0(lVar1,lVar2);
    if (0 < lVar1) {
      return;
    }
  }
  FUN_00a11760(param_1,param_2);
  return;
}

