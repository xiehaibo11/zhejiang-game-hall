
undefined8 FUN_010fa2f4(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  
  lVar10 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar3 = *(int *)(lVar10 + 0x4c);
    if (iVar3 == 0) {
      FUN_010fad24(param_1);
      iVar3 = *(int *)(lVar10 + 0x4c);
    }
    *(int *)(lVar10 + 0x4c) = iVar3 + -1;
  }
  if ((*(int *)(lVar10 + 0x28) != -1) && (0 < (int)param_1[0x3e])) {
                    /* try { // try from 010fa35c to 011fa363 has its CatchHandler @ 010fa418 */
    lVar11 = 0;
    do {
                    /* try { // try from 010fa364 to 011fa3e3 has its CatchHandler @ 010fa2d0 */
      lVar14 = (long)*(int *)((long)param_1 + lVar11 * 4 + 500);
      lVar9 = lVar10 + lVar14 * 4;
      lVar8 = (long)*(int *)(param_1[lVar14 + 0x39] + 0x14);
      puVar6 = *(undefined2 **)(param_2 + lVar11 * 8);
      plVar13 = (long *)(lVar10 + lVar8 * 8 + 0x50);
      piVar12 = (int *)(lVar9 + 0x3c);
      lVar1 = *plVar13 + (long)*piVar12;
      iVar3 = FUN_010fae24(param_1,lVar1);
      if (iVar3 == 0) {
        *piVar12 = 0;
        iVar3 = *(int *)(lVar9 + 0x2c);
                    /* try { // try from 010fa434 to 011fa4c7 has its CatchHandler @ 010fa434
                       catch() { ... } // from try @ 010fa434 with catch @ 010fa434
                       catch() { ... } // from try @ 010fa4d0 with catch @ 010fa434
                       catch() { ... } // from try @ 010fa56c with catch @ 010fa434 */
      }
      else {
        iVar3 = FUN_010fae24(param_1,lVar1 + 1);
        lVar9 = lVar1 + iVar3 + 2;
        uVar4 = FUN_010fae24(param_1,lVar9);
        if (uVar4 != 0) {
          lVar9 = *plVar13 + 0x14;
                    /* try { // try from 010fa3e4 to 011fa3e7 has its CatchHandler @ 010fa414 */
                    /* try { // try from 010fa3e8 to 011fa433 has its CatchHandler @ 010fa2d0 */
          while (iVar5 = FUN_010fae24(param_1,lVar9), iVar5 != 0) {
            uVar4 = uVar4 << 1;
            if (uVar4 == 0x8000) {
              lVar11 = *param_1;
              *(undefined4 *)(lVar11 + 0x28) = 0x75;
              (**(code **)(lVar11 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar10 + 0x28) = 0xffffffff;
              return 1;
            }
            lVar9 = lVar9 + 1;
          }
        }
                    /* catch() { ... } // from try @ 010fa3e4 with catch @ 010fa414 */
                    /* catch() { ... } // from try @ 010fa35c with catch @ 010fa418 */
        if ((int)uVar4 <
            (int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar8 + 0x144) & 0x3f)) >> 1)) {
          iVar5 = 0;
        }
        else if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar8 + 0x154) & 0x3f)) >> 1)
                 < (int)uVar4) {
          iVar5 = iVar3 * 4 + 0xc;
        }
        else {
          iVar5 = iVar3 * 4 + 4;
        }
        uVar7 = (int)uVar4 >> 1;
        *piVar12 = iVar5;
        if (uVar7 != 0) {
          do {
            iVar5 = FUN_010fae24(param_1,lVar9 + 0xe);
            uVar2 = 0;
            if (iVar5 != 0) {
              uVar2 = uVar7;
            }
            uVar7 = (int)uVar7 >> 1;
            uVar4 = uVar2 | uVar4;
          } while (uVar7 != 0);
        }
        lVar9 = lVar10 + lVar14 * 4;
        uVar7 = ~uVar4;
        if (iVar3 == 0) {
          uVar7 = uVar4 + 1;
        }
        iVar3 = *(int *)(lVar9 + 0x2c) + uVar7;
        *(int *)(lVar9 + 0x2c) = iVar3;
      }
      lVar11 = lVar11 + 1;
      *puVar6 = (short)(iVar3 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f));
                    /* try { // try from 010fa4c8 to 011fa4cf has its CatchHandler @ 010fa5b0 */
                    /* try { // try from 010fa4d0 to 011fa567 has its CatchHandler @ 010fa434 */
    } while (lVar11 < (int)param_1[0x3e]);
  }
  return 1;
}

