
/* cocos2d::renderer::Camera::setWorldMatrix(cocos2d::Mat4 const&) */

void __thiscall cocos2d::renderer::Camera::setWorldMatrix(Camera *this,Mat4 *param_1)

{
  Mat4 *this_00;
  long lVar1;
  Quaternion aQStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Quaternion::Quaternion(aQStack_48);
  Mat4::decompose(param_1,(Vec3 *)0x0,aQStack_48,(Vec3 *)(this + 0xc0));
  this_00 = (Mat4 *)(this + 0x80);
  Mat4::createTranslation((Vec3 *)(this + 0xc0),this_00);
  Mat4::rotate(this_00,aQStack_48);
  Mat4::inverse(this_00);
  Quaternion::~Quaternion(aQStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

