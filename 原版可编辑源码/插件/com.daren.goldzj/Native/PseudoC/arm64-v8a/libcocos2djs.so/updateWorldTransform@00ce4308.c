
/* spine::Bone::updateWorldTransform(float, float, float, float, float, float, float) */

void __thiscall
spine::Bone::updateWorldTransform
          (Bone *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
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
  float local_78;
  float local_24;
  
  lVar3 = *(long *)(this + 0x18);
  *(float *)(this + 0x5c) = param_1;
  *(float *)(this + 0x60) = param_2;
  *(float *)(this + 100) = param_3;
  *(float *)(this + 0x68) = param_4;
  *(float *)(this + 0x6c) = param_5;
  *(float *)(this + 0x70) = param_6;
  *(float *)(this + 0x74) = param_7;
  this[0x78] = (Bone)0x1;
  if (lVar3 == 0) {
    fVar14 = param_3 + 90.0 + param_7;
    fVar11 = (float)Skeleton::getScaleX(*(Skeleton **)(this + 0x10));
    fVar13 = (float)Skeleton::getScaleY(*(Skeleton **)(this + 0x10));
    fVar9 = (float)MathUtil::cosDeg(param_3 + param_6);
    *(float *)(this + 0x7c) = fVar11 * fVar9 * param_4;
    fVar9 = (float)MathUtil::cosDeg(fVar14);
    *(float *)(this + 0x80) = fVar11 * fVar9 * param_5;
    fVar9 = (float)MathUtil::sinDeg(param_3 + param_6);
    *(float *)(this + 0x88) = fVar13 * fVar9 * param_4;
    fVar9 = (float)MathUtil::sinDeg(fVar14);
    *(float *)(this + 0x8c) = fVar13 * fVar9 * param_5;
    fVar9 = (float)Skeleton::getX(*(Skeleton **)(this + 0x10));
    *(float *)(this + 0x84) = fVar11 * param_1 + fVar9;
    fVar11 = (float)Skeleton::getY(*(Skeleton **)(this + 0x10));
    *(float *)(this + 0x90) = fVar13 * param_2 + fVar11;
    return;
  }
  fVar13 = *(float *)(lVar3 + 0x7c);
  local_78 = *(float *)(lVar3 + 0x80);
  fVar11 = *(float *)(lVar3 + 0x88);
  local_24 = *(float *)(lVar3 + 0x8c);
  *(float *)(this + 0x84) = fVar13 * param_1 + local_78 * param_2 + *(float *)(lVar3 + 0x84);
  *(float *)(this + 0x90) = fVar11 * param_1 + local_24 * param_2 + *(float *)(lVar3 + 0x90);
  uVar1 = BoneData::getTransformMode(*(BoneData **)(this + 8));
  switch(uVar1) {
  case 0:
    fVar9 = param_3 + 90.0 + param_7;
    fVar14 = (float)MathUtil::cosDeg(param_3 + param_6);
    fVar4 = (float)MathUtil::cosDeg(fVar9);
    fVar5 = (float)MathUtil::sinDeg(param_3 + param_6);
    fVar6 = (float)MathUtil::sinDeg(fVar9);
    fVar9 = fVar11 * fVar4 * param_5 + local_24 * fVar6 * param_5;
    *(float *)(this + 0x7c) = fVar13 * fVar14 * param_4 + local_78 * fVar5 * param_4;
    *(float *)(this + 0x80) = fVar13 * fVar4 * param_5 + local_78 * fVar6 * param_5;
    *(float *)(this + 0x88) = fVar11 * fVar14 * param_4 + local_24 * fVar5 * param_4;
    goto LAB_00ce48b8;
  case 1:
    fVar13 = param_3 + 90.0 + param_7;
    fVar11 = (float)MathUtil::cosDeg(param_3 + param_6);
    *(float *)(this + 0x7c) = fVar11 * param_4;
    fVar11 = (float)MathUtil::cosDeg(fVar13);
    *(float *)(this + 0x80) = fVar11 * param_5;
    fVar11 = (float)MathUtil::sinDeg(param_3 + param_6);
    *(float *)(this + 0x88) = fVar11 * param_4;
    fVar12 = (float)MathUtil::sinDeg(fVar13);
    fVar12 = fVar12 * param_5;
    goto LAB_00ce4868;
  case 2:
    fVar9 = fVar13 * fVar13 + fVar11 * fVar11;
    if (fVar9 <= 0.0001) {
      fVar9 = (float)MathUtil::atan2(local_24,local_78);
      fVar11 = 0.0;
      fVar13 = 0.0;
      fVar9 = 90.0 - fVar9 * 57.295776;
    }
    else {
      local_24 = (float)MathUtil::abs(fVar13 * local_24 - local_78 * fVar11);
      local_24 = local_24 / fVar9;
      local_78 = fVar11 * local_24;
      local_24 = fVar13 * local_24;
      fVar9 = (float)MathUtil::atan2(fVar11,fVar13);
      fVar9 = fVar9 * 57.295776;
    }
    fVar14 = (param_3 + param_6) - fVar9;
    fVar5 = ((param_3 + param_7) - fVar9) + 90.0;
    fVar9 = (float)MathUtil::cosDeg(fVar14);
    fVar4 = (float)MathUtil::cosDeg(fVar5);
    fVar14 = (float)MathUtil::sinDeg(fVar14);
    fVar5 = (float)MathUtil::sinDeg(fVar5);
    fVar10 = fVar13 * fVar9 * param_4 - local_78 * fVar14 * param_4;
    fVar12 = fVar11 * fVar4 * param_5;
    fVar14 = fVar11 * fVar9 * param_4 + local_24 * fVar14 * param_4;
    local_24 = local_24 * fVar5 * param_5;
    fVar11 = fVar13 * fVar4 * param_5 - local_78 * fVar5 * param_5;
    break;
  case 3:
  case 4:
    fVar9 = (float)MathUtil::cosDeg(param_3);
    fVar14 = (float)MathUtil::sinDeg(param_3);
    fVar4 = (float)Skeleton::getScaleX(*(Skeleton **)(this + 0x10));
    fVar4 = (fVar13 * fVar9 + local_78 * fVar14) / fVar4;
    fVar5 = (float)Skeleton::getScaleY(*(Skeleton **)(this + 0x10));
    fVar5 = (fVar11 * fVar9 + local_24 * fVar14) / fVar5;
    fVar14 = (float)MathUtil::sqrt(fVar4 * fVar4 + fVar5 * fVar5);
    fVar9 = 1.0 / fVar14;
    if (fVar14 <= 1e-05) {
      fVar9 = fVar14;
    }
    fVar4 = fVar4 * fVar9;
    fVar5 = fVar5 * fVar9;
    fVar14 = (float)MathUtil::sqrt(fVar4 * fVar4 + fVar5 * fVar5);
    iVar2 = BoneData::getTransformMode(*(BoneData **)(this + 8));
    fVar9 = fVar14;
    if (iVar2 == 3) {
      fVar6 = (float)Skeleton::getScaleX(*(Skeleton **)(this + 0x10));
      fVar7 = (float)Skeleton::getScaleY(*(Skeleton **)(this + 0x10));
      fVar9 = -fVar14;
      if (fVar13 * local_24 - local_78 * fVar11 < 0.0 == (fVar6 < 0.0 != fVar7 < 0.0)) {
        fVar9 = fVar14;
      }
    }
    fVar11 = (float)MathUtil::atan2(fVar5,fVar4);
    fVar13 = (float)MathUtil::cos(fVar11 + 1.5707964);
    fVar11 = (float)MathUtil::sin(fVar11 + 1.5707964);
    fVar14 = (float)MathUtil::cosDeg(param_6);
    fVar6 = (float)MathUtil::cosDeg(param_7 + 90.0);
    fVar7 = (float)MathUtil::sinDeg(param_6);
    fVar8 = (float)MathUtil::sinDeg(param_7 + 90.0);
    fVar10 = fVar4 * fVar14 * param_4 + fVar9 * fVar13 * fVar7 * param_4;
    fVar12 = fVar5 * fVar6 * param_5;
    fVar14 = fVar5 * fVar14 * param_4 + fVar9 * fVar11 * fVar7 * param_4;
    local_24 = fVar9 * fVar11 * fVar8 * param_5;
    fVar11 = fVar4 * fVar6 * param_5 + fVar9 * fVar13 * fVar8 * param_5;
    break;
  default:
    goto switchD_00ce43d8_default;
  }
  fVar12 = fVar12 + local_24;
  *(float *)(this + 0x7c) = fVar10;
  *(float *)(this + 0x80) = fVar11;
  *(float *)(this + 0x88) = fVar14;
LAB_00ce4868:
  *(float *)(this + 0x8c) = fVar12;
switchD_00ce43d8_default:
  fVar11 = (float)Skeleton::getScaleX(*(Skeleton **)(this + 0x10));
  *(float *)(this + 0x7c) = fVar11 * *(float *)(this + 0x7c);
  fVar11 = (float)Skeleton::getScaleX(*(Skeleton **)(this + 0x10));
  *(float *)(this + 0x80) = fVar11 * *(float *)(this + 0x80);
  fVar11 = (float)Skeleton::getScaleY(*(Skeleton **)(this + 0x10));
  *(float *)(this + 0x88) = fVar11 * *(float *)(this + 0x88);
  fVar9 = (float)Skeleton::getScaleY(*(Skeleton **)(this + 0x10));
  fVar9 = fVar9 * *(float *)(this + 0x8c);
LAB_00ce48b8:
  *(float *)(this + 0x8c) = fVar9;
  return;
}

