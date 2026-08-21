
void speex_encode_stereo_int(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  short *psVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  speex_bits_pack(param_3,0xe,5);
  speex_bits_pack(param_3,9,4);
  if ((int)param_2 < 1) {
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    lVar15 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar16 = (ulong)param_2;
    do {
      psVar2 = (short *)(param_1 + lVar15 * 2);
      sVar7 = *psVar2;
      sVar8 = psVar2[1];
      uVar16 = uVar16 - 1;
      uVar17 = uVar17 + ((uint)((int)sVar7 * (int)sVar7) >> 8);
      sVar7 = (short)((int)sVar8 + 1U >> 1) + (sVar7 >> 1);
      *(short *)(param_1 + lVar15) = sVar7;
      uVar18 = uVar18 + ((uint)((int)sVar8 * (int)sVar8) >> 8);
      uVar19 = uVar19 + ((uint)((int)sVar7 * (int)sVar7) >> 8);
      lVar15 = lVar15 + 2;
    } while (uVar16 != 0);
    if (uVar18 < uVar17) {
      speex_bits_pack(param_3,0,1);
      uVar6 = uVar18;
      uVar12 = uVar17;
      goto LAB_001327f4;
    }
  }
  speex_bits_pack(param_3,1,1);
  uVar6 = uVar17;
  uVar12 = uVar18;
LAB_001327f4:
  bVar13 = (uVar12 & 0xffff0000) != 0;
  uVar11 = uVar12 >> 0x10;
  if (!bVar13) {
    uVar11 = uVar12;
  }
  uVar5 = uVar11 >> 8;
  if (uVar11 < 0x100) {
    uVar5 = uVar11;
  }
  uVar3 = (ushort)bVar13 << 4 | 8;
  if (uVar11 < 0x100) {
    uVar3 = (ushort)bVar13 << 4;
  }
  uVar11 = uVar5 >> 4;
  if (uVar5 < 0x10) {
    uVar11 = uVar5;
  }
  uVar4 = uVar3 | 4;
  if (uVar5 < 0x10) {
    uVar4 = uVar3;
  }
  uVar5 = uVar11 >> 2;
  if (uVar11 < 4) {
    uVar5 = uVar11;
  }
  uVar3 = uVar4 | 2;
  if (uVar11 < 4) {
    uVar3 = uVar4;
  }
  if (1 < uVar5) {
    uVar3 = uVar3 + 1;
  }
  uVar11 = (uint)(short)uVar3;
  iVar1 = (int)uVar12 >> (uVar11 - 0x13 & 0x1f);
  if (uVar11 - 0x13 == 0 || uVar11 < 0x13) {
    iVar1 = uVar12 << (ulong)(0x13 - uVar11 & 0x1f);
  }
  iVar10 = (int)uVar6 >> (uVar11 - 0xf & 0x1f);
  if (uVar11 - 0xf == 0 || uVar11 < 0xf) {
    iVar10 = uVar6 << (ulong)(0xf - uVar11 & 0x1f);
  }
  iVar9 = 0;
  if (iVar10 + 1 != 0) {
    iVar9 = iVar1 / (iVar10 + 1);
  }
  if (0x7ffe < iVar9) {
    iVar9 = 0x7fff;
  }
  uVar14 = scal_quant(iVar9,&DAT_001372f6,0x20);
  speex_bits_pack(param_3,uVar14,5);
  bVar13 = uVar19 >> 0x10 != 0;
  uVar6 = uVar19 >> 0x10;
  if (!bVar13) {
    uVar6 = uVar19;
  }
  uVar12 = uVar6 >> 8;
  if (uVar6 < 0x100) {
    uVar12 = uVar6;
  }
  uVar3 = (ushort)bVar13 << 4 | 8;
  if (uVar6 < 0x100) {
    uVar3 = (ushort)bVar13 << 4;
  }
  uVar6 = uVar12 >> 4;
  if (uVar12 < 0x10) {
    uVar6 = uVar12;
  }
  uVar4 = uVar3 | 4;
  if (uVar12 < 0x10) {
    uVar4 = uVar3;
  }
  uVar12 = uVar6 >> 2;
  if (uVar6 < 4) {
    uVar12 = uVar6;
  }
  uVar3 = uVar4 | 2;
  if (uVar6 < 4) {
    uVar3 = uVar4;
  }
  if (1 < uVar12) {
    uVar3 = uVar3 + 1;
  }
  uVar12 = (uint)(short)uVar3;
  uVar6 = uVar19 >> (ulong)(uVar12 - 0x19 & 0x1f);
  if (uVar12 - 0x19 == 0 || uVar12 < 0x19) {
    uVar6 = uVar19 << (ulong)(0x19 - uVar12 & 0x1f);
  }
  uVar11 = uVar12 - 10;
  uVar19 = uVar18 >> (ulong)(uVar11 & 0x1f);
  uVar5 = uVar17 >> (ulong)(uVar11 & 0x1f);
  if (uVar11 == 0 || uVar12 < 10) {
    uVar19 = uVar18 << (ulong)(10 - uVar12 & 0x1f);
    uVar5 = uVar17 << (ulong)(10 - uVar12 & 0x1f);
  }
  iVar1 = uVar19 + uVar5 + 1;
  iVar10 = 0;
  if (iVar1 != 0) {
    iVar10 = (int)uVar6 / iVar1;
  }
  uVar14 = scal_quant(iVar10,&DAT_001372f0,4);
  speex_bits_pack(param_3,uVar14,2);
  return;
}

