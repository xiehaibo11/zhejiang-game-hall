
/* spine::IkConstraint::apply(spine::Bone&, float, float, bool, bool, bool, float) */

void spine::IkConstraint::apply
               (Bone *param_1,float param_2,float param_3,bool param_4,bool param_5,bool param_6,
               float param_7)

{
  int iVar1;
  long lVar2;
  Bone *pBVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = Bone::getParent(param_1);
  fVar4 = *(float *)(param_1 + 0x70);
  fVar8 = *(float *)(lVar2 + 0x7c);
  fVar10 = *(float *)(lVar2 + 0x80);
  fVar9 = *(float *)(lVar2 + 0x88);
  fVar11 = *(float *)(lVar2 + 0x8c);
  fVar12 = *(float *)(param_1 + 100);
  if (param_1[0x78] == (Bone)0x0) {
    Bone::updateAppliedTransform(param_1);
  }
  fVar12 = -fVar4 - fVar12;
  iVar1 = BoneData::getTransformMode(*(BoneData **)(param_1 + 8));
  if (iVar1 == 2) {
    fVar4 = (float)MathUtil::atan2(fVar9,fVar8);
    fVar12 = fVar12 + fVar4 * 57.295776;
    fVar11 = (float)MathUtil::abs(fVar8 * fVar11 - fVar10 * fVar9);
    fVar11 = fVar11 / (fVar8 * fVar8 + fVar9 * fVar9);
    fVar10 = -(fVar9 * fVar11);
    fVar11 = fVar8 * fVar11;
LAB_00ce98ac:
    fVar7 = fVar8 * fVar11 - fVar9 * fVar10;
    fVar5 = param_2 - *(float *)(lVar2 + 0x84);
    fVar6 = param_3 - *(float *)(lVar2 + 0x90);
    fVar4 = (fVar8 * fVar6 - fVar9 * fVar5) / fVar7;
    fVar11 = (fVar11 * fVar5 - fVar10 * fVar6) / fVar7 - *(float *)(param_1 + 0x5c);
    pBVar3 = param_1 + 0x60;
  }
  else {
    if (iVar1 != 1) goto LAB_00ce98ac;
    pBVar3 = param_1 + 0x90;
    fVar11 = param_2 - *(float *)(param_1 + 0x84);
    fVar4 = param_3;
  }
  fVar4 = fVar4 - *(float *)pBVar3;
  fVar8 = (float)MathUtil::atan2(fVar4,fVar11);
  fVar9 = *(float *)(param_1 + 0x68);
  fVar12 = fVar12 + fVar8 * 57.295776;
  fVar8 = fVar12 + 180.0;
  if (0.0 <= fVar9) {
    fVar8 = fVar12;
  }
  if (fVar8 <= 180.0) {
    if (fVar8 < -180.0) {
      fVar12 = 360.0;
      goto LAB_00ce9968;
    }
  }
  else {
    fVar12 = -360.0;
LAB_00ce9968:
    fVar8 = fVar8 + fVar12;
  }
  fVar10 = *(float *)(param_1 + 0x6c);
  fVar12 = fVar10;
  if ((param_4) || (param_5)) {
    iVar1 = BoneData::getTransformMode(*(BoneData **)(param_1 + 8));
    if (iVar1 - 3U < 2) {
      fVar11 = param_2 - *(float *)(param_1 + 0x84);
      fVar4 = param_3 - *(float *)(param_1 + 0x90);
    }
    fVar5 = (float)BoneData::getLength(*(BoneData **)(param_1 + 8));
    fVar5 = fVar9 * fVar5;
    fVar4 = (float)MathUtil::sqrt(fVar4 * fVar4 + fVar11 * fVar11);
    if ((fVar5 <= fVar4) || (!param_4)) {
      if ((fVar5 <= 0.0001) || ((fVar4 <= fVar5 || (!param_5)))) goto LAB_00ce9a20;
    }
    else if (fVar5 <= 0.0001) goto LAB_00ce9a20;
    fVar4 = (fVar4 / fVar5 + -1.0) * param_7 + 1.0;
    fVar9 = fVar9 * fVar4;
    fVar12 = fVar10 * fVar4;
    if (!param_6) {
      fVar12 = fVar10;
    }
  }
LAB_00ce9a20:
  Bone::updateWorldTransform
            (param_1,*(float *)(param_1 + 0x5c),*(float *)(param_1 + 0x60),
             fVar8 * param_7 + *(float *)(param_1 + 100),fVar9,fVar12,*(float *)(param_1 + 0x70),
             *(float *)(param_1 + 0x74));
  return;
}

