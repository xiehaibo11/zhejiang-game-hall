
/* cocos2d::RotateBy::reverse() const */

void __thiscall cocos2d::RotateBy::reverse(RotateBy *this)

{
  long lVar1;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00edf50c with catch @ 00edf570 */
  if (this[0x56] == (RotateBy)0x0) {
    create(*(float *)(this + 0x4c),-*(float *)(this + 0x58),-*(float *)(this + 0x5c));
  }
  else {
    Vec3::Vec3((Vec3 *)&local_38);
    local_38 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20),
                        -(float)*(undefined8 *)(this + 0x58));
    local_30 = -*(float *)(this + 0x60);
    create(*(float *)(this + 0x4c),(Vec3 *)&local_38);
                    /* catch() { ... } // from try @ 00edf500 with catch @ 00edf5a0 */
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

