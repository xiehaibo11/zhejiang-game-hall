
/* cocos2d::renderer::FrameBuffer::destroy() */

void __thiscall cocos2d::renderer::FrameBuffer::destroy(FrameBuffer *this)

{
  undefined8 *puVar1;
  FrameBuffer *pFVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar3 != puVar1) {
    do {
      if ((Ref *)*puVar3 != (Ref *)0x0) {
        Ref::release((Ref *)*puVar3);
      }
      puVar3 = puVar3 + 1;
    } while (puVar1 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x18);
  }
  *(undefined8 **)(this + 0x20) = puVar3;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  *(undefined8 *)(this + 0x30) = 0;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
  *(undefined8 *)(this + 0x38) = 0;
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x40));
  }
  pFVar2 = this + 0xc;
  *(undefined8 *)(this + 0x40) = 0;
  if (*(int *)pFVar2 != 0) {
                    /* try { // try from 009b5ec0 to 00ab5fa3 has its CatchHandler @ 009b5ce0 */
    glDeleteFramebuffers(1,pFVar2);
    *(int *)pFVar2 = 0;
  }
  return;
}

