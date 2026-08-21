
undefined8 FUN_010fa520(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar8 = *(int *)(lVar12 + 0x4c);
    if (iVar8 == 0) {
      FUN_010fad24(param_1);
      iVar8 = *(int *)(lVar12 + 0x4c);
    }
                    /* try { // try from 010fa568 to 011fa56b has its CatchHandler @ 010fa5ac */
                    /* try { // try from 010fa56c to 011fa5cb has its CatchHandler @ 010fa434 */
    *(int *)(lVar12 + 0x4c) = iVar8 + -1;
  }
  if (*(int *)(lVar12 + 0x28) != -1) {
    lVar9 = param_1[0x46];
    iVar3 = *(int *)(param_1[0x39] + 0x18);
    lVar13 = *param_2;
    iVar8 = *(int *)((long)param_1 + 0x21c) + -1;
    plVar1 = (long *)(lVar12 + (long)iVar3 * 8 + 0xd0);
                    /* catch() { ... } // from try @ 010fa568 with catch @ 010fa5ac */
    do {
                    /* catch() { ... } // from try @ 010fa4c8 with catch @ 010fa5b0 */
      lVar11 = *plVar1 + (long)(iVar8 * 3);
      iVar4 = FUN_010fae24(param_1,lVar11);
      if (iVar4 != 0) {
        return 1;
      }
      lVar11 = lVar11 + 2;
      iVar4 = iVar8;
      while( true ) {
        iVar8 = iVar4 + 1;
        iVar5 = FUN_010fae24(param_1,lVar11 + -1);
        if (iVar5 != 0) break;
        lVar11 = lVar11 + 3;
        iVar4 = iVar8;
        if ((int)param_1[0x44] <= iVar8) goto LAB_010fa6e0;
      }
      iVar5 = FUN_010fae24(param_1,lVar12 + 0x150);
      uVar6 = FUN_010fae24(param_1,lVar11);
      uVar10 = 0;
      if (uVar6 != 0) {
        iVar7 = FUN_010fae24(param_1,lVar11);
        uVar10 = uVar6;
        if (iVar7 != 0) {
          uVar10 = uVar6 << 1;
          lVar11 = 0xbd;
          if ((int)(uint)*(byte *)((long)param_1 + (long)iVar3 + 0x164) <= iVar4) {
            lVar11 = 0xd9;
          }
          lVar11 = *plVar1 + lVar11;
          while (iVar4 = FUN_010fae24(param_1,lVar11), iVar4 != 0) {
            uVar10 = uVar10 << 1;
            if (uVar10 == 0x8000) {
LAB_010fa6e0:
              lVar9 = *param_1;
              *(undefined4 *)(lVar9 + 0x28) = 0x75;
              (**(code **)(lVar9 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar12 + 0x28) = 0xffffffff;
              return 1;
            }
            lVar11 = lVar11 + 1;
          }
        }
        uVar6 = (int)uVar10 >> 1;
        if (uVar6 != 0) {
          do {
            iVar4 = FUN_010fae24(param_1,lVar11 + 0xe);
            uVar2 = 0;
            if (iVar4 != 0) {
              uVar2 = uVar6;
            }
            uVar6 = (int)uVar6 >> 1;
            uVar10 = uVar2 | uVar10;
          } while (uVar6 != 0);
        }
      }
      uVar6 = ~uVar10;
      if (iVar5 == 0) {
        uVar6 = uVar10 + 1;
      }
      *(short *)(lVar13 + (long)*(int *)(lVar9 + (long)iVar8 * 4) * 2) =
           (short)(uVar6 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f));
    } while (iVar8 < (int)param_1[0x44]);
  }
  return 1;
}

