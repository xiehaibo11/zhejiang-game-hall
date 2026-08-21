
/* btCollisionDispatcher::getNewManifold(btCollisionObject const*, btCollisionObject const*) */

undefined8 * __thiscall
btCollisionDispatcher::getNewManifold
          (btCollisionDispatcher *this,btCollisionObject *param_1,btCollisionObject *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  
  gNumManifold = gNumManifold + 1;
  fVar8 = gContactBreakingThreshold;
  if (((byte)this[8] >> 1 & 1) != 0) {
    fVar8 = (float)(**(code **)(**(long **)(param_1 + 200) + 0x28))(gContactBreakingThreshold);
    fVar9 = (float)(**(code **)(**(long **)(param_2 + 200) + 0x28))(gContactBreakingThreshold);
    if (fVar9 <= fVar8) {
      fVar8 = fVar9;
    }
  }
  lVar3 = *(long *)(this + 0x70);
  fVar9 = *(float *)(param_1 + 0xbc);
  if (*(float *)(param_2 + 0xbc) <= *(float *)(param_1 + 0xbc)) {
    fVar9 = *(float *)(param_2 + 0xbc);
  }
  if (*(int *)(lVar3 + 8) == 0) {
    if (((byte)this[8] >> 2 & 1) != 0) {
      return (undefined8 *)0x0;
    }
    puVar7 = (undefined8 *)btAlignedAllocInternal(0x330,0x10);
  }
  else {
    puVar7 = *(undefined8 **)(lVar3 + 0x10);
    uVar5 = *puVar7;
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
  }
  *(undefined4 *)puVar7 = 0x401;
  puVar7[0xf] = 0;
  *(undefined1 *)(puVar7 + 0x10) = 0;
  puVar7[0x27] = 0;
  *(undefined1 *)(puVar7 + 0x28) = 0;
  *(undefined8 *)((long)puVar7 + 0x9c) = 0;
  *(undefined8 *)((long)puVar7 + 0x94) = 0;
  *(undefined8 *)((long)puVar7 + 0x8c) = 0;
  *(undefined8 *)((long)puVar7 + 0x84) = 0;
  *(undefined8 *)((long)puVar7 + 0x15c) = 0;
  *(undefined8 *)((long)puVar7 + 0x154) = 0;
  *(undefined8 *)((long)puVar7 + 0x14c) = 0;
  *(undefined8 *)((long)puVar7 + 0x144) = 0;
  puVar7[0x3f] = 0;
  *(undefined1 *)(puVar7 + 0x40) = 0;
  *(undefined8 *)((long)puVar7 + 0x21c) = 0;
  *(undefined8 *)((long)puVar7 + 0x214) = 0;
  *(undefined8 *)((long)puVar7 + 0x20c) = 0;
  *(undefined8 *)((long)puVar7 + 0x204) = 0;
  puVar7[0x57] = 0;
  *(undefined1 *)(puVar7 + 0x58) = 0;
  *(undefined8 *)((long)puVar7 + 0x2dc) = 0;
  *(undefined8 *)((long)puVar7 + 0x2d4) = 0;
  *(undefined8 *)((long)puVar7 + 0x2cc) = 0;
  *(undefined8 *)((long)puVar7 + 0x2c4) = 0;
  puVar7[0x61] = param_1;
  puVar7[0x62] = param_2;
  *(undefined4 *)(puVar7 + 99) = 0;
  *(float *)((long)puVar7 + 0x31c) = fVar8;
  *(float *)(puVar7 + 100) = fVar9;
  iVar2 = *(int *)(this + 0x14);
  *(int *)((long)puVar7 + 0x32c) = iVar2;
  if (iVar2 == *(int *)(this + 0x18)) {
    uVar1 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    if (iVar2 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = btAlignedAllocInternal
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        iVar2 = *(int *)(this + 0x14);
      }
      if (0 < iVar2) {
        lVar4 = 0;
        do {
          lVar6 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(*(long *)(this + 0x20) + lVar6);
        } while (iVar2 != lVar4);
      }
      if (*(void **)(this + 0x20) != (void *)0x0) {
        if (this[0x28] != (btCollisionDispatcher)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x20));
          iVar2 = *(int *)(this + 0x14);
        }
        *(undefined8 *)(this + 0x20) = 0;
      }
      *(long *)(this + 0x20) = lVar3;
      this[0x28] = (btCollisionDispatcher)0x1;
      *(uint *)(this + 0x18) = uVar1;
    }
  }
  *(undefined8 **)(*(long *)(this + 0x20) + (long)iVar2 * 8) = puVar7;
  *(int *)(this + 0x14) = iVar2 + 1;
  return puVar7;
}

