
void jpeg_idct_8x4(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  short *psVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_e0 [32];
  
  lVar19 = *(long *)(param_1 + 0x1b8);
  lVar20 = *(long *)(param_2 + 0x58);
  lVar18 = 0;
  do {
    psVar2 = (short *)(param_3 + lVar18 * 2);
    piVar3 = (int *)(lVar20 + lVar18 * 4);
    lVar1 = lVar18 + 1;
                    /* try { // try from 0110cdc8 to 0120cde7 has its CatchHandler @ 0110ce40 */
                    /* try { // try from 0110cde8 to 0120ce7b has its CatchHandler @ 0110ccf8 */
    lVar17 = ((long)piVar3[0x18] * (long)psVar2[0x18] + (long)piVar3[8] * (long)psVar2[8]) * 0x1151
             + 0x400;
    iVar8 = (piVar3[0x10] * (int)psVar2[0x10] + *piVar3 * (int)*psVar2) * 4;
    iVar9 = (*piVar3 * (int)*psVar2 - piVar3[0x10] * (int)psVar2[0x10]) * 4;
    iVar16 = (int)((ulong)(lVar17 + (long)piVar3[8] * (long)psVar2[8] * 0x187e) >> 0xb);
    iVar21 = (int)((ulong)(lVar17 + (long)piVar3[0x18] * (long)psVar2[0x18] * -0x3b21) >> 0xb);
    local_e0[lVar18] = iVar16 + iVar8;
    local_e0[lVar18 + 0x18] = iVar8 - iVar16;
    local_e0[lVar18 + 8] = iVar21 + iVar9;
    local_e0[lVar18 + 0x10] = iVar9 - iVar21;
    lVar18 = lVar1;
  } while ((int)lVar1 != 8);
  lVar18 = 0;
  lVar19 = lVar19 + -0x180;
                    /* catch() { ... } // from try @ 0110cdc8 with catch @ 0110ce40 */
  do {
    iVar5 = local_e0[lVar18 + 7];
    iVar16 = local_e0[lVar18 + 4];
    iVar6 = local_e0[lVar18 + 5];
    iVar7 = local_e0[lVar18 + 3];
    iVar21 = local_e0[lVar18];
    iVar9 = local_e0[lVar18 + 1];
    iVar22 = (local_e0[lVar18 + 6] + local_e0[lVar18 + 2]) * 0x1151;
    iVar14 = (iVar9 + iVar5) * -0x1ccd;
    iVar12 = iVar22 + local_e0[lVar18 + 2] * 0x187e;
    iVar22 = iVar22 + local_e0[lVar18 + 6] * -0x3b21;
    iVar23 = (iVar9 + iVar6 + iVar7 + iVar5) * 0x25a1;
    iVar10 = (iVar21 + 0x4010 + iVar16) * 0x2000;
    iVar13 = iVar23 + (iVar9 + iVar6) * -0xc7c;
    iVar8 = iVar12 + iVar10;
    iVar9 = iVar14 + iVar9 * 0x300b + iVar13;
    puVar4 = (undefined1 *)(*(long *)(param_4 + lVar18) + (param_5 & 0xffffffff));
    *puVar4 = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar9 + iVar8) >> 0x12) & 0x3ff));
    iVar15 = (iVar7 + iVar6) * -0x5203;
    iVar11 = ((iVar21 + 0x4010) - iVar16) * 0x2000;
    iVar23 = iVar23 + (iVar7 + iVar5) * -0x3ec5;
    iVar16 = iVar22 + iVar11;
    iVar21 = iVar15 + iVar7 * 0x6254 + iVar23;
    puVar4[7] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar8 - iVar9) >> 0x12) & 0x3ff));
    iVar11 = iVar11 - iVar22;
    puVar4[1] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar21 + iVar16) >> 0x12) & 0x3ff));
    iVar13 = iVar15 + iVar6 * 0x41b3 + iVar13;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110cfa4 with catch @ 0110cf3c
                        */
    puVar4[6] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar16 - iVar21) >> 0x12) & 0x3ff));
    iVar10 = iVar10 - iVar12;
    puVar4[2] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar13 + iVar11) >> 0x12) & 0x3ff));
                    /* try { // try from 0110cf60 to 0120cf7b has its CatchHandler @ 0110cf8c */
    iVar23 = iVar14 + iVar5 * 0x98e + iVar23;
    puVar4[5] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar11 - iVar13) >> 0x12) & 0x3ff));
    lVar18 = lVar18 + 8;
    puVar4[3] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar23 + iVar10) >> 0x12) & 0x3ff));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110cf60 with catch @ 0110cf8c
                        */
    puVar4[4] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar10 - iVar23) >> 0x12) & 0x3ff));
  } while (lVar18 != 0x20);
                    /* try { // try from 0110cfa0 to 0120cfa3 has its CatchHandler @ 0110cfd0 */
                    /* try { // try from 0110cfa4 to 0120cfe3 has its CatchHandler @ 0110cf3c */
  return;
}

