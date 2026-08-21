
/* cocos2d::experimental::FrameBuffer::getOrCreateDefaultFBO(cocos2d::GLView*) */

FrameBuffer * cocos2d::experimental::FrameBuffer::getOrCreateDefaultFBO(GLView *param_1)

{
  long lVar1;
  FrameBuffer *this;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = _defaultFBO;
  if ((_defaultFBO == (FrameBuffer *)0x0) &&
     (this = operator_new(0x70,(nothrow_t *)&std::nothrow), this != (FrameBuffer *)0x0)) {
    FrameBuffer(this);
    if (param_1 == (GLView *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (FrameBuffer *)0x0;
    }
    else {
      glGetIntegerv(0x8ca6,&local_3c);
      *(undefined4 *)(this + 0x24) = local_3c;
      Ref::autorelease((Ref *)this);
      this[0x60] = (FrameBuffer)0x1;
    }
  }
  _defaultFBO = this;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _defaultFBO;
}

