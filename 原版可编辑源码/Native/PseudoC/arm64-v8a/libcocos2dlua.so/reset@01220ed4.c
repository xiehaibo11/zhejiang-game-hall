
/* btUnionFind::reset(int) */

void __thiscall btUnionFind::reset(btUnionFind *this,int param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = *(int *)(this + 4);
  if (iVar9 < param_1) {
    lVar8 = (long)iVar9;
    if (*(int *)(this + 8) < param_1) {
      if (param_1 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = btAlignedAllocInternal
                          (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 |
                           (ulong)(uint)param_1 << 3,0x10);
        iVar9 = *(int *)(this + 4);
      }
      if (0 < iVar9) {
        lVar2 = 0;
        do {
          lVar5 = lVar2 * 8;
          lVar2 = lVar2 + 1;
          *(undefined8 *)(lVar1 + lVar5) = *(undefined8 *)(*(long *)(this + 0x10) + lVar5);
        } while (iVar9 != lVar2);
      }
      if (*(void **)(this + 0x10) != (void *)0x0) {
        if (this[0x18] != (btUnionFind)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x10));
        }
        *(undefined8 *)(this + 0x10) = 0;
      }
      *(long *)(this + 0x10) = lVar1;
      this[0x18] = (btUnionFind)0x1;
      *(int *)(this + 8) = param_1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x10) + lVar8 * 8) = 0;
      lVar8 = lVar8 + 1;
    } while (param_1 != lVar8);
  }
  *(int *)(this + 4) = param_1;
  if (0 < param_1) {
    lVar8 = *(long *)(this + 0x10);
    if ((uint)param_1 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)(uint)param_1 - (ulong)(param_1 & 7U);
      if (uVar3 != 0) {
        iVar11 = 2;
        iVar12 = 3;
        iVar9 = 0;
        iVar10 = 1;
        piVar6 = (int *)(lVar8 + 0x20);
        uVar7 = uVar3;
        do {
          uVar7 = uVar7 - 8;
          piVar6[-8] = iVar9;
          piVar6[-7] = 1;
          piVar6[-6] = iVar10;
          piVar6[-5] = 1;
          piVar6[-4] = iVar11;
          piVar6[-3] = 1;
          piVar6[-2] = iVar12;
          piVar6[-1] = 1;
          *piVar6 = iVar9 + 4;
          piVar6[1] = 1;
          piVar6[2] = iVar10 + 4;
          piVar6[3] = 1;
          piVar6[4] = iVar11 + 4;
          piVar6[5] = 1;
          piVar6[6] = iVar12 + 4;
          piVar6[7] = 1;
          iVar9 = iVar9 + 8;
          iVar10 = iVar10 + 8;
          iVar11 = iVar11 + 8;
          iVar12 = iVar12 + 8;
          piVar6 = piVar6 + 0x10;
        } while (uVar7 != 0);
        if ((param_1 & 7U) == 0) {
          return;
        }
      }
    }
    puVar4 = (undefined4 *)(lVar8 + uVar3 * 8 + 4);
    do {
      puVar4[-1] = (int)uVar3;
      *puVar4 = 1;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while ((uint)param_1 != uVar3);
  }
  return;
}

