
void jpeg_idct_6x3(long param_1,long param_2,short *param_3,long *param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  
  piVar16 = *(int **)(param_2 + 0x58);
  sVar6 = param_3[0x10];
  sVar7 = param_3[8];
  iVar8 = piVar16[0x10];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110cfa0 with catch @ 0110cfd0
                        */
  iVar9 = piVar16[8];
  uVar4 = (long)(*piVar16 * (int)*param_3) << 0xd | 0x400;
  lVar20 = uVar4 + (long)iVar8 * (long)sVar6 * 0x16a1;
  uVar5 = (long)(piVar16[1] * (int)param_3[1]) << 0xd | 0x400;
  lVar21 = uVar5 + (long)piVar16[0x11] * (long)param_3[0x11] * 0x16a1;
  iVar26 = (int)((ulong)((long)piVar16[9] * (long)param_3[9] * 0x2731 + lVar21) >> 0xb);
  iVar19 = (int)((ulong)(lVar21 + (long)piVar16[9] * (long)param_3[9] * -0x2731) >> 0xb);
  iVar24 = (int)(uVar5 + (long)piVar16[0x11] * (long)param_3[0x11] * -0x2d42 >> 0xb);
  uVar5 = (long)(piVar16[2] * (int)param_3[2]) << 0xd | 0x400;
  lVar21 = uVar5 + (long)piVar16[0x12] * (long)param_3[0x12] * 0x16a1;
  iVar27 = (int)((ulong)((long)piVar16[10] * (long)param_3[10] * 0x2731 + lVar21) >> 0xb);
  iVar12 = (int)((ulong)(lVar21 + (long)piVar16[10] * (long)param_3[10] * -0x2731) >> 0xb);
  iVar22 = (int)(uVar5 + (long)piVar16[0x12] * (long)param_3[0x12] * -0x2d42 >> 0xb);
  param_5 = param_5 & 0xffffffff;
  uVar5 = (long)(piVar16[3] * (int)param_3[3]) << 0xd | 0x400;
  lVar21 = uVar5 + (long)piVar16[0x13] * (long)param_3[0x13] * 0x16a1;
  iVar13 = (int)((ulong)((long)piVar16[0xb] * (long)param_3[0xb] * 0x2731 + lVar21) >> 0xb);
  iVar28 = (int)((ulong)(lVar21 + (long)piVar16[0xb] * (long)param_3[0xb] * -0x2731) >> 0xb);
  iVar23 = (int)(uVar5 + (long)piVar16[0x13] * (long)param_3[0x13] * -0x2d42 >> 0xb);
  uVar5 = (long)(piVar16[4] * (int)param_3[4]) << 0xd | 0x400;
  lVar21 = uVar5 + (long)piVar16[0x14] * (long)param_3[0x14] * 0x16a1;
  iVar14 = (int)((ulong)((long)piVar16[0xc] * (long)param_3[0xc] * 0x2731 + lVar21) >> 0xb);
  iVar29 = (int)((ulong)(lVar21 + (long)piVar16[0xc] * (long)param_3[0xc] * -0x2731) >> 0xb);
  iVar25 = (int)(uVar5 + (long)piVar16[0x14] * (long)param_3[0x14] * -0x2d42 >> 0xb);
  uVar5 = (long)(piVar16[5] * (int)param_3[5]) << 0xd | 0x400;
  lVar21 = uVar5 + (long)piVar16[0x15] * (long)param_3[0x15] * 0x16a1;
  iVar18 = (int)((ulong)((long)piVar16[0xd] * (long)param_3[0xd] * 0x2731 + lVar21) >> 0xb);
  iVar17 = (int)(uVar5 + (long)piVar16[0x15] * (long)param_3[0x15] * -0x2d42 >> 0xb);
  iVar1 = (int)((ulong)((long)iVar9 * (long)sVar7 * 0x2731 + lVar20) >> 0xb) * 0x2000 + 0x8020000;
  iVar2 = iVar1 + iVar14 * 0x16a1;
  iVar1 = iVar1 + iVar14 * -0x2d42;
  iVar10 = (iVar18 + iVar26) * 0xbb6;
  iVar11 = (iVar26 - iVar13) - iVar18;
  iVar14 = iVar2 + iVar27 * 0x2731;
  iVar26 = iVar10 + (iVar13 + iVar26) * 0x2000;
  iVar15 = (int)((ulong)(lVar21 + (long)piVar16[0xd] * (long)param_3[0xd] * -0x2731) >> 0xb);
  lVar21 = *(long *)(param_1 + 0x1b8) + -0x180;
  puVar3 = (undefined1 *)(*param_4 + param_5);
  *puVar3 = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar26 + iVar14) >> 0x12) & 0x3ff));
  puVar3[5] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar14 - iVar26) >> 0x12) & 0x3ff));
  iVar2 = iVar2 + iVar27 * -0x2731;
  puVar3[1] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar11 * 0x2000 + iVar1) >> 0x12) & 0x3ff));
  iVar10 = iVar10 + (iVar18 - iVar13) * 0x2000;
  puVar3[4] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar1 + iVar11 * -0x2000) >> 0x12) & 0x3ff));
  puVar3[2] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar10 + iVar2) >> 0x12) & 0x3ff));
  puVar3[3] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar2 - iVar10) >> 0x12) & 0x3ff));
  iVar1 = (int)(uVar4 + (long)iVar8 * (long)sVar6 * -0x2d42 >> 0xb) * 0x2000 + 0x8020000;
  iVar2 = iVar1 + iVar25 * 0x16a1;
  iVar1 = iVar1 + iVar25 * -0x2d42;
  iVar10 = (iVar17 + iVar24) * 0xbb6;
  iVar8 = (iVar24 - iVar23) - iVar17;
  iVar14 = iVar2 + iVar22 * 0x2731;
  iVar26 = iVar10 + (iVar23 + iVar24) * 0x2000;
                    /* try { // try from 0110d30c to 0120d35f has its CatchHandler @ 0110d30c
                       catch(type#1 @ 00000000) { ... } // from try @ 0110d30c with catch @ 0110d30c
                       catch(type#1 @ 00000000) { ... } // from try @ 0110d4c4 with catch @ 0110d30c
                        */
  puVar3 = (undefined1 *)(param_4[1] + param_5);
  *puVar3 = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar26 + iVar14) >> 0x12) & 0x3ff));
  puVar3[5] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar14 - iVar26) >> 0x12) & 0x3ff));
  iVar2 = iVar2 + iVar22 * -0x2731;
  puVar3[1] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar8 * 0x2000 + iVar1) >> 0x12) & 0x3ff));
  iVar10 = iVar10 + (iVar17 - iVar23) * 0x2000;
                    /* try { // try from 0110d360 to 0120d367 has its CatchHandler @ 0110d518 */
  puVar3[4] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar1 + iVar8 * -0x2000) >> 0x12) & 0x3ff));
  puVar3[2] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar10 + iVar2) >> 0x12) & 0x3ff));
                    /* try { // try from 0110d378 to 0120d37b has its CatchHandler @ 0110d53c */
  puVar3[3] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar2 - iVar10) >> 0x12) & 0x3ff));
  iVar1 = (int)((ulong)(lVar20 + (long)iVar9 * (long)sVar7 * -0x2731) >> 0xb) * 0x2000 + 0x8020000;
                    /* try { // try from 0110d398 to 0120d39b has its CatchHandler @ 0110d5a8 */
  puVar3 = (undefined1 *)(param_4[2] + param_5);
  iVar2 = iVar1 + iVar29 * 0x16a1;
  iVar10 = (iVar15 + iVar19) * 0xbb6;
  iVar8 = (iVar19 - iVar28) - iVar15;
  iVar14 = iVar2 + iVar12 * 0x2731;
  iVar26 = iVar10 + (iVar28 + iVar19) * 0x2000;
                    /* try { // try from 0110d3c8 to 0120d3cf has its CatchHandler @ 0110d5a4 */
  iVar1 = iVar1 + iVar29 * -0x2d42;
  *puVar3 = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar26 + iVar14) >> 0x12) & 0x3ff));
  puVar3[5] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar14 - iVar26) >> 0x12) & 0x3ff));
                    /* try { // try from 0110d3f8 to 0120d3ff has its CatchHandler @ 0110d514 */
  iVar2 = iVar2 + iVar12 * -0x2731;
  puVar3[1] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar8 * 0x2000 + iVar1) >> 0x12) & 0x3ff));
                    /* try { // try from 0110d410 to 0120d413 has its CatchHandler @ 0110d528 */
  iVar10 = iVar10 + (iVar15 - iVar28) * 0x2000;
  puVar3[4] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar1 + iVar8 * -0x2000) >> 0x12) & 0x3ff));
  puVar3[2] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar10 + iVar2) >> 0x12) & 0x3ff));
                    /* try { // try from 0110d430 to 0120d433 has its CatchHandler @ 0110d560 */
  puVar3[3] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar2 - iVar10) >> 0x12) & 0x3ff));
  return;
}

