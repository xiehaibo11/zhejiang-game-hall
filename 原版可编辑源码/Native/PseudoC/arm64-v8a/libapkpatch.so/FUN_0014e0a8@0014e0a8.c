
undefined8 FUN_0014e0a8(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  *param_2 = 0;
  if ((pbVar2 != pbVar3) && (*pbVar3 - 0x30 < 10)) {
    if (*pbVar3 - 0x30 < 10) {
      lVar4 = 0;
      do {
        lVar4 = lVar4 * 10;
        *param_2 = lVar4;
        if (pbVar3 == pbVar2) {
          *param_2 = lVar4 + -0x30;
          return 0;
        }
        pbVar1 = pbVar3 + 1;
        *param_1 = (long)pbVar1;
        lVar4 = lVar4 + (ulong)*pbVar3 + -0x30;
        *param_2 = lVar4;
      } while ((pbVar2 != pbVar1) && (pbVar3 = pbVar1, *pbVar1 - 0x30 < 10));
    }
    return 0;
  }
  return 1;
}

