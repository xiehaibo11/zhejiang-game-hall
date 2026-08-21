
/* btTriangleMeshShape::localGetSupportingVertex(btVector3 const&) const */

undefined1  [16] __thiscall
btTriangleMeshShape::localGetSupportingVertex(btTriangleMeshShape *this,btVector3 *param_1)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_50 = 0;
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_d0 = &PTR__btTriangleCallback_01733a78;
  local_c8 = 0;
  local_b8 = 0x3f800000;
  local_a4 = 0x3f800000;
  local_90 = 0x3f800000;
  local_c0 = 0;
  local_ac = 0;
  local_b4 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_78 = 0xdd5e0b6b;
  fVar2 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4) * 0.0;
  fStack_70 = *(float *)(param_1 + 8) * 0.0;
  local_74 = fVar2 + fVar4 + fStack_70;
  fStack_70 = fVar2 * 0.0 + *(float *)(param_1 + 4) + fStack_70;
  local_6c = fVar2 * 0.0 + fVar4 + *(float *)(param_1 + 8);
  local_e0 = 0x5d5e0b6b5d5e0b6b;
  uStack_d8 = 0x5d5e0b6b;
  local_68 = 0;
  uStack_e8 = 0xdd5e0b6b;
  local_f0 = 0xdd5e0b6bdd5e0b6b;
  (**(code **)(*(long *)this + 0x80))(this,&local_d0,&local_f0,&local_e0);
  uVar5 = local_c8 & 0xffffffff;
  uVar6 = 0;
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)&local_d0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    auVar3._8_8_ = uVar6;
    auVar3._0_8_ = uVar5;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

