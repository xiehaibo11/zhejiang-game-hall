
void highpass(short *param_1,undefined2 *param_2,uint param_3,int param_4,int *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  
  if (3 < param_4) {
    param_4 = 4;
  }
  if (0 < (int)param_3) {
    lVar13 = (long)param_4 * 6;
    sVar3 = *(short *)(&DAT_00134b22 + lVar13);
    sVar4 = *(short *)(&DAT_00134b24 + lVar13);
    iVar11 = *param_5;
    iVar14 = param_5[1];
    sVar5 = *(short *)(&DAT_00134b3e + lVar13);
    sVar6 = *(short *)(&UNK_00134b40 + lVar13);
    sVar7 = *(short *)(&UNK_00134b42 + lVar13);
    uVar12 = (ulong)param_3;
    do {
      sVar8 = *param_1;
      uVar9 = iVar11 + (int)sVar8 * (int)sVar5;
      iVar10 = (int)(uVar9 * 2) >> 0x10;
      uVar1 = 0x8001;
      if (-0x1fffe001 < (int)uVar9) {
        uVar1 = (short)(uVar9 + 0x2000 >> 0xe);
      }
      uVar2 = 0x7fff;
      if ((int)uVar9 < 0x1fffe000) {
        uVar2 = uVar1;
      }
      iVar11 = iVar14 + (int)sVar6 * (int)sVar8 +
               (iVar10 * -sVar3 + ((int)((uVar9 & 0x7fff) * (int)-sVar3) >> 0xf)) * 2;
      iVar14 = (int)sVar7 * (int)sVar8 +
               (iVar10 * -sVar4 + ((int)((uVar9 & 0x7fff) * (int)-sVar4) >> 0xf)) * 2;
      uVar12 = uVar12 - 1;
      *param_2 = uVar2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (uVar12 != 0);
    *param_5 = iVar11;
    param_5[1] = iVar14;
  }
  return;
}

