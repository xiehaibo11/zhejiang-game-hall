
/* cocos2d::Mat4::inverse() */

void __thiscall cocos2d::Mat4::inverse(Mat4 *this)

{
  long lVar1;
  bool bVar2;
  float fVar3;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar12 = *(float *)(this + 0x10);
  fVar5 = *(float *)(this + 0x14);
  fVar8 = *(float *)this;
  fVar7 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0x18);
  fVar10 = *(float *)(this + 0x1c);
  fVar9 = *(float *)(this + 8);
  fVar11 = *(float *)(this + 0xc);
  fVar26 = *(float *)(this + 0x30);
  fVar20 = *(float *)(this + 0x34);
  fVar23 = *(float *)(this + 0x20);
  fVar21 = *(float *)(this + 0x24);
  fVar19 = *(float *)(this + 0x38);
  fVar25 = *(float *)(this + 0x3c);
  fVar24 = *(float *)(this + 0x28);
  fVar27 = *(float *)(this + 0x2c);
  fVar4 = fVar8 * fVar5 - fVar7 * fVar12;
  fVar28 = fVar8 * fVar10 - fVar12 * fVar11;
  fVar31 = fVar7 * fVar3 - fVar5 * fVar9;
  fVar30 = fVar7 * fVar10 - fVar5 * fVar11;
  fVar29 = fVar9 * fVar10 - fVar3 * fVar11;
  fVar17 = fVar23 * fVar20 - fVar21 * fVar26;
  fVar13 = fVar23 * fVar19 - fVar26 * fVar24;
  fVar14 = fVar23 * fVar25 - fVar26 * fVar27;
  fVar6 = fVar8 * fVar3 - fVar12 * fVar9;
  fVar18 = fVar21 * fVar25 - fVar20 * fVar27;
  fVar15 = fVar24 * fVar25 - fVar19 * fVar27;
  fVar16 = fVar21 * fVar19 - fVar20 * fVar24;
  fVar22 = fVar29 * fVar17 +
           ((fVar31 * fVar14 + fVar28 * fVar16 + (fVar4 * fVar15 - fVar6 * fVar18)) -
           fVar30 * fVar13);
  bVar2 = 2e-37 < ABS(fVar22);
  if (bVar2) {
    _local_b0 = CONCAT44((fVar9 * fVar18 - fVar7 * fVar15) - fVar11 * fVar16,
                         fVar10 * fVar16 + (fVar5 * fVar15 - fVar3 * fVar18));
    _fStack_a8 = CONCAT44((fVar30 * fVar24 - fVar29 * fVar21) - fVar31 * fVar27,
                          (fVar20 * fVar29 - fVar30 * fVar19) + fVar31 * fVar25);
    _local_a0 = CONCAT44(fVar11 * fVar13 + (fVar8 * fVar15 - fVar9 * fVar14),
                         (fVar3 * fVar14 - fVar12 * fVar15) - fVar10 * fVar13);
    _local_98 = CONCAT44((fVar23 * fVar29 - fVar28 * fVar24) + fVar6 * fVar27,
                         (fVar28 * fVar19 - fVar29 * fVar26) - fVar6 * fVar25);
    _local_90 = CONCAT44((fVar7 * fVar14 - fVar8 * fVar18) - fVar11 * fVar17,
                         fVar10 * fVar17 + (fVar12 * fVar18 - fVar5 * fVar14));
    _fStack_88 = CONCAT44((fVar28 * fVar21 - fVar23 * fVar30) - fVar4 * fVar27,
                          (fVar30 * fVar26 - fVar20 * fVar28) + fVar4 * fVar25);
    _local_80 = CONCAT44(fVar9 * fVar17 + (fVar8 * fVar16 - fVar7 * fVar13),
                         (fVar5 * fVar13 - fVar12 * fVar16) - fVar3 * fVar17);
    _local_78 = CONCAT44((fVar31 * fVar23 - fVar6 * fVar21) + fVar4 * fVar24,
                         (fVar6 * fVar20 - fVar31 * fVar26) - fVar4 * fVar19);
    MathUtil::multiplyMatrix(&local_b0,1.0 / fVar22,(float *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

