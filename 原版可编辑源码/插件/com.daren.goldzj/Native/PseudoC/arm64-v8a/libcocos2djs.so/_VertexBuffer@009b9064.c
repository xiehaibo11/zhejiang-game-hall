
/* cocos2d::renderer::VertexBuffer::~VertexBuffer() */

void __thiscall cocos2d::renderer::VertexBuffer::~VertexBuffer(VertexBuffer *this)

{
  code *pcVar1;
  VertexBuffer *pVVar2;
  
  *(undefined ***)this = &PTR__VertexBuffer_01c6af10;
  pVVar2 = this + 0xc;
  if (*(int *)pVVar2 != 0) {
    if (*(Ref **)(this + 0x18) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x18));
      *(undefined8 *)(this + 0x18) = 0;
    }
                    /* catch() { ... } // from try @ 009b8e2c with catch @ 009b90a8 */
    ccDeleteBuffers(1,(uint *)pVVar2);
                    /* catch() { ... } // from try @ 009b8e20 with catch @ 009b90ac */
    *(undefined4 *)pVVar2 = 0;
  }
                    /* catch() { ... } // from try @ 009b8e00 with catch @ 009b90b0 */
  pVVar2 = *(VertexBuffer **)(this + 0x50);
  if (this + 0x30 == pVVar2) {
    pcVar1 = *(code **)(*(long *)pVVar2 + 0x20);
  }
  else {
                    /* catch() { ... } // from try @ 009b8e3c with catch @ 009b90c0 */
    if (pVVar2 == (VertexBuffer *)0x0) goto LAB_009b90dc;
    pcVar1 = *(code **)(*(long *)pVVar2 + 0x28);
  }
  (*pcVar1)();
LAB_009b90dc:
  GraphicsHandle::~GraphicsHandle((GraphicsHandle *)this);
  return;
}

