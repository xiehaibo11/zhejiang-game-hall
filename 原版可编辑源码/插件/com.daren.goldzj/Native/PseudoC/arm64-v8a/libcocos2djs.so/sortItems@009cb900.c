
/* cocos2d::renderer::ForwardRenderer::sortItems(std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&) */

void __thiscall cocos2d::renderer::ForwardRenderer::sortItems(ForwardRenderer *this,vector *param_1)

{
  long lVar1;
  code *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = compareItems;
  std::__ndk1::
  __sort<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
            (*(StageItem **)param_1,*(StageItem **)(param_1 + 8),
             (_func_bool_StageItem_ptr_StageItem_ptr *)&local_30);
                    /* try { // try from 009cb93c to 00acb943 has its CatchHandler @ 009cbb1c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

