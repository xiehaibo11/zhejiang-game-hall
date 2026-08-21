
/* cocos2d::renderer::FrameBuffer::setColorBuffer(cocos2d::renderer::RenderTarget*, int) */

void __thiscall
cocos2d::renderer::FrameBuffer::setColorBuffer(FrameBuffer *this,RenderTarget *param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
  *this_00;
  ulong uVar4;
  
  this_00 = (vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
             *)(this + 0x18);
  uVar4 = (ulong)param_2;
                    /* try { // try from 009b5fa4 to 00ab5ff7 has its CatchHandler @ 009b5fa4
                       catch() { ... } // from try @ 009b5fa4 with catch @ 009b5fa4
                       catch() { ... } // from try @ 009b6244 with catch @ 009b5fa4 */
  uVar3 = *(long *)(this + 0x20) - *(long *)this_00 >> 3;
  if (uVar3 <= uVar4) {
    uVar1 = uVar4 + 1;
    if (uVar3 < uVar1) {
      std::__ndk1::
      vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
      ::__append(this_00,uVar1 - uVar3);
    }
    else if (uVar3 != uVar1) {
      *(ulong *)(this + 0x20) = *(long *)this_00 + uVar1 * 8;
    }
  }
  if (param_1 != (RenderTarget *)0x0) {
    Ref::retain((Ref *)param_1);
  }
                    /* try { // try from 009b5ff8 to 00ab600f has its CatchHandler @ 009b6254 */
  puVar2 = (undefined8 *)(*(long *)this_00 + uVar4 * 8);
  if ((Ref *)*puVar2 != (Ref *)0x0) {
    Ref::release((Ref *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)this_00 + uVar4 * 8);
  }
  *puVar2 = param_1;
                    /* try { // try from 009b6018 to 00ab6023 has its CatchHandler @ 009b6250 */
  return;
}

