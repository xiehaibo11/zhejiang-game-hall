
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> > const&),
   cocos2d::renderer::ForwardRenderer*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> > const&),
   cocos2d::renderer::ForwardRenderer*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&> >, void (cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>
   >&)>::__clone(std::__ndk1::__function::__base<void (cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&)>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>const&),cocos2d::renderer::ForwardRenderer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>const&),cocos2d::renderer::ForwardRenderer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>const&),cocos2d::renderer::ForwardRenderer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>const&),cocos2d::renderer::ForwardRenderer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 009cbfc8 to 00acbfd3 has its CatchHandler @ 009cc19c */
  *(undefined ***)param_1 = &PTR_FUN_01c6b458;
                    /* try { // try from 009cbfd4 to 00acc127 has its CatchHandler @ 009cc1b4 */
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}

