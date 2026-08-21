
/* cocos2d::Mat4::decompose(cocos2d::Vec3*, cocos2d::Quaternion*, cocos2d::Vec3*) const */

void __thiscall cocos2d::Mat4::decompose(Mat4 *this,Vec3 *param_1,Quaternion *param_2,Vec3 *param_3)

{
  long lVar1;
  undefined8 uVar2;
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
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (param_3 != (Vec3 *)0x0) {
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x38);
  }
  if ((param_1 != (Vec3 *)0x0) || (param_2 != (Quaternion *)0x0)) {
    Vec3::Vec3((Vec3 *)&local_88,*(float *)this,*(float *)(this + 4),*(float *)(this + 8));
    fVar10 = SQRT(local_88 * local_88 + fStack_84 * fStack_84 + local_80 * local_80);
    Vec3::Vec3((Vec3 *)&local_98,*(float *)(this + 0x10),*(float *)(this + 0x14),
               *(float *)(this + 0x18));
    fVar11 = SQRT(local_98 * local_98 + fStack_94 * fStack_94 + local_90 * local_90);
    Vec3::Vec3((Vec3 *)&local_a8,*(float *)(this + 0x20),*(float *)(this + 0x24),
               *(float *)(this + 0x28));
    fVar3 = *(float *)(this + 0x10);
    fVar5 = *(float *)(this + 0x14);
    fVar6 = *(float *)this;
    fVar7 = *(float *)(this + 4);
    fVar8 = *(float *)(this + 0x18);
    fVar12 = *(float *)(this + 0x1c);
    fVar13 = *(float *)(this + 8);
    fVar14 = *(float *)(this + 0xc);
    fVar15 = *(float *)(this + 0x30);
    fVar16 = *(float *)(this + 0x34);
    fVar17 = *(float *)(this + 0x20);
    fVar18 = *(float *)(this + 0x24);
    fVar19 = *(float *)(this + 0x38);
    fVar20 = *(float *)(this + 0x3c);
    fVar21 = *(float *)(this + 0x28);
    fVar22 = *(float *)(this + 0x2c);
    fVar9 = SQRT(local_a8 * local_a8 + fStack_a4 * fStack_a4 + local_a0 * local_a0);
    fVar4 = -fVar9;
    if (0.0 <= (fVar13 * fVar12 - fVar8 * fVar14) * (fVar17 * fVar16 - fVar18 * fVar15) +
               (((fVar7 * fVar8 - fVar5 * fVar13) * (fVar17 * fVar20 - fVar15 * fVar22) +
                (fVar6 * fVar12 - fVar3 * fVar14) * (fVar18 * fVar19 - fVar16 * fVar21) +
                ((fVar6 * fVar5 - fVar7 * fVar3) * (fVar21 * fVar20 - fVar19 * fVar22) -
                (fVar6 * fVar8 - fVar3 * fVar13) * (fVar18 * fVar20 - fVar16 * fVar22))) -
               (fVar7 * fVar12 - fVar5 * fVar14) * (fVar17 * fVar19 - fVar15 * fVar21))) {
      fVar4 = fVar9;
    }
    if (param_1 != (Vec3 *)0x0) {
      *(float *)param_1 = fVar10;
      *(float *)(param_1 + 4) = fVar11;
      *(float *)(param_1 + 8) = fVar4;
    }
    if (param_2 != (Quaternion *)0x0) {
      uVar2 = 0;
      if (((fVar10 < 2e-37) || (fVar11 < 2e-37)) || (ABS(fVar4) < 2e-37)) goto LAB_00f843b4;
      fVar4 = 1.0 / fVar4;
      local_a8 = local_a8 * fVar4;
      fStack_a4 = fStack_a4 * fVar4;
      local_a0 = local_a0 * fVar4;
      fVar10 = 1.0 / fVar10;
      fVar11 = 1.0 / fVar11;
      local_88 = fVar10 * local_88;
      fStack_84 = fVar10 * fStack_84;
      local_98 = fVar11 * local_98;
      fStack_94 = fVar11 * fStack_94;
      local_80 = fVar10 * local_80;
      local_90 = fVar11 * local_90;
      fVar4 = local_a0 + local_88 + fStack_94 + 1.0;
      if (1e-06 < fVar4) {
        fVar4 = 0.5 / SQRT(fVar4);
        *(float *)(param_2 + 8) = (fStack_84 - local_98) * fVar4;
        *(float *)(param_2 + 0xc) = 0.25 / fVar4;
        *(float *)param_2 = (local_90 - fStack_a4) * fVar4;
        *(float *)(param_2 + 4) = (local_a8 - local_80) * fVar4;
      }
      else {
        if ((local_88 <= local_a0) || (local_88 <= fStack_94)) {
          if (fStack_94 <= local_a0) {
            fVar4 = 0.5 / SQRT(((local_a0 + 1.0) - local_88) - fStack_94);
            *(float *)(param_2 + 8) = 0.25 / fVar4;
            *(float *)(param_2 + 0xc) = (fStack_84 - local_98) * fVar4;
            *(float *)param_2 = (local_a8 + local_80) * fVar4;
            *(float *)(param_2 + 4) = (fStack_a4 + local_90) * fVar4;
            goto LAB_00f843b0;
          }
          fVar4 = 0.5 / SQRT(((fStack_94 + 1.0) - local_88) - local_a0);
          fVar3 = (fStack_84 + local_98) * fVar4;
          fVar10 = 0.25 / fVar4;
          *(float *)(param_2 + 8) = (fStack_a4 + local_90) * fVar4;
          *(float *)(param_2 + 0xc) = (local_a8 - local_80) * fVar4;
        }
        else {
          fVar4 = 0.5 / SQRT(((local_88 + 1.0) - fStack_94) - local_a0);
          fVar3 = 0.25 / fVar4;
          fVar10 = (fStack_84 + local_98) * fVar4;
          *(float *)(param_2 + 8) = (local_a8 + local_80) * fVar4;
          *(float *)(param_2 + 0xc) = (local_90 - fStack_a4) * fVar4;
        }
        *(float *)param_2 = fVar3;
        *(float *)(param_2 + 4) = fVar10;
      }
    }
  }
LAB_00f843b0:
  uVar2 = 1;
LAB_00f843b4:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

