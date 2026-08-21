
/* cocos2d::renderer::ForwardRenderer::shadowStage(cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&) */

void __thiscall
cocos2d::renderer::ForwardRenderer::shadowStage(ForwardRenderer *this,View *param_1,vector *param_2)

{
  StageItem *pSVar1;
  long lVar2;
  Value *this_00;
  ulong uVar3;
  StageItem *pSVar4;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
                    /* try { // try from 009ca28c to 00aca36f has its CatchHandler @ 009ca0b8 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  submitShadowStageUniforms(this,param_1);
  pSVar4 = *(StageItem **)param_2;
  pSVar1 = *(StageItem **)(param_2 + 8);
  if (pSVar4 != pSVar1) {
    do {
      local_70[1] = 0;
      local_70[0] = 0x22;
      builtin_strncpy((char *)((ulong)local_70 | 1),"CC_CASTING_SHADOW",0x11);
      local_60 = (void *)0x0;
                    /* catch() { ... } // from try @ 009ca138 with catch @ 009ca300 */
                    /* catch() { ... } // from try @ 009ca12c with catch @ 009ca304 */
                    /* catch() { ... } // from try @ 009ca10c with catch @ 009ca308 */
      this_00 = (Value *)EffectBase::getDefine
                                   (*(EffectBase **)(pSVar4 + 0x10),(basic_string *)local_70,-1);
      if ((local_70[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009ca144 with catch @ 009ca318 */
        operator_delete(local_60);
      }
      if ((this_00 != (Value *)0x0) && (uVar3 = cocos2d::Value::asBool(this_00), (uVar3 & 1) != 0))
      {
        BaseRenderer::draw((BaseRenderer *)this,pSVar4);
      }
      pSVar4 = pSVar4 + 0x38;
    } while (pSVar1 != pSVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 009ca370 to 00aca3c7 has its CatchHandler @ 009ca370
                       catch() { ... } // from try @ 009ca370 with catch @ 009ca370
                       catch() { ... } // from try @ 009ca550 with catch @ 009ca370 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

