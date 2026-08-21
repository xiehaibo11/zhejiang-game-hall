
/* cocos2d::Bone3D::getWorldMat() */

Bone3D * __thiscall cocos2d::Bone3D::getWorldMat(Bone3D *this)

{
  long lVar1;
  Mat4 *pMVar2;
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
                    /* try { // try from 00d3b700 to 00e3b707 has its CatchHandler @ 00d3b70c */
  if (this[0xe0] != (Bone3D)0x0) {
                    /* try { // try from 00d3b708 to 00e3b73f has its CatchHandler @ 00d3b4f4 */
    updateLocalMat(this);
                    /* catch() { ... } // from try @ 00d3b700 with catch @ 00d3b70c */
                    /* catch() { ... } // from try @ 00d3b664 with catch @ 00d3b710 */
    if (*(Bone3D **)(this + 0xc0) == (Bone3D *)0x0) {
      *(undefined8 *)(this + 0xec) = *(undefined8 *)(this + 300);
      *(undefined8 *)(this + 0xe4) = *(undefined8 *)(this + 0x124);
      *(undefined8 *)(this + 0xfc) = *(undefined8 *)(this + 0x13c);
      *(undefined8 *)(this + 0xf4) = *(undefined8 *)(this + 0x134);
      *(undefined8 *)(this + 0x10c) = *(undefined8 *)(this + 0x14c);
      *(undefined8 *)(this + 0x104) = *(undefined8 *)(this + 0x144);
      *(undefined8 *)(this + 0x11c) = *(undefined8 *)(this + 0x15c);
      *(undefined8 *)(this + 0x114) = *(undefined8 *)(this + 0x154);
    }
    else {
      pMVar2 = (Mat4 *)getWorldMat(*(Bone3D **)(this + 0xc0));
                    /* catch() { ... } // from try @ 00d3b614 with catch @ 00d3b724 */
      Mat4::Mat4((Mat4 *)&local_78,pMVar2);
      Mat4::multiply((Mat4 *)&local_78,(Mat4 *)(this + 0x124));
      *(undefined8 *)(this + 0xfc) = uStack_60;
      *(undefined8 *)(this + 0xf4) = local_68;
      *(undefined8 *)(this + 0xec) = uStack_70;
      *(undefined8 *)(this + 0xe4) = local_78;
      *(undefined8 *)(this + 0x10c) = uStack_50;
      *(undefined8 *)(this + 0x104) = local_58;
      *(undefined8 *)(this + 0x11c) = uStack_40;
      *(undefined8 *)(this + 0x114) = local_48;
      Mat4::~Mat4((Mat4 *)&local_78);
    }
    this[0xe0] = (Bone3D)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this + 0xe4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

