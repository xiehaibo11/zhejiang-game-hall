
/* cocos2d::Camera::restore() */

void __thiscall cocos2d::Camera::restore(Camera *this)

{
  if (*(FrameBuffer **)(this + 0x4b0) != (FrameBuffer *)0x0) {
    experimental::FrameBuffer::restoreFBO(*(FrameBuffer **)(this + 0x4b0));
  }
  glViewport(*(undefined4 *)(this + 0x4b8),*(undefined4 *)(this + 0x4bc),
             *(undefined4 *)(this + 0x4c0),*(undefined4 *)(this + 0x4c4));
  return;
}

