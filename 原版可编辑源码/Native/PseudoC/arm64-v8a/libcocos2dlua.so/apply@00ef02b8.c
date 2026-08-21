
/* cocos2d::Camera::apply() */

void __thiscall cocos2d::Camera::apply(Camera *this)

{
  this[0x429] = this[0x161];
  if (*(FrameBuffer **)(this + 0x4b0) != (FrameBuffer *)0x0) {
    experimental::FrameBuffer::applyFBO(*(FrameBuffer **)(this + 0x4b0));
  }
  applyViewport(this);
  return;
}

