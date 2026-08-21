
void FUN_010aa678(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  
  if ((*(long *)(param_1 + 400) != param_2) || (*(long *)(param_1 + 0x198) != param_4)) {
    iVar12 = *(int *)(param_1 + 8);
                    /* catch() { ... } // from try @ 010aa624 with catch @ 010aa6bc */
    *(long *)(param_1 + 400) = param_2;
    *(long *)(param_1 + 0x198) = param_4;
    if (iVar12 != 0) {
      lVar5 = FT_MulFix((long)*(int *)(param_1 + 0x10),param_2);
      *(long *)(param_1 + 0x18) = lVar5;
      *(ulong *)(param_1 + 0x20) = lVar5 + 0x20U & 0xffffffffffffffc0;
      if (iVar12 != 1) {
        piVar11 = (int *)(param_1 + 0x28);
        iVar12 = 1 - iVar12;
        do {
                    /* catch() { ... } // from try @ 010aa5ec with catch @ 010aa6f4 */
          lVar6 = FT_MulFix((long)*piVar11,param_2);
          iVar12 = iVar12 + 1;
          lVar8 = lVar6 - *(long *)(param_1 + 0x18);
          lVar5 = -lVar8;
          if (-1 < lVar8) {
            lVar5 = lVar8;
          }
          lVar8 = *(long *)(param_1 + 0x18);
          if (0x7f < lVar5) {
            lVar8 = lVar6;
          }
          *(long *)(piVar11 + 2) = lVar8;
          *(ulong *)(piVar11 + 4) = lVar8 + 0x20U & 0xffffffffffffffc0;
                    /* catch() { ... } // from try @ 010aa7b4 with catch @ 010aa720 */
          piVar11 = piVar11 + 6;
        } while (iVar12 != 0);
      }
    }
  }
  if ((*(long *)(param_1 + 0x328) != param_3) || (*(long *)(param_1 + 0x330) != param_5)) {
    iVar12 = *(int *)(param_1 + 0x1a0);
    *(long *)(param_1 + 0x328) = param_3;
    *(long *)(param_1 + 0x330) = param_5;
    if (iVar12 != 0) {
      lVar5 = FT_MulFix((long)*(int *)(param_1 + 0x1a8),param_3);
                    /* try { // try from 010aa760 to 011aa767 has its CatchHandler @ 010aaa88 */
      *(long *)(param_1 + 0x1b0) = lVar5;
      *(ulong *)(param_1 + 0x1b8) = lVar5 + 0x20U & 0xffffffffffffffc0;
      if (iVar12 != 1) {
        piVar11 = (int *)(param_1 + 0x1c0);
        iVar12 = 1 - iVar12;
        do {
          lVar6 = FT_MulFix((long)*piVar11,param_3);
          iVar12 = iVar12 + 1;
          lVar8 = lVar6 - *(long *)(param_1 + 0x1b0);
          lVar5 = -lVar8;
          if (-1 < lVar8) {
            lVar5 = lVar8;
          }
                    /* try { // try from 010aa798 to 011aa7b3 has its CatchHandler @ 010aaa50 */
          lVar8 = *(long *)(param_1 + 0x1b0);
          if (0x7f < lVar5) {
            lVar8 = lVar6;
          }
          *(long *)(piVar11 + 2) = lVar8;
          *(ulong *)(piVar11 + 4) = lVar8 + 0x20U & 0xffffffffffffffc0;
          piVar11 = piVar11 + 6;
        } while (iVar12 != 0);
      }
    }
                    /* try { // try from 010aa7b4 to 011aaaa3 has its CatchHandler @ 010aa720 */
    if (param_3 < 0x20c49ba) {
      bVar1 = param_3 * 0x7d < *(long *)(param_1 + 0xf58) * 8;
    }
    else {
      bVar1 = param_3 < (*(long *)(param_1 + 0xf58) << 3) / 0x7d;
    }
    uVar3 = *(uint *)(param_1 + 0xf60);
    *(bool *)(param_1 + 0xf6c) = bVar1;
    uVar10 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      uVar9 = (long)(int)uVar3;
      do {
        lVar5 = FT_MulFix(uVar9,param_3);
        uVar10 = uVar9;
        if (lVar5 < 0x21) break;
        uVar10 = uVar9 - 1;
        bVar1 = 0 < (long)uVar9;
        uVar9 = uVar10;
      } while (uVar10 != 0 && bVar1);
    }
    iVar12 = *(int *)(param_1 + 0x338);
    *(int *)(param_1 + 0xf64) = (int)uVar10;
    if (iVar12 != 0) {
      piVar11 = (int *)(param_1 + 0x340);
      do {
        lVar5 = FT_MulFix((long)piVar11[2],param_3);
        *(long *)(piVar11 + 10) = lVar5 + param_5;
        lVar5 = FT_MulFix((long)piVar11[3],param_3);
        *(long *)(piVar11 + 8) = lVar5 + param_5;
        lVar5 = FT_MulFix((long)*piVar11,param_3);
        *(long *)(piVar11 + 4) = lVar5 + param_5;
        uVar7 = FT_MulFix((long)piVar11[1],param_3);
        iVar12 = iVar12 + -1;
        *(ulong *)(piVar11 + 4) = *(long *)(piVar11 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar11 + 6) = uVar7;
        piVar11 = piVar11 + 0xc;
      } while (iVar12 != 0);
    }
    iVar12 = *(int *)(param_1 + 0x640);
    if (iVar12 != 0) {
      piVar11 = (int *)(param_1 + 0x648);
      do {
        lVar5 = FT_MulFix((long)piVar11[2],param_3);
        *(long *)(piVar11 + 10) = lVar5 + param_5;
        lVar5 = FT_MulFix((long)piVar11[3],param_3);
        *(long *)(piVar11 + 8) = lVar5 + param_5;
        lVar5 = FT_MulFix((long)*piVar11,param_3);
        *(long *)(piVar11 + 4) = lVar5 + param_5;
        uVar7 = FT_MulFix((long)piVar11[1],param_3);
        iVar12 = iVar12 + -1;
        *(ulong *)(piVar11 + 4) = *(long *)(piVar11 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar11 + 6) = uVar7;
        piVar11 = piVar11 + 0xc;
      } while (iVar12 != 0);
    }
    iVar12 = *(int *)(param_1 + 0x948);
    if (iVar12 != 0) {
      piVar11 = (int *)(param_1 + 0x950);
      do {
        lVar5 = FT_MulFix((long)piVar11[2],param_3);
        *(long *)(piVar11 + 10) = lVar5 + param_5;
        lVar5 = FT_MulFix((long)piVar11[3],param_3);
        *(long *)(piVar11 + 8) = lVar5 + param_5;
        lVar5 = FT_MulFix((long)*piVar11,param_3);
        *(long *)(piVar11 + 4) = lVar5 + param_5;
        uVar7 = FT_MulFix((long)piVar11[1],param_3);
        iVar12 = iVar12 + -1;
        *(ulong *)(piVar11 + 4) = *(long *)(piVar11 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar11 + 6) = uVar7;
        piVar11 = piVar11 + 0xc;
      } while (iVar12 != 0);
    }
    iVar12 = *(int *)(param_1 + 0xc50);
    if (iVar12 != 0) {
      piVar11 = (int *)(param_1 + 0xc58);
      do {
        lVar5 = FT_MulFix((long)piVar11[2],param_3);
        *(long *)(piVar11 + 10) = lVar5 + param_5;
        lVar5 = FT_MulFix((long)piVar11[3],param_3);
        *(long *)(piVar11 + 8) = lVar5 + param_5;
        lVar5 = FT_MulFix((long)*piVar11,param_3);
        *(long *)(piVar11 + 4) = lVar5 + param_5;
        uVar7 = FT_MulFix((long)piVar11[1],param_3);
        iVar12 = iVar12 + -1;
        *(ulong *)(piVar11 + 4) = *(long *)(piVar11 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar11 + 6) = uVar7;
        piVar11 = piVar11 + 0xc;
      } while (iVar12 != 0);
    }
    iVar12 = *(int *)(param_1 + 0x338);
    if (iVar12 != 0) {
      piVar11 = (int *)(param_1 + 0x340);
      do {
        puVar2 = (undefined8 *)(param_1 + 0x970);
        for (iVar4 = *(int *)(param_1 + 0x948); iVar4 != 0; iVar4 = iVar4 + -1) {
                    /* catch() { ... } // from try @ 010aa798 with catch @ 010aaa50 */
          lVar8 = (long)*piVar11 - (long)*(int *)(puVar2 + -4);
          lVar5 = -lVar8;
          if (-1 < (int)lVar8) {
            lVar5 = lVar8;
          }
          lVar5 = FT_MulFix(lVar5,param_3);
          if (lVar5 < 0x40) {
            uVar7 = *puVar2;
            *(undefined8 *)(piVar11 + 10) = puVar2[1];
            *(undefined8 *)(piVar11 + 8) = uVar7;
            uVar7 = puVar2[-2];
                    /* catch() { ... } // from try @ 010aa760 with catch @ 010aaa88 */
            *(undefined8 *)(piVar11 + 6) = puVar2[-1];
            *(undefined8 *)(piVar11 + 4) = uVar7;
            break;
          }
          puVar2 = puVar2 + 6;
        }
        iVar12 = iVar12 + -1;
        piVar11 = piVar11 + 0xc;
      } while (iVar12 != 0);
    }
    iVar12 = *(int *)(param_1 + 0x640);
    if (iVar12 != 0) {
      piVar11 = (int *)(param_1 + 0x648);
      do {
        puVar2 = (undefined8 *)(param_1 + 0xc78);
        for (iVar4 = *(int *)(param_1 + 0xc50); iVar4 != 0; iVar4 = iVar4 + -1) {
          lVar8 = (long)*piVar11 - (long)*(int *)(puVar2 + -4);
          lVar5 = -lVar8;
          if (-1 < (int)lVar8) {
            lVar5 = lVar8;
          }
          lVar5 = FT_MulFix(lVar5,param_3);
          if (lVar5 < 0x40) {
            uVar7 = *puVar2;
            *(undefined8 *)(piVar11 + 10) = puVar2[1];
            *(undefined8 *)(piVar11 + 8) = uVar7;
            uVar7 = puVar2[-2];
            *(undefined8 *)(piVar11 + 6) = puVar2[-1];
            *(undefined8 *)(piVar11 + 4) = uVar7;
            break;
          }
          puVar2 = puVar2 + 6;
        }
        iVar12 = iVar12 + -1;
        piVar11 = piVar11 + 0xc;
      } while (iVar12 != 0);
    }
  }
  return;
}

