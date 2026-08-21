
/* btConvexTriangleCallback::setTimeStepAndCounters(float, btDispatcherInfo const&,
   btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, btManifoldResult*) */

void __thiscall
btConvexTriangleCallback::setTimeStepAndCounters
          (btConvexTriangleCallback *this,float param_1,btDispatcherInfo *param_2,
          btCollisionObjectWrapper *param_3,btCollisionObjectWrapper *param_4,
          btManifoldResult *param_5)

{
  float *pfVar1;
  float *pfVar2;
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
  float fVar25;
  float fVar26;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  
  *(btCollisionObjectWrapper **)(this + 8) = param_3;
  *(btCollisionObjectWrapper **)(this + 0x10) = param_4;
  *(btDispatcherInfo **)(this + 0x48) = param_2;
  *(float *)(this + 0x50) = param_1;
  *(btManifoldResult **)(this + 0x38) = param_5;
  pfVar1 = *(float **)(param_4 + 0x18);
  pfVar2 = *(float **)(param_3 + 0x18);
  fVar14 = pfVar1[4];
  fVar12 = pfVar1[5];
  fVar3 = pfVar1[0xd];
  fVar17 = pfVar1[0xe];
  fVar16 = pfVar1[8];
  fVar5 = pfVar1[9];
  fVar9 = pfVar1[6];
  fVar7 = pfVar1[10];
  fVar18 = pfVar2[4];
  fVar19 = pfVar2[5];
  fVar20 = pfVar2[8];
  fVar21 = pfVar2[9];
  fVar22 = pfVar2[6];
  fVar23 = pfVar2[10];
  fVar24 = pfVar2[0xd];
  fVar25 = pfVar2[0xe];
  fVar15 = -pfVar1[0xc];
  fVar26 = *pfVar2;
  fVar10 = pfVar2[1];
  fVar4 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar13 = pfVar2[2];
  fVar11 = pfVar2[0xc];
  local_88 = fVar6 * fVar13 + fVar12 * fVar22 + fVar5 * fVar23;
  fStack_7c = fVar8 * fVar10 + fVar9 * fVar19 + fVar7 * fVar21;
  local_80 = fVar8 * fVar26 + fVar9 * fVar18 + fVar7 * fVar20;
  local_78 = fVar8 * fVar13 + fVar9 * fVar22 + fVar7 * fVar23;
  local_94 = 0;
  local_84 = 0;
  local_74 = 0;
  local_64 = 0;
  local_a0 = fVar4 * fVar26 + fVar14 * fVar18 + fVar16 * fVar20;
  fStack_9c = fVar4 * fVar10 + fVar14 * fVar19 + fVar16 * fVar21;
  local_98 = fVar4 * fVar13 + fVar14 * fVar22 + fVar16 * fVar23;
  local_90 = fVar6 * fVar26 + fVar12 * fVar18 + fVar5 * fVar20;
  fStack_8c = fVar6 * fVar10 + fVar12 * fVar19 + fVar5 * fVar21;
  local_70 = ((fVar4 * fVar15 - fVar14 * fVar3) - fVar16 * fVar17) +
             fVar4 * fVar11 + fVar14 * fVar24 + fVar16 * fVar25;
  fStack_6c = ((fVar6 * fVar15 - fVar12 * fVar3) - fVar5 * fVar17) +
              fVar6 * fVar11 + fVar12 * fVar24 + fVar5 * fVar25;
  local_68 = ((fVar8 * fVar15 - fVar9 * fVar3) - fVar7 * fVar17) +
             fVar8 * fVar11 + fVar9 * fVar24 + fVar7 * fVar25;
  (**(code **)(**(long **)(*(long *)(this + 8) + 8) + 0x10))
            (*(long **)(*(long *)(this + 8) + 8),&local_a0,this + 0x18,this + 0x28);
  *(float *)(this + 0x28) = *(float *)(this + 0x28) + param_1;
  *(float *)(this + 0x2c) = *(float *)(this + 0x2c) + param_1;
  *(float *)(this + 0x30) = *(float *)(this + 0x30) + param_1;
  *(float *)(this + 0x18) = *(float *)(this + 0x18) - param_1;
  *(float *)(this + 0x1c) = *(float *)(this + 0x1c) - param_1;
  *(float *)(this + 0x20) = *(float *)(this + 0x20) - param_1;
  return;
}

