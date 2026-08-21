
/* btCollisionWorld::addCollisionObject(btCollisionObject*, short, short) */

void __thiscall
btCollisionWorld::addCollisionObject
          (btCollisionWorld *this,btCollisionObject *param_1,short param_2,short param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar4 = *(int *)(this + 0xc);
  if (iVar4 == *(int *)(this + 0x10)) {
    uVar1 = iVar4 << 1;
    if (iVar4 == 0) {
      uVar1 = 1;
    }
    if (iVar4 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = btAlignedAllocInternal
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        iVar4 = *(int *)(this + 0xc);
      }
      if (0 < iVar4) {
        lVar5 = 0;
        do {
          lVar6 = lVar5 * 8;
          lVar5 = lVar5 + 1;
          *(undefined8 *)(lVar2 + lVar6) = *(undefined8 *)(*(long *)(this + 0x18) + lVar6);
        } while (iVar4 != lVar5);
      }
      if (*(void **)(this + 0x18) != (void *)0x0) {
        if (this[0x20] != (btCollisionWorld)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x18));
          iVar4 = *(int *)(this + 0xc);
        }
        *(undefined8 *)(this + 0x18) = 0;
      }
      *(long *)(this + 0x18) = lVar2;
      this[0x20] = (btCollisionWorld)0x1;
      *(uint *)(this + 0x10) = uVar1;
    }
  }
  *(btCollisionObject **)(*(long *)(this + 0x18) + (long)iVar4 * 8) = param_1;
  *(int *)(this + 0xc) = iVar4 + 1;
  uStack_78 = *(undefined8 *)(param_1 + 0x10);
  local_80 = *(undefined8 *)(param_1 + 8);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  local_70 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  local_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  local_50 = *(undefined8 *)(param_1 + 0x38);
  (**(code **)(**(long **)(param_1 + 200) + 0x10))
            (*(long **)(param_1 + 200),&local_80,auStack_90,auStack_a0);
  uVar3 = (**(code **)(**(long **)(this + 0x60) + 0x10))
                    (*(long **)(this + 0x60),auStack_90,auStack_a0,
                     *(undefined4 *)(*(long *)(param_1 + 200) + 8),param_1,param_2,param_3,
                     *(undefined8 *)(this + 0x28),0);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  return;
}

