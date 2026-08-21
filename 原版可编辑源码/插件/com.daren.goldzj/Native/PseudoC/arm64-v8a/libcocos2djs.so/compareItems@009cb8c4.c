
/* cocos2d::renderer::ForwardRenderer::compareItems(cocos2d::renderer::BaseRenderer::StageItem
   const&, cocos2d::renderer::BaseRenderer::StageItem const&) */

bool cocos2d::renderer::ForwardRenderer::compareItems(StageItem *param_1,StageItem *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 3;
  uVar2 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3;
  if (uVar1 == uVar2) {
    return *(int *)(param_2 + 0x30) < *(int *)(param_1 + 0x30);
  }
  return uVar2 < uVar1;
}

