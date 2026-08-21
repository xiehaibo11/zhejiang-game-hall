
/* btCompoundShape::calculatePrincipalAxisTransform(float*, btTransform&, btVector3&) const */

void __thiscall
btCompoundShape::calculatePrincipalAxisTransform
          (btCompoundShape *this,float *param_1,btTransform *param_2,btVector3 *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  
  uVar1 = *(uint *)(this + 0x1c);
  uVar6 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    fVar9 = 0.0;
    fVar12 = 0.0;
    fVar10 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar9 = 0.0;
    uVar3 = uVar6;
    pfVar4 = param_1;
    pfVar5 = (float *)(*(long *)(this + 0x28) + 0x38);
    do {
      fVar15 = *pfVar4;
      uVar3 = uVar3 - 1;
      fVar8 = fVar8 + fVar15;
      fVar9 = fVar9 + pfVar5[-2] * fVar15;
      fVar12 = fVar12 + fVar15 * pfVar5[-1];
      fVar10 = fVar10 + fVar15 * *pfVar5;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 0x16;
    } while (uVar3 != 0);
  }
  fVar8 = 1.0 / fVar8;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(float *)(param_2 + 0x30) = fVar9 * fVar8;
  *(float *)(param_2 + 0x34) = fVar12 * fVar8;
  *(float *)(param_2 + 0x38) = fVar10 * fVar8;
  fStack_98 = 0.0;
  uStack_94 = 0;
  local_a0 = 0.0;
  fStack_9c = 0.0;
  local_88 = 0.0;
  uStack_84 = 0;
  local_90 = 0.0;
  fStack_8c = 0.0;
  fStack_a8 = 0.0;
  uStack_a4 = 0;
  local_b0 = 0.0;
  fStack_ac = 0.0;
  if (0 < (int)uVar1) {
    lVar7 = 0;
    do {
      plVar2 = *(long **)(*(long *)(this + 0x28) + lVar7 + 0x40);
      (**(code **)(*plVar2 + 0x40))(*param_1,plVar2,&local_c0);
      uVar6 = uVar6 - 1;
      pfVar4 = (float *)(*(long *)(this + 0x28) + lVar7);
      fVar13 = *pfVar4;
      fVar14 = pfVar4[1];
      fVar16 = pfVar4[4];
      fVar17 = pfVar4[5];
      fVar18 = pfVar4[8];
      fVar19 = pfVar4[9];
      fVar20 = pfVar4[2];
      fVar21 = pfVar4[6];
      fVar23 = pfVar4[10];
      fVar24 = fVar13 * local_c0;
      fVar25 = fVar16 * local_c0;
      fVar26 = fVar18 * local_c0;
      fVar29 = fVar14 * fStack_bc;
      fVar30 = fVar17 * fStack_bc;
      fVar15 = fVar19 * fStack_bc;
      fVar31 = fVar20 * local_b8;
      fVar33 = fVar21 * local_b8;
      fVar11 = fVar23 * local_b8;
      fVar27 = pfVar4[0xc] - fVar9 * fVar8;
      fVar34 = pfVar4[0xd] - fVar12 * fVar8;
      fVar32 = *param_1;
      fVar22 = pfVar4[0xe] - fVar10 * fVar8;
      fVar37 = fVar27 * fVar27 + fVar34 * fVar34 + fVar22 * fVar22;
      fVar36 = (0.0 - fVar27 * fVar34) * fVar32;
      fVar28 = (0.0 - fVar27 * fVar22) * fVar32;
      fVar35 = (0.0 - fVar34 * fVar22) * fVar32;
      fStack_ac = fVar36 + fVar25 * fVar13 + fVar30 * fVar14 + fVar33 * fVar20 + fStack_ac;
      fStack_a8 = fVar28 + fVar26 * fVar13 + fVar15 * fVar14 + fVar11 * fVar20 + fStack_a8;
      local_a0 = fVar36 + fVar24 * fVar16 + fVar29 * fVar17 + fVar31 * fVar21 + local_a0;
      fStack_98 = fVar35 + fVar26 * fVar16 + fVar15 * fVar17 + fVar11 * fVar21 + fStack_98;
      local_90 = fVar28 + fVar24 * fVar18 + fVar29 * fVar19 + fVar31 * fVar23 + local_90;
      fStack_8c = fVar35 + fVar25 * fVar18 + fVar30 * fVar19 + fVar33 * fVar23 + fStack_8c;
      local_b0 = (fVar37 - fVar27 * fVar27) * fVar32 +
                 fVar24 * fVar13 + fVar29 * fVar14 + fVar31 * fVar20 + local_b0;
      fStack_9c = (fVar37 - fVar34 * fVar34) * fVar32 +
                  fVar25 * fVar16 + fVar30 * fVar17 + fVar33 * fVar21 + fStack_9c;
      local_88 = (fVar37 - fVar22 * fVar22) * fVar32 +
                 fVar26 * fVar18 + fVar15 * fVar19 + fVar11 * fVar23 + local_88;
      lVar7 = lVar7 + 0x58;
      param_1 = param_1 + 1;
    } while (uVar6 != 0);
  }
  btMatrix3x3::diagonalize((btMatrix3x3 *)&local_b0,(btMatrix3x3 *)param_2,1e-05,0x14);
  *(float *)param_3 = local_b0;
  *(float *)(param_3 + 4) = fStack_9c;
  *(float *)(param_3 + 8) = local_88;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}

