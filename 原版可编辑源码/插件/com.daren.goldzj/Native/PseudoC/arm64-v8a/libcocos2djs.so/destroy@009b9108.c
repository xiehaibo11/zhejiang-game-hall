
/* cocos2d::renderer::VertexBuffer::destroy() */

void __thiscall cocos2d::renderer::VertexBuffer::destroy(VertexBuffer *this)

{
  VertexBuffer *pVVar1;
  
                    /* try { // try from 009b9118 to 00ab9177 has its CatchHandler @ 009b9118
                       catch() { ... } // from try @ 009b9118 with catch @ 009b9118
                       catch() { ... } // from try @ 009b93b8 with catch @ 009b9118 */
  pVVar1 = this + 0xc;
  if (*(int *)pVVar1 != 0) {
    if (*(Ref **)(this + 0x18) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x18));
      *(undefined8 *)(this + 0x18) = 0;
    }
    ccDeleteBuffers(1,(uint *)pVVar1);
    *(undefined4 *)pVVar1 = 0;
  }
  return;
}

