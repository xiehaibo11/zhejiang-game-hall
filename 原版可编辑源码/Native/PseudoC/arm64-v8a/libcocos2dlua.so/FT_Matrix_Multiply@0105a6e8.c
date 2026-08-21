
void FT_Matrix_Multiply(long *param_1,long *param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
                    /* catch() { ... } // from try @ 0105a630 with catch @ 0105a6ec */
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar11 = param_1[2];
    lVar14 = param_1[3];
    lVar12 = param_2[2];
    lVar15 = param_2[3];
    lVar13 = *param_2;
    lVar19 = param_2[1];
    lVar10 = -lVar14;
    if (-1 < lVar14) {
      lVar10 = lVar14;
    }
    iVar4 = 1;
    if (-1 >= lVar14) {
      iVar4 = -1;
    }
    lVar20 = *param_1;
    lVar16 = param_1[1];
    lVar14 = -lVar11;
    if (-1 < lVar11) {
      lVar14 = lVar11;
    }
    iVar9 = 1;
    if (-1 >= lVar11) {
      iVar9 = -1;
    }
    iVar1 = -iVar4;
    if (-1 < lVar15) {
      iVar1 = iVar4;
    }
    iVar2 = -iVar9;
    if (-1 < lVar19) {
      iVar2 = iVar9;
    }
    iVar3 = -iVar4;
    if (-1 < lVar12) {
      iVar3 = iVar4;
    }
    iVar4 = -iVar9;
    if (-1 < lVar13) {
      iVar4 = iVar9;
    }
    lVar11 = -lVar16;
    if (-1 < lVar16) {
      lVar11 = lVar16;
    }
    iVar9 = 1;
    if (-1 >= lVar16) {
      iVar9 = -1;
    }
    lVar16 = -lVar15;
    if (-1 < lVar15) {
      lVar16 = lVar15;
    }
    iVar5 = -iVar9;
    if (-1 < lVar15) {
      iVar5 = iVar9;
    }
    lVar15 = -lVar20;
    if (-1 < lVar20) {
      lVar15 = lVar20;
    }
    iVar6 = 1;
    if (-1 >= lVar20) {
      iVar6 = -1;
    }
    lVar20 = -lVar19;
    if (-1 < lVar19) {
      lVar20 = lVar19;
    }
    iVar7 = -iVar6;
    if (-1 < lVar19) {
      iVar7 = iVar6;
    }
    lVar19 = -lVar12;
    if (-1 < lVar12) {
      lVar19 = lVar12;
    }
    iVar8 = -iVar9;
    if (-1 < lVar12) {
      iVar8 = iVar9;
    }
                    /* try { // try from 0105a778 to 0115a787 has its CatchHandler @ 0105a798 */
    lVar12 = -lVar13;
    if (-1 < lVar13) {
      lVar12 = lVar13;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105a778 with catch @ 0105a798
                        */
    iVar9 = -iVar6;
    if (-1 < lVar13) {
      iVar9 = iVar6;
    }
    lVar17 = lVar12 * lVar15 + 0x8000 >> 0x10;
    lVar18 = lVar19 * lVar11 + 0x8000 >> 0x10;
    lVar13 = -lVar17;
    if (-1 < iVar9) {
      lVar13 = lVar17;
    }
    lVar17 = lVar20 * lVar15 + 0x8000 >> 0x10;
    lVar15 = -lVar18;
    if (-1 < iVar8) {
      lVar15 = lVar18;
    }
    lVar18 = lVar16 * lVar11 + 0x8000 >> 0x10;
    lVar11 = -lVar17;
    if (-1 < iVar7) {
      lVar11 = lVar17;
    }
                    /* try { // try from 0105a7d4 to 0115a7e3 has its CatchHandler @ 0105a7fc */
    lVar17 = lVar10 * lVar19 + 0x8000 >> 0x10;
    lVar19 = lVar14 * lVar12 + 0x8000 >> 0x10;
    lVar12 = -lVar18;
    if (-1 < iVar5) {
      lVar12 = lVar18;
    }
    lVar18 = -lVar19;
    if (-1 < iVar4) {
      lVar18 = lVar19;
    }
    lVar19 = lVar14 * lVar20 + 0x8000 >> 0x10;
    lVar14 = -lVar17;
    if (-1 < iVar3) {
      lVar14 = lVar17;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105a7d4 with catch @ 0105a7fc
                        */
    lVar20 = lVar10 * lVar16 + 0x8000 >> 0x10;
    *param_2 = lVar15 + lVar13;
    param_2[1] = lVar12 + lVar11;
    lVar10 = -lVar19;
    if (-1 < iVar2) {
      lVar10 = lVar19;
    }
    lVar11 = -lVar20;
    if (-1 < iVar1) {
      lVar11 = lVar20;
    }
    param_2[2] = lVar14 + lVar18;
    param_2[3] = lVar11 + lVar10;
  }
  return;
}

