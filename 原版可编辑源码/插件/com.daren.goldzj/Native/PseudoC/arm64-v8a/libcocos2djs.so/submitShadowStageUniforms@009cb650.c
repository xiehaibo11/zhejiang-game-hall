
/* cocos2d::renderer::ForwardRenderer::submitShadowStageUniforms(cocos2d::renderer::View const&) */

void __thiscall
cocos2d::renderer::ForwardRenderer::submitShadowStageUniforms(ForwardRenderer *this,View *param_1)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
                    /* try { // try from 009cb674 to 00acb6ab has its CatchHandler @ 009cb6dc */
  if (((DAT_01d381f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d381f0), iVar2 != 0)) {
    DAT_01d381e8 = operator_new__(0x10);
    __cxa_guard_release(&DAT_01d381f0);
  }
  fVar4 = (float)Light::getShadowMinDepth(*(Light **)(param_1 + 0x1a8));
  *DAT_01d381e8 = fVar4;
  fVar4 = (float)Light::getShadowMaxDepth(*(Light **)(param_1 + 0x1a8));
  pfVar1 = DAT_01d381e8;
  DAT_01d381e8[1] = fVar4;
  lVar3 = *(long *)(param_1 + 0x1a8);
  pfVar1[2] = *(float *)(lVar3 + 0x94);
                    /* try { // try from 009cb6ac to 00acb6ef has its CatchHandler @ 009cb630 */
  pfVar1[3] = *(float *)(lVar3 + 0x88);
  DeviceGraphics::setUniformMat4
            (*(ulong *)(this + 0x10),BaseRenderer::cc_shadow_map_lightViewProjMatrix);
                    /* catch() { ... } // from try @ 009cb674 with catch @ 009cb6dc */
  DeviceGraphics::setUniformfv
            (*(DeviceGraphics **)(this + 0x10),BaseRenderer::cc_shadow_map_info,4,DAT_01d381e8,1);
                    /* try { // try from 009cb6f0 to 00acb74f has its CatchHandler @ 009cb6f0
                       catch() { ... } // from try @ 009cb6f0 with catch @ 009cb6f0
                       catch() { ... } // from try @ 009cba8c with catch @ 009cb6f0 */
  DeviceGraphics::setUniformf
            (*(DeviceGraphics **)(this + 0x10),BaseRenderer::cc_shadow_map_bias,
             *(float *)(*(long *)(param_1 + 0x1a8) + 0x84));
  return;
}

