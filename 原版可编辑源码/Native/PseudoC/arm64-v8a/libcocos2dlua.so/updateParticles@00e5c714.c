
/* cocos2d::PURibbonTrailRender::updateParticles(cocos2d::DataPool<cocos2d::Particle3D> const&) */

void __thiscall
cocos2d::PURibbonTrailRender::updateParticles(PURibbonTrailRender *this,DataPool *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  DataPool *pDVar3;
  long lVar4;
  
  PUParticleSystem3D::getDerivedPosition(*(PUParticleSystem3D **)(this + 0x28));
  for (pDVar3 = *(DataPool **)(param_1 + 0x10); param_1 + 8 != pDVar3;
      pDVar3 = *(DataPool **)(pDVar3 + 8)) {
    lVar4 = *(long *)(pDVar3 + 0x10);
    plVar2 = *(long **)(lVar4 + 0x88);
    if ((plVar2 == (long *)0x0) && (*(long *)(this + 0x88) != *(long *)(this + 0x90))) {
      puVar1 = (undefined8 *)(*(long *)(this + 0x90) + -8);
      plVar2 = (long *)*puVar1;
      *(long **)(lVar4 + 0x88) = plVar2;
      *(undefined8 **)(this + 0x90) = puVar1;
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*(long *)plVar2[5] + 0xf8))((long *)plVar2[5],lVar4 + 8);
      if ((*(int *)(lVar4 + 0x90) == 0) && (*(char *)(lVar4 + 0x120) != '\0')) {
        (**(code **)(**(long **)(this + 0xa8) + 0x128))
                  (*(undefined4 *)(lVar4 + 0x44),*(long **)(this + 0xa8),plVar2[8]);
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,1);
    }
  }
  return;
}

