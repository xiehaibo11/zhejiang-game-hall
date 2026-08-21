
void speex_decode_stereo_int(long param_1,int param_2,uint *param_3)

{
  undefined2 *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  if (param_3[4] == 0xdeadbeef) {
    uVar8 = *param_3;
    iVar12 = (int)(short)param_3[1];
  }
  else {
    param_3[4] = 0xdeadbeef;
    param_3[5] = 0;
    uVar8 = 0x10000;
    iVar12 = 0x4000;
    param_3[2] = 0x4000;
    param_3[3] = 0x4000;
    param_3[0] = 0x10000;
    param_3[1] = 0x4000;
  }
  uVar11 = iVar12 * ((int)((uVar8 + 0x10000) * 2) >> 0x10) +
           ((int)(iVar12 * (uVar8 + 0x10000 & 0x7fff)) >> 0xf);
  bVar7 = uVar11 >> 0x10 != 0;
  uVar10 = uVar11 >> 0x10;
  if (!bVar7) {
    uVar10 = uVar11;
  }
  uVar4 = uVar10 >> 8;
  if (uVar10 < 0x100) {
    uVar4 = uVar10;
  }
  uVar13 = (uint)bVar7 << 3 | 4;
  if (uVar10 < 0x100) {
    uVar13 = (uint)bVar7 << 3;
  }
  uVar10 = uVar4 >> 4;
  if (uVar4 < 0x10) {
    uVar10 = uVar4;
  }
  uVar5 = uVar13 | 2;
  if (uVar4 < 0x10) {
    uVar5 = uVar13;
  }
  uVar5 = uVar5 | 3 < uVar10;
  sVar2 = (short)((int)uVar11 >> (uVar5 * 2 - 0xc & 0x1f));
  if ((ushort)uVar5 < 7) {
    sVar2 = (short)(uVar11 << (ulong)(uVar5 * -2 + 0xc & 0x1f));
  }
  iVar12 = (int)sVar2;
  uVar5 = 0xd - uVar5;
  iVar12 = (int)((((int)(((iVar12 * 0x41b0 + -0x31530000 >> 0x10) * iVar12 * 4 & 0xffff0000U) +
                        0x52b50000) >> 0x10) * iVar12 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
  uVar11 = uVar8 >> 0x10;
  sVar2 = (short)(iVar12 >> (uVar5 & 0x1f));
  if ((int)uVar5 < 1) {
    sVar2 = (short)(iVar12 << (ulong)(-uVar5 & 0x1f));
  }
  uVar10 = uVar11;
  if (uVar11 == 0) {
    uVar10 = uVar8;
  }
  uVar13 = (uint)(uVar11 != 0);
  uVar11 = uVar13 << 3 | 4;
  uVar4 = uVar10 >> 8;
  if (uVar10 < 0x100) {
    uVar11 = uVar13 << 3;
    uVar4 = uVar10;
  }
  uVar10 = uVar11 | 2;
  uVar13 = uVar4 >> 4;
  if (uVar4 < 0x10) {
    uVar10 = uVar11;
    uVar13 = uVar4;
  }
  uVar10 = uVar10 | 3 < uVar13;
  sVar3 = (short)((int)uVar8 >> (uVar10 * 2 - 0xc & 0x1f));
  if ((ushort)uVar10 < 7) {
    sVar3 = (short)(uVar8 << (ulong)(uVar10 * -2 + 0xc & 0x1f));
  }
  if (0 < param_2) {
    iVar14 = (int)sVar3;
    uVar10 = 0xd - uVar10;
    iVar12 = 0;
    if (sVar2 != 0) {
      iVar12 = 0x400000 / (int)sVar2;
    }
    iVar14 = (int)((((int)(((iVar14 * 0x41b0 + -0x31530000 >> 0x10) * iVar14 * 4 & 0xffff0000U) +
                          0x52b50000) >> 0x10) * iVar14 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
    uVar8 = param_2 * 2 - 2;
    sVar2 = (short)(iVar14 >> (uVar10 & 0x1f));
    if ((int)uVar10 < 1) {
      sVar2 = (short)(iVar14 << (ulong)(-uVar10 & 0x1f));
    }
    uVar11 = param_3[2];
    uVar10 = param_3[3];
    uVar9 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1;
    lVar6 = (long)param_2;
    do {
      uVar11 = ((((iVar12 << 0x10) >> 8) * (int)sVar2 >> 0x10) * 0x28f + (short)uVar11 * 0x7d71) * 2
               + 0x8000 >> 0x10;
      uVar10 = (((iVar12 << 0x10) >> 0x10) * 0x28f + (short)uVar10 * 0x7d71) * 2 + 0x8000 >> 0x10;
      iVar14 = (int)*(short *)(param_1 + (lVar6 + -1) * 2);
      puVar1 = (undefined2 *)(param_1 + uVar9);
      uVar9 = uVar9 - 4;
      *puVar1 = (short)(uVar11 * iVar14 + 0x2000 >> 0xe);
      puVar1[1] = (short)(uVar10 * iVar14 + 0x2000 >> 0xe);
      bVar7 = 1 < lVar6;
      lVar6 = lVar6 + -1;
    } while (bVar7);
    param_3[2] = uVar11;
    param_3[3] = uVar10;
  }
  return;
}

