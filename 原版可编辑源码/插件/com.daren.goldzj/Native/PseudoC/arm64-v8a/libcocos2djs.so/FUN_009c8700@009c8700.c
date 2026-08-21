
void FUN_009c8700(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  
LAB_009c8744:
  plVar12 = param_2 + -1;
LAB_009c8764:
  plVar15 = param_1;
  lVar10 = (long)param_2 - (long)plVar15;
  uVar7 = lVar10 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    return;
  case 2:
    lVar10 = *plVar15;
    if (*(int *)(lVar10 + 0x218) <= *(int *)(param_2[-1] + 0x218)) {
      return;
    }
    *plVar15 = param_2[-1];
    param_2[-1] = lVar10;
    return;
  case 3:
                    /* catch() { ... } // from try @ 009c8a64 with catch @ 009c8c30 */
    lVar10 = *plVar15;
    lVar11 = plVar15[1];
                    /* catch() { ... } // from try @ 009c8a58 with catch @ 009c8c34 */
    lVar13 = param_2[-1];
                    /* catch() { ... } // from try @ 009c8ab0 with catch @ 009c8c38
                       catch() { ... } // from try @ 009c8ba0 with catch @ 009c8c38 */
    iVar5 = *(int *)(lVar11 + 0x218);
    iVar1 = *(int *)(lVar10 + 0x218);
    if (iVar1 <= iVar5) {
      if (iVar5 <= *(int *)(lVar13 + 0x218)) {
        return;
      }
      plVar15[1] = lVar13;
      param_2[-1] = lVar11;
      lVar10 = *plVar15;
                    /* try { // try from 009c8d30 to 00ac8d3b has its CatchHandler @ 009c8f18 */
      if (*(int *)(lVar10 + 0x218) <= *(int *)(plVar15[1] + 0x218)) {
        return;
      }
                    /* try { // try from 009c8d3c to 00ac8d47 has its CatchHandler @ 009c8f14 */
      *plVar15 = plVar15[1];
      plVar15[1] = lVar10;
      return;
    }
                    /* catch() { ... } // from try @ 009c8a38 with catch @ 009c8c50 */
    if (*(int *)(lVar13 + 0x218) < iVar5) {
      *plVar15 = lVar13;
      param_2[-1] = lVar10;
      return;
    }
    *plVar15 = lVar11;
    plVar15[1] = lVar10;
                    /* try { // try from 009c8d48 to 00ac8e9b has its CatchHandler @ 009c8f2c */
    if (iVar1 <= *(int *)(param_2[-1] + 0x218)) {
      return;
    }
    plVar15[1] = param_2[-1];
    param_2[-1] = lVar10;
    return;
  case 4:
                    /* catch() { ... } // from try @ 009c8a70 with catch @ 009c8c60
                       catch() { ... } // from try @ 009c8ae8 with catch @ 009c8c60 */
    FUN_009c8d64(plVar15,plVar15 + 1,plVar15 + 2,plVar12);
    return;
  case 5:
    plVar12 = plVar15 + 2;
    plVar9 = plVar15 + 3;
    FUN_009c8d64(plVar15,plVar15 + 1,plVar12,plVar9);
    lVar10 = plVar15[3];
                    /* try { // try from 009c8cb8 to 00ac8d0f has its CatchHandler @ 009c8cb8
                       catch() { ... } // from try @ 009c8cb8 with catch @ 009c8cb8
                       catch() { ... } // from try @ 009c8e9c with catch @ 009c8cb8 */
    if (*(int *)(lVar10 + 0x218) <= *(int *)(param_2[-1] + 0x218)) {
      return;
    }
    *plVar9 = param_2[-1];
    param_2[-1] = lVar10;
    lVar10 = *plVar9;
    lVar11 = *plVar12;
    iVar5 = *(int *)(lVar10 + 0x218);
    if (*(int *)(lVar11 + 0x218) <= iVar5) {
      return;
    }
    *plVar12 = lVar10;
    *plVar9 = lVar11;
    lVar11 = plVar15[1];
    if (*(int *)(lVar11 + 0x218) <= iVar5) {
      return;
    }
    lVar13 = *plVar15;
    plVar15[1] = lVar10;
    plVar15[2] = lVar11;
    if (*(int *)(lVar13 + 0x218) <= iVar5) {
      return;
    }
                    /* try { // try from 009c8d10 to 00ac8d27 has its CatchHandler @ 009c8f1c */
    *plVar15 = lVar10;
    plVar15[1] = lVar13;
    return;
  }
  if (0xf7 < lVar10) {
    uVar6 = uVar7;
    if ((long)uVar7 < 0) {
      uVar6 = uVar7 + 1;
    }
                    /* try { // try from 009c878c to 00ac87a3 has its CatchHandler @ 009c897c */
    plVar9 = (long *)((long)plVar15 + (uVar6 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      lVar11 = *plVar9;
      lVar10 = *plVar15;
      lVar13 = *plVar12;
      iVar5 = *(int *)(lVar11 + 0x218);
      iVar1 = *(int *)(lVar10 + 0x218);
      if (iVar5 < iVar1) {
        if (*(int *)(lVar13 + 0x218) < iVar5) {
          *plVar15 = lVar13;
          *plVar12 = lVar10;
          iVar5 = 1;
        }
        else {
          *plVar15 = lVar11;
          *plVar9 = lVar10;
          if (iVar1 <= *(int *)(*plVar12 + 0x218)) goto LAB_009c88f8;
          *plVar9 = *plVar12;
          *plVar12 = lVar10;
LAB_009c88e8:
          iVar5 = 2;
        }
      }
      else if (*(int *)(lVar13 + 0x218) < iVar5) {
        *plVar9 = lVar13;
        *plVar12 = lVar11;
        lVar10 = *plVar15;
        if (*(int *)(*plVar9 + 0x218) < *(int *)(lVar10 + 0x218)) {
          *plVar15 = *plVar9;
          *plVar9 = lVar10;
          goto LAB_009c88e8;
        }
LAB_009c88f8:
        iVar5 = 1;
                    /* try { // try from 009c88fc to 00ac89e3 has its CatchHandler @ 009c8734 */
      }
      else {
        iVar5 = 0;
      }
    }
    else {
      uVar6 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar6 = uVar7;
      }
                    /* try { // try from 009c87ac to 00ac87b7 has its CatchHandler @ 009c8978 */
      lVar10 = (uVar6 & 0x7ffffffffffffffc) * 2;
      plVar8 = (long *)((long)plVar15 + lVar10);
      plVar17 = (long *)((long)plVar9 + lVar10);
                    /* try { // try from 009c87b8 to 00ac87c3 has its CatchHandler @ 009c8974 */
                    /* try { // try from 009c87c4 to 00ac88fb has its CatchHandler @ 009c898c */
      iVar5 = FUN_009c8d64(plVar15,plVar8,plVar9,plVar17);
      lVar10 = *plVar17;
      if (*(int *)(*plVar12 + 0x218) < *(int *)(lVar10 + 0x218)) {
        *plVar17 = *plVar12;
        *plVar12 = lVar10;
        lVar10 = *plVar9;
        if (*(int *)(*plVar17 + 0x218) < *(int *)(lVar10 + 0x218)) {
          *plVar9 = *plVar17;
          *plVar17 = lVar10;
          lVar10 = *plVar8;
          if (*(int *)(*plVar9 + 0x218) < *(int *)(lVar10 + 0x218)) {
            *plVar8 = *plVar9;
            *plVar9 = lVar10;
            lVar10 = *plVar15;
            if (*(int *)(*plVar8 + 0x218) < *(int *)(lVar10 + 0x218)) {
              *plVar15 = *plVar8;
              *plVar8 = lVar10;
              iVar5 = iVar5 + 4;
            }
            else {
              iVar5 = iVar5 + 3;
            }
          }
          else {
            iVar5 = iVar5 + 2;
          }
        }
        else {
          iVar5 = iVar5 + 1;
        }
      }
    }
    lVar10 = *plVar15;
    iVar1 = *(int *)(lVar10 + 0x218);
    plVar8 = plVar12;
    plVar17 = param_2 + -2;
    if (*(int *)(*plVar9 + 0x218) <= iVar1) {
LAB_009c8930:
      plVar8 = plVar17;
      if (plVar15 != plVar8) goto code_r0x009c8938;
      plVar9 = plVar15 + 1;
                    /* try { // try from 009c8a38 to 00ac8a4f has its CatchHandler @ 009c8c50 */
      if (*(int *)(*plVar12 + 0x218) <= iVar1) {
        if (plVar9 == plVar12) {
          return;
        }
        plVar9 = plVar15 + 2;
        while (lVar10 = plVar9[-1], *(int *)(lVar10 + 0x218) <= iVar1) {
                    /* try { // try from 009c8a58 to 00ac8a63 has its CatchHandler @ 009c8c34 */
          plVar9 = plVar9 + 1;
          if (param_2 == plVar9) {
            return;
          }
        }
        plVar9[-1] = *plVar12;
        *plVar12 = lVar10;
      }
                    /* try { // try from 009c8a70 to 00ac8a9b has its CatchHandler @ 009c8c60 */
      if (plVar9 == plVar12) {
        return;
      }
      while( true ) {
        do {
          param_1 = plVar9;
          plVar9 = param_1 + 1;
          lVar10 = *param_1;
        } while (*(int *)(lVar10 + 0x218) <= *(int *)(*plVar15 + 0x218));
        do {
          plVar12 = plVar12 + -1;
        } while (*(int *)(*plVar15 + 0x218) < *(int *)(*plVar12 + 0x218));
                    /* try { // try from 009c8ab0 to 00ac8acb has its CatchHandler @ 009c8c38 */
        if (plVar12 <= param_1) break;
        *param_1 = *plVar12;
        *plVar12 = lVar10;
      }
      uVar18 = 4;
      goto LAB_009c8ac8;
    }
    goto LAB_009c8954;
  }
  lVar10 = *plVar15;
  lVar11 = plVar15[1];
  lVar14 = plVar15[2];
  iVar5 = *(int *)(lVar11 + 0x218);
  iVar1 = *(int *)(lVar10 + 0x218);
  iVar2 = *(int *)(lVar14 + 0x218);
  lVar13 = lVar14;
  if (iVar5 < iVar1) {
    if (iVar2 < iVar5) {
      *plVar15 = lVar14;
    }
    else {
      *plVar15 = lVar11;
      plVar15[1] = lVar10;
      if (iVar1 <= iVar2) goto LAB_009c8b94;
      plVar15[1] = lVar14;
    }
    plVar15[2] = lVar10;
    lVar13 = lVar10;
  }
  else if (iVar2 < iVar5) {
    plVar15[1] = lVar14;
    plVar15[2] = lVar11;
    lVar13 = lVar11;
    if (iVar2 < iVar1) {
      *plVar15 = lVar14;
      plVar15[1] = lVar10;
    }
  }
LAB_009c8b94:
  if (plVar15 + 3 == param_2) {
    return;
  }
                    /* try { // try from 009c8ba0 to 00ac8be3 has its CatchHandler @ 009c8c38 */
  lVar10 = 0;
  plVar12 = plVar15 + 3;
LAB_009c8bb4:
  lVar14 = *plVar12;
  iVar5 = *(int *)(lVar14 + 0x218);
  lVar11 = lVar10;
  if (iVar5 < *(int *)(lVar13 + 0x218)) {
    do {
      lVar13 = lVar11;
      *(undefined8 *)((long)plVar15 + lVar13 + 0x18) =
           *(undefined8 *)((long)plVar15 + lVar13 + 0x10);
      plVar9 = plVar15;
      if (lVar13 == -0x10) goto LAB_009c8c04;
                    /* try { // try from 009c8be4 to 00ac8cb7 has its CatchHandler @ 009c89e4 */
      lVar11 = lVar13 + -8;
    } while (iVar5 < *(int *)(*(long *)((long)plVar15 + lVar13 + 8) + 0x218));
    plVar9 = (long *)((long)plVar15 + lVar13 + 0x10);
LAB_009c8c04:
    *plVar9 = lVar14;
  }
  if (plVar12 + 1 == param_2) {
    return;
  }
  lVar13 = *plVar12;
  lVar10 = lVar10 + 8;
  plVar12 = plVar12 + 1;
  goto LAB_009c8bb4;
code_r0x009c8938:
  plVar17 = plVar8 + -1;
  if (*(int *)(*plVar8 + 0x218) < *(int *)(*plVar9 + 0x218)) goto code_r0x009c8948;
  goto LAB_009c8930;
code_r0x009c8948:
  *plVar15 = *plVar8;
  *plVar8 = lVar10;
  iVar5 = iVar5 + 1;
LAB_009c8954:
  plVar17 = plVar15 + 1;
  plVar3 = plVar9;
  plVar16 = plVar17;
  if (plVar17 < plVar8) {
    while( true ) {
      plVar9 = plVar3;
      plVar17 = plVar16 + -1;
      do {
        plVar16 = plVar17;
        plVar17 = plVar16 + 1;
                    /* catch() { ... } // from try @ 009c87c4 with catch @ 009c898c */
        lVar10 = *plVar17;
      } while (*(int *)(lVar10 + 0x218) < *(int *)(*plVar9 + 0x218));
      plVar16 = plVar16 + 2;
      do {
        plVar8 = plVar8 + -1;
      } while (*(int *)(*plVar9 + 0x218) <= *(int *)(*plVar8 + 0x218));
      if (plVar8 < plVar17) break;
      *plVar17 = *plVar8;
                    /* catch() { ... } // from try @ 009c87b8 with catch @ 009c8974 */
      *plVar8 = lVar10;
                    /* catch() { ... } // from try @ 009c87ac with catch @ 009c8978 */
      iVar5 = iVar5 + 1;
      plVar3 = plVar8;
                    /* catch() { ... } // from try @ 009c878c with catch @ 009c897c */
      if (plVar9 != plVar17) {
        plVar3 = plVar9;
      }
    }
    if (plVar17 == plVar9) goto LAB_009c89e8;
  }
  else if (plVar17 == plVar9) goto LAB_009c89e8;
  lVar10 = *plVar17;
  if (*(int *)(*plVar9 + 0x218) < *(int *)(lVar10 + 0x218)) {
    iVar5 = iVar5 + 1;
    *plVar17 = *plVar9;
                    /* try { // try from 009c89e4 to 00ac8a37 has its CatchHandler @ 009c89e4
                       catch() { ... } // from try @ 009c89e4 with catch @ 009c89e4
                       catch() { ... } // from try @ 009c8be4 with catch @ 009c89e4 */
    *plVar9 = lVar10;
  }
LAB_009c89e8:
  if (iVar5 == 0) {
    uVar7 = FUN_009c8eb0(plVar15,plVar17);
    uVar6 = FUN_009c8eb0(plVar17 + 1,param_2);
    if ((uVar6 & 1) != 0) goto LAB_009c8ad8;
    param_1 = plVar17 + 1;
    if ((uVar7 & 1) != 0) goto LAB_009c8764;
  }
  if ((long)param_2 - (long)plVar17 <= (long)plVar17 - (long)plVar15) {
                    /* try { // try from 009c8734 to 00ac878b has its CatchHandler @ 009c8734
                       catch() { ... } // from try @ 009c8734 with catch @ 009c8734
                       catch() { ... } // from try @ 009c88fc with catch @ 009c8734 */
    FUN_009c8700(plVar17 + 1,param_2);
    param_1 = plVar15;
    param_2 = plVar17;
    goto LAB_009c8744;
  }
  FUN_009c8700(plVar15,plVar17);
  param_1 = plVar17 + 1;
  goto LAB_009c8764;
LAB_009c8ad8:
  bVar4 = (uVar7 & 1) == 0;
  if (bVar4) {
    param_2 = plVar17;
  }
  uVar18 = 1;
  if (bVar4) {
    uVar18 = 2;
  }
                    /* try { // try from 009c8ae8 to 00ac8b67 has its CatchHandler @ 009c8c60 */
  param_1 = plVar15;
  if (4 < uVar18) {
    return;
  }
LAB_009c8ac8:
  if ((1 << uVar18 & 0x15U) == 0) {
    return;
  }
  goto LAB_009c8744;
}

