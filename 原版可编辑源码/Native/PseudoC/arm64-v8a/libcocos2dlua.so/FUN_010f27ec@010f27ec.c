
undefined8 FUN_010f27ec(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  
  lVar12 = *(long *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar6 = *(int *)(lVar12 + 0x60);
    if (iVar6 == 0) {
      FUN_010f3290(param_1,*(undefined4 *)(lVar12 + 100));
      iVar6 = *(int *)(param_1 + 0x13c);
      *(int *)(lVar12 + 0x60) = iVar6;
      *(uint *)(lVar12 + 100) = *(int *)(lVar12 + 100) + 1U & 7;
    }
                    /* try { // try from 010f284c to 011f2857 has its CatchHandler @ 010f29b4 */
    *(int *)(lVar12 + 0x60) = iVar6 + -1;
  }
  lVar7 = *(long *)(param_1 + 0x1e0);
  iVar6 = *(int *)(param_1 + 0x1d0);
  lVar17 = (long)iVar6;
  lVar15 = *param_2;
  lVar9 = (long)*(int *)(*(long *)(param_1 + 0x178) + 0x18);
  lVar8 = 0;
  lVar13 = lVar17 * 4;
  do {
    iVar16 = (int)lVar17;
    sVar3 = *(short *)(lVar15 + (long)*(int *)(lVar7 + lVar13 + lVar8 * 4) * 2);
    if (sVar3 < 0) {
      if (-(int)sVar3 >> (*(uint *)(param_1 + 0x1d8) & 0x1f) != 0) goto LAB_010f28b8;
    }
    else if ((int)sVar3 >> (*(uint *)(param_1 + 0x1d8) & 0x1f) != 0) {
                    /* try { // try from 010f28b4 to 011f28bb has its CatchHandler @ 010f299c */
      iVar16 = iVar6 + (int)lVar8;
      goto LAB_010f28b8;
    }
    lVar8 = lVar8 + -1;
    lVar17 = lVar17 + -1;
  } while (iVar6 + (int)lVar8 != 0);
  iVar16 = 0;
LAB_010f28b8:
                    /* try { // try from 010f28bc to 011f29cb has its CatchHandler @ 010f2694 */
  iVar14 = *(int *)(param_1 + 0x1cc) + -1;
  if (*(int *)(param_1 + 0x1cc) <= iVar16) {
    plVar2 = (long *)(lVar12 + lVar9 * 8 + 0xe8);
LAB_010f28ec:
    lVar13 = *plVar2 + (long)iVar14 + (long)iVar14 * 2;
    FUN_010f3408(param_1,lVar13,0);
    piVar11 = (int *)(lVar7 + 4 + (long)iVar14 * 4);
    lVar13 = lVar13 + 2;
    iVar1 = iVar14;
    do {
      sVar3 = *(short *)(lVar15 + (long)*piVar11 * 2);
      if (sVar3 < 0) {
        iVar6 = -(int)sVar3 >> (*(uint *)(param_1 + 0x1d8) & 0x1f);
        if (iVar6 != 0) {
          FUN_010f3408(param_1,lVar13 + -1,1);
          uVar5 = 1;
          goto LAB_010f29a0;
        }
      }
      else {
        iVar6 = (int)sVar3 >> (*(uint *)(param_1 + 0x1d8) & 0x1f);
        if (iVar6 != 0) goto LAB_010f2984;
      }
      FUN_010f3408(param_1,lVar13 + -1,0);
      iVar1 = iVar1 + 1;
      piVar11 = piVar11 + 1;
      lVar13 = lVar13 + 3;
    } while( true );
  }
LAB_010f2a7c:
  if (iVar14 < iVar6) {
    FUN_010f3408(param_1,*(long *)(lVar12 + lVar9 * 8 + 0xe8) + (long)(iVar14 * 3),1);
  }
  return 1;
LAB_010f2984:
  FUN_010f3408(param_1,lVar13 + -1,1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f28b4 with catch @ 010f299c
                        */
  uVar5 = 0;
LAB_010f29a0:
  FUN_010f3408(param_1,lVar12 + 0x168,uVar5);
  uVar4 = iVar6 - 1;
  if (uVar4 == 0) {
                    /* try { // try from 010f2a28 to 011f2b83 has its CatchHandler @ 010f29cc */
    iVar6 = 0;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f284c with catch @ 010f29b4
                        */
    iVar6 = 1;
    FUN_010f3408(param_1,lVar13,1);
    if (uVar4 != 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f26e8 with catch @ 010f29c8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f2a28 with catch @ 010f29cc
                       catch(type#1 @ 00000000) { ... } // from try @ 010f2bf4 with catch @ 010f29cc
                        */
      FUN_010f3408(param_1,lVar13,1);
      iVar14 = (int)uVar4 >> 2;
      iVar6 = 2;
      lVar13 = 0xbd;
      if ((int)(uint)*(byte *)(param_1 + lVar9 + 0x100) <= iVar1) {
        lVar13 = 0xd9;
      }
      lVar13 = *plVar2 + lVar13;
      for (; iVar14 != 0; iVar14 = iVar14 >> 1) {
        FUN_010f3408(param_1,lVar13,1);
        iVar6 = iVar6 << 1;
        lVar13 = lVar13 + 1;
                    /* try { // try from 010f2a20 to 011f2a27 has its CatchHandler @ 010f2d00 */
      }
    }
  }
  iVar14 = iVar1 + 1;
  FUN_010f3408(param_1,lVar13,0);
  uVar10 = iVar6 >> 1;
  if (uVar10 != 0) {
    do {
      FUN_010f3408(param_1,lVar13 + 0xe,(uVar10 & uVar4) != 0);
      uVar10 = (int)uVar10 >> 1;
    } while (uVar10 != 0);
  }
  if (iVar16 <= iVar14) goto code_r0x010f2a70;
  goto LAB_010f28ec;
code_r0x010f2a70:
  iVar6 = *(int *)(param_1 + 0x1d0);
  iVar14 = iVar1 + 1;
  goto LAB_010f2a7c;
}

