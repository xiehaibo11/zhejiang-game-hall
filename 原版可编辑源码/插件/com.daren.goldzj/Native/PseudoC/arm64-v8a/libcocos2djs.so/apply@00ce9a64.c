
/* spine::IkConstraint::apply(spine::Bone&, spine::Bone&, float, float, int, bool, float, float) */

void spine::IkConstraint::apply
               (Bone *param_1,Bone *param_2,float param_3,float param_4,int param_5,bool param_6,
               float param_7,float param_8)

{
  int iVar1;
  Bone BVar2;
  long lVar3;
  int iVar4;
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
  float local_98;
  float local_94;
  
  lVar3 = Bone::getParent(param_1);
  if (param_8 == 0.0) {
    Bone::updateWorldTransform(param_2);
    return;
  }
  if (param_1[0x78] == (Bone)0x0) {
    Bone::updateAppliedTransform(param_1);
    BVar2 = param_2[0x78];
  }
  else {
    BVar2 = param_2[0x78];
  }
  if (BVar2 == (Bone)0x0) {
    Bone::updateAppliedTransform(param_2);
  }
  local_98 = *(float *)(param_1 + 0x68);
  fVar5 = *(float *)(param_1 + 0x6c);
  fVar21 = 180.0;
  fVar7 = *(float *)(param_2 + 0x68);
  iVar4 = -1;
  fVar11 = -local_98;
  fVar22 = fVar21;
  if (0.0 <= local_98) {
    iVar4 = 1;
    fVar22 = 0.0;
    fVar11 = local_98;
  }
  fVar14 = -fVar5;
  if (0.0 <= fVar5) {
    fVar14 = fVar5;
  }
  fVar16 = *(float *)(param_1 + 0x5c);
  fVar20 = *(float *)(param_1 + 0x60);
  fVar12 = *(float *)(param_2 + 0x5c);
  iVar1 = -iVar4;
  if (0.0 <= fVar5) {
    iVar1 = iVar4;
  }
  fVar6 = fVar11 - fVar14;
  fVar5 = -fVar7;
  if (0.0 <= fVar7) {
    fVar21 = 0.0;
    fVar5 = fVar7;
  }
  fVar7 = -fVar6;
  if (0.0 <= fVar6) {
    fVar7 = fVar6;
  }
  if (0.0001 < fVar7) {
    local_94 = 0.0;
    fVar10 = *(float *)(param_1 + 0x90);
    fVar6 = fVar12 * *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x84);
    fVar8 = fVar12 * *(float *)(param_1 + 0x88);
  }
  else {
    local_94 = *(float *)(param_2 + 0x60);
    fVar8 = *(float *)(param_1 + 0x90);
    fVar6 = *(float *)(param_1 + 0x84) +
            fVar12 * *(float *)(param_1 + 0x7c) + local_94 * *(float *)(param_1 + 0x80);
    fVar10 = fVar12 * *(float *)(param_1 + 0x88) + local_94 * *(float *)(param_1 + 0x8c);
  }
  fVar19 = *(float *)(lVar3 + 0x7c);
  fVar15 = *(float *)(lVar3 + 0x80);
  fVar17 = *(float *)(lVar3 + 0x88);
  fVar13 = *(float *)(lVar3 + 0x8c);
  fVar6 = fVar6 - *(float *)(lVar3 + 0x84);
  fVar8 = (fVar8 + fVar10) - *(float *)(lVar3 + 0x90);
  fVar18 = 1.0 / (fVar19 * fVar13 - fVar15 * fVar17);
  fVar10 = fVar18 * (fVar13 * fVar6 - fVar15 * fVar8) - fVar16;
  fVar6 = fVar18 * (fVar19 * fVar8 - fVar17 * fVar6) - fVar20;
  fVar6 = (float)MathUtil::sqrt(fVar10 * fVar10 + fVar6 * fVar6);
  fVar8 = (float)BoneData::getLength(*(BoneData **)(param_2 + 8));
  if (fVar6 < 0.0001) {
    apply(param_1,param_3,param_4,false,param_6,false,param_8);
    fVar21 = *(float *)(param_2 + 0x68);
    fVar11 = *(float *)(param_2 + 0x6c);
    fVar5 = *(float *)(param_2 + 0x70);
    fVar7 = *(float *)(param_2 + 0x74);
    fVar22 = 0.0;
    goto LAB_00cea1c4;
  }
  fVar8 = fVar5 * fVar8;
  fVar9 = param_3 - *(float *)(lVar3 + 0x84);
  fVar10 = param_4 - *(float *)(lVar3 + 0x90);
  fVar13 = fVar18 * (fVar13 * fVar9 - fVar15 * fVar10) - fVar16;
  fVar10 = fVar18 * (fVar19 * fVar10 - fVar17 * fVar9) - fVar20;
  fVar15 = fVar13 * fVar13 + fVar10 * fVar10;
  if (param_7 != 0.0) {
    fVar18 = fVar11 * (fVar5 + 1.0) * 0.5 * param_7;
    fVar5 = (float)MathUtil::sqrt(fVar15);
    fVar17 = fVar18 + ((fVar5 - fVar6) - fVar11 * fVar8);
    if (0.0 < fVar17) {
      fVar15 = fVar17 / (fVar18 + fVar18);
      if (1.0 < fVar15) {
        fVar15 = 1.0;
      }
      fVar5 = (fVar17 - fVar18 * (1.0 - (fVar15 + -1.0) * (fVar15 + -1.0))) / fVar5;
      fVar13 = fVar13 - fVar13 * fVar5;
      fVar10 = fVar10 - fVar10 * fVar5;
      fVar15 = fVar13 * fVar13 + fVar10 * fVar10;
    }
  }
  fVar5 = fVar11 * fVar8;
  if (0.0001 < fVar7) {
    fVar18 = fVar5 * fVar5;
    fVar8 = fVar14 * fVar8;
    fVar17 = fVar8 * fVar8;
    fVar7 = (float)MathUtil::atan2(fVar10,fVar13);
    fVar13 = (fVar6 * fVar6 * fVar17 + fVar18 * fVar15) - fVar18 * fVar17;
    fVar19 = fVar6 * fVar17 * -2.0;
    fVar10 = fVar19 * fVar19 + (fVar17 - fVar18) * -4.0 * fVar13;
    if (fVar10 < 0.0) {
LAB_00ce9ed4:
      fVar13 = 3.1415927;
      fVar11 = fVar6 - fVar5;
      fVar19 = fVar6 + fVar5;
      fVar17 = -(fVar6 * fVar5) / (fVar18 - fVar17);
      fVar14 = fVar11 * fVar11;
      fVar10 = 0.0;
      if ((fVar17 < -1.0) || (1.0 < fVar17)) {
LAB_00cea024:
        fVar17 = 0.0;
        fVar8 = 0.0;
        fVar6 = fVar19;
        fVar5 = fVar19 * fVar19;
      }
      else {
        fVar17 = (float)MathUtil::acos(fVar17);
        fVar10 = (float)MathUtil::cos(fVar17);
        fVar6 = fVar6 + fVar5 * fVar10;
        fVar5 = (float)MathUtil::sin(fVar17);
        fVar8 = fVar8 * fVar5;
        fVar5 = fVar6 * fVar6 + fVar8 * fVar8;
        fVar10 = 0.0;
        if (fVar5 < fVar14) {
          fVar11 = fVar6;
          fVar14 = fVar5;
          fVar10 = fVar8;
          fVar13 = fVar17;
        }
        if (fVar5 <= fVar19 * fVar19) goto LAB_00cea024;
      }
      fVar5 = (fVar14 + fVar5) * 0.5;
      if (fVar15 <= fVar5) {
        fVar6 = fVar11;
        fVar8 = fVar10;
      }
      if (fVar15 <= fVar5) {
        fVar17 = fVar13;
      }
      fVar5 = (float)MathUtil::atan2(fVar8 * (float)param_5,fVar6);
      fVar17 = fVar17 * (float)param_5;
    }
    else {
      fVar9 = (float)MathUtil::sqrt(fVar10);
      fVar10 = -fVar9;
      if (0.0 <= fVar19) {
        fVar10 = fVar9;
      }
      fVar19 = (fVar19 + fVar10) * -0.5;
      fVar10 = fVar19 / (fVar17 - fVar18);
      fVar13 = fVar13 / fVar19;
      fVar19 = (float)MathUtil::abs(fVar10);
      fVar9 = (float)MathUtil::abs(fVar13);
      if (fVar9 <= fVar19) {
        fVar10 = fVar13;
      }
      if (fVar15 < fVar10 * fVar10) goto LAB_00ce9ed4;
      fVar8 = (float)MathUtil::sqrt(fVar15 - fVar10 * fVar10);
      fVar5 = (float)MathUtil::atan2(fVar8 * (float)param_5,fVar10);
      fVar17 = (float)MathUtil::atan2((fVar8 * (float)param_5) / fVar14,(fVar10 - fVar6) / fVar11);
    }
    fVar7 = fVar7 - fVar5;
  }
  else {
    fVar7 = ((fVar15 - fVar6 * fVar6) - fVar5 * fVar5) / ((fVar6 + fVar6) * fVar5);
    fVar11 = -1.0;
    if (((-1.0 <= fVar7) && (fVar11 = fVar7, 1.0 < fVar7)) && (fVar11 = 1.0, param_6)) {
      fVar11 = (float)MathUtil::sqrt(fVar15);
      local_98 = local_98 * ((fVar11 / (fVar6 + fVar5) + -1.0) * param_8 + 1.0);
      fVar11 = 1.0;
    }
    fVar17 = (float)MathUtil::acos(fVar11);
    fVar17 = fVar17 * (float)param_5;
    fVar6 = fVar6 + fVar5 * fVar11;
    fVar11 = (float)MathUtil::sin(fVar17);
    fVar7 = (float)MathUtil::atan2(fVar10 * fVar6 - fVar13 * fVar5 * fVar11,
                                   fVar13 * fVar6 + fVar10 * fVar5 * fVar11);
  }
  fVar11 = (float)MathUtil::atan2(local_94,fVar12);
  fVar11 = fVar11 * (float)iVar1;
  fVar22 = (fVar22 + (fVar7 - fVar11) * 57.295776) - *(float *)(param_1 + 100);
  if (fVar22 <= 180.0) {
    if (fVar22 < -180.0) {
      fVar5 = 360.0;
      goto LAB_00cea124;
    }
  }
  else {
    fVar5 = -360.0;
LAB_00cea124:
    fVar22 = fVar22 + fVar5;
  }
  Bone::updateWorldTransform
            (param_1,fVar16,fVar20,*(float *)(param_1 + 0x48) + fVar22 * param_8,local_98,
             *(float *)(param_1 + 0x6c),0.0,0.0);
  fVar5 = *(float *)(param_2 + 0x70);
  fVar22 = (fVar21 + ((fVar17 + fVar11) * 57.295776 - fVar5) * (float)iVar1) -
           *(float *)(param_2 + 100);
  if (fVar22 <= 180.0) {
    if (fVar22 < -180.0) {
      fVar21 = 360.0;
      goto LAB_00cea1a4;
    }
  }
  else {
    fVar21 = -360.0;
LAB_00cea1a4:
    fVar22 = fVar22 + fVar21;
  }
  fVar21 = *(float *)(param_2 + 0x68);
  fVar11 = *(float *)(param_2 + 0x6c);
  fVar7 = *(float *)(param_2 + 0x74);
  fVar22 = *(float *)(param_2 + 100) + fVar22 * param_8;
LAB_00cea1c4:
  Bone::updateWorldTransform(param_2,fVar12,local_94,fVar22,fVar21,fVar11,fVar5,fVar7);
  return;
}

