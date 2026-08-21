
void FT_Vector_Transform_Scaled(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar8 = *param_1;
    lVar9 = *param_2;
    iVar3 = 1;
    if (lVar8 < 0) {
      iVar3 = -1;
    }
    iVar4 = -iVar3;
    if (-1 < lVar9) {
      iVar4 = iVar3;
    }
    uVar5 = param_3 * -0x10000;
    if (-1 < param_3) {
      uVar5 = param_3 * 0x10000;
    }
    iVar1 = -iVar4;
    if (-1 < param_3) {
      iVar1 = iVar4;
    }
    if ((long)uVar5 < 1) {
      lVar9 = 0x7fffffff;
    }
    else {
      lVar6 = -lVar9;
      if (-1 < lVar9) {
        lVar6 = lVar9;
      }
      lVar10 = -lVar8;
      if (-1 < lVar8) {
        lVar10 = lVar8;
      }
      lVar9 = 0;
      if (uVar5 != 0) {
        lVar9 = (long)(lVar6 * lVar10 + (uVar5 >> 1)) / (long)uVar5;
      }
    }
    lVar10 = param_1[1];
    lVar11 = param_2[1];
    lVar6 = -lVar9;
    if (-1 < iVar1) {
      lVar6 = lVar9;
    }
    iVar4 = 1;
    if (lVar10 < 0) {
      iVar4 = -1;
    }
    iVar1 = -iVar4;
    if (-1 < lVar11) {
      iVar1 = iVar4;
    }
    iVar2 = -iVar1;
    if (-1 < param_3) {
      iVar2 = iVar1;
    }
                    /* catch() { ... } // from try @ 0105ac18 with catch @ 0105acd4 */
    if ((long)uVar5 < 1) {
      lVar9 = 0x7fffffff;
    }
    else {
      lVar12 = -lVar11;
      if (-1 < lVar11) {
        lVar12 = lVar11;
      }
      lVar11 = -lVar10;
      if (-1 < lVar10) {
        lVar11 = lVar10;
      }
      lVar9 = 0;
      if (uVar5 != 0) {
        lVar9 = (long)(lVar12 * lVar11 + (uVar5 >> 1)) / (long)uVar5;
      }
    }
    lVar12 = param_2[2];
    lVar11 = -lVar9;
    if (-1 < iVar2) {
      lVar11 = lVar9;
    }
    iVar1 = -iVar3;
    if (-1 < lVar12) {
      iVar1 = iVar3;
    }
    iVar3 = -iVar1;
    if (-1 < param_3) {
      iVar3 = iVar1;
    }
    if ((long)uVar5 < 1) {
      lVar8 = 0x7fffffff;
    }
    else {
      lVar9 = -lVar12;
      if (-1 < lVar12) {
        lVar9 = lVar12;
      }
      lVar12 = -lVar8;
      if (-1 < lVar8) {
        lVar12 = lVar8;
      }
      lVar8 = 0;
      if (uVar5 != 0) {
        lVar8 = (long)(lVar9 * lVar12 + (uVar5 >> 1)) / (long)uVar5;
      }
    }
    lVar12 = param_2[3];
    lVar9 = -lVar8;
    if (-1 < iVar3) {
      lVar9 = lVar8;
    }
    iVar3 = -iVar4;
    if (-1 < lVar12) {
      iVar3 = iVar4;
    }
    iVar4 = -iVar3;
    if (-1 < param_3) {
      iVar4 = iVar3;
    }
    if ((long)uVar5 < 1) {
      lVar8 = 0x7fffffff;
    }
    else {
      lVar7 = -lVar12;
      if (-1 < lVar12) {
        lVar7 = lVar12;
      }
      lVar12 = -lVar10;
      if (-1 < lVar10) {
        lVar12 = lVar10;
      }
      lVar8 = 0;
      if (uVar5 != 0) {
        lVar8 = (long)(lVar7 * lVar12 + (uVar5 >> 1)) / (long)uVar5;
      }
    }
    lVar10 = -lVar8;
    if (-1 < iVar4) {
      lVar10 = lVar8;
    }
    *param_1 = lVar11 + lVar6;
    param_1[1] = lVar10 + lVar9;
  }
  return;
}

