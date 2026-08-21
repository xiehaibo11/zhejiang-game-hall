
/* cocos2d::PURibbonTrailRender::render(cocos2d::Renderer*, cocos2d::Mat4 const&,
   cocos2d::ParticleSystem3D*) */

void __thiscall
cocos2d::PURibbonTrailRender::render
          (PURibbonTrailRender *this,Renderer *param_1,Mat4 *param_2,ParticleSystem3D *param_3)

{
  bool bVar1;
  long *plVar2;
  
  if ((this[0x38] != (PURibbonTrailRender)0x0) && (*(long *)(this + 0xa8) != 0)) {
    bVar1 = *(long *)(param_3 + 0x348) != 0;
    if (bVar1) {
      updateParticles(this,(DataPool *)(param_3 + 0x330));
    }
    if ((*(long *)(param_3 + 0x3c8) != 0) &&
       (plVar2 = *(long **)(param_3 + 0x3c0), plVar2 != (long *)0x0)) {
      do {
        updateParticles(this,(DataPool *)(plVar2 + 5));
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
      bVar1 = true;
    }
    if ((*(long *)(param_3 + 0x3f0) == 0) ||
       (plVar2 = *(long **)(param_3 + 1000), plVar2 == (long *)0x0)) {
      if (!bVar1) {
        return;
      }
    }
    else {
      do {
        updateParticles(this,(DataPool *)(plVar2 + 5));
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
    PUBillboardChain::render(*(PUBillboardChain **)(this + 0xa8),param_1,param_2,param_3);
    return;
  }
  return;
}

