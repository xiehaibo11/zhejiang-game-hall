
/* cocos2d::renderer::FrameBuffer::setColorBuffers(std::__ndk1::vector<cocos2d::renderer::RenderTarget*,
   std::__ndk1::allocator<cocos2d::renderer::RenderTarget*> > const&) */

void __thiscall cocos2d::renderer::FrameBuffer::setColorBuffers(FrameBuffer *this,vector *param_1)

{
  vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
  *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
                    /* try { // try from 009b6024 to 00ab602f has its CatchHandler @ 009b624c */
                    /* try { // try from 009b6030 to 00ab6243 has its CatchHandler @ 009b6264 */
  for (puVar1 = *(undefined8 **)param_1; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if ((Ref *)*puVar1 != (Ref *)0x0) {
      Ref::retain((Ref *)*puVar1);
    }
  }
  this_00 = (vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
             *)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x20);
  for (puVar1 = *(undefined8 **)this_00; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if ((Ref *)*puVar1 != (Ref *)0x0) {
      Ref::release((Ref *)*puVar1);
    }
  }
  if (this_00 ==
      (vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
       *)param_1) {
    return;
  }
  std::__ndk1::
  vector<cocos2d::renderer::RenderTarget*,std::__ndk1::allocator<cocos2d::renderer::RenderTarget*>>
  ::assign<cocos2d::renderer::RenderTarget**>
            (this_00,*(RenderTarget ***)param_1,*(RenderTarget ***)(param_1 + 8));
  return;
}

