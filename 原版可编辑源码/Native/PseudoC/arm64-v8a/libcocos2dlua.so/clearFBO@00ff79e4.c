
/* cocos2d::experimental::FrameBuffer::clearFBO() */

void __thiscall cocos2d::experimental::FrameBuffer::clearFBO(FrameBuffer *this)

{
  applyFBO(this);
  glClearColor(*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34),
               *(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
  glClearDepthf(*(undefined4 *)(this + 0x40));
  glClearStencil((long)(char)this[0x44]);
  glClear(0x4500);
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x28));
  return;
}

