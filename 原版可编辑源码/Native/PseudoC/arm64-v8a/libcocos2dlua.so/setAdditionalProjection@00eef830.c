
/* cocos2d::Camera::setAdditionalProjection(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Camera::setAdditionalProjection(Camera *this,Mat4 *param_1)

{
  Mat4 *pMVar1;
  long lVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pMVar1 = (Mat4 *)(this + 0x300);
  Mat4::Mat4((Mat4 *)&local_78,param_1);
  Mat4::multiply((Mat4 *)&local_78,pMVar1);
  *(undefined8 *)(this + 0x328) = uStack_50;
  *(undefined8 *)(this + 800) = local_58;
  *(undefined8 *)(this + 0x338) = uStack_40;
  *(undefined8 *)(this + 0x330) = local_48;
  *(undefined8 *)(this + 0x308) = uStack_70;
  *(undefined8 *)pMVar1 = local_78;
  *(undefined8 *)(this + 0x318) = uStack_60;
  *(undefined8 *)(this + 0x310) = local_68;
  Mat4::~Mat4((Mat4 *)&local_78);
  getViewMatrix(this);
  if (this[0x428] != (Camera)0x0) {
                    /* catch() { ... } // from try @ 00eef804 with catch @ 00eef8a8 */
    this[0x428] = (Camera)0x0;
    Mat4::multiply(pMVar1,(Mat4 *)(this + 0x340),(Mat4 *)(this + 0x3c0));
  }
                    /* catch() { ... } // from try @ 00eef784 with catch @ 00eef8b8 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00eef720 with catch @ 00eef8d4 */
  __stack_chk_fail();
}

