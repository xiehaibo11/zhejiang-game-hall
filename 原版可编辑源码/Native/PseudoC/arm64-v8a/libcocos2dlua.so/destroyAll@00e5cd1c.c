
/* cocos2d::PURibbonTrailRender::destroyAll() */

void __thiscall cocos2d::PURibbonTrailRender::destroyAll(PURibbonTrailRender *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(PUParticleSystem3D **)(this + 0x28) == (PUParticleSystem3D *)0x0) {
    return;
  }
  if (*(long *)(this + 0xa8) == 0) {
    return;
  }
  if (*(long *)(this + 0x108) == 0) {
    return;
  }
  PUParticleSystem3D::removeListener
            (*(PUParticleSystem3D **)(this + 0x28),(PUListener *)(this + 0x68));
  plVar2 = *(long **)(this + 0xa8);
  if (*(long *)(this + 0x108) == 0) {
    if (plVar2 == (long *)0x0) goto LAB_00e5cd78;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00e5cd78;
    plVar2[0x39] = 0;
  }
  (**(code **)(*plVar2 + 8))();
LAB_00e5cd78:
  plVar2 = *(long **)(this + 0x70);
  plVar1 = *(long **)(this + 0x78);
  *(undefined8 *)(this + 0xa8) = 0;
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar1 != plVar2);
    plVar2 = *(long **)(this + 0x70);
  }
  *(long **)(this + 0x78) = plVar2;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x88);
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x298))();
    lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x260))();
    if (lVar3 != 0) {
      plVar2 = (long *)(**(code **)(**(long **)(this + 0x108) + 0x260))();
      (**(code **)(*plVar2 + 0x280))(plVar2,*(undefined8 *)(this + 0x108),1);
    }
    *(undefined8 *)(this + 0x108) = 0;
  }
  return;
}

