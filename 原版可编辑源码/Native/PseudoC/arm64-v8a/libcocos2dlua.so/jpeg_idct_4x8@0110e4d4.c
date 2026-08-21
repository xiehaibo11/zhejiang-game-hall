
void jpeg_idct_4x8(long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  short sVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int local_e0 [4];
  int local_d0 [4];
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  
  piVar8 = local_e0;
  lVar5 = *(long *)(param_1 + 0x1b8);
  piVar6 = *(int **)(param_2 + 0x58);
  psVar9 = (short *)(param_3 + 0x40);
  iVar10 = 5;
  do {
    sVar13 = psVar9[-0x10];
    if (psVar9[-0x18] == 0 && sVar13 == 0) {
      if ((((psVar9[-8] != 0) || (*psVar9 != 0)) || (psVar9[8] != 0)) ||
         ((psVar9[0x10] != 0 || (psVar9[0x18] != 0)))) {
        sVar13 = 0;
        goto LAB_0110e5ac;
      }
      iVar11 = (int)psVar9[-0x20] * *piVar6 * 4;
      *piVar8 = iVar11;
      piVar8[4] = iVar11;
      piVar8[8] = iVar11;
      piVar8[0xc] = iVar11;
      piVar8[0x10] = iVar11;
      piVar8[0x14] = iVar11;
                    /* try { // try from 0110e560 to 0120e5c3 has its CatchHandler @ 0110e720 */
      piVar8[0x18] = iVar11;
      lVar12 = 0x1c;
    }
    else {
LAB_0110e5ac:
      lVar23 = (long)piVar6[0x38] * (long)psVar9[0x18];
      lVar16 = (long)piVar6[0x28] * (long)psVar9[8];
                    /* try { // try from 0110e600 to 0120e607 has its CatchHandler @ 0110e71c */
      lVar19 = (long)piVar6[0x18] * (long)psVar9[-8];
      lVar12 = (long)piVar6[8] * (long)psVar9[-0x18];
      uVar7 = (long)(*piVar6 * (int)psVar9[-0x20]) << 0xd | 0x400;
      lVar22 = ((long)piVar6[0x30] * (long)psVar9[0x10] + (long)piVar6[0x10] * (long)sVar13) *
               0x1151;
      lVar14 = lVar22 + (long)piVar6[0x10] * (long)sVar13 * 0x187e;
      lVar22 = lVar22 + (long)piVar6[0x30] * (long)psVar9[0x10] * -0x3b21;
      lVar15 = (ulong)(uint)(piVar6[0x20] * (int)*psVar9) * 0x2000 + uVar7;
      lVar17 = uVar7 + (ulong)(uint)(piVar6[0x20] * (int)*psVar9) * -0x2000;
      lVar20 = (lVar12 + lVar23) * -0x1ccd;
      lVar21 = (lVar19 + lVar16) * -0x5203;
      lVar1 = lVar15 + lVar14;
      lVar15 = lVar15 - lVar14;
      lVar14 = lVar17 + lVar22;
                    /* try { // try from 0110e664 to 0120e66b has its CatchHandler @ 0110e718 */
      lVar17 = lVar17 - lVar22;
      lVar18 = (lVar12 + lVar16 + lVar19 + lVar23) * 0x25a1;
      lVar24 = lVar18 + (lVar19 + lVar23) * -0x3ec5;
      lVar18 = lVar18 + (lVar12 + lVar16) * -0xc7c;
      lVar22 = lVar20 + lVar23 * 0x98e + lVar24;
      lVar20 = lVar20 + lVar12 * 0x300b + lVar18;
      lVar18 = lVar21 + lVar16 * 0x41b3 + lVar18;
                    /* try { // try from 0110e684 to 0120e68b has its CatchHandler @ 0110e724 */
      lVar24 = lVar21 + lVar19 * 0x6254 + lVar24;
                    /* try { // try from 0110e6b0 to 0120e6df has its CatchHandler @ 0110e720 */
      iVar11 = (int)((ulong)(lVar15 - lVar22) >> 0xb);
      lVar12 = 0x10;
      *piVar8 = (int)((ulong)(lVar20 + lVar1) >> 0xb);
      piVar8[0x1c] = (int)((ulong)(lVar1 - lVar20) >> 0xb);
      piVar8[4] = (int)((ulong)(lVar24 + lVar14) >> 0xb);
      piVar8[0x18] = (int)((ulong)(lVar14 - lVar24) >> 0xb);
      piVar8[8] = (int)((ulong)(lVar18 + lVar17) >> 0xb);
                    /* try { // try from 0110e6e0 to 0120e737 has its CatchHandler @ 0110e4d0 */
      piVar8[0x14] = (int)((ulong)(lVar17 - lVar18) >> 0xb);
      piVar8[0xc] = (int)((ulong)(lVar22 + lVar15) >> 0xb);
    }
    iVar10 = iVar10 + -1;
    piVar8[lVar12] = iVar11;
    piVar8 = piVar8 + 1;
    piVar6 = piVar6 + 1;
    psVar9 = psVar9 + 1;
    if (iVar10 < 2) {
                    /* catch() { ... } // from try @ 0110e664 with catch @ 0110e718 */
                    /* catch() { ... } // from try @ 0110e600 with catch @ 0110e71c */
                    /* catch() { ... } // from try @ 0110e560 with catch @ 0110e720
                       catch() { ... } // from try @ 0110e6b0 with catch @ 0110e720 */
                    /* catch() { ... } // from try @ 0110e684 with catch @ 0110e724 */
      iVar4 = (local_e0[3] + local_e0[1]) * 0x1151;
      iVar3 = iVar4 + local_e0[1] * 0x187e;
      iVar4 = iVar4 + local_e0[3] * -0x3b21;
                    /* try { // try from 0110e738 to 0120e7db has its CatchHandler @ 0110e738
                       catch() { ... } // from try @ 0110e738 with catch @ 0110e738
                       catch() { ... } // from try @ 0110e84c with catch @ 0110e738 */
      iVar10 = (local_e0[0] + 0x4010 + local_e0[2]) * 0x2000;
      lVar5 = lVar5 + -0x180;
      uVar7 = (ulong)param_5;
      puVar2 = (undefined1 *)(*param_4 + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_e0[0] + 0x4010) - local_e0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_d0[3] + local_d0[1]) * 0x1151;
      iVar3 = iVar4 + local_d0[1] * 0x187e;
      iVar4 = iVar4 + local_d0[3] * -0x3b21;
      iVar10 = (local_d0[0] + 0x4010 + local_d0[2]) * 0x2000;
      puVar2 = (undefined1 *)(param_4[1] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
                    /* try { // try from 0110e7dc to 0120e7e7 has its CatchHandler @ 0110e8a0 */
      iVar11 = ((local_d0[0] + 0x4010) - local_d0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
                    /* try { // try from 0110e7fc to 0120e813 has its CatchHandler @ 0110e898 */
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
                    /* try { // try from 0110e81c to 0120e823 has its CatchHandler @ 0110e89c */
      iVar4 = (local_c0[3] + local_c0[1]) * 0x1151;
      iVar3 = iVar4 + local_c0[1] * 0x187e;
      iVar4 = iVar4 + local_c0[3] * -0x3b21;
      iVar10 = (local_c0[0] + 0x4010 + local_c0[2]) * 0x2000;
                    /* try { // try from 0110e834 to 0120e84b has its CatchHandler @ 0110e8a4 */
      puVar2 = (undefined1 *)(param_4[2] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
                    /* try { // try from 0110e84c to 0120e8b7 has its CatchHandler @ 0110e738 */
      iVar11 = ((local_c0[0] + 0x4010) - local_c0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_b0[3] + local_b0[1]) * 0x1151;
                    /* catch() { ... } // from try @ 0110e7fc with catch @ 0110e898 */
      iVar3 = iVar4 + local_b0[1] * 0x187e;
                    /* catch() { ... } // from try @ 0110e81c with catch @ 0110e89c */
      iVar4 = iVar4 + local_b0[3] * -0x3b21;
                    /* catch() { ... } // from try @ 0110e7dc with catch @ 0110e8a0 */
      iVar10 = (local_b0[0] + 0x4010 + local_b0[2]) * 0x2000;
                    /* catch() { ... } // from try @ 0110e834 with catch @ 0110e8a4 */
      puVar2 = (undefined1 *)(param_4[3] + uVar7);
                    /* try { // try from 0110e8b8 to 0120e90f has its CatchHandler @ 0110e8b8
                       catch() { ... } // from try @ 0110e8b8 with catch @ 0110e8b8
                       catch() { ... } // from try @ 0110e978 with catch @ 0110e8b8 */
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_b0[0] + 0x4010) - local_b0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_a0[3] + local_a0[1]) * 0x1151;
      iVar3 = iVar4 + local_a0[1] * 0x187e;
                    /* try { // try from 0110e910 to 0120e91b has its CatchHandler @ 0110e9c8 */
      iVar4 = iVar4 + local_a0[3] * -0x3b21;
      iVar10 = (local_a0[0] + 0x4010 + local_a0[2]) * 0x2000;
                    /* try { // try from 0110e924 to 0120e92b has its CatchHandler @ 0110e9c4 */
      puVar2 = (undefined1 *)(param_4[4] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
                    /* try { // try from 0110e938 to 0120e943 has its CatchHandler @ 0110e9bc */
      iVar11 = ((local_a0[0] + 0x4010) - local_a0[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
                    /* try { // try from 0110e94c to 0120e953 has its CatchHandler @ 0110e9c0 */
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
                    /* try { // try from 0110e968 to 0120e977 has its CatchHandler @ 0110e9cc */
                    /* try { // try from 0110e978 to 0120e9df has its CatchHandler @ 0110e8b8 */
      iVar4 = (local_90[3] + local_90[1]) * 0x1151;
      iVar3 = iVar4 + local_90[1] * 0x187e;
      iVar4 = iVar4 + local_90[3] * -0x3b21;
      iVar10 = (local_90[0] + 0x4010 + local_90[2]) * 0x2000;
      puVar2 = (undefined1 *)(param_4[5] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_90[0] + 0x4010) - local_90[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
                    /* catch() { ... } // from try @ 0110e938 with catch @ 0110e9bc */
                    /* catch() { ... } // from try @ 0110e94c with catch @ 0110e9c0 */
                    /* catch() { ... } // from try @ 0110e924 with catch @ 0110e9c4 */
                    /* catch() { ... } // from try @ 0110e910 with catch @ 0110e9c8 */
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
                    /* catch() { ... } // from try @ 0110e968 with catch @ 0110e9cc */
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      iVar4 = (local_80[3] + local_80[1]) * 0x1151;
      iVar3 = iVar4 + local_80[1] * 0x187e;
      iVar4 = iVar4 + local_80[3] * -0x3b21;
      iVar10 = (local_80[0] + 0x4010 + local_80[2]) * 0x2000;
      puVar2 = (undefined1 *)(param_4[6] + uVar7);
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_80[0] + 0x4010) - local_80[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      puVar2 = (undefined1 *)(param_4[7] + uVar7);
      iVar4 = (local_70[3] + local_70[1]) * 0x1151;
      iVar3 = iVar4 + local_70[1] * 0x187e;
      iVar10 = (local_70[0] + 0x4010 + local_70[2]) * 0x2000;
      iVar4 = iVar4 + local_70[3] * -0x3b21;
      *puVar2 = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar3 + iVar10) >> 0x12) & 0x3ff));
      iVar11 = ((local_70[0] + 0x4010) - local_70[2]) * 0x2000;
      puVar2[3] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar10 - iVar3) >> 0x12) & 0x3ff));
      puVar2[1] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar4 + iVar11) >> 0x12) & 0x3ff));
      puVar2[2] = *(undefined1 *)(lVar5 + ((ulong)((uint)(iVar11 - iVar4) >> 0x12) & 0x3ff));
      return;
    }
  } while( true );
}

