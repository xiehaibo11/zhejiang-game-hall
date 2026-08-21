
undefined4
ConvertUTF8toUTF32(undefined8 *param_1,byte *param_2,undefined8 *param_3,uint *param_4,int param_5)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  
  pbVar7 = (byte *)*param_1;
  puVar10 = (uint *)*param_3;
  if (pbVar7 < param_2) {
    uVar8 = 0;
    do {
      bVar2 = *pbVar7;
      uVar12 = (ulong)bVar2;
      uVar9 = (ulong)(byte)(&DAT_01458874)[uVar12];
      if ((long)param_2 - (long)pbVar7 <= (long)uVar9) {
                    /* try { // try from 0101fe7c to 0111fe83 has its CatchHandler @ 0101ff3c */
        uVar8 = 1;
        break;
      }
      lVar1 = uVar9 + 1;
      cVar3 = FUN_0101f8f4(pbVar7,lVar1);
                    /* try { // try from 0101fd80 to 0111fd87 has its CatchHandler @ 0101fde4 */
      if (cVar3 == '\0') {
LAB_0101fe44:
        uVar8 = 3;
        break;
      }
                    /* try { // try from 0101fd88 to 0111fdff has its CatchHandler @ 0101fd44 */
      iVar5 = 0;
      uVar6 = uVar12;
      switch(uVar9) {
      case 5:
        pbVar7 = pbVar7 + 1;
        uVar12 = (ulong)*pbVar7;
        iVar5 = (uint)bVar2 << 6;
      case 4:
        pbVar7 = pbVar7 + 1;
        uVar6 = (ulong)*pbVar7;
        iVar5 = (iVar5 + (int)uVar12) * 0x40;
      case 3:
        pbVar7 = pbVar7 + 1;
        uVar12 = (ulong)*pbVar7;
        iVar5 = (iVar5 + (int)uVar6) * 0x40;
      case 2:
        pbVar7 = pbVar7 + 1;
        uVar6 = (ulong)*pbVar7;
        iVar5 = (iVar5 + (int)uVar12) * 0x40;
      case 1:
                    /* catch() { ... } // from try @ 0101fd80 with catch @ 0101fde4 */
        pbVar7 = pbVar7 + 1;
        uVar12 = (ulong)*pbVar7;
        iVar5 = (iVar5 + (int)uVar6) * 0x40;
      case 0:
        pbVar7 = pbVar7 + 1;
        iVar5 = iVar5 + (int)uVar12;
      }
                    /* try { // try from 0101fe00 to 0111fe7b has its CatchHandler @ 0101fe00
                       catch() { ... } // from try @ 0101fe00 with catch @ 0101fe00
                       catch() { ... } // from try @ 0101fec8 with catch @ 0101fe00 */
      if (param_4 <= puVar10) {
        pbVar7 = pbVar7 + -lVar1;
        uVar8 = 2;
        break;
      }
      uVar4 = iVar5 - *(int *)(&DAT_01458974 + uVar9 * 4);
      if (uVar4 >> 0x10 < 0x11) {
        if (((uVar4 & 0xfffff800) == 0xd800) && (uVar4 = 0xfffd, param_5 == 0)) {
          pbVar7 = pbVar7 + -lVar1;
          goto LAB_0101fe44;
        }
      }
      else {
        uVar8 = 3;
        uVar4 = 0xfffd;
      }
                    /* catch() { ... } // from try @ 0101fd88 with catch @ 0101fd44 */
      puVar11 = puVar10 + 1;
      *puVar10 = uVar4;
      puVar10 = puVar11;
    } while (pbVar7 < param_2);
  }
  else {
    uVar8 = 0;
  }
  *param_1 = pbVar7;
  *param_3 = puVar10;
  return uVar8;
}

