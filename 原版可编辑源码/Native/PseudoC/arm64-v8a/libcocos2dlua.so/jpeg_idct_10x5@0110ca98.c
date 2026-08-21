
void jpeg_idct_10x5(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  int local_100 [40];
  
                    /* try { // try from 0110caa4 to 0120cb7f has its CatchHandler @ 0110caa4
                       catch() { ... } // from try @ 0110caa4 with catch @ 0110caa4
                       catch() { ... } // from try @ 0110cb9c with catch @ 0110caa4 */
  lVar25 = *(long *)(param_1 + 0x1b8);
  lVar26 = *(long *)(param_2 + 0x58);
  lVar24 = 0;
  do {
    psVar6 = (short *)(param_3 + lVar24 * 2);
    piVar7 = (int *)(lVar26 + lVar24 * 4);
    lVar8 = (long)piVar7[0x20] * (long)psVar6[0x20] + (long)piVar7[0x10] * (long)psVar6[0x10];
    lVar22 = (long)piVar7[0x10] * (long)psVar6[0x10] - (long)piVar7[0x20] * (long)psVar6[0x20];
    uVar11 = (long)(*piVar7 * (int)*psVar6) << 0xd | 0x400;
    lVar21 = ((long)piVar7[0x18] * (long)psVar6[0x18] + (long)piVar7[8] * (long)psVar6[8]) * 0x1a9a;
    lVar23 = uVar11 + lVar22 * 0xb50;
    lVar27 = lVar21 + (long)piVar7[8] * (long)psVar6[8] * 0x1071;
    lVar21 = lVar21 + (long)piVar7[0x18] * (long)psVar6[0x18] * -0x45a4;
    lVar9 = lVar23 + lVar8 * 0x194c;
    lVar23 = lVar23 + lVar8 * -0x194c;
    lVar8 = lVar24 + 1;
                    /* try { // try from 0110cb80 to 0120cb9b has its CatchHandler @ 0110cbf4 */
    local_100[lVar24] = (int)((ulong)(lVar27 + lVar9) >> 0xb);
    local_100[lVar24 + 0x20] = (int)((ulong)(lVar9 - lVar27) >> 0xb);
    local_100[lVar24 + 8] = (int)((ulong)(lVar21 + lVar23) >> 0xb);
    local_100[lVar24 + 0x18] = (int)((ulong)(lVar23 - lVar21) >> 0xb);
                    /* try { // try from 0110cb9c to 0120cc2f has its CatchHandler @ 0110caa4 */
    local_100[lVar24 + 0x10] = (int)(uVar11 + lVar22 * -0x2d40 >> 0xb);
    lVar24 = lVar8;
  } while ((int)lVar8 != 8);
  lVar24 = 0;
  lVar25 = lVar25 + -0x180;
  do {
    iVar13 = local_100[lVar24 + 1];
    iVar12 = local_100[lVar24 + 4];
    iVar14 = local_100[lVar24 + 5];
                    /* catch() { ... } // from try @ 0110cb80 with catch @ 0110cbf4 */
    puVar10 = (undefined1 *)(*(long *)(param_4 + lVar24) + (param_5 & 0xffffffff));
    iVar1 = local_100[lVar24] * 0x2000 + 0x8020000;
    iVar29 = local_100[lVar24 + 7] + local_100[lVar24 + 3];
    iVar20 = local_100[lVar24 + 3] - local_100[lVar24 + 7];
    iVar16 = iVar1 + iVar12 * 0x249d;
    iVar17 = iVar1 + iVar12 * -0xdfc;
    iVar15 = iVar14 * 0x2000;
    iVar28 = (local_100[lVar24 + 6] + local_100[lVar24 + 2]) * 0x1a9a;
    iVar18 = iVar28 + local_100[lVar24 + 2] * 0x1071;
    iVar28 = iVar28 + local_100[lVar24 + 6] * -0x45a4;
    iVar2 = iVar20 * 0x9e3 + iVar15;
    iVar3 = iVar18 + iVar16;
    iVar4 = iVar29 * 0x1e6f + iVar13 * 0x2cb3 + iVar2;
    *puVar10 = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar4 + iVar3) >> 0x12) & 0x3ff));
    iVar15 = iVar15 + iVar20 * -0x19e3;
    iVar5 = iVar28 + iVar17;
    iVar19 = (iVar29 * -0x12cf + iVar13 * 0x2853) - iVar15;
    puVar10[9] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar3 - iVar4) >> 0x12) & 0x3ff));
    iVar1 = iVar1 + iVar12 * -0x2d42;
    puVar10[1] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar19 + iVar5) >> 0x12) & 0x3ff));
    iVar3 = (iVar13 - iVar20) * 0x2000 + iVar14 * -0x2000;
    puVar10[8] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar5 - iVar19) >> 0x12) & 0x3ff));
    iVar15 = iVar15 + iVar29 * -0x12cf + iVar13 * 0x148c;
    puVar10[2] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar3 + iVar1) >> 0x12) & 0x3ff));
    iVar17 = iVar17 - iVar28;
    iVar16 = iVar16 - iVar18;
    puVar10[7] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar1 - iVar3) >> 0x12) & 0x3ff));
                    /* try { // try from 0110ccf8 to 0120cdc7 has its CatchHandler @ 0110ccf8
                       catch() { ... } // from try @ 0110ccf8 with catch @ 0110ccf8
                       catch() { ... } // from try @ 0110cde8 with catch @ 0110ccf8 */
    iVar2 = iVar29 * -0x1e6f + iVar13 * 0x714 + iVar2;
    puVar10[3] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar15 + iVar17) >> 0x12) & 0x3ff));
    lVar24 = lVar24 + 8;
    puVar10[6] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar17 - iVar15) >> 0x12) & 0x3ff));
    puVar10[4] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar2 + iVar16) >> 0x12) & 0x3ff));
    puVar10[5] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar16 - iVar2) >> 0x12) & 0x3ff));
  } while (lVar24 != 0x28);
  return;
}

