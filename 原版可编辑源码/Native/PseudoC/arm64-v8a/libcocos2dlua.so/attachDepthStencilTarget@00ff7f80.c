
/* cocos2d::experimental::FrameBuffer::attachDepthStencilTarget(cocos2d::experimental::RenderTargetDepthStencil*)
    */

void __thiscall
cocos2d::experimental::FrameBuffer::attachDepthStencilTarget
          (FrameBuffer *this,RenderTargetDepthStencil *param_1)

{
                    /* catch() { ... } // from try @ 00ff7f48 with catch @ 00ff7f80 */
  if (this[0x60] == (FrameBuffer)0x0) {
                    /* try { // try from 00ff7f9c to 010f81d3 has its CatchHandler @ 00ff7f9c
                       catch() { ... } // from try @ 00ff7f9c with catch @ 00ff7f9c
                       catch() { ... } // from try @ 00ff81f4 with catch @ 00ff7f9c */
    if (param_1 != (RenderTargetDepthStencil *)0x0) {
      if (*(int *)(param_1 + 0x28) != *(int *)(this + 0x48)) {
        return;
      }
      if (*(int *)(param_1 + 0x2c) != *(int *)(this + 0x4c)) {
        return;
      }
      Ref::retain((Ref *)param_1);
    }
    if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x58));
    }
    *(RenderTargetDepthStencil **)(this + 0x58) = param_1;
    this[0x2c] = (FrameBuffer)0x1;
  }
  return;
}

