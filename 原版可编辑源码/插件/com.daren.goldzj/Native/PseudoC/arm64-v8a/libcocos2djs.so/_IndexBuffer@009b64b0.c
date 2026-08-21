
/* cocos2d::renderer::IndexBuffer::~IndexBuffer() */

void __thiscall cocos2d::renderer::IndexBuffer::~IndexBuffer(IndexBuffer *this)

{
  code *pcVar1;
  IndexBuffer *pIVar2;
  
  *(undefined ***)this = &PTR__IndexBuffer_01c6ae30;
  pIVar2 = this + 0xc;
  if (*(int *)pIVar2 != 0) {
    ccDeleteBuffers(1,(uint *)pIVar2);
    *(undefined4 *)pIVar2 = 0;
  }
  pIVar2 = *(IndexBuffer **)(this + 0x50);
  if (this + 0x30 == pIVar2) {
    pcVar1 = *(code **)(*(long *)pIVar2 + 0x20);
  }
  else {
    if (pIVar2 == (IndexBuffer *)0x0) goto LAB_009b6518;
    pcVar1 = *(code **)(*(long *)pIVar2 + 0x28);
  }
                    /* catch() { ... } // from try @ 009b6340 with catch @ 009b6514 */
  (*pcVar1)();
LAB_009b6518:
                    /* catch() { ... } // from try @ 009b6334 with catch @ 009b6518 */
                    /* catch() { ... } // from try @ 009b6314 with catch @ 009b651c */
  GraphicsHandle::~GraphicsHandle((GraphicsHandle *)this);
  return;
}

