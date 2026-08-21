
/* cocos2d::renderer::IndexBuffer::IndexBuffer() */

void __thiscall cocos2d::renderer::IndexBuffer::IndexBuffer(IndexBuffer *this)

{
  GraphicsHandle::GraphicsHandle((GraphicsHandle *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x18) = 0x88e41403;
  this[0x28] = (IndexBuffer)0x1;
                    /* try { // try from 009b649c to 00ab6583 has its CatchHandler @ 009b62bc */
  *(undefined ***)this = &PTR__IndexBuffer_01c6ae30;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}

