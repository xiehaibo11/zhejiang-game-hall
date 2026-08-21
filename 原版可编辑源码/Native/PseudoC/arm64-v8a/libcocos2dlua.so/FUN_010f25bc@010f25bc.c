
undefined8 FUN_010f25bc(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  int *piVar11;
  int iVar12;
  
  lVar7 = *(long *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar2 = *(int *)(lVar7 + 0x60);
    if (iVar2 == 0) {
      FUN_010f3290(param_1,*(undefined4 *)(lVar7 + 100));
      iVar2 = *(int *)(param_1 + 0x13c);
      *(int *)(lVar7 + 0x60) = iVar2;
      *(uint *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1U & 7;
    }
    *(int *)(lVar7 + 0x60) = iVar2 + -1;
  }
  if (0 < *(int *)(param_1 + 0x1a0)) {
    lVar8 = 0;
    do {
      lVar3 = (long)*(int *)(param_1 + lVar8 * 4 + 0x1a4);
      lVar6 = lVar7 + lVar3 * 4;
      lVar3 = (long)*(int *)(*(long *)(param_1 + lVar3 * 8 + 0x178) + 0x14);
      plVar10 = (long *)(lVar7 + lVar3 * 8 + 0x68);
      piVar4 = (int *)(lVar6 + 0x40);
      iVar2 = (int)**(short **)(param_2 + lVar8 * 8) >> (*(uint *)(param_1 + 0x1d8) & 0x1f);
      piVar11 = (int *)(lVar6 + 0x50);
      iVar12 = iVar2 - *piVar4;
      lVar6 = *plVar10 + (long)*piVar11;
      if (iVar12 == 0) {
        FUN_010f3408(param_1,lVar6,0);
        *piVar11 = 0;
      }
      else {
        *piVar4 = iVar2;
        FUN_010f3408(param_1,lVar6,1);
        if (iVar12 < 1) {
          iVar12 = -iVar12;
          FUN_010f3408(param_1,lVar6 + 1,1);
          iVar2 = 8;
          lVar5 = 3;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f26f0 with catch @ 010f2694
                       catch(type#1 @ 00000000) { ... } // from try @ 010f28bc with catch @ 010f2694
                        */
          FUN_010f3408(param_1,lVar6 + 1,0);
          iVar2 = 4;
          lVar5 = 2;
        }
        lVar6 = lVar6 + lVar5;
        uVar1 = iVar12 - 1;
                    /* try { // try from 010f26e8 to 011f26ef has its CatchHandler @ 010f29c8 */
        *piVar11 = iVar2;
        if (uVar1 == 0) {
          iVar2 = 0;
        }
        else {
                    /* try { // try from 010f26f0 to 011f284b has its CatchHandler @ 010f2694 */
          iVar2 = 1;
          FUN_010f3408(param_1,lVar6,1);
          iVar12 = (int)uVar1 >> 1;
          lVar6 = *plVar10 + 0x14;
          if (iVar12 != 0) {
            iVar2 = 1;
            do {
              FUN_010f3408(param_1,lVar6,1);
              iVar2 = iVar2 << 1;
              iVar12 = iVar12 >> 1;
              lVar6 = lVar6 + 1;
            } while (iVar12 != 0);
          }
        }
        FUN_010f3408(param_1,lVar6,0);
        lVar3 = param_1 + lVar3;
        iVar12 = 0;
        if (iVar2 < (int)((ulong)(1L << ((ulong)*(byte *)(lVar3 + 0xe0) & 0x3f)) >> 1)) {
LAB_010f2790:
          *piVar11 = iVar12;
        }
        else if ((int)((ulong)(1L << ((ulong)*(byte *)(lVar3 + 0xf0) & 0x3f)) >> 1) < iVar2) {
          iVar12 = *piVar11 + 8;
          goto LAB_010f2790;
        }
        uVar9 = iVar2 >> 1;
        if (uVar9 != 0) {
          do {
            FUN_010f3408(param_1,lVar6 + 0xe,(uVar9 & uVar1) != 0);
            uVar9 = (int)uVar9 >> 1;
          } while (uVar9 != 0);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x1a0));
  }
  return 1;
}

