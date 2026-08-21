
void jpeg_idct_3x6(long param_1,long param_2,short *param_3,long *param_4,ulong param_5)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  
  piVar20 = *(int **)(param_2 + 0x58);
  lVar28 = (long)piVar20[8] * (long)param_3[8];
  lVar9 = (long)piVar20[0x18] * (long)param_3[0x18];
  lVar13 = (long)piVar20[0x28] * (long)param_3[0x28];
  uVar3 = (long)(*piVar20 * (int)*param_3) << 0xd | 0x400;
  lVar17 = (lVar13 + lVar28) * 0xbb6;
  iVar5 = ((int)lVar28 - (int)lVar9) - (int)lVar13;
  lVar14 = uVar3 + (long)piVar20[0x20] * (long)param_3[0x20] * 0x16a1;
  lVar28 = lVar17 + (lVar9 + lVar28) * 0x2000;
  lVar17 = lVar17 + (lVar13 - lVar9) * 0x2000;
  lVar9 = (long)piVar20[0x10] * (long)param_3[0x10] * 0x2731 + lVar14;
  lVar14 = lVar14 + (long)piVar20[0x10] * (long)param_3[0x10] * -0x2731;
  iVar25 = (int)(uVar3 + (long)piVar20[0x20] * (long)param_3[0x20] * -0x2d42 >> 0xb);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110ec18 with catch @ 0110ebc4
                        */
                    /* try { // try from 0110ebe8 to 0120ec17 has its CatchHandler @ 0110edb4 */
  lVar13 = (long)piVar20[9] * (long)param_3[9];
  param_5 = param_5 & 0xffffffff;
  lVar11 = (long)piVar20[0x19] * (long)param_3[0x19];
                    /* try { // try from 0110ec18 to 0120ecab has its CatchHandler @ 0110ebc4 */
  lVar15 = (long)piVar20[0x29] * (long)param_3[0x29];
  uVar3 = (long)(piVar20[1] * (int)param_3[1]) << 0xd | 0x400;
  lVar18 = (lVar15 + lVar13) * 0xbb6;
  iVar6 = ((int)lVar13 - (int)lVar11) - (int)lVar15;
  lVar16 = uVar3 + (long)piVar20[0x21] * (long)param_3[0x21] * 0x16a1;
  lVar13 = lVar18 + (lVar11 + lVar13) * 0x2000;
  lVar18 = lVar18 + (lVar15 - lVar11) * 0x2000;
  lVar11 = (long)piVar20[0x11] * (long)param_3[0x11] * 0x2731 + lVar16;
  lVar16 = lVar16 + (long)piVar20[0x11] * (long)param_3[0x11] * -0x2731;
  iVar23 = (int)(uVar3 + (long)piVar20[0x21] * (long)param_3[0x21] * -0x2d42 >> 0xb);
  iVar1 = iVar6 * 4 + iVar23;
  iVar23 = iVar23 + iVar6 * -4;
  iVar12 = (int)((ulong)(lVar13 + lVar11) >> 0xb);
  iVar26 = (int)((ulong)(lVar11 - lVar13) >> 0xb);
  iVar10 = (int)((ulong)(lVar18 + lVar16) >> 0xb);
  iVar8 = (int)((ulong)(lVar16 - lVar18) >> 0xb);
                    /* try { // try from 0110ecac to 0120ecaf has its CatchHandler @ 0110ee08 */
  lVar13 = (long)piVar20[10] * (long)param_3[10];
  lVar16 = (long)piVar20[0x2a] * (long)param_3[0x2a];
                    /* try { // try from 0110ecec to 0120ecef has its CatchHandler @ 0110ee04 */
  lVar29 = (long)piVar20[0x1a] * (long)param_3[0x1a];
  uVar3 = (long)(piVar20[2] * (int)param_3[2]) << 0xd | 0x400;
  lVar11 = (lVar16 + lVar13) * 0xbb6;
  lVar15 = uVar3 + (long)piVar20[0x22] * (long)param_3[0x22] * 0x16a1;
  iVar6 = ((int)lVar13 - (int)lVar29) - (int)lVar16;
  lVar13 = lVar11 + (lVar29 + lVar13) * 0x2000;
  lVar18 = (long)piVar20[0x12] * (long)param_3[0x12] * 0x2731 + lVar15;
  iVar7 = (int)((long)(uVar3 + (long)piVar20[0x22] * (long)param_3[0x22] * -0x2d42) >> 0xb);
  iVar27 = iVar6 * 4 + iVar7;
  iVar7 = iVar7 + iVar6 * -4;
  iVar21 = (int)((ulong)(lVar18 - lVar13) >> 0xb);
  lVar11 = lVar11 + (lVar16 - lVar29) * 0x2000;
  lVar15 = lVar15 + (long)piVar20[0x12] * (long)param_3[0x12] * -0x2731;
  iVar6 = (int)((ulong)(lVar28 + lVar9) >> 0xb) * 0x2000 + 0x8020000;
  iVar24 = (int)((ulong)(lVar13 + lVar18) >> 0xb);
                    /* try { // try from 0110ed70 to 0120ed73 has its CatchHandler @ 0110ee00 */
  iVar4 = iVar6 + iVar24 * 0x16a1;
  iVar19 = (int)((ulong)(lVar11 + lVar15) >> 0xb);
  iVar22 = (int)((ulong)(lVar15 - lVar11) >> 0xb);
  lVar13 = *(long *)(param_1 + 0x1b8) + -0x180;
  puVar2 = (undefined1 *)(*param_4 + param_5);
  *puVar2 = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar4 + iVar12 * 0x2731) >> 0x12) & 0x3ff));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110ebe8 with catch @ 0110edb4
                        */
  puVar2[2] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar4 + iVar12 * -0x2731) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar24 * -0x2d42) >> 0x12) & 0x3ff));
  iVar6 = (iVar5 * 4 + iVar25) * 0x2000 + 0x8020000;
  iVar4 = iVar6 + iVar27 * 0x16a1;
  puVar2 = (undefined1 *)(param_4[1] + param_5);
  *puVar2 = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar4 + iVar1 * 0x2731) >> 0x12) & 0x3ff));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110ed70 with catch @ 0110ee00
                        */
  puVar2[2] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar4 + iVar1 * -0x2731) >> 0x12) & 0x3ff));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110ecec with catch @ 0110ee04
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110ecac with catch @ 0110ee08
                        */
  puVar2[1] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar27 * -0x2d42) >> 0x12) & 0x3ff));
  iVar1 = (int)((ulong)(lVar17 + lVar14) >> 0xb) * 0x2000 + 0x8020000;
  iVar6 = iVar1 + iVar19 * 0x16a1;
  puVar2 = (undefined1 *)(param_4[2] + param_5);
  *puVar2 = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar10 * 0x2731) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar10 * -0x2731) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar1 + iVar19 * -0x2d42) >> 0x12) & 0x3ff));
  iVar1 = (int)((ulong)(lVar14 - lVar17) >> 0xb) * 0x2000 + 0x8020000;
  iVar6 = iVar1 + iVar22 * 0x16a1;
  puVar2 = (undefined1 *)(param_4[3] + param_5);
  *puVar2 = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar8 * 0x2731) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar8 * -0x2731) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar1 + iVar22 * -0x2d42) >> 0x12) & 0x3ff));
  iVar1 = (iVar25 + iVar5 * -4) * 0x2000 + 0x8020000;
  iVar6 = iVar1 + iVar7 * 0x16a1;
  puVar2 = (undefined1 *)(param_4[4] + param_5);
  *puVar2 = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar23 * 0x2731) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar23 * -0x2731) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar1 + iVar7 * -0x2d42) >> 0x12) & 0x3ff));
  iVar1 = (int)((ulong)(lVar9 - lVar28) >> 0xb) * 0x2000 + 0x8020000;
  iVar6 = iVar1 + iVar21 * 0x16a1;
  puVar2 = (undefined1 *)(param_4[5] + param_5);
  *puVar2 = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar26 * 0x2731) >> 0x12) & 0x3ff));
  puVar2[2] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar6 + iVar26 * -0x2731) >> 0x12) & 0x3ff));
  puVar2[1] = *(undefined1 *)(lVar13 + ((ulong)((uint)(iVar1 + iVar21 * -0x2d42) >> 0x12) & 0x3ff));
  return;
}

