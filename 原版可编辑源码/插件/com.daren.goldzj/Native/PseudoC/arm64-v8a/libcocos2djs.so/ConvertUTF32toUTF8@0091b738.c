
undefined4
ConvertUTF32toUTF8(undefined8 *param_1,uint *param_2,long *param_3,byte *param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  
  puVar6 = (uint *)*param_1;
  pbVar8 = (byte *)*param_3;
  if (puVar6 < param_2) {
    uVar5 = 0;
    puVar7 = puVar6;
    do {
      puVar6 = puVar7 + 1;
      uVar9 = *puVar7;
      if ((param_5 == 0) && ((uVar9 & 0xfffff800) == 0xd800)) {
        uVar5 = 3;
        puVar6 = puVar7;
        break;
      }
      if (uVar9 < 0x80) {
        uVar3 = 1;
      }
      else if (uVar9 < 0x800) {
        uVar3 = 2;
      }
      else if (uVar9 < 0x10000) {
        uVar3 = 3;
      }
      else {
        bVar2 = 0x10ffff < uVar9;
        if (bVar2) {
          uVar9 = 0xfffd;
          uVar1 = 3;
        }
        else {
          uVar1 = 4;
        }
        uVar3 = (ulong)uVar1;
        if (bVar2) {
          uVar5 = 3;
        }
      }
      pbVar4 = pbVar8 + uVar3;
      if (param_4 < pbVar4) {
        uVar5 = 2;
        puVar6 = puVar7;
        break;
      }
      switch((int)uVar3) {
      case 4:
        pbVar4 = pbVar4 + -1;
        *pbVar4 = (byte)uVar9 & 0x3f | 0x80;
        uVar9 = uVar9 >> 6;
      case 3:
        pbVar4 = pbVar4 + -1;
        *pbVar4 = (byte)uVar9 & 0x3f | 0x80;
        uVar9 = uVar9 >> 6;
      case 2:
        pbVar4 = pbVar4 + -1;
        *pbVar4 = (byte)uVar9 & 0x3f | 0x80;
        uVar9 = uVar9 >> 6;
      case 1:
        pbVar4 = pbVar4 + -1;
        *pbVar4 = (&UNK_01868d76)[uVar3] | (byte)uVar9;
      }
      pbVar8 = pbVar4 + uVar3;
      puVar7 = puVar6;
    } while (puVar6 < param_2);
  }
  else {
    uVar5 = 0;
  }
  *param_1 = puVar6;
  *param_3 = (long)pbVar8;
  return uVar5;
}

