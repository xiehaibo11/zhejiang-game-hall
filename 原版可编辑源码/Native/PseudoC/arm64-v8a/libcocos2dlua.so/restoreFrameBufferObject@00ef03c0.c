
/* cocos2d::Camera::restoreFrameBufferObject() */

void __thiscall cocos2d::Camera::restoreFrameBufferObject(Camera *this)

{
  if (*(FrameBuffer **)(this + 0x4b0) != (FrameBuffer *)0x0) {
    experimental::FrameBuffer::restoreFBO(*(FrameBuffer **)(this + 0x4b0));
    return;
  }
  return;
}

