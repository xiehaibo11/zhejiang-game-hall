
undefined4
ConvertUTF32toUTF8(undefined8 *param_1,uint *param_2,long *param_3,byte *param_4,int param_5)

{
  bool bVar1;
  ulong uVar2;
  byte *pbVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  
  puVar4 = (uint *)*param_1;
  pbVar10 = (byte *)*param_3;
  if (puVar4 < param_2) {
    uVar9 = 0;
    puVar5 = puVar4 + 1;
    uVar7 = *puVar4;
    if (param_5 == 0) goto LAB_0101f810;
    do {
      do {
        puVar6 = puVar5;
        if (uVar7 < 0x80) {
          uVar2 = 1;
        }
        else if (uVar7 < 0x800) {
          uVar2 = 2;
        }
        else if (uVar7 < 0x10000) {
          uVar2 = 3;
        }
        else {
          bVar1 = 0x10ffff < uVar7;
          if (bVar1) {
            uVar7 = 0xfffd;
          }
          uVar8 = 3;
          if (!bVar1) {
            uVar8 = 4;
          }
          uVar2 = (ulong)uVar8;
          if (bVar1) {
            uVar9 = 3;
          }
        }
        pbVar3 = pbVar10 + uVar2;
        if (param_4 < pbVar3) {
          uVar9 = 2;
          goto LAB_0101f8b4;
        }
        switch((int)uVar2) {
        case 4:
          pbVar3 = pbVar3 + -1;
          *pbVar3 = (byte)uVar7 & 0x3f | 0x80;
          uVar7 = uVar7 >> 6;
        case 3:
          pbVar3 = pbVar3 + -1;
          *pbVar3 = (byte)uVar7 & 0x3f | 0x80;
          uVar7 = uVar7 >> 6;
        case 2:
          pbVar3 = pbVar3 + -1;
          *pbVar3 = (byte)uVar7 & 0x3f | 0x80;
          uVar7 = uVar7 >> 6;
        case 1:
          pbVar3 = pbVar3 + -1;
          *pbVar3 = (&UNK_0145886d)[uVar2] | (byte)uVar7;
        }
        pbVar10 = pbVar3 + uVar2;
        puVar4 = puVar6;
        if (param_2 <= puVar6) goto LAB_0101f8b4;
        puVar5 = puVar6 + 1;
        uVar7 = *puVar6;
      } while (param_5 != 0);
LAB_0101f810:
    } while ((uVar7 & 0xfffff800) != 0xd800);
    uVar9 = 3;
  }
  else {
                    /* catch() { ... } // from try @ 0101f8c8 with catch @ 0101f89c */
    uVar9 = 0;
  }
LAB_0101f8b4:
  *param_1 = puVar4;
  *param_3 = (long)pbVar10;
                    /* try { // try from 0101f8c0 to 0111f8c7 has its CatchHandler @ 0101f928 */
  return uVar9;
}

