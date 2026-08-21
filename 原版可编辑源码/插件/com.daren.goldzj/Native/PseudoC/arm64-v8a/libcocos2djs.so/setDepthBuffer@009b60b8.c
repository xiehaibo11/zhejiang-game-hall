
/* cocos2d::renderer::FrameBuffer::setDepthBuffer(cocos2d::renderer::RenderTarget*) */

void __thiscall
cocos2d::renderer::FrameBuffer::setDepthBuffer(FrameBuffer *this,RenderTarget *param_1)

{
  if (param_1 != (RenderTarget *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  *(RenderTarget **)(this + 0x30) = param_1;
  return;
}

