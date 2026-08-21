
undefined8 FT_Matrix_Invert(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  if (param_1 == (ulong *)0x0) {
    return 6;
  }
  uVar11 = *param_1;
  uVar6 = param_1[1];
  uVar13 = param_1[2];
  uVar7 = param_1[3];
                    /* try { // try from 0105a838 to 0115a847 has its CatchHandler @ 0105a860 */
  uVar5 = -uVar11;
  if (-1 < (long)uVar11) {
    uVar5 = uVar11;
  }
  iVar1 = 1;
  if (-1 >= (long)uVar11) {
    iVar1 = -1;
  }
  uVar11 = -uVar7;
  if (-1 < (long)uVar7) {
    uVar11 = uVar7;
  }
  iVar9 = -iVar1;
  if (-1 < (long)uVar7) {
    iVar9 = iVar1;
  }
  lVar14 = (long)(uVar11 * uVar5 + 0x8000) >> 0x10;
  lVar3 = -lVar14;
  if (-1 < iVar9) {
    lVar3 = lVar14;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105a838 with catch @ 0105a860
                        */
  uVar4 = -uVar6;
  if (-1 < (long)uVar6) {
    uVar4 = uVar6;
  }
  iVar9 = 1;
  if (-1 >= (long)uVar6) {
    iVar9 = -1;
  }
  uVar6 = -uVar13;
  if (-1 < (long)uVar13) {
    uVar6 = uVar13;
  }
                    /* catch() { ... } // from try @ 0105a8ac with catch @ 0105a874 */
  iVar2 = -iVar9;
  if (-1 < (long)uVar13) {
    iVar2 = iVar9;
  }
  lVar12 = (long)(uVar6 * uVar4 + 0x8000) >> 0x10;
  lVar14 = -lVar12;
  if (-1 < iVar2) {
    lVar14 = lVar12;
  }
  uVar10 = lVar3 - lVar14;
  if (uVar10 != 0) {
    iVar2 = -iVar9;
    uVar8 = -uVar10;
    if (-1 < (long)uVar10) {
      iVar2 = iVar9;
      uVar8 = uVar10;
    }
                    /* try { // try from 0105a8a4 to 0115a8ab has its CatchHandler @ 0105a960 */
    if ((long)uVar8 < 1) {
      uVar15 = 0x7fffffff;
    }
    else {
                    /* try { // try from 0105a8ac to 0115a97b has its CatchHandler @ 0105a874 */
      uVar15 = 0;
      if (uVar8 != 0) {
        uVar15 = ((uVar8 >> 1) + uVar4 * 0x10000) / uVar8;
      }
    }
    uVar4 = -uVar15;
    if (-1 < iVar2) {
      uVar4 = uVar15;
    }
    iVar9 = 1;
    if ((long)uVar13 < 0) {
      iVar9 = -1;
    }
    iVar2 = -iVar9;
    if (-1 < (long)uVar10) {
      iVar2 = iVar9;
    }
    param_1[1] = -uVar4;
    if ((long)uVar8 < 1) {
      uVar13 = 0x7fffffff;
    }
    else {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = (uVar6 * 0x10000 + (uVar8 >> 1)) / uVar8;
      }
    }
    uVar6 = -uVar13;
    if (-1 < iVar2) {
      uVar6 = uVar13;
    }
    iVar9 = 1;
    if ((long)uVar7 < 0) {
      iVar9 = -1;
    }
    iVar2 = -iVar9;
    if (-1 < (long)uVar10) {
      iVar2 = iVar9;
    }
    param_1[2] = -uVar6;
    iVar9 = -iVar1;
    if ((long)uVar8 < 1) {
      uVar5 = 0x7fffffff;
      if (iVar2 < 0) {
        uVar5 = 0xffffffff80000001;
      }
      *param_1 = uVar5;
      if (-1 < (long)uVar10) {
        iVar9 = iVar1;
      }
      uVar11 = 0x7fffffff;
    }
    else {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = ((uVar8 >> 1) + uVar11 * 0x10000) / uVar8;
      }
      uVar11 = -uVar13;
      if (-1 < iVar2) {
        uVar11 = uVar13;
      }
      *param_1 = uVar11;
                    /* catch() { ... } // from try @ 0105a8a4 with catch @ 0105a960 */
      if (-1 < (long)uVar10) {
        iVar9 = iVar1;
      }
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = ((uVar8 >> 1) + uVar5 * 0x10000) / uVar8;
      }
    }
    uVar5 = -uVar11;
    if (-1 < iVar9) {
      uVar5 = uVar11;
    }
    param_1[3] = uVar5;
    return 0;
  }
  return 6;
}

