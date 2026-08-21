
/* btHashedSimplePairCache::internalAddPair(int, int) */

int * __thiscall
btHashedSimplePairCache::internalAddPair(btHashedSimplePairCache *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  
  uVar6 = param_1 | param_2 << 0x10;
  uVar6 = uVar6 + (uVar6 << 0xf ^ 0xffffffff);
  uVar3 = *(uint *)(this + 0x10);
  uVar6 = (uVar6 ^ (int)uVar6 >> 10) * 9;
  uVar6 = uVar6 ^ (int)uVar6 >> 6;
  uVar6 = uVar6 + (uVar6 << 0xb ^ 0xffffffff);
  uVar6 = uVar6 ^ (int)uVar6 >> 0x10;
  uVar2 = uVar3 - 1 & uVar6;
  iVar8 = *(int *)(*(long *)(this + 0x40) + (long)(int)uVar2 * 4);
  if (iVar8 != -1) {
    do {
      piVar1 = (int *)(*(long *)(this + 0x18) + (long)iVar8 * 0x10);
      if ((*piVar1 == param_1) && (piVar1[1] == param_2)) {
        if (piVar1 != (int *)0x0) {
          return piVar1;
        }
        break;
      }
      iVar8 = *(int *)(*(long *)(this + 0x60) + (long)iVar8 * 4);
    } while (iVar8 != -1);
  }
  uVar4 = *(uint *)(this + 0xc);
  uVar9 = uVar4;
  uVar13 = uVar3;
  if (uVar4 == uVar3) {
    uVar5 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar5 = 1;
    }
    uVar9 = uVar3;
    if ((int)uVar3 < (int)uVar5) {
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = btAlignedAllocInternal
                          (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar5 << 4,0x10);
        uVar9 = *(uint *)(this + 0xc);
      }
      if (0 < (int)uVar9) {
        lVar10 = 0;
        lVar11 = (long)(int)uVar9;
        do {
          lVar11 = lVar11 + -1;
          uVar14 = *(undefined8 *)(*(long *)(this + 0x18) + lVar10);
          ((undefined8 *)(lVar7 + lVar10))[1] = ((undefined8 *)(*(long *)(this + 0x18) + lVar10))[1]
          ;
          *(undefined8 *)(lVar7 + lVar10) = uVar14;
          lVar10 = lVar10 + 0x10;
        } while (lVar11 != 0);
      }
      if (*(void **)(this + 0x18) != (void *)0x0) {
        if (this[0x20] != (btHashedSimplePairCache)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x18));
        }
        *(undefined8 *)(this + 0x18) = 0;
      }
      this[0x20] = (btHashedSimplePairCache)0x1;
      *(long *)(this + 0x18) = lVar7;
      *(uint *)(this + 0x10) = uVar5;
      uVar9 = *(uint *)(this + 0xc);
      uVar13 = uVar5;
    }
  }
  *(uint *)(this + 0xc) = uVar9 + 1;
  piVar1 = (int *)(*(long *)(this + 0x18) + (long)(int)uVar4 * 0x10);
  if ((int)uVar3 < (int)uVar13) {
    growTables(this);
    uVar2 = *(int *)(this + 0x10) - 1U & uVar6;
  }
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = 0;
  piVar1[3] = 0;
  lVar7 = *(long *)(this + 0x40);
  uVar12 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
  *(undefined4 *)(*(long *)(this + 0x60) + (long)(int)uVar4 * 4) = *(undefined4 *)(lVar7 + uVar12);
  *(uint *)(lVar7 + uVar12) = uVar4;
  return piVar1;
}

