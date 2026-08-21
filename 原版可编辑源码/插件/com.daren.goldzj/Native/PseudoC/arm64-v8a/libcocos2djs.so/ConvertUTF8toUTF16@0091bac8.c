
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
LAB_0091bc40:
      *param_1 = pbVar9;
      *param_3 = psVar3;
      return uVar5;
    }
    bVar2 = *pbVar9;
    uVar10 = (ulong)bVar2;
    uVar11 = (ulong)(byte)(&DAT_01868d7d)[uVar10];
    if ((long)param_2 - (long)pbVar9 <= (long)uVar11) {
      uVar5 = 1;
      goto LAB_0091bc40;
    }
    lVar1 = uVar11 + 1;
    cVar4 = FUN_0091b894(pbVar9,lVar1);
    if (cVar4 == '\0') {
      uVar5 = 3;
      goto LAB_0091bc40;
    }
    iVar6 = 0;
    uVar8 = uVar10;
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
      iVar6 = iVar6 + (int)uVar10;
    }
    if (param_4 <= psVar3) {
LAB_0091bc64:
      pbVar9 = pbVar9 + -lVar1;
      uVar5 = 2;
      goto LAB_0091bc40;
    }
    uVar7 = iVar6 - *(int *)(&DAT_01868e80 + uVar11 * 4);
    if (uVar7 >> 0x10 == 0) {
      if (uVar7 >> 0xb == 0x1b) {
LAB_0091bbec:
        if (param_5 == 0) {
          pbVar9 = pbVar9 + -lVar1;
          uVar5 = 3;
          goto LAB_0091bc40;
        }
        uVar7 = 0xfffd;
      }
      *psVar3 = (short)uVar7;
      psVar3 = psVar3 + 1;
    }
    else {
      if (0x10ffff < uVar7) goto LAB_0091bbec;
      if (param_4 <= psVar3 + 1) goto LAB_0091bc64;
      *psVar3 = (short)(uVar7 - 0x10000 >> 10) + -0x2800;
      psVar3[1] = (ushort)(uVar7 - 0x10000) & 0x3ff | 0xdc00;
      psVar3 = psVar3 + 2;
    }
  } while( true );
}

