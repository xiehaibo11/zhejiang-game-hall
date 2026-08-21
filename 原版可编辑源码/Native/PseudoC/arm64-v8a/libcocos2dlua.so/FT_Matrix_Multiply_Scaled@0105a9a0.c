
void FT_Matrix_Multiply_Scaled(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar15 = *param_1;
    lVar12 = *param_2;
    iVar3 = 1;
    if (lVar15 < 0) {
      iVar3 = -1;
    }
    iVar14 = -iVar3;
    if (-1 < lVar12) {
      iVar14 = iVar3;
    }
    uVar4 = param_3 * -0x10000;
    if (-1 < param_3) {
      uVar4 = param_3 * 0x10000;
    }
    iVar1 = -iVar14;
    if (-1 < param_3) {
      iVar1 = iVar14;
    }
    if ((long)uVar4 < 1) {
      lVar10 = 0x7fffffff;
    }
    else {
      lVar5 = -lVar12;
      if (-1 < lVar12) {
        lVar5 = lVar12;
      }
      lVar13 = -lVar15;
      if (-1 < lVar15) {
        lVar13 = lVar15;
      }
      lVar10 = 0;
      if (uVar4 != 0) {
        lVar10 = (long)(lVar5 * lVar13 + (uVar4 >> 1)) / (long)uVar4;
      }
    }
    lVar17 = param_1[1];
    lVar13 = param_2[2];
    lVar5 = -lVar10;
    if (-1 < iVar1) {
      lVar5 = lVar10;
    }
    iVar14 = 1;
    if (lVar17 < 0) {
      iVar14 = -1;
    }
    iVar1 = -iVar14;
    if (-1 < lVar13) {
      iVar1 = iVar14;
    }
    iVar2 = -iVar1;
    if (-1 < param_3) {
      iVar2 = iVar1;
    }
    if ((long)uVar4 < 1) {
      lVar10 = 0x7fffffff;
    }
    else {
      lVar6 = -lVar13;
      if (-1 < lVar13) {
        lVar6 = lVar13;
      }
      lVar11 = -lVar17;
      if (-1 < lVar17) {
        lVar11 = lVar17;
      }
      lVar10 = 0;
      if (uVar4 != 0) {
        lVar10 = (long)(lVar6 * lVar11 + (uVar4 >> 1)) / (long)uVar4;
      }
    }
    lVar11 = param_2[1];
    lVar6 = -lVar10;
    if (-1 < iVar2) {
      lVar6 = lVar10;
    }
    iVar1 = -iVar3;
    if (-1 < lVar11) {
      iVar1 = iVar3;
    }
    iVar3 = -iVar1;
    if (-1 < param_3) {
      iVar3 = iVar1;
    }
    if ((long)uVar4 < 1) {
      lVar15 = 0x7fffffff;
    }
    else {
      lVar10 = -lVar11;
      if (-1 < lVar11) {
        lVar10 = lVar11;
      }
      lVar16 = -lVar15;
      if (-1 < lVar15) {
        lVar16 = lVar15;
      }
      lVar15 = 0;
      if (uVar4 != 0) {
        lVar15 = (long)(lVar10 * lVar16 + (uVar4 >> 1)) / (long)uVar4;
      }
    }
    lVar16 = param_2[3];
    lVar10 = -lVar15;
    if (-1 < iVar3) {
      lVar10 = lVar15;
    }
    iVar3 = -iVar14;
    if (-1 < lVar16) {
      iVar3 = iVar14;
    }
    iVar14 = -iVar3;
    if (-1 < param_3) {
      iVar14 = iVar3;
    }
    if ((long)uVar4 < 1) {
      lVar15 = 0x7fffffff;
    }
    else {
      lVar18 = -lVar16;
      if (-1 < lVar16) {
        lVar18 = lVar16;
      }
      lVar9 = -lVar17;
      if (-1 < lVar17) {
        lVar9 = lVar17;
      }
      lVar15 = 0;
      if (uVar4 != 0) {
        lVar15 = (long)(lVar18 * lVar9 + (uVar4 >> 1)) / (long)uVar4;
      }
    }
                    /* try { // try from 0105aaec to 0115aafb has its CatchHandler @ 0105ab0c */
    lVar18 = param_1[2];
    lVar17 = -lVar15;
    if (-1 < iVar14) {
      lVar17 = lVar15;
    }
    iVar3 = 1;
    if (lVar18 < 0) {
      iVar3 = -1;
    }
    iVar14 = -iVar3;
    if (-1 < lVar12) {
      iVar14 = iVar3;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105aaec with catch @ 0105ab0c
                        */
    iVar1 = -iVar14;
    if (-1 < param_3) {
      iVar1 = iVar14;
    }
    if ((long)uVar4 < 1) {
      lVar12 = 0x7fffffff;
    }
    else {
      lVar15 = -lVar18;
      if (-1 < lVar18) {
        lVar15 = lVar18;
      }
      lVar9 = -lVar12;
      if (-1 < lVar12) {
        lVar9 = lVar12;
      }
      lVar12 = 0;
      if (uVar4 != 0) {
        lVar12 = (long)(lVar9 * lVar15 + (uVar4 >> 1)) / (long)uVar4;
      }
    }
    lVar9 = param_1[3];
                    /* try { // try from 0105ab48 to 0115ab57 has its CatchHandler @ 0105ab70 */
    lVar15 = -lVar12;
    if (-1 < iVar1) {
      lVar15 = lVar12;
    }
    iVar14 = 1;
    if (lVar9 < 0) {
      iVar14 = -1;
    }
    iVar1 = -iVar14;
    if (-1 < lVar13) {
      iVar1 = iVar14;
    }
    iVar2 = -iVar1;
    if (-1 < param_3) {
      iVar2 = iVar1;
    }
    if ((long)uVar4 < 1) {
      lVar12 = 0x7fffffff;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105ab48 with catch @ 0105ab70
                        */
      lVar8 = -lVar9;
      if (-1 < lVar9) {
        lVar8 = lVar9;
      }
      lVar7 = -lVar13;
      if (-1 < lVar13) {
        lVar7 = lVar13;
      }
      lVar12 = 0;
      if (uVar4 != 0) {
        lVar12 = (long)(lVar7 * lVar8 + (uVar4 >> 1)) / (long)uVar4;
      }
    }
    lVar13 = -lVar12;
    if (-1 < iVar2) {
      lVar13 = lVar12;
    }
    iVar1 = -iVar3;
    if (-1 < lVar11) {
      iVar1 = iVar3;
    }
                    /* try { // try from 0105abac to 0115abbb has its CatchHandler @ 0105abd4 */
    iVar3 = -iVar1;
    if (-1 < param_3) {
      iVar3 = iVar1;
    }
    if ((long)uVar4 < 1) {
                    /* try { // try from 0105ac18 to 0115ac1f has its CatchHandler @ 0105acd4 */
      lVar12 = 0x7fffffff;
      if (iVar3 < 0) {
        lVar12 = -0x7fffffff;
      }
      iVar3 = -iVar14;
                    /* try { // try from 0105ac20 to 0115acef has its CatchHandler @ 0105abe8 */
      if (-1 < lVar16) {
        iVar3 = iVar14;
      }
      iVar14 = -iVar3;
      if (-1 < param_3) {
        iVar14 = iVar3;
      }
      lVar11 = 0x7fffffff;
    }
    else {
      lVar8 = -lVar9;
      if (-1 < lVar9) {
        lVar8 = lVar9;
      }
      lVar12 = -lVar18;
      if (-1 < lVar18) {
        lVar12 = lVar18;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105abac with catch @ 0105abd4
                        */
      lVar18 = -lVar11;
      if (-1 < lVar11) {
        lVar18 = lVar11;
      }
                    /* catch() { ... } // from try @ 0105ac20 with catch @ 0105abe8 */
      lVar11 = 0;
      if (uVar4 != 0) {
        lVar11 = (long)((uVar4 >> 1) + lVar18 * lVar12) / (long)uVar4;
      }
      lVar12 = -lVar11;
      if (-1 < iVar3) {
        lVar12 = lVar11;
      }
      iVar3 = -iVar14;
      lVar18 = -lVar16;
      if (-1 < lVar16) {
        iVar3 = iVar14;
        lVar18 = lVar16;
      }
      iVar14 = -iVar3;
      if (-1 < param_3) {
        iVar14 = iVar3;
      }
      lVar11 = 0;
      if (uVar4 != 0) {
        lVar11 = (long)((uVar4 >> 1) + lVar18 * lVar8) / (long)uVar4;
      }
    }
    lVar16 = -lVar11;
    if (-1 < iVar14) {
      lVar16 = lVar11;
    }
    *param_2 = lVar6 + lVar5;
    param_2[1] = lVar17 + lVar10;
    param_2[2] = lVar13 + lVar15;
    param_2[3] = lVar16 + lVar12;
  }
  return;
}

