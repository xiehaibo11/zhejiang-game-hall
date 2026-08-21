
/* spine::TransformConstraint::applyRelativeWorld() */

void __thiscall spine::TransformConstraint::applyRelativeWorld(TransformConstraint *this)

{
  long lVar1;
  float fVar2;
  bool bVar3;
  Bone *this_00;
  ulong uVar4;
  long lVar5;
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
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float local_90;
  float local_8c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  this_00 = *(Bone **)(this + 0x30);
  fVar10 = *(float *)(this_00 + 0x88);
  fVar8 = *(float *)(this_00 + 0x8c);
  fVar12 = *(float *)(this_00 + 0x7c);
  fVar13 = *(float *)(this_00 + 0x80);
  fVar2 = 0.017453292;
  if (fVar12 * fVar8 - fVar13 * fVar10 <= 0.0) {
    fVar2 = -0.017453292;
  }
  if (*(long *)(this + 0x18) != 0) {
    uVar4 = 0;
    fVar11 = *(float *)(*(long *)(this + 8) + 0x7c);
    fVar9 = *(float *)(*(long *)(this + 8) + 0x68);
    fVar15 = *(float *)(this + 0x38);
    fVar17 = *(float *)(this + 0x3c);
    fVar18 = *(float *)(this + 0x40);
    fVar14 = *(float *)(this + 0x44);
    do {
      lVar5 = *(long *)(*(long *)(this + 0x28) + uVar4 * 8);
      if (fVar15 == 0.0) {
        bVar3 = false;
      }
      else {
        uVar22 = *(undefined8 *)(lVar5 + 0x7c);
        uVar16 = *(undefined8 *)(lVar5 + 0x88);
        fVar6 = (float)MathUtil::atan2(fVar10,fVar12);
        fVar6 = fVar9 * fVar2 + fVar6;
        if (fVar6 <= 3.1415927) {
          if (fVar6 < -3.1415927) {
            fVar6 = fVar6 + 6.2831855;
          }
        }
        else {
          fVar6 = fVar6 - 6.2831855;
        }
        fVar6 = fVar15 * fVar6;
        fVar7 = (float)MathUtil::cos(fVar6);
        fVar6 = (float)MathUtil::sin(fVar6);
        fVar19 = (float)uVar16;
        fVar21 = (float)((ulong)uVar16 >> 0x20);
        fVar20 = (float)uVar22;
        fVar23 = (float)((ulong)uVar22 >> 0x20);
        bVar3 = true;
        *(ulong *)(lVar5 + 0x7c) =
             CONCAT44(fVar23 * fVar7 - fVar21 * fVar6,fVar20 * fVar7 - fVar19 * fVar6);
        *(ulong *)(lVar5 + 0x88) =
             CONCAT44(fVar21 * fVar7 + fVar23 * fVar6,fVar19 * fVar7 + fVar20 * fVar6);
      }
      if (fVar17 != 0.0) {
        Bone::localToWorld(this_00,*(float *)(*(long *)(this + 8) + 0x6c),
                           *(float *)(*(long *)(this + 8) + 0x70),&local_8c,&local_90);
        bVar3 = true;
        *(float *)(lVar5 + 0x84) = *(float *)(lVar5 + 0x84) + fVar17 * local_8c;
        *(float *)(lVar5 + 0x90) = *(float *)(lVar5 + 0x90) + fVar17 * local_90;
      }
      if (0.0 < fVar18) {
        fVar6 = (float)MathUtil::sqrt(fVar12 * fVar12 + fVar10 * fVar10);
        fVar6 = fVar18 * (fVar6 + -1.0 + *(float *)(*(long *)(this + 8) + 0x74)) + 1.0;
        *(float *)(lVar5 + 0x88) = *(float *)(lVar5 + 0x88) * fVar6;
        *(float *)(lVar5 + 0x7c) = *(float *)(lVar5 + 0x7c) * fVar6;
        fVar6 = (float)MathUtil::sqrt(fVar13 * fVar13 + fVar8 * fVar8);
        bVar3 = true;
        fVar6 = fVar18 * (fVar6 + -1.0 + *(float *)(*(long *)(this + 8) + 0x78)) + 1.0;
        *(float *)(lVar5 + 0x80) = *(float *)(lVar5 + 0x80) * fVar6;
        *(float *)(lVar5 + 0x8c) = *(float *)(lVar5 + 0x8c) * fVar6;
      }
      if (fVar14 <= 0.0) {
        if (bVar3) goto LAB_00d0bccc;
      }
      else {
        fVar6 = (float)MathUtil::atan2(fVar8,fVar13);
        fVar7 = (float)MathUtil::atan2(fVar10,fVar12);
        fVar6 = fVar6 - fVar7;
        if (fVar6 <= 3.1415927) {
          if (fVar6 < -3.1415927) {
            fVar6 = fVar6 + 6.2831855;
          }
        }
        else {
          fVar6 = fVar6 - 6.2831855;
        }
        fVar19 = *(float *)(lVar5 + 0x80);
        fVar21 = *(float *)(lVar5 + 0x8c);
        fVar7 = (float)MathUtil::atan2(fVar21,fVar19);
        fVar7 = fVar7 + fVar14 * (fVar11 * fVar2 + (fVar6 - 1.5707964));
        fVar6 = (float)MathUtil::sqrt(fVar19 * fVar19 + fVar21 * fVar21);
        fVar19 = (float)MathUtil::cos(fVar7);
        *(float *)(lVar5 + 0x80) = fVar6 * fVar19;
        fVar7 = (float)MathUtil::sin(fVar7);
        *(float *)(lVar5 + 0x8c) = fVar6 * fVar7;
LAB_00d0bccc:
        *(undefined1 *)(lVar5 + 0x78) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulong *)(this + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

