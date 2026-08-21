
/* cocos2d::Mat4::decompose(cocos2d::Vec3*, cocos2d::Quaternion*, cocos2d::Vec3*) const */

undefined4 __thiscall
cocos2d::Mat4::decompose(Mat4 *this,Vec3 *param_1,Quaternion *param_2,Vec3 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
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
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  long local_68;
  
                    /* try { // try from 0099a328 to 00a9a36b has its CatchHandler @ 0099a380 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_3 != (Vec3 *)0x0) {
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x38);
  }
  if ((param_1 == (Vec3 *)0x0) && (param_2 == (Quaternion *)0x0)) {
                    /* try { // try from 0099a36c to 00a9a407 has its CatchHandler @ 0099a118 */
    uVar4 = 1;
    goto LAB_0099a6d4;
  }
                    /* catch() { ... } // from try @ 0099a1d8 with catch @ 0099a380
                       catch() { ... } // from try @ 0099a328 with catch @ 0099a380 */
  Vec3::Vec3((Vec3 *)&local_78,*(float *)this,*(float *)(this + 4),*(float *)(this + 8));
  fVar3 = local_70;
  fVar2 = local_74;
  fVar5 = local_78;
                    /* catch() { ... } // from try @ 0099a198 with catch @ 0099a398 */
  Vec3::Vec3((Vec3 *)&local_88,*(float *)(this + 0x10),*(float *)(this + 0x14),
             *(float *)(this + 0x18));
  fVar12 = local_80;
  fVar6 = local_84;
  fVar7 = local_88;
                    /* catch() { ... } // from try @ 0099a18c with catch @ 0099a39c */
                    /* catch() { ... } // from try @ 0099a16c with catch @ 0099a3a0 */
                    /* catch() { ... } // from try @ 0099a1a4 with catch @ 0099a3b0
                       catch() { ... } // from try @ 0099a214 with catch @ 0099a3b0 */
  Vec3::Vec3((Vec3 *)&local_98,*(float *)(this + 0x20),*(float *)(this + 0x24),
             *(float *)(this + 0x28));
  fVar8 = *(float *)(this + 0x10);
  fVar9 = *(float *)(this + 0x14);
  fVar10 = *(float *)this;
  fVar11 = *(float *)(this + 4);
  fVar13 = *(float *)(this + 0x18);
  fVar14 = *(float *)(this + 0x1c);
  fVar15 = *(float *)(this + 8);
  fVar16 = *(float *)(this + 0xc);
  fVar17 = *(float *)(this + 0x30);
  fVar18 = *(float *)(this + 0x34);
  fVar19 = *(float *)(this + 0x20);
  fVar20 = *(float *)(this + 0x24);
  fVar21 = *(float *)(this + 0x38);
  fVar22 = *(float *)(this + 0x3c);
  fVar23 = *(float *)(this + 0x28);
  fVar24 = *(float *)(this + 0x2c);
                    /* try { // try from 0099a408 to 00a9a45b has its CatchHandler @ 0099a408
                       catch() { ... } // from try @ 0099a408 with catch @ 0099a408
                       catch() { ... } // from try @ 0099a5d4 with catch @ 0099a408 */
                    /* try { // try from 0099a45c to 00a9a473 has its CatchHandler @ 0099a650 */
                    /* try { // try from 0099a47c to 00a9a487 has its CatchHandler @ 0099a64c */
                    /* try { // try from 0099a488 to 00a9a493 has its CatchHandler @ 0099a648 */
                    /* try { // try from 0099a494 to 00a9a5d3 has its CatchHandler @ 0099a660 */
  fVar5 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar12 * fVar12);
  fVar12 = SQRT(local_98 * local_98 + fStack_94 * fStack_94 + local_90 * local_90);
  fVar7 = -fVar12;
  if (0.0 <= (fVar15 * fVar14 - fVar13 * fVar16) * (fVar19 * fVar18 - fVar20 * fVar17) +
             (((fVar11 * fVar13 - fVar9 * fVar15) * (fVar19 * fVar22 - fVar17 * fVar24) +
              (fVar10 * fVar14 - fVar8 * fVar16) * (fVar20 * fVar21 - fVar18 * fVar23) +
              ((fVar10 * fVar9 - fVar11 * fVar8) * (fVar23 * fVar22 - fVar21 * fVar24) -
              (fVar10 * fVar13 - fVar8 * fVar15) * (fVar20 * fVar22 - fVar18 * fVar24))) -
             (fVar11 * fVar14 - fVar9 * fVar16) * (fVar19 * fVar21 - fVar17 * fVar23))) {
    fVar7 = fVar12;
  }
  if (param_1 != (Vec3 *)0x0) {
    *(float *)param_1 = fVar5;
    *(float *)(param_1 + 4) = fVar6;
    *(float *)(param_1 + 8) = fVar7;
  }
  if (param_2 == (Quaternion *)0x0) {
LAB_0099a6b8:
                    /* try { // try from 0099a6b8 to 00a9a70b has its CatchHandler @ 0099a6b8
                       catch() { ... } // from try @ 0099a6b8 with catch @ 0099a6b8
                       catch() { ... } // from try @ 0099a910 with catch @ 0099a6b8 */
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if (((2e-37 <= fVar5) && (2e-37 <= fVar6)) && (2e-37 <= ABS(fVar7))) {
      fVar5 = 1.0 / fVar5;
      fVar6 = 1.0 / fVar6;
      local_78 = fVar5 * local_78;
      local_88 = fVar6 * local_88;
      fVar7 = 1.0 / fVar7;
      local_98 = local_98 * fVar7;
      fStack_94 = fStack_94 * fVar7;
      local_90 = local_90 * fVar7;
      local_74 = fVar5 * local_74;
      local_84 = fVar6 * local_84;
      fVar7 = local_90 + local_78 + local_84 + 1.0;
      local_70 = fVar5 * local_70;
      local_80 = fVar6 * local_80;
      if (fVar7 <= 1e-06) {
        if ((local_78 <= local_90) || (local_78 <= local_84)) {
          if (local_84 <= local_90) {
            fVar7 = 0.5 / SQRT(((local_90 + 1.0) - local_78) - local_84);
            *(float *)(param_2 + 8) = 0.25 / fVar7;
            *(float *)(param_2 + 0xc) = (local_74 - local_88) * fVar7;
            *(float *)param_2 = (local_98 + local_70) * fVar7;
            *(float *)(param_2 + 4) = (fStack_94 + local_80) * fVar7;
          }
          else {
                    /* catch() { ... } // from try @ 0099a488 with catch @ 0099a648 */
                    /* catch() { ... } // from try @ 0099a47c with catch @ 0099a64c */
                    /* catch() { ... } // from try @ 0099a45c with catch @ 0099a650 */
            fVar7 = 0.5 / SQRT(((local_84 + 1.0) - local_78) - local_90);
                    /* catch() { ... } // from try @ 0099a494 with catch @ 0099a660 */
            *(float *)(param_2 + 8) = (fStack_94 + local_80) * fVar7;
            *(float *)(param_2 + 0xc) = (local_98 - local_70) * fVar7;
            *(float *)param_2 = (local_74 + local_88) * fVar7;
            *(float *)(param_2 + 4) = 0.25 / fVar7;
          }
        }
        else {
          fVar7 = 0.5 / SQRT(((local_78 + 1.0) - local_84) - local_90);
          *(float *)(param_2 + 8) = (local_98 + local_70) * fVar7;
          *(float *)(param_2 + 0xc) = (local_80 - fStack_94) * fVar7;
          *(float *)param_2 = 0.25 / fVar7;
          *(float *)(param_2 + 4) = (local_74 + local_88) * fVar7;
        }
      }
      else {
        fVar7 = 0.5 / SQRT(fVar7);
        *(float *)(param_2 + 8) = (local_74 - local_88) * fVar7;
        *(float *)(param_2 + 0xc) = 0.25 / fVar7;
        *(float *)param_2 = (local_80 - fStack_94) * fVar7;
        *(float *)(param_2 + 4) = (local_98 - local_70) * fVar7;
                    /* try { // try from 0099a5d4 to 00a9a6b7 has its CatchHandler @ 0099a408 */
      }
      goto LAB_0099a6b8;
    }
  }
  Vec3::~Vec3((Vec3 *)&local_98);
  Vec3::~Vec3((Vec3 *)&local_88);
  Vec3::~Vec3((Vec3 *)&local_78);
LAB_0099a6d4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

