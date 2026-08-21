
/* DebugDrawcallback::processTriangle(btVector3*, int, int) */

void DebugDrawcallback::processTriangle(btVector3 *param_1,int param_2,int param_3)

{
  btVector3 *pbVar1;
  uint uVar2;
  float *pfVar3;
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
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
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
  
  pfVar3 = (float *)(ulong)(uint)param_2;
  fVar16 = *pfVar3;
  fVar17 = pfVar3[1];
  fVar5 = *(float *)(param_1 + 0x28);
  fVar4 = *(float *)(param_1 + 0x2c);
  fVar7 = *(float *)(param_1 + 0x38);
  fVar8 = *(float *)(param_1 + 0x3c);
  fVar10 = *(float *)(param_1 + 0x48);
  fVar11 = *(float *)(param_1 + 0x4c);
  fVar18 = pfVar3[2];
  fVar6 = *(float *)(param_1 + 0x30);
  fVar9 = *(float *)(param_1 + 0x40);
  fVar13 = *(float *)(param_1 + 0x50);
  fVar12 = *(float *)(param_1 + 0x58);
  fVar14 = *(float *)(param_1 + 0x5c);
  fVar15 = *(float *)(param_1 + 0x60);
  local_70 = fVar16 * fVar5 + fVar17 * fVar4 + fVar18 * fVar6 + fVar12;
  fVar22 = fVar16 * fVar7 + fVar17 * fVar8 + fVar18 * fVar9 + fVar14;
  fVar23 = fVar16 * fVar10 + fVar17 * fVar11 + fVar18 * fVar13 + fVar15;
  local_64 = 0;
  fVar18 = pfVar3[4];
  fVar19 = pfVar3[5];
  fVar20 = pfVar3[6];
  local_74 = 0;
  fVar16 = fVar18 * fVar5 + fVar19 * fVar4 + fVar20 * fVar6 + fVar12;
  fVar17 = fVar18 * fVar7 + fVar19 * fVar8 + fVar20 * fVar9 + fVar14;
  fVar18 = fVar18 * fVar10 + fVar19 * fVar11 + fVar20 * fVar13 + fVar15;
  fVar19 = pfVar3[8];
  fVar21 = pfVar3[9];
  fVar20 = pfVar3[10];
  fVar12 = fVar19 * fVar5 + fVar21 * fVar4 + fVar20 * fVar6 + fVar12;
  fVar14 = fVar19 * fVar7 + fVar21 * fVar8 + fVar20 * fVar9 + fVar14;
  fVar15 = fVar19 * fVar10 + fVar21 * fVar11 + fVar20 * fVar13 + fVar15;
  fVar6 = (local_70 + fVar16 + fVar12) * 0.33333334;
  fVar5 = (fVar22 + fVar17 + fVar14) * 0.33333334;
  fVar4 = (fVar23 + fVar18 + fVar15) * 0.33333334;
  local_84 = 0;
  local_94 = 0;
  local_a0 = fVar6;
  fStack_9c = fVar5;
  local_98 = fVar4;
  local_90 = fVar12;
  fStack_8c = fVar14;
  local_88 = fVar15;
  local_80 = fVar16;
  fStack_7c = fVar17;
  local_78 = fVar18;
  fStack_6c = fVar22;
  local_68 = fVar23;
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x60))
                    (*(long **)(param_1 + 0x10),pfVar3,param_3);
  if ((uVar2 >> 0xe & 1) != 0) {
    fVar10 = (fVar17 - fVar22) * (fVar15 - fVar23) - (fVar18 - fVar23) * (fVar14 - fVar22);
    fVar9 = (fVar18 - fVar23) * (fVar12 - local_70) - (fVar16 - local_70) * (fVar15 - fVar23);
    fVar11 = (fVar16 - local_70) * (fVar14 - fVar22) - (fVar17 - fVar22) * (fVar12 - local_70);
    fVar8 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    local_b0 = 0x3f8000003f800000;
    uStack_a8 = 0;
    fVar7 = 1.0 / fVar7;
    local_c0 = fVar7 * fVar10 + fVar6;
    fStack_bc = fVar7 * fVar9 + fVar5;
    local_b8 = fVar7 * fVar11 + fVar4;
    local_b4 = 0;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
              (*(long **)(param_1 + 0x10),&local_a0,&local_c0,&local_b0);
  }
  pbVar1 = param_1 + 0x18;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),&local_70,&local_80,pbVar1);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),&local_80,&local_90,pbVar1);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),&local_90,&local_70,pbVar1);
  return;
}

