
/* btGhostObject::convexSweepTest(btConvexShape const*, btTransform const&, btTransform const&,
   btCollisionWorld::ConvexResultCallback&, float) const */

void __thiscall
btGhostObject::convexSweepTest
          (btGhostObject *this,btConvexShape *param_1,btTransform *param_2,btTransform *param_3,
          ConvexResultCallback *param_4,float param_5)

{
  ulong uVar1;
  btCollisionObject *pbVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_174;
  float local_170;
  float fStack_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float fStack_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  float local_108;
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
  
  uStack_b8 = *(undefined8 *)(param_2 + 8);
  local_c0 = *(undefined8 *)param_2;
  uStack_a8 = *(undefined8 *)(param_2 + 0x18);
  local_b0 = *(undefined8 *)(param_2 + 0x10);
  uStack_98 = *(undefined8 *)(param_2 + 0x28);
  local_a0 = *(undefined8 *)(param_2 + 0x20);
  uStack_88 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uStack_f8 = *(undefined8 *)(param_3 + 8);
  local_100 = *(undefined8 *)param_3;
  local_90._0_4_ = (float)uVar4;
  local_90._4_4_ = (float)((ulong)uVar4 >> 0x20);
  uStack_e8 = *(undefined8 *)(param_3 + 0x18);
  local_f0 = *(undefined8 *)(param_3 + 0x10);
  uStack_d8 = *(undefined8 *)(param_3 + 0x28);
  local_e0 = *(undefined8 *)(param_3 + 0x20);
  uStack_c8 = *(undefined8 *)(param_3 + 0x38);
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  local_114 = 0;
  local_d0._0_4_ = (float)uVar5;
  local_d0._4_4_ = (float)((ulong)uVar5 >> 0x20);
  local_120 = (float)local_d0 - (float)local_90;
  fStack_11c = local_d0._4_4_ - local_90._4_4_;
  local_118 = (float)uStack_c8 - (float)uStack_88;
  local_d0 = uVar5;
  local_90 = uVar4;
  btTransformUtil::calculateDiffAxisAngle
            ((btTransform *)&local_c0,(btTransform *)&local_100,(btVector3 *)&local_170,&local_80);
  local_130 = local_170 * local_80;
  fStack_12c = local_80 * fStack_16c;
  local_128 = local_80 * local_168;
  local_140 = 0;
  uStack_138 = 0;
  local_124 = 0;
  btMatrix3x3::getRotation((btMatrix3x3 *)&local_c0,(btQuaternion *)&local_80);
  fVar6 = 2.0 / (local_80 * local_80 + fStack_7c * fStack_7c + local_78 * local_78 +
                fStack_74 * fStack_74);
  fVar8 = fStack_7c * fVar6;
  fVar7 = local_78 * fVar6;
  fStack_14c = fStack_74 * local_80 * fVar6;
  fVar6 = local_80 * local_80 * fVar6;
  fStack_16c = local_80 * fVar8 - fStack_74 * fVar7;
  local_168 = local_80 * fVar7 + fStack_74 * fVar8;
  local_160 = local_80 * fVar8 + fStack_74 * fVar7;
  local_158 = fStack_7c * fVar7 - fStack_14c;
  local_150 = local_80 * fVar7 - fStack_74 * fVar8;
  fStack_14c = fStack_7c * fVar7 + fStack_14c;
  local_170 = 1.0 - (fStack_7c * fVar8 + local_78 * fVar7);
  fStack_15c = 1.0 - (fVar6 + local_78 * fVar7);
  local_148 = 1.0 - (fVar6 + fStack_7c * fVar8);
  local_164 = 0;
  local_154 = 0;
  local_144 = 0;
  btCollisionShape::calculateTemporalAabb
            ((btCollisionShape *)param_1,(btTransform *)&local_170,(btVector3 *)&local_120,
             (btVector3 *)&local_130,1.0,(btVector3 *)&local_80,(btVector3 *)&local_110);
  if (0 < *(int *)(this + 300)) {
    lVar3 = 0;
    do {
      pbVar2 = *(btCollisionObject **)(*(long *)(this + 0x138) + lVar3 * 8);
      uVar1 = (**(code **)(*(long *)param_4 + 0x10))(param_4,*(undefined8 *)(pbVar2 + 0xc0));
      if ((uVar1 & 1) != 0) {
        (**(code **)(**(long **)(pbVar2 + 200) + 0x10))
                  (*(long **)(pbVar2 + 200),(btTransform *)(pbVar2 + 8),&local_170,&local_120);
        local_170 = local_170 + local_80;
        fStack_16c = fStack_16c + fStack_7c;
        local_168 = local_168 + local_78;
        local_120 = local_120 + local_110;
        fStack_11c = fStack_11c + fStack_10c;
        local_118 = local_118 + local_108;
        local_164 = 0;
        local_114 = 0;
        local_174 = 1.0;
        uVar1 = btRayAabb((btVector3 *)(param_2 + 0x30),(btVector3 *)(param_3 + 0x30),
                          (btVector3 *)&local_170,(btVector3 *)&local_120,&local_174,
                          (btVector3 *)&local_130);
        if ((uVar1 & 1) != 0) {
          btCollisionWorld::objectQuerySingle
                    (param_1,(btTransform *)&local_c0,(btTransform *)&local_100,pbVar2,
                     *(btCollisionShape **)(pbVar2 + 200),(btTransform *)(pbVar2 + 8),param_4,
                     param_5);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 300));
  }
  return;
}

