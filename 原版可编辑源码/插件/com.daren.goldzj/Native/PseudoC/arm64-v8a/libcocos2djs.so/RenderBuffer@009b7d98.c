
/* cocos2d::renderer::RenderBuffer::RenderBuffer() */

void __thiscall cocos2d::renderer::RenderBuffer::RenderBuffer(RenderBuffer *this)

{
  GraphicsHandle::GraphicsHandle((GraphicsHandle *)this);
                    /* try { // try from 009b7db8 to 00ab7dcf has its CatchHandler @ 009b7fc0 */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0x8056;
  *(undefined ***)this = &PTR__RenderBuffer_01c6aea0;
  return;
}

