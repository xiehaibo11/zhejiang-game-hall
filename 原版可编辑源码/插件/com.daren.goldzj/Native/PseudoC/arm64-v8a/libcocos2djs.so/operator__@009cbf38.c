
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&),
   cocos2d::renderer::ForwardRenderer*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&),
   cocos2d::renderer::ForwardRenderer*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&> >, void (cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>
   >&)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&) */

void std::__ndk1::__function::
     __func<std::__ndk1::__bind<void(cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&),cocos2d::renderer::ForwardRenderer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::renderer::ForwardRenderer::*)(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&),cocos2d::renderer::ForwardRenderer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>
     ::operator()(View *param_1,vector *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
                    /* try { // try from 009cbf48 to 00acbf9b has its CatchHandler @ 009cbf48
                       catch() { ... } // from try @ 009cbf48 with catch @ 009cbf48
                       catch() { ... } // from try @ 009cc128 with catch @ 009cbf48 */
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(param_1 + 0x18) + ((long)*(ulong *)(param_1 + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x009cbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

