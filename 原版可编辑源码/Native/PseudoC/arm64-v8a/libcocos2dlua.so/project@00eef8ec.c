
/* cocos2d::Camera::project(cocos2d::Vec3 const&) const */

float __thiscall cocos2d::Camera::project(Camera *this,Vec3 *param_1)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  Vec4 aVStack_90 [16];
  float local_80 [3];
  float local_74;
  float afStack_70 [2];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)afStack_70,pSVar2);
  Vec4::Vec4((Vec4 *)local_80);
  getViewMatrix(this);
  if (this[0x428] != (Camera)0x0) {
    this[0x428] = (Camera)0x0;
    Mat4::multiply((Mat4 *)(this + 0x300),(Mat4 *)(this + 0x340),(Mat4 *)(this + 0x3c0));
  }
  Vec4::Vec4(aVStack_90,*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),1.0);
  Mat4::transformVector((Mat4 *)(this + 0x3c0),aVStack_90,(Vec4 *)local_80);
  Vec4::~Vec4(aVStack_90);
  Vec4::~Vec4((Vec4 *)local_80);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return afStack_70[0] * (local_80[0] / local_74 + 1.0) * 0.5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

