
/* cocos2d::renderer::ForwardRenderer::drawItems(std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> > const&) */

void __thiscall cocos2d::renderer::ForwardRenderer::drawItems(ForwardRenderer *this,vector *param_1)

{
  StageItem *pSVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  DeviceGraphics *this_00;
  StageItem *pSVar5;
  long lVar6;
  ulong uVar7;
  Texture *pTVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 0xd0) - *(long *)(this + 200);
  if ((lVar4 == 0) && (*(long *)(this + 0xf8) == 0)) {
    lVar4 = *(long *)param_1;
    lVar2 = *(long *)(param_1 + 8) - lVar4;
    if (lVar2 != 0) {
      if (*(long *)(param_1 + 8) != lVar4) {
        lVar6 = 0;
        uVar9 = 0;
        do {
                    /* try { // try from 009cba70 to 00acba8b has its CatchHandler @ 009cbb6c */
          BaseRenderer::draw((BaseRenderer *)this,(StageItem *)(lVar4 + lVar6));
          uVar9 = uVar9 + 1;
          if ((ulong)((lVar2 >> 3) * 0x6db6db6db6db6db7) <= uVar9) {
            return;
          }
          lVar4 = *(long *)param_1;
          lVar6 = lVar6 + 0x38;
                    /* try { // try from 009cba8c to 00acbbc3 has its CatchHandler @ 009cb6f0 */
          uVar7 = (*(long *)(param_1 + 8) - lVar4 >> 3) * 0x6db6db6db6db6db7;
        } while (uVar9 <= uVar7 && uVar7 - uVar9 != 0);
      }
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
    }
  }
  else {
    pSVar5 = *(StageItem **)param_1;
    pSVar1 = *(StageItem **)(param_1 + 8);
    if (pSVar5 != pSVar1) {
      do {
        if (lVar4 != 0) {
          uVar9 = 0;
          do {
                    /* try { // try from 009cb9b4 to 00acb9bf has its CatchHandler @ 009cbb0c */
            this_00 = *(DeviceGraphics **)(this + 0x10);
            uVar7 = (&BaseRenderer::cc_shadow_map)[uVar9];
            pTVar8 = *(Texture **)(*(long *)(*(long *)(this + 200) + uVar9 * 8) + 0x68);
            iVar3 = BaseRenderer::allocTextureUnit((BaseRenderer *)this);
            DeviceGraphics::setTexture(this_00,uVar7,pTVar8,iVar3);
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulong)(lVar4 >> 3));
        }
        BaseRenderer::draw((BaseRenderer *)this,pSVar5);
        pSVar5 = pSVar5 + 0x38;
      } while (pSVar5 != pSVar1);
    }
  }
  return;
}

