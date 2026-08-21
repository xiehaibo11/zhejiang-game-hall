
/* cocos2d::renderer::VertexBuffer::VertexBuffer() */

void __thiscall cocos2d::renderer::VertexBuffer::VertexBuffer(VertexBuffer *this)

{
  GraphicsHandle::GraphicsHandle((GraphicsHandle *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x20) = 0x88e4;
  this[0x2c] = (VertexBuffer)0x1;
  *(undefined ***)this = &PTR__VertexBuffer_01c6af10;
                    /* try { // try from 009b9054 to 00ab9117 has its CatchHandler @ 009b8da0 */
  *(undefined8 *)(this + 0x50) = 0;
  return;
}

