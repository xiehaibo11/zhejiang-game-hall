
undefined4 FUN_00135704(undefined8 *param_1,byte *param_2,ulong *param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  
  pbVar3 = (byte *)*param_1;
  if (pbVar3 < param_2) {
    pbVar4 = pbVar3 + 1;
    uVar6 = (uint)(1L << ((ulong)(7 - param_4) & 0x3f));
    uVar7 = (ulong)(uVar6 - 1) & (ulong)*pbVar3;
    pbVar5 = pbVar4;
    if ((uVar6 & *pbVar3) != 0) {
      do {
        if (uVar7 >> 0x39 != 0) {
          return 0;
        }
        if (pbVar5 == param_2) {
          return 0;
        }
        pbVar4 = pbVar5 + 1;
        bVar1 = *pbVar5;
        uVar7 = (ulong)bVar1 & 0x7f | uVar7 << 7;
        pbVar5 = pbVar4;
      } while ((char)bVar1 < '\0');
    }
    *param_3 = uVar7;
    uVar2 = 1;
    *param_1 = pbVar4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

