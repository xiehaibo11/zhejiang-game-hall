
/* cocos2d::Camera::setFrameBufferObject(cocos2d::experimental::FrameBuffer*) */

void __thiscall cocos2d::Camera::setFrameBufferObject(Camera *this,FrameBuffer *param_1)

{
  if (param_1 != (FrameBuffer *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x4b0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x4b0));
    *(undefined8 *)(this + 0x4b0) = 0;
  }
  *(FrameBuffer **)(this + 0x4b0) = param_1;
  if (*(long *)(this + 0x2f8) != 0) {
    *(undefined1 *)(*(long *)(this + 0x2f8) + 0x318) = 1;
  }
  return;
}

