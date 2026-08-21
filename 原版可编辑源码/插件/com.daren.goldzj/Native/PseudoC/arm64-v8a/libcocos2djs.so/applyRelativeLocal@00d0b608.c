
/* spine::TransformConstraint::applyRelativeLocal() */

void __thiscall spine::TransformConstraint::applyRelativeLocal(TransformConstraint *this)

{
  long lVar1;
  Bone *this_00;
  Bone *this_01;
  ulong uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = *(float *)(this + 0x38);
  fVar3 = *(float *)(this + 0x3c);
  this_00 = *(Bone **)(this + 0x30);
  fVar10 = *(float *)(this + 0x40);
  fVar11 = *(float *)(this + 0x44);
  if (this_00[0x78] == (Bone)0x0) {
    Bone::updateAppliedTransform(this_00);
    lVar1 = *(long *)(this + 0x18);
  }
  else {
    lVar1 = *(long *)(this + 0x18);
  }
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      this_01 = *(Bone **)(*(long *)(this + 0x28) + uVar2 * 8);
      if (this_01[0x78] == (Bone)0x0) {
        Bone::updateAppliedTransform(this_01);
      }
      fVar5 = *(float *)(this_01 + 100);
      if (fVar9 != 0.0) {
        fVar5 = fVar5 + fVar9 * (*(float *)(this_00 + 100) + *(float *)(*(long *)(this + 8) + 0x68))
        ;
      }
      uVar4 = *(undefined8 *)(this_01 + 0x5c);
      if (fVar3 != 0.0) {
        uVar4 = CONCAT44((float)((ulong)uVar4 >> 0x20) +
                         fVar3 * ((float)((ulong)*(undefined8 *)(this_00 + 0x5c) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(*(long *)(this + 8) + 0x6c) >> 0x20)
                                 ),
                         (float)uVar4 +
                         fVar3 * ((float)*(undefined8 *)(this_00 + 0x5c) +
                                 (float)*(undefined8 *)(*(long *)(this + 8) + 0x6c)));
      }
      fVar6 = *(float *)(this_01 + 0x68);
      fVar7 = *(float *)(this_01 + 0x6c);
      if (fVar10 != 0.0) {
        if (1e-05 < fVar6) {
          fVar6 = fVar6 * (fVar10 * (*(float *)(this_00 + 0x68) + -1.0 +
                                    *(float *)(*(long *)(this + 8) + 0x74)) + 1.0);
        }
        if (1e-05 < fVar7) {
          fVar7 = fVar7 * (fVar10 * (*(float *)(this_00 + 0x6c) + -1.0 +
                                    *(float *)(*(long *)(this + 8) + 0x78)) + 1.0);
        }
      }
      fVar8 = *(float *)(this_01 + 0x74);
      if (fVar11 != 0.0) {
        fVar8 = fVar8 + fVar11 * (*(float *)(this_00 + 0x74) +
                                 *(float *)(*(long *)(this + 8) + 0x7c));
      }
      Bone::updateWorldTransform
                (this_01,(float)uVar4,(float)((ulong)uVar4 >> 0x20),fVar5,fVar6,fVar7,
                 *(float *)(this_01 + 0x70),fVar8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(this + 0x18));
  }
  return;
}

