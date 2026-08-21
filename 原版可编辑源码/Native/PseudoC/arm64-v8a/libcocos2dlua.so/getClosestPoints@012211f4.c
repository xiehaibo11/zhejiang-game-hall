
/* SphereTriangleDetector::getClosestPoints(btDiscreteCollisionDetectorInterface::ClosestPointInput
   const&, btDiscreteCollisionDetectorInterface::Result&, btIDebugDraw*, bool) */

void __thiscall
SphereTriangleDetector::getClosestPoints
          (SphereTriangleDetector *this,ClosestPointInput *param_1,Result *param_2,
          btIDebugDraw *param_3,bool param_4)

{
  ulong uVar1;
  code *pcVar2;
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
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
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
  float local_60;
  float fStack_5c;
  float local_58;
  float local_24;
  
  local_24 = 0.0;
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = *(float *)(param_1 + 0x10);
  fVar9 = *(float *)(param_1 + 0x14);
  fVar12 = *(float *)(param_1 + 8);
  fVar13 = *(float *)(param_1 + 0x18);
  fVar15 = *(float *)(param_1 + 0x40);
  fVar16 = *(float *)(param_1 + 0x44);
  fVar17 = *(float *)(param_1 + 0x50);
  fVar18 = *(float *)(param_1 + 0x54);
  fVar21 = *(float *)(param_1 + 0x48);
  fVar22 = *(float *)(param_1 + 0x58);
  fVar10 = *(float *)(param_1 + 0x20);
  fVar11 = *(float *)(param_1 + 0x24);
  fVar14 = *(float *)(param_1 + 0x28);
  fVar19 = *(float *)(param_1 + 0x60);
  fVar20 = *(float *)(param_1 + 100);
  fVar23 = *(float *)(param_1 + 0x68);
  fVar3 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x70);
  fVar4 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x74);
  fVar5 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x78);
  local_90 = fVar6 * fVar21 + fVar8 * fVar22 + fVar10 * fVar23;
  fStack_8c = fVar7 * fVar21 + fVar9 * fVar22 + fVar11 * fVar23;
  local_88 = fVar12 * fVar21 + fVar13 * fVar22 + fVar14 * fVar23;
  local_b0 = fVar15 * fVar6 + fVar17 * fVar8 + fVar19 * fVar10;
  fStack_ac = fVar15 * fVar7 + fVar17 * fVar9 + fVar19 * fVar11;
  local_a8 = fVar15 * fVar12 + fVar17 * fVar13 + fVar19 * fVar14;
  local_a0 = fVar6 * fVar16 + fVar8 * fVar18 + fVar10 * fVar20;
  fStack_9c = fVar7 * fVar16 + fVar9 * fVar18 + fVar11 * fVar20;
  local_98 = fVar12 * fVar16 + fVar13 * fVar18 + fVar14 * fVar20;
  local_80 = fVar3 * fVar15 + fVar4 * fVar17 + fVar5 * fVar19;
  fStack_7c = fVar3 * fVar16 + fVar4 * fVar18 + fVar5 * fVar20;
  local_78 = fVar3 * fVar21 + fVar4 * fVar22 + fVar5 * fVar23;
  local_a4 = 0;
  local_94 = 0;
  local_84 = 0;
  local_74 = 0;
  uVar1 = collide((btVector3 *)this,(btVector3 *)&local_80,(btVector3 *)&local_60,&local_70,
                  &local_24,*(float *)(this + 0x18));
  if ((uVar1 & 1) != 0) {
    if (param_4) {
      fVar4 = *(float *)(param_1 + 0x40) * local_70 + *(float *)(param_1 + 0x44) * fStack_6c +
              *(float *)(param_1 + 0x48) * local_68;
      fVar5 = local_70 * *(float *)(param_1 + 0x50) + fStack_6c * *(float *)(param_1 + 0x54) +
              local_68 * *(float *)(param_1 + 0x58);
      fVar3 = local_70 * *(float *)(param_1 + 0x60) + fStack_6c * *(float *)(param_1 + 100) +
              local_68 * *(float *)(param_1 + 0x68);
      local_c0 = -fVar4;
      fStack_bc = -fVar5;
      local_b8 = -fVar3;
      local_d0 = local_60 * *(float *)(param_1 + 0x40) + fStack_5c * *(float *)(param_1 + 0x44) +
                 local_58 * *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x70) +
                 fVar4 * local_24;
      fStack_cc = local_60 * *(float *)(param_1 + 0x50) + fStack_5c * *(float *)(param_1 + 0x54) +
                  local_58 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x74) +
                  fVar5 * local_24;
      local_c8 = local_60 * *(float *)(param_1 + 0x60) + fStack_5c * *(float *)(param_1 + 100) +
                 local_58 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x78) +
                 fVar3 * local_24;
      pcVar2 = *(code **)(*(long *)param_2 + 0x20);
    }
    else {
      local_c0 = *(float *)(param_1 + 0x40) * local_70 + *(float *)(param_1 + 0x44) * fStack_6c +
                 *(float *)(param_1 + 0x48) * local_68;
      fStack_bc = local_70 * *(float *)(param_1 + 0x50) + fStack_6c * *(float *)(param_1 + 0x54) +
                  local_68 * *(float *)(param_1 + 0x58);
      local_b8 = local_70 * *(float *)(param_1 + 0x60) + fStack_6c * *(float *)(param_1 + 100) +
                 local_68 * *(float *)(param_1 + 0x68);
      pcVar2 = *(code **)(*(long *)param_2 + 0x20);
      local_d0 = local_60 * *(float *)(param_1 + 0x40) + fStack_5c * *(float *)(param_1 + 0x44) +
                 local_58 * *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x70);
      fStack_cc = local_60 * *(float *)(param_1 + 0x50) + fStack_5c * *(float *)(param_1 + 0x54) +
                  local_58 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x74);
      local_c8 = local_60 * *(float *)(param_1 + 0x60) + fStack_5c * *(float *)(param_1 + 100) +
                 local_58 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x78);
    }
    local_b4 = 0;
    local_c4 = 0;
    (*pcVar2)(local_24,param_2,&local_c0,&local_d0);
  }
  return;
}

