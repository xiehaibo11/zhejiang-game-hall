
/* spine::TransformConstraint::applyAbsoluteWorld() */

void __thiscall spine::TransformConstraint::applyAbsoluteWorld(TransformConstraint *this)

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
  undefined8 uVar10;
  undefined8 uVar11;
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
  float local_90;
  float local_8c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  this_00 = *(Bone **)(this + 0x30);
  fVar14 = *(float *)(this_00 + 0x88);
  fVar12 = *(float *)(this_00 + 0x8c);
  fVar16 = *(float *)(this_00 + 0x7c);
  fVar17 = *(float *)(this_00 + 0x80);
  fVar2 = 0.017453292;
  if (fVar16 * fVar12 - fVar17 * fVar14 <= 0.0) {
    fVar2 = -0.017453292;
  }
  if (*(long *)(this + 0x18) != 0) {
    uVar4 = 0;
    fVar15 = *(float *)(*(long *)(this + 8) + 0x7c);
    fVar13 = *(float *)(*(long *)(this + 8) + 0x68);
    fVar20 = *(float *)(this + 0x38);
    fVar19 = *(float *)(this + 0x3c);
    fVar18 = *(float *)(this + 0x40);
    fVar21 = *(float *)(this + 0x44);
    do {
      lVar5 = *(long *)(*(long *)(this + 0x28) + uVar4 * 8);
      if (fVar20 == 0.0) {
        bVar3 = false;
      }
      else {
        uVar10 = *(undefined8 *)(lVar5 + 0x7c);
        uVar11 = *(undefined8 *)(lVar5 + 0x88);
        fVar6 = (float)MathUtil::atan2(fVar14,fVar16);
        fVar8 = (float)uVar11;
        fVar9 = (float)uVar10;
        fVar7 = (float)MathUtil::atan2(fVar8,fVar9);
        fVar6 = fVar13 * fVar2 + (fVar6 - fVar7);
        if (fVar6 <= 3.1415927) {
          if (fVar6 < -3.1415927) {
            fVar6 = fVar6 + 6.2831855;
          }
        }
        else {
          fVar6 = fVar6 - 6.2831855;
        }
        fVar6 = fVar20 * fVar6;
        fVar7 = (float)MathUtil::cos(fVar6);
        fVar6 = (float)MathUtil::sin(fVar6);
        bVar3 = true;
        fVar23 = (float)((ulong)uVar11 >> 0x20);
        fVar22 = (float)((ulong)uVar10 >> 0x20);
        *(ulong *)(lVar5 + 0x7c) =
             CONCAT44(fVar22 * fVar7 - fVar23 * fVar6,fVar9 * fVar7 - fVar8 * fVar6);
        *(ulong *)(lVar5 + 0x88) =
             CONCAT44(fVar23 * fVar7 + fVar22 * fVar6,fVar8 * fVar7 + fVar9 * fVar6);
      }
      if (fVar19 != 0.0) {
        Bone::localToWorld(this_00,*(float *)(*(long *)(this + 8) + 0x6c),
                           *(float *)(*(long *)(this + 8) + 0x70),&local_8c,&local_90);
        bVar3 = true;
        *(float *)(lVar5 + 0x84) =
             *(float *)(lVar5 + 0x84) + fVar19 * (local_8c - *(float *)(lVar5 + 0x84));
        *(float *)(lVar5 + 0x90) =
             *(float *)(lVar5 + 0x90) + fVar19 * (local_90 - *(float *)(lVar5 + 0x90));
      }
      if (0.0 < fVar18) {
        fVar6 = (float)MathUtil::sqrt(*(float *)(lVar5 + 0x7c) * *(float *)(lVar5 + 0x7c) +
                                      *(float *)(lVar5 + 0x88) * *(float *)(lVar5 + 0x88));
        if (1e-05 < fVar6) {
          fVar8 = (float)MathUtil::sqrt(fVar16 * fVar16 + fVar14 * fVar14);
          fVar6 = (fVar6 + fVar18 * ((fVar8 - fVar6) + *(float *)(*(long *)(this + 8) + 0x74))) /
                  fVar6;
        }
        *(float *)(lVar5 + 0x7c) = fVar6 * *(float *)(lVar5 + 0x7c);
        *(float *)(lVar5 + 0x88) = fVar6 * *(float *)(lVar5 + 0x88);
        fVar6 = (float)MathUtil::sqrt(*(float *)(lVar5 + 0x80) * *(float *)(lVar5 + 0x80) +
                                      *(float *)(lVar5 + 0x8c) * *(float *)(lVar5 + 0x8c));
        if (1e-05 < fVar6) {
          fVar8 = (float)MathUtil::sqrt(fVar17 * fVar17 + fVar12 * fVar12);
          fVar6 = (fVar6 + fVar18 * ((fVar8 - fVar6) + *(float *)(*(long *)(this + 8) + 0x78))) /
                  fVar6;
        }
        bVar3 = true;
        *(float *)(lVar5 + 0x80) = fVar6 * *(float *)(lVar5 + 0x80);
        *(float *)(lVar5 + 0x8c) = fVar6 * *(float *)(lVar5 + 0x8c);
      }
      if (fVar21 <= 0.0) {
        if (bVar3) goto LAB_00d0c0cc;
      }
      else {
        fVar22 = *(float *)(lVar5 + 0x80);
        fVar23 = *(float *)(lVar5 + 0x8c);
        fVar6 = (float)MathUtil::atan2(fVar23,fVar22);
        fVar8 = (float)MathUtil::atan2(fVar12,fVar17);
        fVar7 = (float)MathUtil::atan2(fVar14,fVar16);
        fVar9 = (float)MathUtil::atan2(*(float *)(lVar5 + 0x88),*(float *)(lVar5 + 0x7c));
        fVar8 = (fVar8 - fVar7) - (fVar6 - fVar9);
        if (fVar8 <= 3.1415927) {
          if (fVar8 < -3.1415927) {
            fVar8 = fVar8 + 6.2831855;
          }
        }
        else {
          fVar8 = fVar8 - 6.2831855;
        }
        fVar6 = fVar6 + fVar21 * (fVar15 * fVar2 + fVar8);
        fVar8 = (float)MathUtil::sqrt(fVar22 * fVar22 + fVar23 * fVar23);
        fVar7 = (float)MathUtil::cos(fVar6);
        *(float *)(lVar5 + 0x80) = fVar8 * fVar7;
        fVar6 = (float)MathUtil::sin(fVar6);
        *(float *)(lVar5 + 0x8c) = fVar8 * fVar6;
LAB_00d0c0cc:
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

