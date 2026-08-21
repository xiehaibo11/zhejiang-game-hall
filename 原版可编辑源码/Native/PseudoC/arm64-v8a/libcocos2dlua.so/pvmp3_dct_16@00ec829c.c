
void pvmp3_dct_16(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  
  iVar8 = param_1[0xf] + *param_1;
  iVar5 = param_1[8] + param_1[7];
  iVar12 = param_1[0xe] + param_1[1];
  iVar21 = param_1[9] + param_1[6];
                    /* try { // try from 00ec8304 to 00fc830b has its CatchHandler @ 00ec8388 */
                    /* try { // try from 00ec830c to 00fc83a3 has its CatchHandler @ 00ec8290 */
  iVar16 = iVar5 + iVar8;
  iVar9 = iVar21 + iVar12;
  iVar17 = param_1[0xd] + param_1[2];
  iVar19 = param_1[10] + param_1[5];
  iVar14 = param_1[0xc] + param_1[3];
  iVar1 = param_1[0xb] + param_1[4];
  iVar2 = iVar19 + iVar17;
  iVar3 = iVar1 + iVar14;
                    /* catch() { ... } // from try @ 00ec8304 with catch @ 00ec8388 */
  iVar13 = iVar3 + iVar16;
  iVar15 = iVar2 + iVar9;
  iVar18 = (int)((ulong)((long)(iVar12 - iVar21) * 0x4cf8de80) >> 0x20);
  iVar20 = (int)((ulong)((long)(iVar17 - iVar19) * 0x73326b80) >> 0x20);
  iVar12 = iVar20 + iVar18;
  iVar6 = (int)((ulong)((long)((param_1[7] - param_1[8]) * 8) * 0x519e4e00) >> 0x20);
  iVar23 = (int)((ulong)((long)(*param_1 - param_1[0xf]) * 0x404f4680) >> 0x20);
  iVar21 = iVar6 + iVar23;
  iVar26 = (int)((ulong)((long)(param_1[1] - param_1[0xe]) * 0x42e13c00) >> 0x20);
  iVar24 = (int)((ulong)((long)((param_1[6] - param_1[9]) * 2) * 0x6e3c9300) >> 0x20);
  iVar17 = iVar24 + iVar26;
  iVar4 = (int)((ulong)((long)(param_1[2] - param_1[0xd]) * 0x48919f80) >> 0x20);
  iVar25 = (int)((ulong)((long)((param_1[5] - param_1[10]) * 2) * 0x43e22480) >> 0x20);
  iVar19 = iVar25 + iVar4;
  iVar10 = (int)((ulong)((long)(param_1[3] - param_1[0xc]) * 0x52cb0e80) >> 0x20);
  iVar11 = (int)((ulong)((long)(param_1[4] - param_1[0xb]) * 0x64e24000) >> 0x20);
  *param_1 = iVar13 + iVar15 >> 1;
  iVar7 = (int)((ulong)((long)((iVar14 - iVar1) * 4) * 0x52036780) >> 0x20);
  iVar5 = (int)((ulong)((long)(iVar8 - iVar5) * 0x4140fb80) >> 0x20);
  iVar8 = iVar7 + iVar5;
  param_1[8] = (int)((ulong)((long)(iVar13 - iVar15) * 0x5a827980) >> 0x20);
  iVar13 = (int)((ulong)((long)(iVar16 - iVar3) * 0x4545ea00) >> 0x20);
  iVar22 = (int)((ulong)((long)((iVar9 - iVar2) * 2) * 0x539eba80) >> 0x20);
  iVar1 = (int)((ulong)((long)((iVar10 - iVar11) * 8) * 0x52036780) >> 0x20);
  iVar16 = (int)((ulong)((long)((iVar23 - iVar6) * 2) * 0x4140fb80) >> 0x20);
  iVar9 = (int)((ulong)((long)((iVar26 - iVar24) * 2) * 0x4cf8de80) >> 0x20);
  iVar14 = (int)((ulong)((long)((iVar4 - iVar25) * 2) * 0x73326b80) >> 0x20);
  iVar5 = (int)((ulong)((long)((iVar5 - iVar7) * 2) * 0x4545ea00) >> 0x20);
  iVar15 = (int)((ulong)((long)((iVar18 - iVar20) * 4) * 0x539eba80) >> 0x20);
  iVar2 = (int)((ulong)((long)((iVar13 - iVar22) * 2) * 0x5a827980) >> 0x20);
  param_1[0xc] = iVar2;
  iVar3 = (int)((ulong)((long)((iVar5 - iVar15) * 2) * 0x5a827980) >> 0x20);
  iVar5 = iVar5 + iVar15 + iVar3;
  param_1[4] = iVar13 + iVar22 + iVar2;
  iVar2 = (int)((ulong)((long)((iVar8 - iVar12) * 2) * 0x5a827980) >> 0x20);
  param_1[0xe] = iVar3;
  iVar11 = iVar11 + iVar10;
  param_1[10] = iVar3 + iVar2;
  param_1[2] = iVar8 + iVar12 + iVar5;
  param_1[6] = iVar5 + iVar2;
  if (param_2 == 0) {
    iVar21 = -iVar21;
    iVar16 = -iVar16;
    iVar17 = -iVar17;
    iVar9 = -iVar9;
    iVar19 = -iVar19;
    iVar14 = -iVar14;
    iVar11 = -iVar11;
    iVar1 = -iVar1;
  }
  iVar5 = (int)((ulong)((long)((iVar21 - iVar11) * 2) * 0x4545ea00) >> 0x20);
  iVar15 = (int)((ulong)((long)((iVar17 - iVar19) * 4) * 0x539eba80) >> 0x20);
  iVar8 = (int)((ulong)((long)((iVar9 - iVar14) * 4) * 0x539eba80) >> 0x20);
  iVar12 = (int)((ulong)((long)((iVar16 - iVar1) * 2) * 0x4545ea00) >> 0x20);
  iVar3 = (int)((ulong)((long)((iVar12 - iVar8) * 2) * 0x5a827980) >> 0x20);
  iVar2 = iVar12 + iVar8 + iVar3;
  iVar13 = (int)((ulong)((long)((iVar5 - iVar15) * 2) * 0x5a827980) >> 0x20);
  iVar8 = iVar5 + iVar15 + iVar13;
  iVar15 = (int)((ulong)((long)(((iVar1 + iVar16) - (iVar14 + iVar9)) * 2) * 0x5a827980) >> 0x20);
  iVar5 = iVar3 + iVar15;
  iVar12 = iVar1 + iVar16 + iVar14 + iVar9 + iVar2;
  iVar2 = iVar2 + iVar15;
  iVar16 = (int)((ulong)((long)(((iVar11 + iVar21) - (iVar19 + iVar17)) * 2) * 0x5a827980) >> 0x20);
  param_1[0xd] = iVar3 + iVar13;
  param_1[9] = iVar5 + iVar16;
  param_1[0xb] = iVar5 + iVar13;
  param_1[1] = iVar11 + iVar21 + iVar19 + iVar17 + iVar12;
  param_1[3] = iVar12 + iVar8;
  param_1[5] = iVar2 + iVar8;
  param_1[7] = iVar2 + iVar16;
  param_1[0xf] = iVar3;
  return;
}

