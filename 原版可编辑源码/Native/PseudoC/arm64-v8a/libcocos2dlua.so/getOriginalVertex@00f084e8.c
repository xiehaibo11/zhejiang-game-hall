
/* cocos2d::Grid3D::getOriginalVertex(cocos2d::Vec2 const&) const */

void __thiscall cocos2d::Grid3D::getOriginalVertex(Grid3D *this,Vec2 *param_1)

{
  float *pfVar1;
  long lVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00f08488 with catch @ 00f08510 */
  pfVar1 = (float *)(*(long *)(this + 0x80) +
                    (long)(int)((*(float *)(param_1 + 4) +
                                *(float *)param_1 * (*(float *)(this + 0x2c) + 1.0)) * 3.0) * 4);
  Vec3::Vec3((Vec3 *)&local_38,*pfVar1,pfVar1[1],pfVar1[2]);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}

