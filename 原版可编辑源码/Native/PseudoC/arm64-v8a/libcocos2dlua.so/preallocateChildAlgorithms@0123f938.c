
/* btCompoundCollisionAlgorithm::preallocateChildAlgorithms(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*) */

void __thiscall
btCompoundCollisionAlgorithm::preallocateChildAlgorithms
          (btCompoundCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2)

{
  btCollisionObjectWrapper *pbVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  btCollisionObjectWrapper *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  pbVar1 = param_2;
  if (this[0x30] == (btCompoundCollisionAlgorithm)0x0) {
    pbVar1 = param_1;
  }
  lVar9 = *(long *)(pbVar1 + 8);
  iVar5 = *(int *)(this + 0x14);
  if (this[0x30] == (btCompoundCollisionAlgorithm)0x0) {
    param_1 = param_2;
  }
  uVar2 = *(uint *)(lVar9 + 0x1c);
  if (iVar5 < (int)uVar2) {
    lVar10 = (long)iVar5;
    if (*(int *)(this + 0x18) < (int)uVar2) {
      if (uVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = btAlignedAllocInternal((long)(int)uVar2 << 3,0x10);
        iVar5 = *(int *)(this + 0x14);
      }
      if (0 < iVar5) {
        lVar6 = 0;
        do {
          lVar7 = lVar6 * 8;
          lVar6 = lVar6 + 1;
          *(undefined8 *)(lVar3 + lVar7) = *(undefined8 *)(*(long *)(this + 0x20) + lVar7);
        } while (iVar5 != lVar6);
      }
      if (*(void **)(this + 0x20) != (void *)0x0) {
        if (this[0x28] != (btCompoundCollisionAlgorithm)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x20));
        }
        *(undefined8 *)(this + 0x20) = 0;
      }
      *(long *)(this + 0x20) = lVar3;
      this[0x28] = (btCompoundCollisionAlgorithm)0x1;
      *(uint *)(this + 0x18) = uVar2;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x20) + lVar10 * 8) = 0;
      lVar10 = lVar10 + 1;
    } while ((int)uVar2 != lVar10);
  }
  *(uint *)(this + 0x14) = uVar2;
  if (0 < (int)uVar2) {
    uVar8 = 0;
    lVar10 = 0x40;
    do {
      if (*(long *)(lVar9 + 0x58) == 0) {
        uStack_70 = *(undefined8 *)(pbVar1 + 0x18);
        local_78 = *(undefined8 *)(pbVar1 + 0x10);
        uStack_80 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + lVar10);
        uStack_64 = (undefined4)uVar8;
        local_68 = 0xffffffff;
        local_88 = pbVar1;
        uVar4 = (**(code **)(**(long **)(this + 8) + 0x10))
                          (*(long **)(this + 8),&local_88,param_1,*(undefined8 *)(this + 0x38));
        *(undefined8 *)(*(long *)(this + 0x20) + uVar8 * 8) = uVar4;
      }
      else {
        *(undefined8 *)(*(long *)(this + 0x20) + uVar8 * 8) = 0;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x58;
    } while (uVar2 != uVar8);
  }
  return;
}

