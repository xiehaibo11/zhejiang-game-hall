
undefined4
ConvertUTF16toUTF8(undefined8 *param_1,ushort *param_2,long *param_3,byte *param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  
  puVar8 = (ushort *)*param_1;
  pbVar7 = (byte *)*param_3;
  if (puVar8 < param_2) {
    do {
      puVar6 = puVar8 + 1;
      uVar1 = (uint)*puVar8;
                    /* try { // try from 0101f690 to 0111f697 has its CatchHandler @ 0101f6e8 */
      if ((uVar1 & 0xfc00) == 0xd800) {
                    /* try { // try from 0101f698 to 0111f71f has its CatchHandler @ 0101f658 */
        if (param_2 <= puVar6) {
          uVar4 = 1;
          goto LAB_0101f778;
        }
        if (*puVar6 >> 10 != 0x37) {
          if (param_5 == 0) goto LAB_0101f76c;
          goto LAB_0101f6dc;
        }
        uVar1 = (uint)*puVar6 + uVar1 * 0x400 + 0xfca02400;
        puVar6 = puVar8 + 2;
        if (0x7f < uVar1) goto LAB_0101f6c0;
LAB_0101f6e4:
        uVar2 = 1;
                    /* catch() { ... } // from try @ 0101f690 with catch @ 0101f6e8 */
      }
      else {
        if ((param_5 == 0) && ((uVar1 & 0xfc00) == 0xdc00)) {
LAB_0101f76c:
          uVar4 = 3;
          goto LAB_0101f778;
        }
LAB_0101f6dc:
        if (uVar1 < 0x80) goto LAB_0101f6e4;
LAB_0101f6c0:
        if (uVar1 < 0x800) {
          uVar2 = 2;
        }
        else if (uVar1 < 0x10000) {
          uVar2 = 3;
        }
        else {
          uVar5 = 3;
          if (uVar1 < 0x110000) {
            uVar5 = 4;
          }
          uVar2 = (ulong)uVar5;
          if (uVar1 >= 0x110000) {
            uVar1 = 0xfffd;
          }
        }
      }
      pbVar3 = pbVar7 + uVar2;
      if (param_4 < pbVar3) {
        uVar4 = 2;
        goto LAB_0101f778;
      }
      switch((int)uVar2) {
      case 4:
        pbVar3 = pbVar3 + -1;
        *pbVar3 = (byte)uVar1 & 0x3f | 0x80;
        uVar1 = uVar1 >> 6;
      case 3:
        pbVar3 = pbVar3 + -1;
        *pbVar3 = (byte)uVar1 & 0x3f | 0x80;
        uVar1 = uVar1 >> 6;
      case 2:
                    /* catch() { ... } // from try @ 0101f698 with catch @ 0101f658 */
        pbVar3 = pbVar3 + -1;
        *pbVar3 = (byte)uVar1 & 0x3f | 0x80;
        uVar1 = uVar1 >> 6;
      case 1:
        pbVar3 = pbVar3 + -1;
        *pbVar3 = (&UNK_0145886d)[uVar2] | (byte)uVar1;
      }
      pbVar7 = pbVar3 + uVar2;
      puVar8 = puVar6;
    } while (puVar6 < param_2);
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
  }
LAB_0101f778:
  *param_1 = puVar8;
  *param_3 = (long)pbVar7;
  return uVar4;
}

