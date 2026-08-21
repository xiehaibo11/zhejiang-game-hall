
/* cocos2d::Frustum::isOutOfFrustum(cocos2d::AABB const&) const */

void __thiscall cocos2d::Frustum::isOutOfFrustum(Frustum *this,AABB *param_1)

{
  AABB *pAVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (this[0x61] != (Frustum)0x0) {
    Vec3::Vec3((Vec3 *)&local_78);
    lVar4 = 4;
    if (this[0x60] != (Frustum)0x0) {
      lVar4 = 6;
    }
    do {
      pAVar1 = param_1 + 0xc;
      if (0.0 <= *(float *)this) {
        pAVar1 = param_1;
      }
      local_78 = *(undefined4 *)pAVar1;
      pAVar1 = param_1 + 0x10;
      if (0.0 <= *(float *)(this + 4)) {
        pAVar1 = param_1 + 4;
      }
      local_74 = *(undefined4 *)pAVar1;
      pAVar1 = param_1 + 0x14;
      if (0.0 <= *(float *)(this + 8)) {
        pAVar1 = param_1 + 8;
      }
      local_70 = *(undefined4 *)pAVar1;
      uVar3 = Plane::getSide((Plane *)this,(Vec3 *)&local_78);
      if ((int)uVar3 == 1) goto LAB_00f658ec;
      lVar4 = lVar4 + -1;
      this = this + 0x10;
    } while (lVar4 != 0);
  }
  uVar3 = 0;
LAB_00f658ec:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

