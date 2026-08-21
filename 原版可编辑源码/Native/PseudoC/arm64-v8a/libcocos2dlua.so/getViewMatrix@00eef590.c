
/* cocos2d::Camera::getViewMatrix() const */

Camera * __thiscall cocos2d::Camera::getViewMatrix(Camera *this)

{
  long lVar1;
  int iVar2;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x430))(&local_78);
  iVar2 = memcmp(&local_78,this + 0x380,0x40);
  if (iVar2 != 0) {
    this[0x428] = (Camera)0x1;
    this[0x494] = (Camera)0x1;
    *(undefined8 *)(this + 0x3a8) = uStack_50;
    *(undefined8 *)(this + 0x3a0) = local_58;
    *(undefined8 *)(this + 0x3b8) = uStack_40;
    *(undefined8 *)(this + 0x3b0) = local_48;
    *(undefined8 *)(this + 0x388) = uStack_70;
    *(undefined8 *)(this + 0x380) = local_78;
    *(undefined8 *)(this + 0x398) = uStack_60;
    *(undefined8 *)(this + 0x390) = local_68;
    Mat4::getInversed();
    *(undefined8 *)(this + 0x368) = uStack_90;
    *(undefined8 *)(this + 0x360) = local_98;
    *(undefined8 *)(this + 0x378) = uStack_80;
    *(undefined8 *)(this + 0x370) = local_88;
    *(undefined8 *)(this + 0x348) = uStack_b0;
    *(undefined8 *)(this + 0x340) = local_b8;
    *(undefined8 *)(this + 0x358) = uStack_a0;
    *(undefined8 *)(this + 0x350) = local_a8;
    Mat4::~Mat4((Mat4 *)&local_b8);
  }
  Mat4::~Mat4((Mat4 *)&local_78);
                    /* try { // try from 00eef634 to 00fef68f has its CatchHandler @ 00eef634
                       catch() { ... } // from try @ 00eef634 with catch @ 00eef634
                       catch() { ... } // from try @ 00eef6a0 with catch @ 00eef634 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this + 0x340;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

