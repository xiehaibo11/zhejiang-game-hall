
void jpeg_fdct_7x7(void *param_1,long param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
                    /* try { // try from 0110147c to 012014fb has its CatchHandler @ 0110135c */
  memset(param_1,0,0x100);
  lVar15 = 0;
  do {
    plVar1 = (long *)(param_2 + lVar15);
    piVar2 = (int *)((long)param_1 + lVar15 * 4);
    lVar15 = lVar15 + 8;
                    /* catch() { ... } // from try @ 0110146c with catch @ 011014e8 */
    pbVar3 = (byte *)(*plVar1 + (ulong)param_3);
                    /* try { // try from 011014fc to 0120157f has its CatchHandler @ 011014fc
                       catch() { ... } // from try @ 011014fc with catch @ 011014fc
                       catch() { ... } // from try @ 01101590 with catch @ 011014fc */
    bVar4 = pbVar3[3];
    lVar7 = (ulong)pbVar3[6] + (ulong)*pbVar3;
    lVar8 = (ulong)pbVar3[5] + (ulong)pbVar3[1];
    lVar11 = (ulong)pbVar3[4] + (ulong)pbVar3[2];
    lVar9 = (ulong)*pbVar3 - (ulong)pbVar3[6];
    lVar12 = (ulong)pbVar3[1] - (ulong)pbVar3[5];
    lVar14 = (ulong)pbVar3[2] - (ulong)pbVar3[4];
    lVar16 = (lVar8 - lVar11) * 0xa12;
    lVar17 = (lVar7 - lVar8) * 0x1c37 + 0x400;
    lVar18 = (lVar12 + lVar9) * 0x1def;
    lVar10 = (lVar14 + lVar9) * 0x13a3;
    lVar6 = (lVar11 + lVar7 + (ulong)bVar4 * -4) * 0xb50;
                    /* try { // try from 01101580 to 0120158f has its CatchHandler @ 0110165c */
    lVar13 = (lVar14 + lVar12) * -0x2c1f;
                    /* try { // try from 01101590 to 0120166f has its CatchHandler @ 011014fc */
    piVar2[6] = (int)((ulong)(lVar17 + (lVar7 - lVar11) * -0x1d76 + lVar6) >> 0xb);
    *piVar2 = ((uint)bVar4 + (int)lVar8 + (int)(lVar11 + lVar7)) * 4 + -0xe00;
    piVar2[1] = (int)((ulong)((lVar9 - lVar12) * -0x573 + 0x400 + lVar18 + lVar10) >> 0xb);
    piVar2[2] = (int)((lVar7 - lVar11) * 0x1d76 + lVar16 + lVar6 + 0x400U >> 0xb);
    piVar2[3] = (int)((lVar9 - lVar12) * 0x573 + lVar18 + lVar13 + 0x400U >> 0xb);
    piVar2[4] = (int)(lVar17 + lVar16 + (lVar8 + (ulong)(uint)bVar4 * -2) * -0x16a1 >> 0xb);
    piVar2[5] = (int)(lVar10 + lVar14 * 0x3bde + lVar13 + 0x400U >> 0xb);
  } while (lVar15 != 0x38);
  lVar15 = 0;
  do {
    piVar2 = (int *)((long)param_1 + lVar15);
    lVar16 = (long)piVar2[0x18];
    iVar5 = piVar2[0x10] - piVar2[0x20];
    lVar9 = (long)(piVar2[0x30] + *piVar2);
                    /* catch() { ... } // from try @ 01101580 with catch @ 0110165c */
    lVar12 = (long)(piVar2[0x28] + piVar2[8]);
    lVar13 = (long)(piVar2[0x20] + piVar2[0x10]);
    lVar7 = (long)(*piVar2 - piVar2[0x30]);
    lVar11 = (long)(piVar2[8] - piVar2[0x28]);
    lVar14 = (lVar12 - lVar13) * 0xd27;
    lVar10 = (lVar9 - lVar12) * 0x24da + 0x4000;
    lVar18 = (lVar11 + lVar7) * 0x2719;
    lVar8 = (iVar5 + lVar7) * 0x19a5;
    lVar6 = (iVar5 + lVar11) * -0x39a0;
    lVar17 = (lVar13 + lVar9 + lVar16 * -4) * 0xec7;
    lVar15 = lVar15 + 4;
    piVar2[0x30] = (int)((ulong)(lVar10 + (lVar9 - lVar13) * -0x267a + lVar17) >> 0xf);
    *piVar2 = (int)((lVar16 + lVar12 + lVar13 + lVar9) * 0x29cc + 0x4000U >> 0xf);
    piVar2[0x20] = (int)((ulong)(lVar10 + lVar14 + (lVar12 + lVar16 * -2) * -0x1d8e) >> 0xf);
    piVar2[0x10] = (int)((lVar9 - lVar13) * 0x267a + lVar14 + lVar17 + 0x4000U >> 0xf);
    piVar2[8] = (int)((ulong)((lVar7 - lVar11) * -0x71e + 0x4000 + lVar18 + lVar8) >> 0xf);
    piVar2[0x18] = (int)((lVar7 - lVar11) * 0x71e + lVar18 + lVar6 + 0x4000U >> 0xf);
    piVar2[0x28] = (int)(lVar8 + (long)iVar5 * 0x4e31 + lVar6 + 0x4000U >> 0xf);
  } while ((int)lVar15 != 0x1c);
  return;
}

