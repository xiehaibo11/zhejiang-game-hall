
void jpeg_fdct_6x3(int *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  
                    /* catch() { ... } // from try @ 01105c98 with catch @ 01105cf4 */
  memset(param_1,0,0x100);
  uVar12 = (ulong)param_3;
  pbVar1 = (byte *)(*param_2 + uVar12);
  lVar9 = (ulong)pbVar1[5] + (ulong)*pbVar1;
  lVar10 = (ulong)pbVar1[4] + (ulong)pbVar1[1];
  lVar18 = (ulong)*pbVar1 - (ulong)pbVar1[5];
  lVar13 = (ulong)pbVar1[3] + (ulong)pbVar1[2];
                    /* try { // try from 01105d54 to 01205df7 has its CatchHandler @ 01105d54
                       catch() { ... } // from try @ 01105d54 with catch @ 01105d54
                       catch() { ... } // from try @ 01105e18 with catch @ 01105d54 */
  iVar5 = (uint)pbVar1[1] - (uint)pbVar1[4];
  lVar20 = (ulong)pbVar1[2] - (ulong)pbVar1[3];
  lVar15 = lVar13 + lVar9;
  iVar17 = (int)lVar18;
  iVar19 = (int)lVar20;
  iVar8 = (int)((lVar20 + lVar18) * 0xbb6 + 0x200U >> 10);
  param_1[2] = (int)((lVar9 - lVar13) * 0x2731 + 0x200U >> 10);
  param_1[3] = ((iVar17 - iVar5) - iVar19) * 8;
  *param_1 = ((int)lVar15 + (int)lVar10) * 8 + -0x1800;
  param_1[1] = iVar8 + (iVar5 + iVar17) * 8;
  param_1[4] = (int)((lVar15 + lVar10 * -2) * 0x16a1 + 0x200U >> 10);
  param_1[5] = iVar8 + (iVar19 - iVar5) * 8;
  pbVar1 = (byte *)(param_2[1] + uVar12);
  lVar9 = (ulong)pbVar1[5] + (ulong)*pbVar1;
  lVar20 = (ulong)*pbVar1 - (ulong)pbVar1[5];
  lVar10 = (ulong)pbVar1[4] + (ulong)pbVar1[1];
                    /* try { // try from 01105df8 to 01205dff has its CatchHandler @ 01105e54 */
  lVar13 = (ulong)pbVar1[3] + (ulong)pbVar1[2];
  iVar5 = (uint)pbVar1[1] - (uint)pbVar1[4];
  lVar18 = (ulong)pbVar1[2] - (ulong)pbVar1[3];
  lVar15 = lVar13 + lVar9;
                    /* try { // try from 01105e10 to 01205e17 has its CatchHandler @ 01105e4c */
  iVar19 = (int)lVar20;
                    /* try { // try from 01105e18 to 01205e93 has its CatchHandler @ 01105d54 */
  iVar17 = (int)lVar18;
  iVar8 = (int)((lVar18 + lVar20) * 0xbb6 + 0x200U >> 10);
                    /* catch() { ... } // from try @ 01105e10 with catch @ 01105e4c */
  param_1[10] = (int)((lVar9 - lVar13) * 0x2731 + 0x200U >> 10);
  param_1[0xb] = ((iVar19 - iVar5) - iVar17) * 8;
                    /* catch() { ... } // from try @ 01105df8 with catch @ 01105e54 */
  param_1[8] = ((int)lVar15 + (int)lVar10) * 8 + -0x1800;
  param_1[9] = iVar8 + (iVar5 + iVar19) * 8;
  param_1[0xc] = (int)((lVar15 + lVar10 * -2) * 0x16a1 + 0x200U >> 10);
  param_1[0xd] = iVar8 + (iVar17 - iVar5) * 8;
  pbVar1 = (byte *)(param_2[2] + uVar12);
  lVar9 = (ulong)pbVar1[5] + (ulong)*pbVar1;
  lVar20 = (ulong)*pbVar1 - (ulong)pbVar1[5];
  lVar10 = (ulong)pbVar1[3] + (ulong)pbVar1[2];
  lVar18 = (ulong)pbVar1[2] - (ulong)pbVar1[3];
                    /* catch() { ... } // from try @ 01105f30 with catch @ 01105e94 */
  lVar13 = lVar10 + lVar9;
  lVar15 = (ulong)pbVar1[4] + (ulong)pbVar1[1];
  iVar6 = (uint)pbVar1[1] - (uint)pbVar1[4];
  iVar8 = (int)lVar20;
  iVar2 = param_1[8];
  iVar11 = (int)lVar18;
  iVar7 = (iVar8 - iVar6) - iVar11;
  iVar5 = ((int)lVar13 + (int)lVar15) * 8 + -0x1800;
  iVar4 = iVar7 * 8;
  iVar17 = param_1[10];
  iVar19 = param_1[0xb];
  iVar16 = (int)((lVar18 + lVar20) * 0xbb6 + 0x200U >> 10);
  iVar8 = iVar16 + (iVar6 + iVar8) * 8;
  iVar14 = (int)((lVar9 - lVar10) * 0x2731 + 0x200U >> 10);
  param_1[0x12] = iVar14;
  param_1[0x13] = iVar4;
  iVar3 = param_1[9];
  param_1[0x14] = (int)((lVar13 + lVar15 * -2) * 0x16a1 + 0x200U >> 10);
  param_1[0x15] = iVar16 + (iVar11 - iVar6) * 8;
  lVar13 = (long)(*param_1 + iVar5);
                    /* try { // try from 01105f28 to 01205f2f has its CatchHandler @ 01105fe8 */
                    /* try { // try from 01105f30 to 01206003 has its CatchHandler @ 01105e94 */
  lVar9 = (long)(param_1[2] + iVar14);
  lVar10 = (long)(iVar4 + param_1[3]);
  lVar15 = (long)(param_1[1] + iVar8);
  param_1[8] = (int)((long)(*param_1 - iVar5) * 0x45ad + 0x4000U >> 0xf);
  param_1[10] = (int)((long)(param_1[2] - iVar14) * 0x45ad + 0x4000U >> 0xf);
  param_1[0xb] = (int)((long)(param_1[3] + iVar7 * -8) * 0x45ad + 0x4000U >> 0xf);
  iVar5 = param_1[0xc];
  iVar4 = param_1[0xd];
  *param_1 = (int)((lVar13 + iVar2) * 0x38e4 + 0x4000U >> 0xf);
  param_1[9] = (int)((long)(param_1[1] - iVar8) * 0x45ad + 0x4000U >> 0xf);
  param_1[0x10] = (int)((lVar13 + (long)iVar2 * -2) * 0x283a + 0x4000U >> 0xf);
  param_1[0x11] = (int)((lVar15 + (long)iVar3 * -2) * 0x283a + 0x4000U >> 0xf);
  lVar13 = (long)(param_1[0x14] + param_1[4]);
  lVar18 = (long)(param_1[0x15] + param_1[5]);
                    /* catch() { ... } // from try @ 01105f28 with catch @ 01105fe8 */
  param_1[0xc] = (int)((long)(param_1[4] - param_1[0x14]) * 0x45ad + 0x4000U >> 0xf);
  param_1[0xd] = (int)((long)(param_1[5] - param_1[0x15]) * 0x45ad + 0x4000U >> 0xf);
  param_1[2] = (int)((lVar9 + iVar17) * 0x38e4 + 0x4000U >> 0xf);
  param_1[3] = (int)((lVar10 + iVar19) * 0x38e4 + 0x4000U >> 0xf);
  param_1[0x12] = (int)((lVar9 + (long)iVar17 * -2) * 0x283a + 0x4000U >> 0xf);
  param_1[0x13] = (int)((lVar10 + (long)iVar19 * -2) * 0x283a + 0x4000U >> 0xf);
  param_1[1] = (int)((lVar15 + iVar3) * 0x38e4 + 0x4000U >> 0xf);
  param_1[4] = (int)((lVar13 + iVar5) * 0x38e4 + 0x4000U >> 0xf);
  param_1[5] = (int)((lVar18 + iVar4) * 0x38e4 + 0x4000U >> 0xf);
  param_1[0x14] = (int)((lVar13 + (long)iVar5 * -2) * 0x283a + 0x4000U >> 0xf);
  param_1[0x15] = (int)((lVar18 + (long)iVar4 * -2) * 0x283a + 0x4000U >> 0xf);
  return;
}

