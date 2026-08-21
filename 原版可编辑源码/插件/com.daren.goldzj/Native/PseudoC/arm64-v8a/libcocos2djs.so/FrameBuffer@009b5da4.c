
/* cocos2d::renderer::FrameBuffer::FrameBuffer() */

void __thiscall cocos2d::renderer::FrameBuffer::FrameBuffer(FrameBuffer *this)

{
  GraphicsHandle::GraphicsHandle((GraphicsHandle *)this);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__FrameBuffer_01c6adc0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

