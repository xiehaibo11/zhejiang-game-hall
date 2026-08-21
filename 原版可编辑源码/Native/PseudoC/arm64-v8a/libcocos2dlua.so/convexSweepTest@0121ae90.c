
/* btCollisionWorld::convexSweepTest(btConvexShape const*, btTransform const&, btTransform const&,
   btCollisionWorld::ConvexResultCallback&, float) const */

void __thiscall
btCollisionWorld::convexSweepTest
          (btCollisionWorld *this,btConvexShape *param_1,btTransform *param_2,btTransform *param_3,
          ConvexResultCallback *param_4,float param_5)

{
  CProfileManager *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_218;
  float fStack_214;
  float fStack_210;
  undefined8 local_20c;
  float local_204;
  ulong local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  btCollisionWorld *local_160;
  ConvexResultCallback *pCStack_158;
  float local_150;
  btConvexShape *local_148;
  float local_140 [4];
  float local_130;
  float fStack_12c;
  float local_128;
  undefined4 local_124;
  btVector3 abStack_120 [16];
  btVector3 abStack_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  
  CProfileManager::Start_Profile("convexSweepTest");
  uStack_b8 = *(undefined8 *)(param_2 + 8);
  local_c0 = *(undefined8 *)param_2;
  uStack_a8 = *(undefined8 *)(param_2 + 0x18);
  local_b0 = *(undefined8 *)(param_2 + 0x10);
  uStack_98 = *(undefined8 *)(param_2 + 0x28);
  local_a0 = *(undefined8 *)(param_2 + 0x20);
  uStack_88 = *(undefined8 *)(param_2 + 0x38);
  local_90 = *(undefined8 *)(param_2 + 0x30);
  uStack_f8 = *(undefined8 *)(param_3 + 8);
  local_100 = *(undefined8 *)param_3;
  uStack_e8 = *(undefined8 *)(param_3 + 0x18);
  local_f0 = *(undefined8 *)(param_3 + 0x10);
  uStack_d8 = *(undefined8 *)(param_3 + 0x28);
  local_e0 = *(undefined8 *)(param_3 + 0x20);
  uStack_c8 = *(undefined8 *)(param_3 + 0x38);
  local_d0 = *(undefined8 *)(param_3 + 0x30);
  btTransformUtil::calculateDiffAxisAngle
            ((btTransform *)&local_c0,(btTransform *)&local_100,(btVector3 *)&local_218,local_140);
  local_128 = local_140[0];
  local_140[0] = 0.0;
  local_140[1] = 0.0;
  local_140[2] = 0.0;
  local_140[3] = 0.0;
  local_130 = local_218 * local_128;
  fStack_12c = local_128 * fStack_214;
  local_128 = local_128 * fStack_210;
  local_218 = 1.0;
  fStack_214 = 0.0;
  fStack_210 = 0.0;
  local_20c = 0;
  local_204 = 1.0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 1.0;
  uStack_1dc = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  local_124 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  btMatrix3x3::getRotation((btMatrix3x3 *)&local_c0,(btQuaternion *)&local_80);
  fVar6 = 2.0 / (local_80 * local_80 + fStack_7c * fStack_7c + local_78 * local_78 +
                fStack_74 * fStack_74);
  fVar8 = fStack_7c * fVar6;
  fVar7 = local_78 * fVar6;
  fVar9 = fStack_74 * local_80 * fVar6;
  fVar6 = local_80 * local_80 * fVar6;
  fStack_214 = local_80 * fVar8 - fStack_74 * fVar7;
  fStack_210 = local_80 * fVar7 + fStack_74 * fVar8;
  local_218 = 1.0 - (fStack_7c * fVar8 + local_78 * fVar7);
  local_204 = 1.0 - (fVar6 + local_78 * fVar7);
  local_1f0 = 1.0 - (fVar6 + fStack_7c * fVar8);
  local_20c = (ulong)(uint)(local_80 * fVar8 + fStack_74 * fVar7) << 0x20;
  local_200 = (ulong)(uint)(fStack_7c * fVar7 - fVar9);
  local_1f8 = CONCAT44(fStack_7c * fVar7 + fVar9,local_80 * fVar7 - fStack_74 * fVar8);
  uStack_1ec = 0;
  btCollisionShape::calculateTemporalAabb
            ((btCollisionShape *)param_1,(btTransform *)&local_218,(btVector3 *)local_140,
             (btVector3 *)&local_130,1.0,abStack_110,abStack_120);
  local_218 = 4.4653597e-38;
  fStack_214 = 0.0;
  uStack_1e8 = (undefined4)*(undefined8 *)(param_2 + 8);
  uStack_1e4 = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  local_1f0 = (float)*(undefined8 *)param_2;
  uStack_1ec = (undefined4)((ulong)*(undefined8 *)param_2 >> 0x20);
  uStack_1d8 = *(undefined8 *)(param_2 + 0x18);
  uStack_1e0 = (undefined4)*(undefined8 *)(param_2 + 0x10);
  uStack_1dc = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  uStack_1c8 = *(undefined8 *)(param_2 + 0x28);
  local_1d0 = *(undefined8 *)(param_2 + 0x20);
  uStack_1b8 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uStack_1a8 = *(undefined8 *)(param_3 + 8);
  local_1b0 = *(undefined8 *)param_3;
  uStack_198 = *(undefined8 *)(param_3 + 0x18);
  local_1a0 = *(undefined8 *)(param_3 + 0x10);
  uStack_188 = *(undefined8 *)(param_3 + 0x28);
  local_190 = *(undefined8 *)(param_3 + 0x20);
  uStack_178 = *(undefined8 *)(param_3 + 0x38);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  local_180._0_4_ = (float)uVar2;
  local_180._4_4_ = (float)((ulong)uVar2 >> 0x20);
  local_1c0._0_4_ = (float)uVar1;
  local_1c0._4_4_ = (float)((ulong)uVar1 >> 0x20);
  fVar9 = (float)local_180 - (float)local_1c0;
  fVar10 = local_180._4_4_ - local_1c0._4_4_;
  fVar8 = (float)uStack_178 - (float)uStack_1b8;
  fVar7 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
  fVar6 = SQRT(fVar7);
  local_1c0 = uVar1;
  local_180 = uVar2;
  local_160 = this;
  pCStack_158 = param_4;
  local_150 = param_5;
  local_148 = param_1;
  if (NAN(fVar6)) {
    fVar6 = sqrtf(fVar7);
  }
  fVar7 = 1e+18;
  fVar6 = 1.0 / fVar6;
  fVar3 = fVar9 * fVar6;
  fVar4 = fVar10 * fVar6;
  fVar6 = fVar8 * fVar6;
  fStack_210 = fVar7;
  if (fVar3 != 0.0) {
    fStack_210 = 1.0 / fVar3;
  }
  fVar5 = fVar7;
  if (fVar4 != 0.0) {
    fVar5 = 1.0 / fVar4;
  }
  if (fVar6 != 0.0) {
    fVar7 = 1.0 / fVar6;
  }
  local_200 = (ulong)CONCAT14(fVar5 < 0.0,(uint)(fStack_210 < 0.0));
  local_20c = CONCAT44(fVar7,fVar5);
  local_1f8 = CONCAT44(fVar8 * fVar6 + fVar9 * fVar3 + fVar10 * fVar4,(uint)(fVar7 < 0.0));
  this_00 = (CProfileManager *)
            (**(code **)(**(long **)(this + 0x60) + 0x30))
                      (*(long **)(this + 0x60),&local_90,&local_d0,&local_218,abStack_110,
                       abStack_120);
  CProfileManager::Stop_Profile(this_00);
  return;
}

