
void FUN_00e68ea8(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  
  if ((*(long *)(param_1 + 400) != param_2) || (*(long *)(param_1 + 0x198) != param_4)) {
    iVar10 = *(int *)(param_1 + 8);
    *(long *)(param_1 + 400) = param_2;
    *(long *)(param_1 + 0x198) = param_4;
    if (iVar10 != 0) {
      lVar4 = FT_MulFix((long)*(int *)(param_1 + 0x10),param_2);
      *(long *)(param_1 + 0x18) = lVar4;
      *(ulong *)(param_1 + 0x20) = lVar4 + 0x20U & 0xffffffffffffffc0;
      if (iVar10 != 1) {
        piVar9 = (int *)(param_1 + 0x28);
        iVar10 = 1 - iVar10;
        do {
          lVar5 = FT_MulFix((long)*piVar9,param_2);
          lVar7 = lVar5 - *(long *)(param_1 + 0x18);
          lVar4 = -lVar7;
          if (-1 < lVar7) {
            lVar4 = lVar7;
          }
          lVar7 = *(long *)(param_1 + 0x18);
          if (0x7f < lVar4) {
            lVar7 = lVar5;
          }
          iVar10 = iVar10 + 1;
          *(long *)(piVar9 + 2) = lVar7;
          *(ulong *)(piVar9 + 4) = lVar7 + 0x20U & 0xffffffffffffffc0;
          piVar9 = piVar9 + 6;
        } while (iVar10 != 0);
      }
    }
  }
  if ((*(long *)(param_1 + 0x328) != param_3) || (*(long *)(param_1 + 0x330) != param_5)) {
    iVar10 = *(int *)(param_1 + 0x1a0);
    *(long *)(param_1 + 0x328) = param_3;
    *(long *)(param_1 + 0x330) = param_5;
    if (iVar10 != 0) {
      lVar4 = FT_MulFix((long)*(int *)(param_1 + 0x1a8),param_3);
      *(long *)(param_1 + 0x1b0) = lVar4;
      *(ulong *)(param_1 + 0x1b8) = lVar4 + 0x20U & 0xffffffffffffffc0;
      if (iVar10 != 1) {
        piVar9 = (int *)(param_1 + 0x1c0);
        iVar10 = 1 - iVar10;
        do {
          lVar5 = FT_MulFix((long)*piVar9,param_3);
          lVar7 = lVar5 - *(long *)(param_1 + 0x1b0);
          lVar4 = -lVar7;
          if (-1 < lVar7) {
            lVar4 = lVar7;
          }
          lVar7 = *(long *)(param_1 + 0x1b0);
          if (0x7f < lVar4) {
            lVar7 = lVar5;
          }
          iVar10 = iVar10 + 1;
          *(long *)(piVar9 + 2) = lVar7;
          *(ulong *)(piVar9 + 4) = lVar7 + 0x20U & 0xffffffffffffffc0;
          piVar9 = piVar9 + 6;
        } while (iVar10 != 0);
      }
    }
    if (param_3 < 0x20c49ba) {
      uVar2 = *(uint *)(param_1 + 0xf60);
      *(bool *)(param_1 + 0xf6c) = param_3 * 0x7d < *(long *)(param_1 + 0xf58) * 8;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf60);
      *(bool *)(param_1 + 0xf6c) = param_3 < (*(long *)(param_1 + 0xf58) << 3) / 0x7d;
    }
    uVar8 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      uVar8 = (ulong)(int)uVar2;
      do {
        lVar4 = FT_MulFix(uVar8,param_3);
        if (lVar4 < 0x21) break;
        uVar8 = uVar8 - 1;
      } while (0 < (long)uVar8);
    }
    iVar10 = *(int *)(param_1 + 0x338);
    *(int *)(param_1 + 0xf64) = (int)uVar8;
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x340);
      do {
        lVar4 = FT_MulFix((long)piVar9[2],param_3);
        *(long *)(piVar9 + 10) = lVar4 + param_5;
        lVar4 = FT_MulFix((long)piVar9[3],param_3);
        *(long *)(piVar9 + 8) = lVar4 + param_5;
        lVar4 = FT_MulFix((long)*piVar9,param_3);
        *(long *)(piVar9 + 4) = lVar4 + param_5;
        uVar6 = FT_MulFix((long)piVar9[1],param_3);
        iVar10 = iVar10 + -1;
        *(ulong *)(piVar9 + 4) = *(long *)(piVar9 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar9 + 6) = uVar6;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0x640);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x648);
      do {
        lVar4 = FT_MulFix((long)piVar9[2],param_3);
        *(long *)(piVar9 + 10) = lVar4 + param_5;
        lVar4 = FT_MulFix((long)piVar9[3],param_3);
        *(long *)(piVar9 + 8) = lVar4 + param_5;
        lVar4 = FT_MulFix((long)*piVar9,param_3);
        *(long *)(piVar9 + 4) = lVar4 + param_5;
        uVar6 = FT_MulFix((long)piVar9[1],param_3);
        iVar10 = iVar10 + -1;
        *(ulong *)(piVar9 + 4) = *(long *)(piVar9 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar9 + 6) = uVar6;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0x948);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x950);
      do {
        lVar4 = FT_MulFix((long)piVar9[2],param_3);
        *(long *)(piVar9 + 10) = lVar4 + param_5;
        lVar4 = FT_MulFix((long)piVar9[3],param_3);
        *(long *)(piVar9 + 8) = lVar4 + param_5;
        lVar4 = FT_MulFix((long)*piVar9,param_3);
        *(long *)(piVar9 + 4) = lVar4 + param_5;
        uVar6 = FT_MulFix((long)piVar9[1],param_3);
        iVar10 = iVar10 + -1;
        *(ulong *)(piVar9 + 4) = *(long *)(piVar9 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar9 + 6) = uVar6;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0xc50);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0xc58);
      do {
        lVar4 = FT_MulFix((long)piVar9[2],param_3);
        *(long *)(piVar9 + 10) = lVar4 + param_5;
        lVar4 = FT_MulFix((long)piVar9[3],param_3);
        *(long *)(piVar9 + 8) = lVar4 + param_5;
        lVar4 = FT_MulFix((long)*piVar9,param_3);
        *(long *)(piVar9 + 4) = lVar4 + param_5;
        uVar6 = FT_MulFix((long)piVar9[1],param_3);
        iVar10 = iVar10 + -1;
        *(ulong *)(piVar9 + 4) = *(long *)(piVar9 + 4) + 0x20U & 0xffffffffffffffc0;
        *(undefined8 *)(piVar9 + 6) = uVar6;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0x338);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x340);
      do {
        puVar1 = (undefined8 *)(param_1 + 0x970);
        for (iVar3 = *(int *)(param_1 + 0x948); iVar3 != 0; iVar3 = iVar3 + -1) {
          lVar7 = (long)*piVar9 - (long)*(int *)(puVar1 + -4);
          lVar4 = -lVar7;
          if (-1 < (int)lVar7) {
            lVar4 = lVar7;
          }
          lVar4 = FT_MulFix(lVar4,param_3);
          if (lVar4 < 0x40) {
            uVar6 = *puVar1;
            *(undefined8 *)(piVar9 + 10) = puVar1[1];
            *(undefined8 *)(piVar9 + 8) = uVar6;
            uVar6 = puVar1[-2];
            *(undefined8 *)(piVar9 + 6) = puVar1[-1];
            *(undefined8 *)(piVar9 + 4) = uVar6;
            break;
          }
          puVar1 = puVar1 + 6;
        }
        piVar9 = piVar9 + 0xc;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0x640);
    if (iVar10 != 0) {
      piVar9 = (int *)(param_1 + 0x648);
LAB_00e692f8:
      do {
        puVar1 = (undefined8 *)(param_1 + 0xc78);
        for (iVar3 = *(int *)(param_1 + 0xc50); iVar3 != 0; iVar3 = iVar3 + -1) {
          lVar7 = (long)*piVar9 - (long)*(int *)(puVar1 + -4);
          lVar4 = -lVar7;
          if (-1 < (int)lVar7) {
            lVar4 = lVar7;
          }
          lVar4 = FT_MulFix(lVar4,param_3);
          if (lVar4 < 0x40) {
            uVar6 = *puVar1;
            *(undefined8 *)(piVar9 + 10) = puVar1[1];
            *(undefined8 *)(piVar9 + 8) = uVar6;
            uVar6 = puVar1[-2];
            *(undefined8 *)(piVar9 + 6) = puVar1[-1];
            *(undefined8 *)(piVar9 + 4) = uVar6;
            iVar10 = iVar10 + -1;
            piVar9 = piVar9 + 0xc;
            if (iVar10 == 0) {
              return;
            }
            goto LAB_00e692f8;
          }
          puVar1 = puVar1 + 6;
        }
        iVar10 = iVar10 + -1;
        piVar9 = piVar9 + 0xc;
      } while (iVar10 != 0);
    }
  }
  return;
}

