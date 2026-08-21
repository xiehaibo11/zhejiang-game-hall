
void jpeg_fdct_4x2(int *param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  memset(param_1,0,0x100);
  pbVar3 = (byte *)(*param_2 + (ulong)param_3);
                    /* try { // try from 011060b8 to 0120615b has its CatchHandler @ 011060b8
                       catch() { ... } // from try @ 011060b8 with catch @ 011060b8
                       catch() { ... } // from try @ 0110617c with catch @ 011060b8 */
  iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
  lVar9 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  iVar2 = (uint)pbVar3[2] + (uint)pbVar3[1];
  lVar10 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  lVar13 = (lVar10 + lVar9) * 0x1151 + 0x80;
  lVar9 = lVar13 + lVar9 * 0x187e;
  lVar13 = lVar13 + lVar10 * -0x3b21;
  iVar4 = (iVar1 - iVar2) * 0x20;
  iVar1 = (iVar2 + iVar1) * 0x20 + -0x4000;
  *param_1 = iVar1;
  param_1[1] = (int)((ulong)lVar9 >> 8);
  param_1[2] = iVar4;
  param_1[3] = (int)((ulong)lVar13 >> 8);
  uVar12 = (long)iVar4 | 2;
  uVar14 = (long)iVar1 | 2;
  pbVar3 = (byte *)(param_2[1] + (ulong)param_3);
  iVar1 = (uint)pbVar3[3] + (uint)*pbVar3;
  lVar11 = (ulong)*pbVar3 - (ulong)pbVar3[3];
  iVar2 = (uint)pbVar3[2] + (uint)pbVar3[1];
  lVar5 = (ulong)pbVar3[1] - (ulong)pbVar3[2];
  lVar6 = (lVar5 + lVar11) * 0x1151 + 0x80;
                    /* try { // try from 0110615c to 01206163 has its CatchHandler @ 011061b8 */
  lVar9 = (lVar9 * 0x1000000 >> 0x20) + 2;
                    /* try { // try from 01106174 to 0120617b has its CatchHandler @ 011061b0 */
  lVar10 = (lVar13 * 0x1000000 >> 0x20) + 2;
  lVar7 = (long)((iVar1 - iVar2) * 0x20);
                    /* try { // try from 0110617c to 012061f7 has its CatchHandler @ 011060b8 */
  lVar8 = (long)((iVar2 + iVar1) * 0x20 + -0x4000);
  lVar13 = (lVar6 + lVar11 * 0x187e) * 0x1000000 >> 0x20;
  lVar5 = (lVar6 + lVar5 * -0x3b21) * 0x1000000 >> 0x20;
                    /* catch() { ... } // from try @ 01106174 with catch @ 011061b0 */
                    /* catch() { ... } // from try @ 0110615c with catch @ 011061b8 */
  *param_1 = (int)(uVar14 + lVar8 >> 2);
  param_1[1] = (int)((ulong)(lVar9 + lVar13) >> 2);
  param_1[8] = (int)(uVar14 - lVar8 >> 2);
  param_1[9] = (int)((ulong)(lVar9 - lVar13) >> 2);
  param_1[2] = (int)(uVar12 + lVar7 >> 2);
  param_1[3] = (int)((ulong)(lVar10 + lVar5) >> 2);
  param_1[10] = (int)(uVar12 - lVar7 >> 2);
  param_1[0xb] = (int)((ulong)(lVar10 - lVar5) >> 2);
  return;
}

