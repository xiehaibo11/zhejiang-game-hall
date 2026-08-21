
/* btConvexShape::project(btTransform const&, btVector3 const&, float&, float&) const */

void __thiscall
btConvexShape::project
          (btConvexShape *this,btTransform *param_1,btVector3 *param_2,float *param_3,float *param_4
          )

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
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_90;
  float local_8c;
  float fStack_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = fVar5 * *(float *)(param_1 + 0x28);
  fVar3 = *(float *)param_1 * fVar1 + *(float *)(param_1 + 0x10) * fVar2 +
          *(float *)(param_1 + 0x20) * fVar5;
  fStack_7c = fVar1 * *(float *)(param_1 + 4) + fVar2 * *(float *)(param_1 + 0x14) +
              fVar5 * *(float *)(param_1 + 0x24);
  local_78 = fVar1 * *(float *)(param_1 + 8) + fVar2 * *(float *)(param_1 + 0x18) + fVar6;
  local_74 = 0;
  local_80 = fVar3;
  fVar1 = (float)(**(code **)(*(long *)this + 0x80))(this,&local_80);
  fVar11 = *(float *)(param_1 + 0x10);
  fVar15 = *(float *)(param_1 + 0x14);
  fVar18 = *(float *)(param_1 + 0x18);
  fVar23 = *(float *)(param_1 + 0x34);
  fVar7 = fVar6 * *(float *)(param_1 + 0x28);
  fVar24 = *(float *)(param_1 + 0x38);
  local_90 = -local_80;
  local_8c = -fStack_7c;
  fStack_88 = -local_78;
  fVar4 = *(float *)param_1 * fVar1 + fVar3 * *(float *)(param_1 + 4) +
          fVar6 * *(float *)(param_1 + 8);
  fVar2 = fVar1 * *(float *)(param_1 + 0x20) + fVar3 * *(float *)(param_1 + 0x24) + fVar7;
  fVar17 = fVar4 + *(float *)(param_1 + 0x30);
  local_84 = 0;
  fVar5 = (float)(**(code **)(*(long *)this + 0x80))(this,&local_90);
  fVar10 = *(float *)param_1;
  fVar12 = *(float *)(param_1 + 4);
  fVar19 = *(float *)(param_1 + 8);
  fVar13 = *(float *)(param_1 + 0x10);
  fVar21 = *(float *)(param_1 + 0x14);
  fVar8 = *(float *)(param_1 + 0x18);
  fVar14 = *(float *)(param_1 + 0x20);
  fVar22 = *(float *)(param_1 + 0x24);
  fVar9 = *(float *)(param_1 + 0x28);
  fVar20 = *(float *)(param_1 + 0x30);
  uVar16 = *(undefined8 *)(param_1 + 0x34);
  *param_3 = fVar17 * *(float *)param_2 +
             (fVar1 * fVar11 + fVar3 * fVar15 + fVar6 * fVar18 + fVar23) * *(float *)(param_2 + 4) +
             (fVar2 + fVar24) * *(float *)(param_2 + 8);
  fVar1 = (fVar10 * fVar5 + fVar4 * fVar12 + fVar7 * fVar19 + fVar20) * *(float *)param_2 +
          (fVar13 * fVar5 + fVar21 * fVar4 + fVar8 * fVar7 + (float)uVar16) *
          (float)*(undefined8 *)(param_2 + 4) +
          (fVar14 * fVar5 + fVar22 * fVar4 + fVar9 * fVar7 + (float)((ulong)uVar16 >> 0x20)) *
          (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  *param_4 = fVar1;
  fVar2 = *param_3;
  if (fVar1 < fVar2) {
    *param_3 = fVar1;
    *param_4 = fVar2;
  }
  return;
}

