
/* btCollisionWorld::rayTest(btVector3 const&, btVector3 const&,
   btCollisionWorld::RayResultCallback&) const */

void __thiscall
btCollisionWorld::rayTest
          (btCollisionWorld *this,btVector3 *param_1,btVector3 *param_2,RayResultCallback *param_3)

{
  float fVar1;
  float __x;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **local_138;
  float local_130;
  float fStack_12c;
  float local_128;
  uint local_120;
  uint local_11c;
  uint local_118;
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  btCollisionWorld *local_60;
  RayResultCallback *pRStack_58;
  
  local_138 = &PTR__btBroadphaseAabbCallback_01731d90;
  uStack_108 = *(undefined8 *)(param_1 + 8);
  local_110 = *(undefined8 *)param_1;
  uStack_f8 = *(undefined8 *)(param_2 + 8);
  local_100 = *(undefined8 *)param_2;
  local_f0 = 0x3f800000;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0x3f800000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0x3f800000;
  local_b0 = 0x3f800000;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0x3f800000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x3f800000;
  uStack_78 = *(undefined8 *)(param_2 + 8);
  local_80 = *(undefined8 *)param_2;
  fVar4 = *(float *)param_2 - *(float *)param_1;
  fVar2 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  __x = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar1 = SQRT(__x);
  local_c0 = local_110;
  uStack_b8 = uStack_108;
  local_60 = this;
  pRStack_58 = param_3;
  if (NAN(fVar1)) {
    fVar1 = sqrtf(__x);
  }
  local_128 = 1e+18;
  fVar1 = 1.0 / fVar1;
  fVar4 = fVar4 * fVar1;
  fVar2 = fVar2 * fVar1;
  fVar3 = fVar3 * fVar1;
  local_130 = local_128;
  if (fVar4 != 0.0) {
    local_130 = 1.0 / fVar4;
  }
  fStack_12c = local_128;
  if (fVar2 != 0.0) {
    fStack_12c = 1.0 / fVar2;
  }
  if (fVar3 != 0.0) {
    local_128 = 1.0 / fVar3;
  }
  local_120 = (uint)(local_130 < 0.0);
  local_11c = (uint)(fStack_12c < 0.0);
  local_114 = fVar4 * ((float)local_100 - (float)local_110) +
              fVar2 * (local_100._4_4_ - local_110._4_4_) +
              fVar3 * ((float)uStack_f8 - (float)uStack_108);
  local_118 = (uint)(local_128 < 0.0);
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  (**(code **)(**(long **)(this + 0x60) + 0x30))
            (*(long **)(this + 0x60),param_1,param_2,&local_138,&local_148,&local_158);
  return;
}

