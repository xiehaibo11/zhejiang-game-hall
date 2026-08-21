
/* cocos2d::renderer::FrameBuffer::~FrameBuffer() */

void __thiscall cocos2d::renderer::FrameBuffer::~FrameBuffer(FrameBuffer *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__FrameBuffer_01c6adc0;
  destroy(this);
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  GraphicsHandle::~GraphicsHandle((GraphicsHandle *)this);
  return;
}

