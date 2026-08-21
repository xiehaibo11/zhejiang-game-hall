
/* cocos2d::Frustum::isOutOfFrustum(cocos2d::OBB const&) const */

void __thiscall cocos2d::Frustum::isOutOfFrustum(Frustum *this,OBB *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  ulong uVar9;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong local_98;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if (this[0x61] != (Frustum)0x0) {
    Vec3::Vec3((Vec3 *)&local_98);
    uVar4 = *(undefined8 *)(param_1 + 0x24);
    uVar6 = *(undefined8 *)(param_1 + 0xc);
    fVar7 = *(float *)(param_1 + 0x54);
    fVar15 = *(float *)(param_1 + 0x58);
    fVar11 = *(float *)(param_1 + 0x14);
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    fVar14 = *(float *)(param_1 + 0x20);
    fVar16 = (float)uVar6 * fVar7;
    fVar17 = (float)((ulong)uVar6 >> 0x20) * fVar7;
    fVar5 = *(float *)(param_1 + 0x5c);
    fVar8 = *(float *)(param_1 + 0x2c);
    fVar18 = (float)uVar13 * fVar15;
    fVar19 = (float)((ulong)uVar13 >> 0x20) * fVar15;
    lVar2 = 4;
    if (this[0x60] != (Frustum)0x0) {
      lVar2 = 6;
    }
    fVar20 = (float)uVar4 * fVar5;
    fVar21 = (float)((ulong)uVar4 >> 0x20) * fVar5;
    do {
      local_90 = *(float *)(param_1 + 8);
      local_98 = *(ulong *)param_1;
      fVar3 = (float)Vec3::dot((Vec3 *)this,(Vec3 *)(param_1 + 0xc));
      fVar10 = (float)(local_98 >> 0x20);
      uVar9 = CONCAT44(fVar17 + fVar10,fVar16 + (float)local_98);
      fVar12 = fVar7 * fVar11 + local_90;
      local_98 = uVar9 ^ (uVar9 ^ CONCAT44(fVar10 - fVar17,(float)local_98 - fVar16)) &
                         CONCAT44(-(uint)(0.0 < fVar3),-(uint)(0.0 < fVar3));
      local_90 = local_90 - fVar7 * fVar11;
      if (fVar3 <= 0.0) {
        local_90 = fVar12;
      }
      fVar3 = (float)Vec3::dot((Vec3 *)this,(Vec3 *)(param_1 + 0x18));
      fVar10 = (float)(local_98 >> 0x20);
      uVar9 = CONCAT44(fVar19 + fVar10,fVar18 + (float)local_98);
      fVar12 = fVar15 * fVar14 + local_90;
      local_98 = uVar9 ^ (uVar9 ^ CONCAT44(fVar10 - fVar19,(float)local_98 - fVar18)) &
                         CONCAT44(-(uint)(0.0 < fVar3),-(uint)(0.0 < fVar3));
      local_90 = local_90 - fVar15 * fVar14;
      if (fVar3 <= 0.0) {
        local_90 = fVar12;
      }
      fVar3 = (float)Vec3::dot((Vec3 *)this,(Vec3 *)(param_1 + 0x24));
      fVar10 = (float)(local_98 >> 0x20);
      uVar9 = CONCAT44(fVar21 + fVar10,fVar20 + (float)local_98);
      fVar12 = fVar5 * fVar8 + local_90;
      local_98 = uVar9 ^ (uVar9 ^ CONCAT44(fVar10 - fVar21,(float)local_98 - fVar20)) &
                         CONCAT44(-(uint)(0.0 < fVar3),-(uint)(0.0 < fVar3));
      local_90 = local_90 - fVar5 * fVar8;
      if (fVar3 <= 0.0) {
        local_90 = fVar12;
      }
      uVar4 = Plane::getSide((Plane *)this,(Vec3 *)&local_98);
      if ((int)uVar4 == 1) goto LAB_00f65ac0;
      lVar2 = lVar2 + -1;
      this = this + 0x10;
    } while (lVar2 != 0);
  }
  uVar4 = 0;
LAB_00f65ac0:
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

