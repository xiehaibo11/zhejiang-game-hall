
/* cocos2d::CameraBackgroundColorBrush::create(cocos2d::Color4F const&, float) */

CameraBackgroundDepthBrush *
cocos2d::CameraBackgroundColorBrush::create(Color4F *param_1,float param_2)

{
  long lVar1;
  CameraBackgroundDepthBrush *this;
  ulong uVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this != (CameraBackgroundDepthBrush *)0x0) {
    CameraBackgroundDepthBrush::CameraBackgroundDepthBrush(this);
    *(undefined ***)this = &PTR__CameraBackgroundDepthBrush_016fb0e8;
    Color4F::Color4F((Color4F *)(this + 0xac),0.0,0.0,0.0,0.0);
    uVar2 = (**(code **)(*(long *)this + 0x28))(this);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (CameraBackgroundDepthBrush *)0x0;
    }
    else {
      Color4B::Color4B((Color4B *)&local_3c,param_1);
      *(undefined4 *)(this + 0x7c) = local_3c;
      *(undefined4 *)(this + 0x4c) = local_3c;
      *(undefined4 *)(this + 0x94) = local_3c;
      *(undefined4 *)(this + 100) = local_3c;
      if (*(int *)(this + 0xa4) != 0) {
        glBindBuffer(0x8892);
        glBufferData(0x8892,0x60,this + 0x40,0x88e4);
        glBindBuffer(0x8892,0);
      }
      *(float *)(this + 0x38) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

