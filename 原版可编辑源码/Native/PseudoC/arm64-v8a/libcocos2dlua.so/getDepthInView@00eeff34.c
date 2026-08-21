
/* cocos2d::Camera::getDepthInView(cocos2d::Mat4 const&) const */

float __thiscall cocos2d::Camera::getDepthInView(Camera *this,Mat4 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Mat4 aMStack_e8 [8];
  float local_e0;
  float local_d0;
  float local_c0;
  float local_b0;
  Mat4 aMStack_a8 [64];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x430))(aMStack_a8);
  Mat4::getInversed();
  fVar3 = *(float *)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x34);
  fVar4 = *(float *)(param_1 + 0x38);
  Mat4::~Mat4(aMStack_e8);
  Mat4::~Mat4(aMStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return -(local_b0 + local_e0 * fVar3 + local_d0 * fVar2 + local_c0 * fVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

