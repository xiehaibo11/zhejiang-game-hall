
void etc1_decode_block(byte *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  bool bVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  
  bVar11 = *param_1;
  bVar12 = param_1[1];
  bVar13 = param_1[2];
  bVar14 = param_1[3];
  uVar18 = (ulong)param_1[4] << 0x18 | (ulong)param_1[5] << 0x10 | (ulong)param_1[6] << 8 |
           (ulong)param_1[7];
  uVar22 = (uint)bVar12;
  if ((bVar14 >> 1 & 1) == 0) {
    uVar5 = bVar11 & 0xf;
    uVar6 = bVar13 & 0xf;
    uVar21 = bVar11 & 0xf0 | (uint)(bVar11 >> 4);
    uVar5 = uVar5 | uVar5 << 4;
    uVar23 = uVar22 & 0xf0 | (uint)(bVar12 >> 4);
    uVar22 = uVar22 & 0xf | (uVar22 & 0xf) << 4;
    uVar25 = bVar13 & 0xf0 | (uint)(bVar13 >> 4);
    uVar6 = uVar6 | uVar6 << 4;
  }
  else {
    uVar21 = bVar11 & 0xf8 | (uint)(bVar11 >> 5);
    uVar23 = (uint)(bVar12 >> 5) | uVar22 & 0xfffffff8;
    uVar22 = *(int *)(&DAT_0144c474 + ((ulong)bVar11 & 7) * 4) + (uint)(bVar11 >> 3);
    uVar6 = *(int *)(&DAT_0144c474 + ((ulong)bVar12 & 7) * 4) + (uint)(bVar12 >> 3);
    uVar16 = *(int *)(&DAT_0144c474 + ((ulong)bVar13 & 7) * 4) + (uint)(bVar13 >> 3);
    uVar25 = (uint)(bVar13 >> 5) | (uint)(bVar13 >> 3) << 3;
    uVar5 = uVar22 >> 2 & 7 | (uVar22 & 0x1f) << 3;
    uVar22 = uVar6 >> 2 & 7 | (uVar6 & 0x1f) << 3;
    uVar6 = uVar16 >> 2 & 7 | (uVar16 & 0x1f) << 3;
  }
  uVar17 = (ulong)bVar14 & 1;
  bVar15 = (int)uVar17 != 0;
  uVar16 = 0;
  uVar19 = 3;
  if (bVar15) {
    uVar19 = 1;
  }
  iVar20 = 1;
  if (!bVar15) {
    iVar20 = 2;
  }
  do {
    uVar7 = uVar16 & uVar19;
    uVar8 = (ulong)(uVar16 >> iVar20) << 2;
    iVar10 = *(int *)(&DAT_0144c3d8 +
                     (uVar18 >> ((uVar7 | uVar8) + 0xf & 0x3f) & 2 |
                     uVar18 >> ((ulong)uVar7 | uVar8 & 0x3c) & 1) * 4 +
                     ((ulong)(bVar14 >> 1) & 0x70));
    pbVar3 = (byte *)(param_2 + (ulong)(((uVar16 >> iVar20) + uVar7 * 4) * 3));
    uVar16 = uVar16 + 1;
    iVar1 = iVar10 + uVar21;
    iVar9 = iVar1;
    if (0xfe < iVar1) {
      iVar9 = -1;
    }
    iVar2 = iVar10 + uVar23;
    iVar10 = iVar10 + uVar25;
    *pbVar3 = (byte)iVar9 & ((byte)(iVar1 >> 0x1f) ^ 0xff);
    iVar1 = iVar2;
    if (0xfe < iVar2) {
      iVar1 = -1;
    }
    iVar9 = iVar10;
    if (0xfe < iVar10) {
      iVar9 = -1;
    }
    pbVar3[1] = (byte)iVar1 & ((byte)(iVar2 >> 0x1f) ^ 0xff);
    pbVar3[2] = (byte)iVar9 & ((byte)(iVar10 >> 0x1f) ^ 0xff);
  } while (uVar16 != 8);
  lVar24 = uVar17 * 2;
  uVar17 = 0;
  do {
    iVar1 = ((uint)uVar17 >> iVar20) + ((uint)lVar24 ^ 2);
    lVar4 = (uVar17 & uVar19) + lVar24;
    uVar8 = (ulong)(uint)(iVar1 * 4) + lVar4;
                    /* try { // try from 00fcaf10 to 010caf47 has its CatchHandler @ 00fcaf10
                       catch() { ... } // from try @ 00fcaf10 with catch @ 00fcaf10
                       catch() { ... } // from try @ 00fcaf60 with catch @ 00fcaf10 */
    iVar10 = *(int *)(&DAT_0144c3d8 +
                     (uVar18 >> (uVar8 + 0xf & 0x3f) & 2 | uVar18 >> (uVar8 & 0x3f) & 1) * 4 +
                     ((ulong)bVar14 & 0x1c) * 4);
    pbVar3 = (byte *)(param_2 + (ulong)(uint)((iVar1 + (int)lVar4 * 4) * 3));
    iVar1 = iVar10 + uVar5;
    iVar9 = iVar1;
    if (0xfe < iVar1) {
      iVar9 = -1;
    }
    iVar2 = iVar10 + uVar22;
    iVar10 = iVar10 + uVar6;
    *pbVar3 = (byte)iVar9 & ((byte)(iVar1 >> 0x1f) ^ 0xff);
    iVar1 = iVar2;
    if (0xfe < iVar2) {
      iVar1 = -1;
    }
                    /* try { // try from 00fcaf48 to 010caf5f has its CatchHandler @ 00fcaf70 */
    uVar16 = (uint)uVar17 + 1;
    uVar17 = (ulong)uVar16;
    iVar9 = iVar10;
    if (0xfe < iVar10) {
      iVar9 = -1;
    }
    pbVar3[1] = (byte)iVar1 & ((byte)(iVar2 >> 0x1f) ^ 0xff);
                    /* try { // try from 00fcaf60 to 010caf83 has its CatchHandler @ 00fcaf10 */
    pbVar3[2] = (byte)iVar9 & ((byte)(iVar10 >> 0x1f) ^ 0xff);
  } while (uVar16 != 8);
  return;
}

