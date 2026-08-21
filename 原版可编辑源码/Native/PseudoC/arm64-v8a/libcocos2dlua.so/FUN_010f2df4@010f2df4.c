
undefined8 FUN_010f2df4(long param_1,long param_2)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  short *psVar20;
  
  lVar14 = *(long *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar4 = *(int *)(lVar14 + 0x60);
    if (iVar4 == 0) {
      FUN_010f3290(param_1,*(undefined4 *)(lVar14 + 100));
      iVar4 = *(int *)(param_1 + 0x13c);
      *(int *)(lVar14 + 0x60) = iVar4;
      *(uint *)(lVar14 + 100) = *(int *)(lVar14 + 100) + 1U & 7;
    }
    *(int *)(lVar14 + 0x60) = iVar4 + -1;
  }
  if (*(int *)(param_1 + 0x1a0) < 1) {
    return 1;
  }
  lVar5 = *(long *)(param_1 + 0x1e0);
  lVar9 = 0;
LAB_010f2e80:
  lVar6 = (long)*(int *)(param_1 + lVar9 * 4 + 0x1a4);
  lVar19 = *(long *)(param_1 + lVar6 * 8 + 0x178);
  lVar6 = lVar14 + lVar6 * 4;
  lVar18 = (long)*(int *)(lVar19 + 0x14);
  psVar20 = *(short **)(param_2 + lVar9 * 8);
  plVar15 = (long *)(lVar14 + lVar18 * 8 + 0x68);
  piVar7 = (int *)(lVar6 + 0x40);
  piVar17 = (int *)(lVar6 + 0x50);
  lVar6 = *plVar15 + (long)*piVar17;
  iVar4 = (int)*psVar20 - *piVar7;
  if (iVar4 == 0) {
    FUN_010f3408(param_1,lVar6,0);
    *piVar17 = 0;
    iVar4 = *(int *)(param_1 + 0x1e8);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f2d50 with catch @ 010f2ecc
                        */
    *piVar7 = (int)*psVar20;
    FUN_010f3408(param_1,lVar6,1);
    if (iVar4 < 1) {
      iVar4 = -iVar4;
      FUN_010f3408(param_1,lVar6 + 1,1);
      iVar12 = 8;
      lVar8 = 3;
    }
    else {
      FUN_010f3408(param_1,lVar6 + 1,0);
      iVar12 = 4;
      lVar8 = 2;
    }
    lVar6 = lVar6 + lVar8;
    uVar3 = iVar4 - 1;
    *piVar17 = iVar12;
    if (uVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
      FUN_010f3408(param_1,lVar6,1);
      iVar12 = (int)uVar3 >> 1;
      lVar6 = *plVar15 + 0x14;
      if (iVar12 != 0) {
        iVar4 = 1;
        do {
          FUN_010f3408(param_1,lVar6,1);
          iVar4 = iVar4 << 1;
          iVar12 = iVar12 >> 1;
          lVar6 = lVar6 + 1;
        } while (iVar12 != 0);
      }
    }
    FUN_010f3408(param_1,lVar6,0);
    lVar18 = param_1 + lVar18;
    iVar12 = 0;
    if (iVar4 < (int)((ulong)(1L << ((ulong)*(byte *)(lVar18 + 0xe0) & 0x3f)) >> 1)) {
LAB_010f2ff4:
      *piVar17 = iVar12;
    }
    else if ((int)((ulong)(1L << ((ulong)*(byte *)(lVar18 + 0xf0) & 0x3f)) >> 1) < iVar4) {
      iVar12 = *piVar17 + 8;
      goto LAB_010f2ff4;
    }
    uVar10 = iVar4 >> 1;
    if (uVar10 != 0) {
      do {
        FUN_010f3408(param_1,lVar6 + 0xe,(uVar10 & uVar3) != 0);
        uVar10 = (int)uVar10 >> 1;
      } while (uVar10 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x1e8);
  }
  if (iVar4 != 0) {
    lVar18 = (long)*(int *)(lVar19 + 0x18);
    lVar6 = 0;
LAB_010f303c:
    if (psVar20[*(int *)(lVar5 + (long)iVar4 * 4 + lVar6 * 4)] == 0) goto code_r0x010f3048;
    if (0 < iVar4 + (int)lVar6) {
      plVar15 = (long *)(lVar14 + lVar18 * 8 + 0xe8);
      iVar12 = 0;
      do {
        lVar16 = *plVar15 + (long)iVar12 + (long)iVar12 * 2;
        FUN_010f3408(param_1,lVar16,0);
        lVar19 = (long)iVar12 + 1;
        lVar8 = lVar16 + 1;
                    /* try { // try from 010f30b0 to 011f311f has its CatchHandler @ 010f30b0
                       catch() { ... } // from try @ 010f30b0 with catch @ 010f30b0
                       catch() { ... } // from try @ 010f3134 with catch @ 010f30b0 */
        sVar2 = psVar20[*(int *)(lVar5 + lVar19 * 4)];
        if (sVar2 == 0) {
          piVar7 = (int *)(lVar5 + 4 + lVar19 * 4);
          do {
            iVar13 = iVar12;
            lVar16 = lVar8;
            FUN_010f3408(param_1,lVar16,0);
            iVar11 = iVar13 + 1;
            lVar8 = lVar16 + 3;
            sVar2 = psVar20[*piVar7];
            piVar7 = piVar7 + 1;
            iVar12 = iVar11;
          } while (sVar2 == 0);
          lVar16 = lVar16 + 2;
          iVar13 = iVar13 + 2;
        }
        else {
          iVar13 = (int)lVar19;
          iVar11 = iVar12;
        }
        iVar12 = iVar13;
        iVar13 = (int)sVar2;
        FUN_010f3408(param_1,lVar8,1);
                    /* try { // try from 010f3120 to 011f3127 has its CatchHandler @ 010f3190 */
        if (sVar2 < 1) {
          iVar13 = -iVar13;
        }
        FUN_010f3408(param_1,lVar14 + 0x168,sVar2 < 1);
        uVar3 = iVar13 - 1;
        lVar16 = lVar16 + 2;
        if (uVar3 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = 1;
          FUN_010f3408(param_1,lVar16,1);
          if (uVar3 != 1) {
                    /* catch() { ... } // from try @ 010f3128 with catch @ 010f3180 */
            FUN_010f3408(param_1,lVar16,1);
                    /* catch() { ... } // from try @ 010f3120 with catch @ 010f3190 */
            iVar1 = (int)uVar3 >> 2;
            iVar13 = 2;
            lVar16 = 0xbd;
            if ((int)(uint)*(byte *)(param_1 + lVar18 + 0x100) <= iVar11) {
              lVar16 = 0xd9;
            }
            lVar16 = *plVar15 + lVar16;
            for (; iVar1 != 0; iVar1 = iVar1 >> 1) {
                    /* try { // try from 010f31bc to 011f31f3 has its CatchHandler @ 010f31bc
                       catch() { ... } // from try @ 010f31bc with catch @ 010f31bc
                       catch() { ... } // from try @ 010f3200 with catch @ 010f31bc */
              FUN_010f3408(param_1,lVar16,1);
              iVar13 = iVar13 << 1;
              lVar16 = lVar16 + 1;
            }
          }
        }
        FUN_010f3408(param_1,lVar16,0);
        uVar10 = iVar13 >> 1;
        if (uVar10 != 0) {
          do {
                    /* try { // try from 010f31f4 to 011f31ff has its CatchHandler @ 010f3214 */
                    /* try { // try from 010f3200 to 011f3283 has its CatchHandler @ 010f31bc */
            FUN_010f3408(param_1,lVar16 + 0xe,(uVar10 & uVar3) != 0);
            uVar10 = (int)uVar10 >> 1;
          } while (uVar10 != 0);
        }
                    /* catch() { ... } // from try @ 010f31f4 with catch @ 010f3214 */
      } while (iVar12 < (int)lVar6 + iVar4);
      if (iVar12 < *(int *)(param_1 + 0x1e8)) goto LAB_010f323c;
      goto LAB_010f3258;
    }
    goto LAB_010f3230;
  }
  goto LAB_010f3258;
code_r0x010f3048:
  lVar6 = lVar6 + -1;
  if (iVar4 + (int)lVar6 == 0) goto LAB_010f3230;
  goto LAB_010f303c;
LAB_010f3230:
  iVar12 = 0;
  if (0 < iVar4) {
LAB_010f323c:
    FUN_010f3408(param_1,*(long *)(lVar14 + lVar18 * 8 + 0xe8) + (long)(iVar12 * 3),1);
  }
LAB_010f3258:
  lVar9 = lVar9 + 1;
  if (*(int *)(param_1 + 0x1a0) <= lVar9) {
    return 1;
  }
  goto LAB_010f2e80;
}

