
undefined8 FUN_010b05f0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  
  lVar2 = param_2[1];
  plVar11 = (long *)(param_3 + 0x198);
  lVar4 = *param_2 * 4;
  lVar7 = lVar2 * 4;
  *(long *)(param_3 + 0x198) = lVar4;
  *(long *)(param_3 + 0x1a0) = lVar7;
  lVar6 = *param_1;
  lVar3 = *(long *)(param_3 + 0x188);
  *(long *)(param_3 + 0x1a8) = lVar6 << 2;
  lVar10 = param_1[1];
  lVar6 = lVar4 + lVar6 * -8 + *(long *)(param_3 + 0x180);
  lVar1 = -lVar6;
  if (-1 < lVar6) {
    lVar1 = lVar6;
  }
  lVar9 = lVar10 * 4;
  *(long *)(param_3 + 0x1b0) = lVar9;
  *(long *)(param_3 + 0x1b8) = *(long *)(param_3 + 0x180);
  lVar6 = lVar7 + lVar10 * -8 + lVar3;
  lVar10 = -lVar6;
  if (-1 < lVar6) {
    lVar10 = lVar6;
  }
  if (lVar10 <= lVar1) {
    lVar10 = lVar1;
  }
  *(long *)(param_3 + 0x1c0) = lVar3;
  if (0x3f < lVar10) {
    lVar6 = lVar9;
    if (lVar7 <= lVar9) {
      lVar6 = lVar7;
    }
    if (lVar9 + lVar2 * -4 == 0 || lVar9 < lVar7) {
      lVar9 = lVar7;
    }
    lVar1 = lVar3;
    if (lVar6 <= lVar3) {
      lVar1 = lVar6;
    }
    if (lVar1 >> 8 < *(long *)(param_3 + 0x128)) {
      if (lVar3 <= lVar9) {
        lVar3 = lVar9;
      }
      if (*(long *)(param_3 + 0x120) <= lVar3 >> 8) {
        iVar5 = 0;
        do {
          lVar10 = lVar10 >> 2;
          iVar5 = iVar5 + 1;
        } while (0x40 < lVar10);
        uVar14 = 0;
        iVar12 = 0;
        *(int *)(param_3 + 0x7a8) = iVar5;
        if (0 < iVar5) goto LAB_010b0708;
        goto LAB_010b06c8;
      }
    }
  }
  uVar14 = 0;
  do {
                    /* try { // try from 010b06cc to 011b06d3 has its CatchHandler @ 010b093c */
    FUN_010b0a94(param_3,lVar4,plVar11[1]);
    uVar13 = (int)uVar14 - 1;
    uVar14 = (ulong)uVar13;
    plVar11 = plVar11 + -4;
    while( true ) {
      if ((int)uVar13 < 0) {
        return 0;
      }
      iVar12 = (int)uVar14;
      iVar5 = *(int *)(param_3 + (long)iVar12 * 4 + 0x7a8);
      if (iVar5 < 1) break;
LAB_010b0708:
      plVar8 = plVar11 + 4;
      plVar11[8] = *plVar8;
      lVar6 = plVar11[2] + *plVar8;
      lVar1 = *plVar11 + plVar11[2];
      if (lVar6 < 0) {
        lVar6 = lVar6 + 1;
      }
      if (lVar1 < 0) {
        lVar1 = lVar1 + 1;
      }
                    /* try { // try from 010b0738 to 011b073f has its CatchHandler @ 010b08dc */
                    /* try { // try from 010b0740 to 011b07c3 has its CatchHandler @ 010b0588 */
      plVar11[6] = lVar6 >> 1;
      lVar6 = (lVar1 >> 1) + (lVar6 >> 1);
      if (lVar6 < 0) {
        lVar6 = lVar6 + 1;
      }
      plVar11[2] = lVar1 >> 1;
      *plVar8 = lVar6 >> 1;
      plVar11[9] = plVar11[5];
      lVar6 = plVar11[3] + plVar11[5];
      lVar1 = plVar11[1] + plVar11[3];
      if (lVar6 < 0) {
        lVar6 = lVar6 + 1;
      }
      if (lVar1 < 0) {
        lVar1 = lVar1 + 1;
      }
      plVar11[7] = lVar6 >> 1;
      lVar6 = (lVar1 >> 1) + (lVar6 >> 1);
      if (lVar6 < 0) {
        lVar6 = lVar6 + 1;
      }
      plVar11[3] = lVar1 >> 1;
      plVar11[5] = lVar6 >> 1;
      *(int *)(param_3 + 0x7a8 + (long)iVar12 * 4) = iVar5 + -1;
      uVar14 = (long)iVar12 + 1;
      *(int *)(param_3 + 0x7a8 + uVar14 * 4) = iVar5 + -1;
      uVar13 = (uint)uVar14;
      plVar11 = plVar8;
    }
LAB_010b06c8:
    lVar4 = *plVar11;
  } while( true );
}

