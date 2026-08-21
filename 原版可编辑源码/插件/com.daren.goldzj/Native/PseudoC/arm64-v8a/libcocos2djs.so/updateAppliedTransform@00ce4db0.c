
/* spine::Bone::updateAppliedTransform() */

void __thiscall spine::Bone::updateAppliedTransform(Bone *this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
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
  
  lVar1 = *(long *)(this + 0x18);
  this[0x78] = (Bone)0x1;
  if (lVar1 == 0) {
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(this + 0x84);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x90);
    fVar2 = (float)MathUtil::atan2(*(float *)(this + 0x88),*(float *)(this + 0x7c));
    *(float *)(this + 100) = fVar2 * 57.295776;
    uVar3 = MathUtil::sqrt(*(float *)(this + 0x7c) * *(float *)(this + 0x7c) +
                           *(float *)(this + 0x88) * *(float *)(this + 0x88));
    *(undefined4 *)(this + 0x68) = uVar3;
    uVar3 = MathUtil::sqrt(*(float *)(this + 0x80) * *(float *)(this + 0x80) +
                           *(float *)(this + 0x8c) * *(float *)(this + 0x8c));
    *(undefined4 *)(this + 0x6c) = uVar3;
    *(undefined4 *)(this + 0x70) = 0;
    fVar2 = (float)MathUtil::atan2(*(float *)(this + 0x7c) * *(float *)(this + 0x80) +
                                   *(float *)(this + 0x88) * *(float *)(this + 0x8c),
                                   *(float *)(this + 0x7c) * *(float *)(this + 0x8c) -
                                   *(float *)(this + 0x80) * *(float *)(this + 0x88));
    *(float *)(this + 0x74) = fVar2 * 57.295776;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x7c);
    fVar4 = *(float *)(lVar1 + 0x80);
    fVar6 = *(float *)(lVar1 + 0x88);
    fVar9 = *(float *)(lVar1 + 0x8c);
    fVar8 = *(float *)(this + 0x90) - *(float *)(lVar1 + 0x90);
    fVar5 = *(float *)(this + 0x84) - *(float *)(lVar1 + 0x84);
    fVar7 = 1.0 / (fVar2 * fVar9 - fVar4 * fVar6);
    fVar12 = fVar9 * fVar7 * *(float *)(this + 0x7c) - fVar4 * fVar7 * *(float *)(this + 0x88);
    fVar13 = fVar2 * fVar7 * *(float *)(this + 0x88) - fVar6 * fVar7 * *(float *)(this + 0x7c);
    fVar10 = fVar9 * fVar7 * *(float *)(this + 0x80) - fVar4 * fVar7 * *(float *)(this + 0x8c);
    fVar11 = fVar2 * fVar7 * *(float *)(this + 0x8c) - fVar6 * fVar7 * *(float *)(this + 0x80);
    *(undefined4 *)(this + 0x70) = 0;
    *(float *)(this + 0x5c) = fVar7 * fVar9 * fVar5 - fVar7 * fVar4 * fVar8;
    *(float *)(this + 0x60) = fVar7 * fVar2 * fVar8 - fVar7 * fVar6 * fVar5;
    fVar2 = (float)MathUtil::sqrt(fVar12 * fVar12 + fVar13 * fVar13);
    *(float *)(this + 0x68) = fVar2;
    if (fVar2 <= 0.0001) {
      *(undefined4 *)(this + 0x68) = 0;
      uVar3 = MathUtil::sqrt(fVar10 * fVar10 + fVar11 * fVar11);
      *(undefined4 *)(this + 0x6c) = uVar3;
      *(undefined4 *)(this + 0x74) = 0;
      fVar2 = (float)MathUtil::atan2(fVar11,fVar10);
      fVar2 = 90.0 - fVar2 * 57.295776;
    }
    else {
      fVar4 = fVar12 * fVar11 - fVar13 * fVar10;
      *(float *)(this + 0x6c) = fVar4 / fVar2;
      fVar2 = (float)MathUtil::atan2(fVar12 * fVar10 + fVar13 * fVar11,fVar4);
      *(float *)(this + 0x74) = fVar2 * 57.295776;
      fVar2 = (float)MathUtil::atan2(fVar13,fVar12);
      fVar2 = fVar2 * 57.295776;
    }
    *(float *)(this + 100) = fVar2;
  }
  return;
}

