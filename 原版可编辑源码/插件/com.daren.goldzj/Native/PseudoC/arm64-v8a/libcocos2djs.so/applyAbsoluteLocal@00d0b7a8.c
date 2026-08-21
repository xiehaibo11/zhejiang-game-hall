
/* spine::TransformConstraint::applyAbsoluteLocal() */

void __thiscall spine::TransformConstraint::applyAbsoluteLocal(TransformConstraint *this)

{
  long lVar1;
  Bone *this_00;
  Bone *this_01;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
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
      fVar7 = *(float *)(this_01 + 100);
      if (fVar9 != 0.0) {
        fVar4 = (*(float *)(this_00 + 100) - fVar7) + *(float *)(*(long *)(this + 8) + 0x68);
        fVar7 = fVar7 + fVar9 * (fVar4 - (float)((0x4000 - (int)(fVar4 / -360.0 + 16384.5)) * 0x168)
                                );
      }
      uVar5 = *(undefined8 *)(this_01 + 0x5c);
      if (fVar3 != 0.0) {
        fVar4 = (float)((ulong)uVar5 >> 0x20);
        uVar5 = CONCAT44(fVar4 + fVar3 * (((float)((ulong)*(undefined8 *)(this_00 + 0x5c) >> 0x20) -
                                          fVar4) + (float)((ulong)*(undefined8 *)
                                                                   (*(long *)(this + 8) + 0x6c) >>
                                                          0x20)),
                         (float)uVar5 +
                         fVar3 * (((float)*(undefined8 *)(this_00 + 0x5c) - (float)uVar5) +
                                 (float)*(undefined8 *)(*(long *)(this + 8) + 0x6c)));
      }
      fVar4 = *(float *)(this_01 + 0x68);
      fVar8 = *(float *)(this_01 + 0x6c);
      if (fVar10 != 0.0) {
        if (1e-05 < fVar4) {
          fVar4 = (fVar4 + fVar10 * ((*(float *)(this_00 + 0x68) - fVar4) +
                                    *(float *)(*(long *)(this + 8) + 0x74))) / fVar4;
        }
        if (1e-05 < fVar8) {
          fVar8 = (fVar8 + fVar10 * ((*(float *)(this_00 + 0x6c) - fVar8) +
                                    *(float *)(*(long *)(this + 8) + 0x78))) / fVar8;
        }
      }
      if (fVar11 != 0.0) {
        fVar6 = (*(float *)(this_00 + 0x74) - *(float *)(this_01 + 0x74)) +
                *(float *)(*(long *)(this + 8) + 0x7c);
        *(float *)(this_01 + 0x58) =
             *(float *)(this_01 + 0x58) +
             fVar11 * (fVar6 - (float)((0x4000 - (int)(fVar6 / -360.0 + 16384.5)) * 0x168));
      }
      Bone::updateWorldTransform
                (this_01,(float)uVar5,(float)((ulong)uVar5 >> 0x20),fVar7,fVar4,fVar8,
                 *(float *)(this_01 + 0x70),*(float *)(this_01 + 0x74));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(this + 0x18));
  }
  return;
}

