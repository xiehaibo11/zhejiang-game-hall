
void speex_decode_stereo(long param_1,int param_2,uint *param_3)

{
  float *pfVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  if (param_3[4] == 0xdeadbeef) {
    uVar7 = *param_3;
    iVar10 = (int)(short)param_3[1];
  }
  else {
    param_3[4] = 0xdeadbeef;
    param_3[5] = 0;
    uVar7 = 0x10000;
    iVar10 = 0x4000;
    param_3[2] = 0x4000;
    param_3[3] = 0x4000;
    param_3[0] = 0x10000;
    param_3[1] = 0x4000;
  }
  uVar11 = iVar10 * ((int)((uVar7 + 0x10000) * 2) >> 0x10) +
           ((int)(iVar10 * (uVar7 + 0x10000 & 0x7fff)) >> 0xf);
  bVar6 = uVar11 >> 0x10 != 0;
  uVar12 = uVar11 >> 0x10;
  if (!bVar6) {
    uVar12 = uVar11;
  }
  uVar4 = uVar12 >> 8;
  if (uVar12 < 0x100) {
    uVar4 = uVar12;
  }
  uVar13 = (uint)bVar6 << 3 | 4;
  if (uVar12 < 0x100) {
    uVar13 = (uint)bVar6 << 3;
  }
  uVar12 = uVar4 >> 4;
  if (uVar4 < 0x10) {
    uVar12 = uVar4;
  }
  uVar5 = uVar13 | 2;
  if (uVar4 < 0x10) {
    uVar5 = uVar13;
  }
  uVar5 = uVar5 | 3 < uVar12;
  sVar2 = (short)((int)uVar11 >> (uVar5 * 2 - 0xc & 0x1f));
  if ((ushort)uVar5 < 7) {
    sVar2 = (short)(uVar11 << (ulong)(uVar5 * -2 + 0xc & 0x1f));
  }
  iVar10 = (int)sVar2;
  uVar5 = 0xd - uVar5;
  iVar10 = (int)((((int)(((iVar10 * 0x41b0 + -0x31530000 >> 0x10) * iVar10 * 4 & 0xffff0000U) +
                        0x52b50000) >> 0x10) * iVar10 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
  uVar11 = uVar7 >> 0x10;
  sVar2 = (short)(iVar10 >> (uVar5 & 0x1f));
  if ((int)uVar5 < 1) {
    sVar2 = (short)(iVar10 << (ulong)(-uVar5 & 0x1f));
  }
  uVar12 = uVar11;
  if (uVar11 == 0) {
    uVar12 = uVar7;
  }
  uVar13 = (uint)(uVar11 != 0);
  uVar11 = uVar13 << 3 | 4;
  uVar4 = uVar12 >> 8;
  if (uVar12 < 0x100) {
    uVar11 = uVar13 << 3;
    uVar4 = uVar12;
  }
  uVar12 = uVar11 | 2;
  uVar13 = uVar4 >> 4;
  if (uVar4 < 0x10) {
    uVar12 = uVar11;
    uVar13 = uVar4;
  }
  uVar12 = uVar12 | 3 < uVar13;
  sVar3 = (short)((int)uVar7 >> (uVar12 * 2 - 0xc & 0x1f));
  if ((ushort)uVar12 < 7) {
    sVar3 = (short)(uVar7 << (ulong)(uVar12 * -2 + 0xc & 0x1f));
  }
  if (0 < param_2) {
    iVar14 = (int)sVar3;
    uVar12 = 0xd - uVar12;
    iVar10 = 0;
    if (sVar2 != 0) {
      iVar10 = 0x400000 / (int)sVar2;
    }
    iVar14 = (int)((((int)(((iVar14 * 0x41b0 + -0x31530000 >> 0x10) * iVar14 * 4 & 0xffff0000U) +
                          0x52b50000) >> 0x10) * iVar14 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
    uVar7 = param_2 * 2 - 2;
    sVar2 = (short)(iVar14 >> (uVar12 & 0x1f));
    if ((int)uVar12 < 1) {
      sVar2 = (short)(iVar14 << (ulong)(-uVar12 & 0x1f));
    }
    uVar11 = param_3[2];
    uVar12 = param_3[3];
    uVar8 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
    lVar9 = (long)param_2;
    do {
      iVar14 = (int)*(float *)(param_1 + (lVar9 + -1) * 4);
      uVar11 = ((((iVar10 << 0x10) >> 8) * (int)sVar2 >> 0x10) * 0x28f + (short)uVar11 * 0x7d71) * 2
               + 0x8000 >> 0x10;
      uVar12 = (((iVar10 << 0x10) >> 0x10) * 0x28f + (short)uVar12 * 0x7d71) * 2 + 0x8000 >> 0x10;
      pfVar1 = (float *)(param_1 + uVar8);
      uVar8 = uVar8 - 8;
      *pfVar1 = (float)((int)(uVar11 * iVar14 + 0x2000) >> 0xe);
      pfVar1[1] = (float)((int)(uVar12 * iVar14 + 0x2000) >> 0xe);
      bVar6 = 1 < lVar9;
      lVar9 = lVar9 + -1;
    } while (bVar6);
    param_3[2] = uVar11;
    param_3[3] = uVar12;
  }
  return;
}

