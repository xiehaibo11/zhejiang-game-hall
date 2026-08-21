
/* cocos2d::PURibbonTrailRender::notifyRescaled(cocos2d::Vec3 const&) */

void __thiscall
cocos2d::PURibbonTrailRender::notifyRescaled(PURibbonTrailRender *this,Vec3 *param_1)

{
  long lVar1;
  long lVar2;
  
  Particle3DRender::notifyRescaled((Particle3DRender *)this,param_1);
  if (*(long **)(this + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa8) + 0xf8))
              (*(float *)(param_1 + 4) * *(float *)(this + 0xd8));
    lVar1 = (**(code **)(**(long **)(this + 0xa8) + 0x28))();
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        (**(code **)(**(long **)(this + 0xa8) + 0x128))
                  (*(float *)param_1 * *(float *)(this + 0xdc),*(long **)(this + 0xa8),lVar2);
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
  }
  return;
}

