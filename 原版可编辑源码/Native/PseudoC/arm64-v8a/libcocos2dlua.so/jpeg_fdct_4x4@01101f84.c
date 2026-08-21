
void jpeg_fdct_4x4(int *param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
                    /* try { // try from 01101f84 to 01202077 has its CatchHandler @ 01101f84
                       catch() { ... } // from try @ 01101f84 with catch @ 01101f84
                       catch() { ... } // from try @ 01102084 with catch @ 01101f84
                       catch() { ... } // from try @ 01102110 with catch @ 01101f84
                       catch() { ... } // from try @ 01102154 with catch @ 01101f84 */
  memset(param_1,0,0x100);
  uVar18 = (ulong)param_3;
  pbVar3 = (byte *)(*param_2 + uVar18);
  iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
  lVar20 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  iVar2 = (uint)pbVar3[2] + (uint)pbVar3[1];
  lVar21 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  lVar22 = (lVar21 + lVar20) * 0x1151 + 0x100;
  *param_1 = (iVar2 + iVar1) * 0x10 + -0x2000;
  param_1[1] = (int)((ulong)(lVar22 + lVar20 * 0x187e) >> 9);
  param_1[2] = (iVar1 - iVar2) * 0x10;
  param_1[3] = (int)((ulong)(lVar22 + lVar21 * -0x3b21) >> 9);
  pbVar3 = (byte *)(param_2[1] + uVar18);
  iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
  lVar21 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  iVar2 = (uint)pbVar3[2] + (uint)pbVar3[1];
  lVar22 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  lVar20 = (lVar22 + lVar21) * 0x1151 + 0x100;
  iVar4 = (iVar1 - iVar2) * 0x10;
                    /* try { // try from 01102078 to 01202083 has its CatchHandler @ 01102154 */
  param_1[8] = (iVar2 + iVar1) * 0x10 + -0x2000;
  param_1[9] = (int)((ulong)(lVar20 + lVar21 * 0x187e) >> 9);
  param_1[10] = iVar4;
  param_1[0xb] = (int)((ulong)(lVar20 + lVar22 * -0x3b21) >> 9);
                    /* try { // try from 01102084 to 012020eb has its CatchHandler @ 01101f84 */
  pbVar3 = (byte *)(param_2[2] + uVar18);
  iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
  lVar20 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  iVar2 = (uint)pbVar3[2] + (uint)pbVar3[1];
  lVar22 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  iVar7 = iVar1 - iVar2;
  lVar21 = (lVar22 + lVar20) * 0x1151 + 0x100;
  iVar5 = iVar7 * 0x10;
  iVar6 = (iVar2 + iVar1) * 0x10 + -0x2000;
  iVar13 = (int)((ulong)(lVar21 + lVar20 * 0x187e) >> 9);
  param_1[0x10] = iVar6;
  param_1[0x11] = iVar13;
  param_1[0x12] = iVar5;
  param_1[0x13] = (int)((ulong)(lVar21 + lVar22 * -0x3b21) >> 9);
                    /* try { // try from 011020ec to 0120210f has its CatchHandler @ 01102158 */
  iVar8 = param_1[8] - iVar6;
  iVar9 = param_1[9] - iVar13;
  pbVar3 = (byte *)(param_2[3] + uVar18);
                    /* try { // try from 01102110 to 0120214b has its CatchHandler @ 01101f84 */
  iVar10 = iVar4 + iVar7 * -0x10;
  iVar11 = param_1[0xb] - param_1[0x13];
  iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
  lVar20 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  iVar2 = (uint)pbVar3[2] + (uint)pbVar3[1];
  lVar21 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  iVar12 = iVar1 - iVar2;
  lVar22 = (lVar21 + lVar20) * 0x1151 + 0x100;
                    /* try { // try from 0110214c to 0120214f has its CatchHandler @ 01102154 */
                    /* try { // try from 01102150 to 01202153 has its CatchHandler @ 01102158 */
                    /* catch() { ... } // from try @ 01102078 with catch @ 01102154
                       catch() { ... } // from try @ 0110214c with catch @ 01102154
                       try { // try from 01102154 to 0120215b has its CatchHandler @ 01101f84 */
                    /* catch() { ... } // from try @ 011020ec with catch @ 01102158
                       catch() { ... } // from try @ 01102150 with catch @ 01102158 */
  iVar7 = iVar12 * 0x10;
  iVar1 = (iVar2 + iVar1) * 0x10 + -0x2000;
  iVar2 = *param_1 - iVar1;
  lVar16 = (long)(iVar5 + iVar4);
  param_1[0x1a] = iVar7;
  param_1[0x1b] = (int)((ulong)(lVar22 + lVar21 * -0x3b21) >> 9);
  iVar19 = (int)((ulong)(lVar22 + lVar20 * 0x187e) >> 9);
  iVar4 = param_1[1] - iVar19;
  lVar20 = (long)(iVar7 + param_1[2]) + 2;
  iVar5 = param_1[2] + iVar12 * -0x10;
  lVar14 = (long)(iVar6 + param_1[8]);
  lVar17 = ((long)iVar10 + (long)iVar5) * 0x1151 + 0x4000;
  lVar21 = (long)(iVar1 + *param_1) + 2;
  lVar23 = (long)(param_1[9] + iVar13);
  lVar15 = ((long)iVar8 + (long)iVar2) * 0x1151 + 0x4000;
  lVar22 = (long)(param_1[1] + iVar19) + 2;
  param_1[0x12] = (int)((ulong)(lVar20 - lVar16) >> 2);
  lVar24 = ((long)iVar9 + (long)iVar4) * 0x1151 + 0x4000;
  param_1[10] = (int)((ulong)(lVar17 + (long)iVar5 * 0x187e) >> 0xf);
  param_1[0x1a] = (int)((ulong)(lVar17 + (long)iVar10 * -0x3b21) >> 0xf);
  *param_1 = (int)((ulong)(lVar21 + lVar14) >> 2);
  param_1[1] = (int)((ulong)(lVar22 + lVar23) >> 2);
  param_1[2] = (int)((ulong)(lVar20 + lVar16) >> 2);
  param_1[8] = (int)((ulong)(lVar15 + (long)iVar2 * 0x187e) >> 0xf);
  param_1[0x10] = (int)((ulong)(lVar21 - lVar14) >> 2);
  param_1[0x11] = (int)((ulong)(lVar22 - lVar23) >> 2);
  param_1[9] = (int)((ulong)(lVar24 + (long)iVar4 * 0x187e) >> 0xf);
  iVar1 = param_1[3] - param_1[0x1b];
  lVar22 = (long)(param_1[0x13] + param_1[0xb]);
  lVar20 = (long)(param_1[0x1b] + param_1[3]) + 2;
  lVar21 = ((long)iVar11 + (long)iVar1) * 0x1151 + 0x4000;
  param_1[0x18] = (int)((ulong)(lVar15 + (long)iVar8 * -0x3b21) >> 0xf);
  param_1[0x19] = (int)((ulong)(lVar24 + (long)iVar9 * -0x3b21) >> 0xf);
                    /* catch() { ... } // from try @ 011022c8 with catch @ 0110229c */
  param_1[3] = (int)((ulong)(lVar20 + lVar22) >> 2);
  param_1[0x13] = (int)((ulong)(lVar20 - lVar22) >> 2);
  param_1[0xb] = (int)((ulong)(lVar21 + (long)iVar1 * 0x187e) >> 0xf);
  param_1[0x1b] = (int)((ulong)(lVar21 + (long)iVar11 * -0x3b21) >> 0xf);
  return;
}

