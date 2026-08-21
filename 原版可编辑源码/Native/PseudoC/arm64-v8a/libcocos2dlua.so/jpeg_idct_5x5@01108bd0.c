
void jpeg_idct_5x5(long param_1,long param_2,short *param_3,long *param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  
  piVar27 = *(int **)(param_2 + 0x58);
                    /* catch() { ... } // from try @ 01108bb8 with catch @ 01108bdc */
                    /* try { // try from 01108c04 to 01208c63 has its CatchHandler @ 01108c04
                       catch() { ... } // from try @ 01108c04 with catch @ 01108c04
                       catch() { ... } // from try @ 01108c68 with catch @ 01108c04 */
  lVar26 = (long)piVar27[0x20] * (long)param_3[0x20] + (long)piVar27[0x10] * (long)param_3[0x10];
  lVar34 = (long)piVar27[0x10] * (long)param_3[0x10] - (long)piVar27[0x20] * (long)param_3[0x20];
  uVar6 = (long)(*piVar27 * (int)*param_3) << 0xd | 0x400;
  lVar38 = ((long)piVar27[0x18] * (long)param_3[0x18] + (long)piVar27[8] * (long)param_3[8]) *
           0x1a9a;
  lVar25 = uVar6 + lVar34 * 0xb50;
  lVar35 = lVar38 + (long)piVar27[8] * (long)param_3[8] * 0x1071;
  lVar38 = lVar38 + (long)piVar27[0x18] * (long)param_3[0x18] * -0x45a4;
                    /* try { // try from 01108c64 to 01208c67 has its CatchHandler @ 01108c88 */
  lVar3 = lVar25 + lVar26 * 0x194c;
                    /* try { // try from 01108c68 to 01208caf has its CatchHandler @ 01108c04 */
  lVar25 = lVar25 + lVar26 * -0x194c;
                    /* catch() { ... } // from try @ 01108c64 with catch @ 01108c88 */
  lVar26 = (long)piVar27[0x21] * (long)param_3[0x21] + (long)piVar27[0x11] * (long)param_3[0x11];
  lVar39 = (long)piVar27[0x11] * (long)param_3[0x11] - (long)piVar27[0x21] * (long)param_3[0x21];
  uVar7 = (long)(piVar27[1] * (int)param_3[1]) << 0xd | 0x400;
                    /* try { // try from 01108cfc to 01208d5b has its CatchHandler @ 01108cfc
                       catch() { ... } // from try @ 01108cfc with catch @ 01108cfc
                       catch() { ... } // from try @ 01108d60 with catch @ 01108cfc */
  lVar14 = ((long)piVar27[0x19] * (long)param_3[0x19] + (long)piVar27[9] * (long)param_3[9]) *
           0x1a9a;
  lVar19 = uVar7 + lVar39 * 0xb50;
  lVar23 = lVar14 + (long)piVar27[9] * (long)param_3[9] * 0x1071;
  lVar14 = lVar14 + (long)piVar27[0x19] * (long)param_3[0x19] * -0x45a4;
  lVar4 = lVar19 + lVar26 * 0x194c;
  lVar19 = lVar19 + lVar26 * -0x194c;
  iVar32 = (int)((ulong)(lVar23 + lVar4) >> 0xb);
  iVar10 = (int)((ulong)(lVar4 - lVar23) >> 0xb);
  iVar15 = (int)((ulong)(lVar14 + lVar19) >> 0xb);
  iVar30 = (int)((ulong)(lVar19 - lVar14) >> 0xb);
  iVar36 = (int)(uVar7 + lVar39 * -0x2d40 >> 0xb);
                    /* try { // try from 01108d5c to 01208d5f has its CatchHandler @ 01108d80 */
                    /* try { // try from 01108d60 to 01208da7 has its CatchHandler @ 01108cfc */
                    /* catch() { ... } // from try @ 01108d5c with catch @ 01108d80 */
  lVar26 = (long)piVar27[0x22] * (long)param_3[0x22] + (long)piVar27[0x12] * (long)param_3[0x12];
  lVar14 = (long)piVar27[0x12] * (long)param_3[0x12] - (long)piVar27[0x22] * (long)param_3[0x22];
  uVar7 = (long)(piVar27[2] * (int)param_3[2]) << 0xd | 0x400;
                    /* try { // try from 01108da8 to 01208e07 has its CatchHandler @ 01108da8
                       catch() { ... } // from try @ 01108da8 with catch @ 01108da8
                       catch() { ... } // from try @ 01108e0c with catch @ 01108da8 */
  lVar19 = ((long)piVar27[0x1a] * (long)param_3[0x1a] + (long)piVar27[10] * (long)param_3[10]) *
           0x1a9a;
  lVar39 = uVar7 + lVar14 * 0xb50;
  lVar23 = lVar19 + (long)piVar27[10] * (long)param_3[10] * 0x1071;
  lVar19 = lVar19 + (long)piVar27[0x1a] * (long)param_3[0x1a] * -0x45a4;
  lVar4 = lVar39 + lVar26 * 0x194c;
  lVar39 = lVar39 + lVar26 * -0x194c;
  iVar33 = (int)((ulong)(lVar23 + lVar4) >> 0xb);
  iVar16 = (int)((ulong)(lVar4 - lVar23) >> 0xb);
  iVar21 = (int)((ulong)(lVar19 + lVar39) >> 0xb);
  iVar31 = (int)((ulong)(lVar39 - lVar19) >> 0xb);
  iVar11 = (int)(uVar7 + lVar14 * -0x2d40 >> 0xb);
                    /* try { // try from 01108e08 to 01208e0b has its CatchHandler @ 01108e2c */
                    /* try { // try from 01108e0c to 01208e53 has its CatchHandler @ 01108da8 */
                    /* catch() { ... } // from try @ 01108e08 with catch @ 01108e2c */
  param_5 = param_5 & 0xffffffff;
  lVar26 = (long)piVar27[0x23] * (long)param_3[0x23] + (long)piVar27[0x13] * (long)param_3[0x13];
  lVar39 = (long)piVar27[0x13] * (long)param_3[0x13] - (long)piVar27[0x23] * (long)param_3[0x23];
  uVar7 = (long)(piVar27[3] * (int)param_3[3]) << 0xd | 0x400;
  lVar14 = uVar7 + lVar39 * 0xb50;
  lVar23 = ((long)piVar27[0x1b] * (long)param_3[0x1b] + (long)piVar27[0xb] * (long)param_3[0xb]) *
           0x1a9a;
  lVar19 = lVar23 + (long)piVar27[0xb] * (long)param_3[0xb] * 0x1071;
  lVar23 = lVar23 + (long)piVar27[0x1b] * (long)param_3[0x1b] * -0x45a4;
  lVar4 = lVar14 + lVar26 * 0x194c;
  lVar14 = lVar14 + lVar26 * -0x194c;
                    /* try { // try from 01108e7c to 01208edb has its CatchHandler @ 01108e7c
                       catch() { ... } // from try @ 01108e7c with catch @ 01108e7c
                       catch() { ... } // from try @ 01108ee0 with catch @ 01108e7c */
  iVar20 = (int)((ulong)(lVar19 + lVar4) >> 0xb);
  iVar17 = (int)((ulong)(lVar4 - lVar19) >> 0xb);
  iVar24 = (int)((ulong)(lVar23 + lVar14) >> 0xb);
  iVar12 = (int)((ulong)(lVar14 - lVar23) >> 0xb);
  iVar22 = (int)(uVar7 + lVar39 * -0x2d40 >> 0xb);
                    /* try { // try from 01108edc to 01208edf has its CatchHandler @ 01108f00 */
                    /* try { // try from 01108ee0 to 01208f27 has its CatchHandler @ 01108e7c */
  lVar26 = (long)piVar27[0x24] * (long)param_3[0x24] + (long)piVar27[0x14] * (long)param_3[0x14];
  lVar19 = (long)piVar27[0x14] * (long)param_3[0x14] - (long)piVar27[0x24] * (long)param_3[0x24];
  uVar7 = (long)(piVar27[4] * (int)param_3[4]) << 0xd | 0x400;
                    /* catch() { ... } // from try @ 01108edc with catch @ 01108f00 */
  lVar23 = ((long)piVar27[0x1c] * (long)param_3[0x1c] + (long)piVar27[0xc] * (long)param_3[0xc]) *
           0x1a9a;
  lVar14 = uVar7 + lVar19 * 0xb50;
  lVar39 = lVar23 + (long)piVar27[0xc] * (long)param_3[0xc] * 0x1071;
  lVar4 = lVar14 + lVar26 * 0x194c;
  lVar23 = lVar23 + (long)piVar27[0x1c] * (long)param_3[0x1c] * -0x45a4;
  lVar14 = lVar14 + lVar26 * -0x194c;
  iVar37 = (int)((ulong)(lVar4 - lVar39) >> 0xb);
  iVar13 = (int)((ulong)(lVar39 + lVar4) >> 0xb);
  iVar18 = (int)((ulong)(lVar23 + lVar14) >> 0xb);
  iVar29 = (int)((ulong)(lVar14 - lVar23) >> 0xb);
  iVar28 = (int)(uVar7 + lVar19 * -0x2d40 >> 0xb);
                    /* try { // try from 01108f70 to 01208fcf has its CatchHandler @ 01108f70
                       catch() { ... } // from try @ 01108f70 with catch @ 01108f70
                       catch() { ... } // from try @ 01108fd4 with catch @ 01108f70 */
  puVar5 = (undefined1 *)(*param_4 + param_5);
  iVar1 = (int)((ulong)(lVar35 + lVar3) >> 0xb) * 0x2000 + 0x8020000;
  iVar2 = iVar13 + iVar33;
  iVar33 = iVar33 - iVar13;
  iVar8 = iVar1 + iVar33 * 0xb50;
  iVar9 = (iVar20 + iVar32) * 0x1a9a;
  iVar13 = iVar8 + iVar2 * 0x194c;
  iVar32 = iVar9 + iVar32 * 0x1071;
  lVar26 = *(long *)(param_1 + 0x1b8) + -0x180;
  *puVar5 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar32 + iVar13) >> 0x12) & 0x3ff));
  iVar8 = iVar8 + iVar2 * -0x194c;
  iVar9 = iVar9 + iVar20 * -0x45a4;
  puVar5[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar13 - iVar32) >> 0x12) & 0x3ff));
                    /* try { // try from 01108fd0 to 01208fd3 has its CatchHandler @ 01108ff4 */
                    /* try { // try from 01108fd4 to 0120901b has its CatchHandler @ 01108f70 */
  puVar5[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar9 + iVar8) >> 0x12) & 0x3ff));
  puVar5[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar8 - iVar9) >> 0x12) & 0x3ff));
                    /* catch() { ... } // from try @ 01108fd0 with catch @ 01108ff4 */
  puVar5[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar33 * -0x2d40) >> 0x12) & 0x3ff));
  iVar1 = (int)((ulong)(lVar38 + lVar25) >> 0xb) * 0x2000 + 0x8020000;
  iVar2 = iVar18 + iVar21;
  iVar21 = iVar21 - iVar18;
  iVar8 = iVar1 + iVar21 * 0xb50;
  iVar9 = (iVar24 + iVar15) * 0x1a9a;
  iVar13 = iVar8 + iVar2 * 0x194c;
  iVar32 = iVar9 + iVar15 * 0x1071;
  iVar8 = iVar8 + iVar2 * -0x194c;
  puVar5 = (undefined1 *)(param_4[1] + param_5);
  *puVar5 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar32 + iVar13) >> 0x12) & 0x3ff));
  iVar9 = iVar9 + iVar24 * -0x45a4;
  puVar5[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar13 - iVar32) >> 0x12) & 0x3ff));
  puVar5[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar9 + iVar8) >> 0x12) & 0x3ff));
  puVar5[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar8 - iVar9) >> 0x12) & 0x3ff));
  puVar5[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar21 * -0x2d40) >> 0x12) & 0x3ff));
  iVar1 = (int)(uVar6 + lVar34 * -0x2d40 >> 0xb) * 0x2000 + 0x8020000;
  iVar2 = iVar28 + iVar11;
  iVar11 = iVar11 - iVar28;
  iVar8 = iVar1 + iVar11 * 0xb50;
  iVar9 = (iVar22 + iVar36) * 0x1a9a;
  iVar13 = iVar8 + iVar2 * 0x194c;
  iVar32 = iVar9 + iVar36 * 0x1071;
  iVar8 = iVar8 + iVar2 * -0x194c;
  puVar5 = (undefined1 *)(param_4[2] + param_5);
  *puVar5 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar32 + iVar13) >> 0x12) & 0x3ff));
  iVar9 = iVar9 + iVar22 * -0x45a4;
  puVar5[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar13 - iVar32) >> 0x12) & 0x3ff));
  puVar5[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar9 + iVar8) >> 0x12) & 0x3ff));
  puVar5[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar8 - iVar9) >> 0x12) & 0x3ff));
  puVar5[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar11 * -0x2d40) >> 0x12) & 0x3ff));
  iVar1 = (int)((ulong)(lVar25 - lVar38) >> 0xb) * 0x2000 + 0x8020000;
  iVar2 = iVar29 + iVar31;
  iVar31 = iVar31 - iVar29;
  iVar8 = iVar1 + iVar31 * 0xb50;
  iVar9 = (iVar12 + iVar30) * 0x1a9a;
  iVar13 = iVar8 + iVar2 * 0x194c;
  iVar32 = iVar9 + iVar30 * 0x1071;
  iVar8 = iVar8 + iVar2 * -0x194c;
  puVar5 = (undefined1 *)(param_4[3] + param_5);
  *puVar5 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar32 + iVar13) >> 0x12) & 0x3ff));
  iVar9 = iVar9 + iVar12 * -0x45a4;
  puVar5[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar13 - iVar32) >> 0x12) & 0x3ff));
  puVar5[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar9 + iVar8) >> 0x12) & 0x3ff));
  puVar5[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar8 - iVar9) >> 0x12) & 0x3ff));
  puVar5[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar31 * -0x2d40) >> 0x12) & 0x3ff));
  puVar5 = (undefined1 *)(param_4[4] + param_5);
  iVar1 = (int)((ulong)(lVar3 - lVar35) >> 0xb) * 0x2000 + 0x8020000;
  iVar2 = iVar37 + iVar16;
  iVar16 = iVar16 - iVar37;
  iVar8 = iVar1 + iVar16 * 0xb50;
  iVar9 = (iVar17 + iVar10) * 0x1a9a;
  iVar13 = iVar8 + iVar2 * 0x194c;
  iVar32 = iVar9 + iVar10 * 0x1071;
  iVar8 = iVar8 + iVar2 * -0x194c;
  *puVar5 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar32 + iVar13) >> 0x12) & 0x3ff));
  iVar9 = iVar9 + iVar17 * -0x45a4;
  puVar5[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar13 - iVar32) >> 0x12) & 0x3ff));
  puVar5[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar9 + iVar8) >> 0x12) & 0x3ff));
  puVar5[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar8 - iVar9) >> 0x12) & 0x3ff));
  puVar5[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar16 * -0x2d40) >> 0x12) & 0x3ff));
  return;
}

