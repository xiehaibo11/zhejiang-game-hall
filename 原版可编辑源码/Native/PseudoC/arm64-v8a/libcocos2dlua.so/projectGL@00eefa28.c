
/* cocos2d::Camera::projectGL(cocos2d::Vec3 const&) const */

void __thiscall cocos2d::Camera::projectGL(Camera *this,Vec3 *param_1)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  Vec4 aVStack_70 [16];
  Vec4 local_60 [16];
  Size local_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size(local_50,pSVar2);
  Vec4::Vec4(local_60);
  getViewMatrix(this);
  if (this[0x428] != (Camera)0x0) {
    this[0x428] = (Camera)0x0;
    Mat4::multiply((Mat4 *)(this + 0x300),(Mat4 *)(this + 0x340),(Mat4 *)(this + 0x3c0));
  }
  Vec4::Vec4(aVStack_70,*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),1.0);
  Mat4::transformVector((Mat4 *)(this + 0x3c0),aVStack_70,local_60);
  Vec4::~Vec4(aVStack_70);
  Vec4::~Vec4(local_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    NEON_fmov(0x3f800000,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

