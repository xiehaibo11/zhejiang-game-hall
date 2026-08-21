
/* cocos2d::Camera::applyFrameBufferObject() */

void __thiscall cocos2d::Camera::applyFrameBufferObject(Camera *this)

{
  if (*(FrameBuffer **)(this + 0x4b0) != (FrameBuffer *)0x0) {
    experimental::FrameBuffer::applyFBO(*(FrameBuffer **)(this + 0x4b0));
    return;
  }
  return;
}

