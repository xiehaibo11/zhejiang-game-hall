
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
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  
  bVar11 = *param_1;
  bVar12 = param_1[1];
  bVar13 = param_1[2];
  bVar14 = param_1[3];
                    /* try { // try from 009a2850 to 00aa2863 has its CatchHandler @ 009a2a40 */
  uVar18 = (ulong)param_1[4] << 0x18 | (ulong)param_1[5] << 0x10 | (ulong)param_1[6] << 8 |
           (ulong)param_1[7];
  uVar22 = (uint)bVar12;
  if ((bVar14 >> 1 & 1) == 0) {
                    /* try { // try from 009a2864 to 00aa2873 has its CatchHandler @ 009a2a2c */
    uVar5 = bVar11 & 0xf;
                    /* try { // try from 009a2874 to 00aa28a3 has its CatchHandler @ 009a2a54 */
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
                    /* try { // try from 009a28c8 to 00aa28cf has its CatchHandler @ 009a2a10 */
                    /* try { // try from 009a28d0 to 00aa295b has its CatchHandler @ 009a2a54 */
    uVar23 = (uint)(bVar12 >> 5) | uVar22 & 0xfffffff8;
    uVar22 = *(int *)(&DAT_01889d94 + ((ulong)bVar11 & 7) * 4) + (uint)(bVar11 >> 3);
    uVar6 = *(int *)(&DAT_01889d94 + ((ulong)bVar12 & 7) * 4) + (uint)(bVar12 >> 3);
    uVar20 = *(int *)(&DAT_01889d94 + ((ulong)bVar13 & 7) * 4) + (uint)(bVar13 >> 3);
    uVar25 = (uint)(bVar13 >> 5) | (uint)(bVar13 >> 3) << 3;
    uVar5 = uVar22 >> 2 & 7 | (uVar22 & 0x1f) << 3;
    uVar22 = uVar6 >> 2 & 7 | (uVar6 & 0x1f) << 3;
    uVar6 = uVar20 >> 2 & 7 | (uVar20 & 0x1f) << 3;
  }
  uVar17 = (ulong)bVar14 & 1;
  bVar15 = (int)uVar17 == 0;
  uVar19 = 3;
  uVar20 = 1;
  if (bVar15) {
    uVar20 = 2;
  }
  uVar16 = 0;
  if (!bVar15) {
    uVar19 = 1;
  }
  do {
                    /* try { // try from 009a2964 to 00aa2993 has its CatchHandler @ 009a2a30 */
    uVar7 = uVar16 & uVar19;
    uVar8 = (ulong)(uVar16 >> uVar20) << 2;
    iVar10 = *(int *)(&DAT_01889cf8 +
                     (uVar18 >> ((uVar7 | uVar8) + 0xf & 0x3f) & 2 |
                     uVar18 >> ((ulong)uVar7 | uVar8 & 0x3c) & 1) * 4 +
                     ((ulong)(bVar14 >> 1) & 0x70));
    pbVar3 = (byte *)(param_2 + (ulong)(((uVar16 >> uVar20) + uVar7 * 4) * 3));
                    /* try { // try from 009a2994 to 00aa2aab has its CatchHandler @ 009a27d4 */
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
    iVar1 = ((uint)uVar17 >> (ulong)uVar20) + ((uint)lVar24 ^ 2);
    lVar4 = (uVar17 & uVar19) + lVar24;
    uVar8 = (ulong)(uint)(iVar1 * 4) + lVar4;
                    /* catch() { ... } // from try @ 009a28c8 with catch @ 009a2a10 */
    iVar10 = *(int *)(&DAT_01889cf8 +
                     (uVar18 >> (uVar8 + 0xf & 0x3f) & 2 | uVar18 >> (uVar8 & 0x3f) & 1) * 4 +
                     ((ulong)bVar14 & 0x1c) * 4);
                    /* catch() { ... } // from try @ 009a295c with catch @ 009a2a28 */
                    /* catch() { ... } // from try @ 009a2864 with catch @ 009a2a2c */
    pbVar3 = (byte *)(param_2 + (ulong)(uint)((iVar1 + (int)lVar4 * 4) * 3));
                    /* catch() { ... } // from try @ 009a2964 with catch @ 009a2a30 */
    iVar1 = iVar10 + uVar5;
    iVar9 = iVar1;
    if (0xfe < iVar1) {
      iVar9 = -1;
    }
                    /* catch() { ... } // from try @ 009a2850 with catch @ 009a2a40 */
    iVar2 = iVar10 + uVar22;
                    /* catch() { ... } // from try @ 009a2824 with catch @ 009a2a44 */
    iVar10 = iVar10 + uVar6;
    *pbVar3 = (byte)iVar9 & ((byte)(iVar1 >> 0x1f) ^ 0xff);
    iVar1 = iVar2;
    if (0xfe < iVar2) {
      iVar1 = -1;
    }
                    /* catch() { ... } // from try @ 009a2874 with catch @ 009a2a54
                       catch() { ... } // from try @ 009a28d0 with catch @ 009a2a54 */
    uVar23 = (uint)uVar17 + 1;
    uVar17 = (ulong)uVar23;
    iVar9 = iVar10;
    if (0xfe < iVar10) {
      iVar9 = -1;
    }
    pbVar3[1] = (byte)iVar1 & ((byte)(iVar2 >> 0x1f) ^ 0xff);
    pbVar3[2] = (byte)iVar9 & ((byte)(iVar10 >> 0x1f) ^ 0xff);
  } while (uVar23 != 8);
  return;
}

