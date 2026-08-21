
/* btCompoundShape::addChildShape(btTransform const&, btCollisionShape*) */

void __thiscall
btCompoundShape::addChildShape(btCompoundShape *this,btTransform *param_1,btCollisionShape *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  btDbvtAabbMm local_e0 [32];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
  uStack_98 = *(undefined8 *)(param_1 + 8);
  local_a0 = *(undefined8 *)param_1;
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  local_90 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  local_80 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  local_70 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar10 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
  (**(code **)(*(long *)param_2 + 0x10))(param_2,param_1,&local_b0,&local_c0);
  if (local_b0 < *(float *)(this + 0x38)) {
    *(float *)(this + 0x38) = local_b0;
  }
  if (*(float *)(this + 0x48) < local_c0) {
    *(float *)(this + 0x48) = local_c0;
  }
  if (local_ac < *(float *)(this + 0x3c)) {
    *(float *)(this + 0x3c) = local_ac;
  }
  if (*(float *)(this + 0x4c) < fStack_bc) {
    *(float *)(this + 0x4c) = fStack_bc;
  }
  if (local_a8 < *(float *)(this + 0x40)) {
    *(float *)(this + 0x40) = local_a8;
  }
  if (*(float *)(this + 0x50) < fStack_b8) {
    *(float *)(this + 0x50) = fStack_b8;
  }
  if (*(btDbvt **)(this + 0x58) == (btDbvt *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = btDbvt::insert(*(btDbvt **)(this + 0x58),local_e0,(void *)(long)*(int *)(this + 0x1c));
  }
  iVar6 = *(int *)(this + 0x1c);
  if (iVar6 == *(int *)(this + 0x20)) {
    iVar3 = iVar6 << 1;
    if (iVar6 == 0) {
      iVar3 = 1;
    }
    if (iVar6 < iVar3) {
      if (iVar3 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = btAlignedAllocInternal((long)iVar3 * 0x58,0x10);
        iVar6 = *(int *)(this + 0x1c);
      }
      if (0 < iVar6) {
        lVar7 = (long)iVar6;
        lVar9 = 0x40;
        do {
          puVar8 = (undefined8 *)(lVar5 + lVar9);
          lVar7 = lVar7 + -1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x28) + lVar9);
          uVar11 = puVar1[-8];
          lVar9 = lVar9 + 0x58;
          puVar8[-7] = puVar1[-7];
          puVar8[-8] = uVar11;
          uVar11 = puVar1[-6];
          puVar8[-5] = puVar1[-5];
          puVar8[-6] = uVar11;
          uVar11 = puVar1[-4];
          puVar8[-3] = puVar1[-3];
          puVar8[-4] = uVar11;
          uVar11 = puVar1[-2];
          puVar8[-1] = puVar1[-1];
          puVar8[-2] = uVar11;
          puVar8[2] = puVar1[2];
          uVar11 = *puVar1;
          puVar8[1] = puVar1[1];
          *puVar8 = uVar11;
        } while (lVar7 != 0);
      }
      if (*(void **)(this + 0x28) != (void *)0x0) {
        if (this[0x30] != (btCompoundShape)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x28));
        }
        *(undefined8 *)(this + 0x28) = 0;
      }
      iVar6 = *(int *)(this + 0x1c);
      this[0x30] = (btCompoundShape)0x1;
      *(long *)(this + 0x28) = lVar5;
      *(int *)(this + 0x20) = iVar3;
    }
  }
  puVar8 = (undefined8 *)(*(long *)(this + 0x28) + (long)iVar6 * 0x58);
  puVar8[1] = uStack_98;
  *puVar8 = local_a0;
  puVar8[3] = uStack_88;
  puVar8[2] = local_90;
  puVar8[5] = uStack_78;
  puVar8[4] = local_80;
  puVar8[8] = param_2;
  *(undefined4 *)(puVar8 + 9) = uVar2;
  *(undefined4 *)((long)puVar8 + 0x4c) = uVar10;
  puVar8[7] = uStack_68;
  puVar8[6] = local_70;
  puVar8[10] = uVar4;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  return;
}

