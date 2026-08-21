
/* btTransformUtil::calculateDiffAxisAngle(btTransform const&, btTransform const&, btVector3&,
   float&) */

void btTransformUtil::calculateDiffAxisAngle
               (btTransform *param_1,btTransform *param_2,btVector3 *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_90;
  float fStack_8c;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_54;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x24);
  fVar11 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar7 = *(float *)(param_1 + 0x20);
  fVar4 = *(float *)param_1;
  fVar9 = *(float *)(param_1 + 4);
  fVar12 = *(float *)(param_1 + 8);
  fVar22 = fVar2 * fVar11 - fVar5 * fVar6;
  fVar23 = fVar5 * fVar7 - fVar11 * fVar1;
  fVar24 = fVar6 * fVar1 - fVar2 * fVar7;
  fVar13 = *(float *)param_2;
  fVar14 = *(float *)(param_2 + 4);
  fVar16 = *(float *)(param_2 + 0x10);
  fVar17 = *(float *)(param_2 + 0x14);
  fVar19 = *(float *)(param_2 + 0x20);
  fVar20 = *(float *)(param_2 + 0x24);
  fVar15 = *(float *)(param_2 + 8);
  fVar18 = *(float *)(param_2 + 0x18);
  fVar21 = *(float *)(param_2 + 0x28);
  fVar3 = 1.0 / (fVar22 * fVar4 + fVar9 * fVar23 + fVar24 * fVar12);
  fVar22 = fVar22 * fVar3;
  fVar8 = (fVar6 * fVar12 - fVar11 * fVar9) * fVar3;
  fVar10 = (fVar5 * fVar9 - fVar2 * fVar12) * fVar3;
  fVar23 = fVar23 * fVar3;
  fVar11 = (fVar11 * fVar4 - fVar7 * fVar12) * fVar3;
  fVar5 = (fVar1 * fVar12 - fVar5 * fVar4) * fVar3;
  fVar24 = fVar24 * fVar3;
  fVar6 = (fVar7 * fVar9 - fVar6 * fVar4) * fVar3;
  fVar3 = (fVar2 * fVar4 - fVar1 * fVar9) * fVar3;
  local_80 = fVar15 * fVar24 + fVar13 * fVar22 + fVar14 * fVar23;
  fStack_7c = fVar15 * fVar6 + fVar13 * fVar8 + fVar14 * fVar11;
  local_78 = fVar15 * fVar3 + fVar13 * fVar10 + fVar14 * fVar5;
  local_70 = fVar22 * fVar16 + fVar23 * fVar17 + fVar24 * fVar18;
  fStack_6c = fVar8 * fVar16 + fVar11 * fVar17 + fVar6 * fVar18;
  local_68 = fVar10 * fVar16 + fVar5 * fVar17 + fVar3 * fVar18;
  local_60 = fVar22 * fVar19 + fVar23 * fVar20 + fVar24 * fVar21;
  fStack_5c = fVar8 * fVar19 + fVar11 * fVar20 + fVar6 * fVar21;
  local_58 = fVar10 * fVar19 + fVar5 * fVar20 + fVar3 * fVar21;
  local_74 = 0;
  local_64 = 0;
  local_54 = 0;
  btMatrix3x3::getRotation((btMatrix3x3 *)&local_80,(btQuaternion *)&local_90);
  fVar3 = local_90 * local_90 + fStack_8c * fStack_8c + (float)uStack_88 * (float)uStack_88 +
          uStack_88._4_4_ * uStack_88._4_4_;
  fVar1 = SQRT(fVar3);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar3);
  }
  fVar1 = 1.0 / fVar1;
  fVar2 = (float)_local_90;
  fStack_8c = (float)((ulong)_local_90 >> 0x20) * fVar1;
  fVar3 = (float)((ulong)uStack_88 >> 0x20) * fVar1;
  uStack_88 = CONCAT44(fVar3,(float)uStack_88 * fVar1);
  if (fVar3 <= -1.0) {
    fVar3 = -1.0;
  }
  if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  local_90 = fVar2 * fVar1;
  fVar1 = acosf(fVar3);
  *param_4 = fVar1 + fVar1;
  fVar1 = local_90 * local_90 + fStack_8c * fStack_8c + (float)uStack_88 * (float)uStack_88;
  *(float *)param_3 = local_90;
  *(float *)(param_3 + 4) = fStack_8c;
  *(float *)(param_3 + 8) = (float)uStack_88;
  *(undefined4 *)(param_3 + 0xc) = 0;
  if (1.4210855e-14 <= fVar1) {
    fVar3 = SQRT(fVar1);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar1);
    }
    fVar3 = 1.0 / fVar3;
    *(float *)param_3 = fVar3 * *(float *)param_3;
    *(float *)(param_3 + 4) = fVar3 * *(float *)(param_3 + 4);
    *(float *)(param_3 + 8) = fVar3 * *(float *)(param_3 + 8);
  }
  else {
    *(undefined8 *)param_3 = 0x3f800000;
    *(undefined8 *)(param_3 + 8) = 0;
  }
  return;
}

