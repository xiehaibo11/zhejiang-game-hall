
/* btCompoundShape::setLocalScaling(btVector3 const&) */

void __thiscall btCompoundShape::setLocalScaling(btCompoundShape *this,btVector3 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (0 < *(int *)(this + 0x1c)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(this + 0x28) + lVar3);
      uStack_c8 = puVar1[1];
      local_d0 = *puVar1;
      uStack_b8 = puVar1[3];
      local_c0 = puVar1[2];
      uStack_a8 = puVar1[5];
      local_b0 = puVar1[4];
      uStack_98 = puVar1[7];
      local_a0 = puVar1[6];
      puVar1 = (undefined8 *)(**(code **)(*(long *)puVar1[8] + 0x38))();
      local_e0 = (float)*puVar1;
      fStack_dc = (float)((ulong)*puVar1 >> 0x20);
      uStack_d4 = 0;
      local_d8 = (*(float *)(puVar1 + 1) * *(float *)(param_1 + 8)) / *(float *)(this + 0x70);
      _local_e0 = CONCAT44((fStack_dc * *(float *)(param_1 + 4)) / *(float *)(this + 0x6c),
                           (local_e0 * *(float *)param_1) / *(float *)(this + 0x68));
      plVar2 = *(long **)(*(long *)(this + 0x28) + lVar3 + 0x40);
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_e0);
      local_a0 = CONCAT44((local_a0._4_4_ * *(float *)(param_1 + 4)) / *(float *)(this + 0x6c),
                          ((float)local_a0 * *(float *)param_1) / *(float *)(this + 0x68));
      uStack_98 = (ulong)(uint)(((float)uStack_98 * *(float *)(param_1 + 8)) /
                               *(float *)(this + 0x70));
      puVar1 = (undefined8 *)(*(long *)(this + 0x28) + lVar3);
      puVar1[1] = uStack_c8;
      *puVar1 = local_d0;
      puVar1[3] = uStack_b8;
      puVar1[2] = local_c0;
      puVar1[5] = uStack_a8;
      puVar1[4] = local_b0;
      puVar1[7] = uStack_98;
      puVar1[6] = local_a0;
      if (*(long *)(this + 0x58) != 0) {
        plVar2 = *(long **)(*(long *)(this + 0x28) + lVar3 + 0x40);
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_d0,&uStack_60,&local_70);
        uStack_88 = uStack_58;
        local_90 = uStack_60;
        uStack_78 = uStack_68;
        local_80 = local_70;
        btDbvt::update(*(btDbvt **)(this + 0x58),
                       *(btDbvtNode **)(*(long *)(this + 0x28) + lVar3 + 0x50),
                       (btDbvtAabbMm *)&local_90);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x58;
    } while (lVar4 < *(int *)(this + 0x1c));
  }
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x68) = uVar5;
  (**(code **)(*(long *)this + 0x88))(this);
  return;
}

