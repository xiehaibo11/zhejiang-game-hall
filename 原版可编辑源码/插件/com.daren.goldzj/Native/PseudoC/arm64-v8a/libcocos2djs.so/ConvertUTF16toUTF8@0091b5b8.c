
undefined4
ConvertUTF16toUTF8(undefined8 *param_1,ushort *param_2,long *param_3,byte *param_4,int param_5)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  ushort *puVar7;
  byte *pbVar8;
  ushort *puVar9;
  
  puVar9 = (ushort *)*param_1;
  pbVar8 = (byte *)*param_3;
  if (puVar9 < param_2) {
    do {
      puVar7 = puVar9 + 1;
      uVar2 = *puVar9;
      uVar3 = (uint)uVar2;
      uVar1 = uVar2 & 0xfc00;
      if (uVar1 == 0xd800) {
        if (param_2 <= puVar7) {
          uVar6 = 1;
          goto LAB_0091b724;
        }
        if (*puVar7 >> 10 != 0x37) {
          if (param_5 == 0) goto LAB_0091b718;
          goto LAB_0091b650;
        }
        uVar3 = (uint)*puVar7 + (uint)uVar2 * 0x400 + 0xfca02400;
        puVar7 = puVar9 + 2;
        if (0x7f < uVar3) goto LAB_0091b634;
LAB_0091b658:
        uVar4 = 1;
      }
      else {
        if ((param_5 == 0) && (uVar1 == 0xdc00)) {
LAB_0091b718:
          uVar6 = 3;
          goto LAB_0091b724;
        }
LAB_0091b650:
        if (uVar3 < 0x80) goto LAB_0091b658;
LAB_0091b634:
        if (uVar3 < 0x800) {
          uVar4 = 2;
        }
        else if (uVar3 < 0x10000) {
          uVar4 = 3;
        }
        else {
          uVar1 = 3;
          if (uVar3 < 0x110000) {
            uVar1 = 4;
          }
          uVar4 = (ulong)uVar1;
          if (uVar3 >= 0x110000) {
            uVar3 = 0xfffd;
          }
        }
      }
      pbVar5 = pbVar8 + uVar4;
      if (param_4 < pbVar5) {
        uVar6 = 2;
        goto LAB_0091b724;
      }
      switch((int)uVar4) {
      case 4:
        pbVar5 = pbVar5 + -1;
        *pbVar5 = (byte)uVar3 & 0x3f | 0x80;
        uVar3 = uVar3 >> 6;
      case 3:
        pbVar5 = pbVar5 + -1;
        *pbVar5 = (byte)uVar3 & 0x3f | 0x80;
        uVar3 = uVar3 >> 6;
      case 2:
        pbVar5 = pbVar5 + -1;
        *pbVar5 = (byte)uVar3 & 0x3f | 0x80;
        uVar3 = uVar3 >> 6;
      case 1:
        pbVar5 = pbVar5 + -1;
        *pbVar5 = (&UNK_01868d76)[uVar4] | (byte)uVar3;
      }
      pbVar8 = pbVar5 + uVar4;
      puVar9 = puVar7;
    } while (puVar7 < param_2);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
  }
LAB_0091b724:
  *param_1 = puVar9;
  *param_3 = (long)pbVar8;
  return uVar6;
}

