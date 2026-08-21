
undefined8
ConvertUTF8toUTF16(undefined8 *param_1,byte *param_2,undefined8 *param_3,short *param_4,int param_5)

{
  long lVar1;
  byte bVar2;
  short *psVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  
  pbVar9 = (byte *)*param_1;
  psVar3 = (short *)*param_3;
  do {
    if (param_2 <= pbVar9) {
      uVar5 = 0;
LAB_0101fca4:
      *param_1 = pbVar9;
      *param_3 = psVar3;
      return uVar5;
    }
    bVar2 = *pbVar9;
    uVar10 = (ulong)bVar2;
    uVar11 = (ulong)(byte)(&DAT_01458874)[uVar10];
    if ((long)param_2 - (long)pbVar9 <= (long)uVar11) {
                    /* catch() { ... } // from try @ 0101fc20 with catch @ 0101fcd4 */
      uVar5 = 1;
      goto LAB_0101fca4;
    }
    lVar1 = uVar11 + 1;
    cVar4 = FUN_0101f8f4(pbVar9,lVar1);
    if (cVar4 == '\0') {
      uVar5 = 3;
      goto LAB_0101fca4;
    }
    iVar6 = 0;
    uVar8 = uVar10;
                    /* try { // try from 0101fbcc to 0111fc1f has its CatchHandler @ 0101fbcc
                       catch() { ... } // from try @ 0101fbcc with catch @ 0101fbcc
                       catch() { ... } // from try @ 0101fc6c with catch @ 0101fbcc */
    switch(uVar11) {
    case 5:
      pbVar9 = pbVar9 + 1;
      uVar10 = (ulong)*pbVar9;
      iVar6 = (uint)bVar2 << 6;
    case 4:
      pbVar9 = pbVar9 + 1;
      uVar8 = (ulong)*pbVar9;
      iVar6 = (iVar6 + (int)uVar10) * 0x40;
    case 3:
      pbVar9 = pbVar9 + 1;
      uVar10 = (ulong)*pbVar9;
      iVar6 = (iVar6 + (int)uVar8) * 0x40;
    case 2:
      pbVar9 = pbVar9 + 1;
      uVar8 = (ulong)*pbVar9;
      iVar6 = (iVar6 + (int)uVar10) * 0x40;
    case 1:
      pbVar9 = pbVar9 + 1;
      uVar10 = (ulong)*pbVar9;
      iVar6 = (iVar6 + (int)uVar8) * 0x40;
    case 0:
      pbVar9 = pbVar9 + 1;
                    /* try { // try from 0101fc20 to 0111fc27 has its CatchHandler @ 0101fcd4 */
      iVar6 = iVar6 + (int)uVar10;
    }
    if (param_4 <= psVar3) {
LAB_0101fcc8:
      pbVar9 = pbVar9 + -lVar1;
      uVar5 = 2;
      goto LAB_0101fca4;
    }
    uVar7 = iVar6 - *(int *)(&DAT_01458974 + uVar11 * 4);
    if (uVar7 >> 0x10 == 0) {
                    /* try { // try from 0101fc4c to 0111fc6b has its CatchHandler @ 0101fcec */
      if (uVar7 >> 0xb == 0x1b) {
LAB_0101fc5c:
        if (param_5 == 0) {
          pbVar9 = pbVar9 + -lVar1;
          uVar5 = 3;
                    /* catch() { ... } // from try @ 0101fc4c with catch @ 0101fcec */
          goto LAB_0101fca4;
        }
        uVar7 = 0xfffd;
      }
      *psVar3 = (short)uVar7;
      psVar3 = psVar3 + 1;
    }
    else {
      if (0x10ffff < uVar7) goto LAB_0101fc5c;
                    /* try { // try from 0101fc6c to 0111fd43 has its CatchHandler @ 0101fbcc */
      if (param_4 <= psVar3 + 1) goto LAB_0101fcc8;
      *psVar3 = (short)(uVar7 - 0x10000 >> 10) + -0x2800;
      psVar3[1] = (ushort)(uVar7 - 0x10000) & 0x3ff | 0xdc00;
      psVar3 = psVar3 + 2;
    }
  } while( true );
}

