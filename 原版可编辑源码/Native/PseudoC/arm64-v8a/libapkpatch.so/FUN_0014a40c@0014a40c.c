
undefined1  [16] FUN_0014a40c(undefined1 (*param_1) [16],ulong param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  
  auVar4._0_8_ = *(byte **)*param_1;
  pbVar3 = *(byte **)(*param_1 + 8);
  pbVar2 = auVar4._0_8_;
  if ((param_2 & 1) != 0) {
    if (auVar4._0_8_ == pbVar3) goto LAB_0014a460;
    if (*auVar4._0_8_ == 0x6e) {
      pbVar2 = auVar4._0_8_ + 1;
      *(byte **)*param_1 = pbVar2;
    }
  }
  if ((pbVar3 != pbVar2) && (uVar1 = *pbVar2 - 0x30, uVar1 < 10)) {
    while( true ) {
      if (9 < uVar1) {
        auVar4._8_8_ = pbVar2;
        return auVar4;
      }
      pbVar2 = pbVar2 + 1;
      *(byte **)*param_1 = pbVar2;
      if (pbVar2 == pbVar3) break;
      uVar1 = *pbVar2 - 0x30;
    }
    return *param_1;
  }
LAB_0014a460:
  return ZEXT816(0);
}

