
/* btHashMap<btHashPtr, btCollisionShape*>::insert(btHashPtr const&, btCollisionShape* const&) */

void __thiscall
btHashMap<btHashPtr,btCollisionShape*>::insert
          (btHashMap<btHashPtr,btCollisionShape*> *this,btHashPtr *param_1,
          btCollisionShape **param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  
  iVar2 = *(int *)(this + 0x48);
  uVar1 = *(int *)(param_1 + 4) + *(int *)param_1 +
          ((*(int *)(param_1 + 4) + *(int *)param_1) * 0x8000 ^ 0xffffffffU);
  uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ (int)uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & iVar2 - 1U;
  if ((uVar1 < *(uint *)(this + 4)) &&
     (iVar5 = *(int *)(*(long *)(this + 0x10) + (long)(int)uVar1 * 4), iVar5 != -1)) {
    do {
      if (*(long *)param_1 == *(long *)(*(long *)(this + 0x70) + (long)iVar5 * 8)) {
        *(btCollisionShape **)(*(long *)(this + 0x50) + (long)iVar5 * 8) = *param_2;
        return;
      }
      iVar5 = *(int *)(*(long *)(this + 0x30) + (long)iVar5 * 4);
    } while (iVar5 != -1);
  }
  iVar5 = *(int *)(this + 0x44);
  iVar6 = iVar5;
  if (iVar5 == iVar2) {
    uVar3 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    iVar6 = iVar2;
    if (iVar2 < (int)uVar3) {
      if (uVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = btAlignedAllocInternal
                          (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3,0x10);
        iVar6 = *(int *)(this + 0x44);
      }
      if (0 < iVar6) {
        lVar7 = 0;
        do {
          lVar10 = lVar7 * 8;
          lVar7 = lVar7 + 1;
          *(undefined8 *)(lVar4 + lVar10) = *(undefined8 *)(*(long *)(this + 0x50) + lVar10);
        } while (iVar6 != lVar7);
      }
      if (*(void **)(this + 0x50) != (void *)0x0) {
        if (this[0x58] != (btHashMap<btHashPtr,btCollisionShape*>)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x50));
          iVar6 = *(int *)(this + 0x44);
        }
        *(undefined8 *)(this + 0x50) = 0;
      }
      *(long *)(this + 0x50) = lVar4;
      this[0x58] = (btHashMap<btHashPtr,btCollisionShape*>)0x1;
      *(uint *)(this + 0x48) = uVar3;
    }
  }
  *(btCollisionShape **)(*(long *)(this + 0x50) + (long)iVar6 * 8) = *param_2;
  iVar8 = *(int *)(this + 100);
  *(int *)(this + 0x44) = iVar6 + 1;
  if (iVar8 == *(int *)(this + 0x68)) {
    uVar3 = iVar8 << 1;
    if (iVar8 == 0) {
      uVar3 = 1;
    }
    if (iVar8 < (int)uVar3) {
      if (uVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = btAlignedAllocInternal
                          (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3,0x10);
        iVar8 = *(int *)(this + 100);
      }
      if (0 < iVar8) {
        lVar7 = 0;
        do {
          lVar10 = lVar7 * 8;
          lVar7 = lVar7 + 1;
          *(undefined8 *)(lVar4 + lVar10) = *(undefined8 *)(*(long *)(this + 0x70) + lVar10);
        } while (iVar8 != lVar7);
      }
      if (*(void **)(this + 0x70) != (void *)0x0) {
        if (this[0x78] != (btHashMap<btHashPtr,btCollisionShape*>)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x70));
        }
        *(undefined8 *)(this + 0x70) = 0;
      }
      iVar8 = *(int *)(this + 100);
      this[0x78] = (btHashMap<btHashPtr,btCollisionShape*>)0x1;
      *(long *)(this + 0x70) = lVar4;
      *(uint *)(this + 0x68) = uVar3;
    }
  }
  *(undefined8 *)(*(long *)(this + 0x70) + (long)iVar8 * 8) = *(undefined8 *)param_1;
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  if (iVar2 < *(int *)(this + 0x48)) {
    growTables((btHashPtr *)this);
    uVar1 = *(int *)(param_1 + 4) + *(int *)param_1 +
            ((*(int *)(param_1 + 4) + *(int *)param_1) * 0x8000 ^ 0xffffffffU);
    uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
    uVar1 = uVar1 ^ (int)uVar1 >> 6;
    uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
    uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & *(int *)(this + 0x48) - 1U;
  }
  lVar4 = *(long *)(this + 0x10);
  uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  *(undefined4 *)(*(long *)(this + 0x30) + (long)iVar5 * 4) = *(undefined4 *)(lVar4 + uVar9);
  *(int *)(lVar4 + uVar9) = iVar5;
  return;
}

