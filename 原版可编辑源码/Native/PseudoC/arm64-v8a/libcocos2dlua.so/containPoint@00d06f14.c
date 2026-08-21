
/* cocos2d::OBB::containPoint(cocos2d::Vec3 const&) const */

void __thiscall cocos2d::OBB::containPoint(OBB *this,Vec3 *param_1)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) -
                      (float)((ulong)*(undefined8 *)this >> 0x20),
                      (float)*(undefined8 *)param_1 - (float)*(undefined8 *)this);
  local_30 = *(float *)(param_1 + 8) - *(float *)(this + 8);
  fVar3 = (float)Vec3::dot((Vec3 *)&local_38,(Vec3 *)(this + 0xc));
  bVar2 = false;
  if ((fVar3 <= *(float *)(this + 0x54)) && (-*(float *)(this + 0x54) <= fVar3)) {
    fVar3 = (float)Vec3::dot((Vec3 *)&local_38,(Vec3 *)(this + 0x18));
    bVar2 = false;
    if ((fVar3 <= *(float *)(this + 0x58)) && (-*(float *)(this + 0x58) <= fVar3)) {
      fVar3 = (float)Vec3::dot((Vec3 *)&local_38,(Vec3 *)(this + 0x24));
      bVar2 = -*(float *)(this + 0x5c) <= fVar3 && fVar3 <= *(float *)(this + 0x5c);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

