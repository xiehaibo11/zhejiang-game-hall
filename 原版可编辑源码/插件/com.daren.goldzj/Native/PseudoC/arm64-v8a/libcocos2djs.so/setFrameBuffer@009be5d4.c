
/* cocos2d::renderer::Camera::setFrameBuffer(cocos2d::renderer::FrameBuffer*) */

void __thiscall cocos2d::renderer::Camera::setFrameBuffer(Camera *this,FrameBuffer *param_1)

{
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  *(FrameBuffer **)(this + 0x58) = param_1;
  if (param_1 != (FrameBuffer *)0x0) {
    Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

