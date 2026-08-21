
/* cocos2d::PUBeamRender::unPrepare() */

void __thiscall cocos2d::PUBeamRender::unPrepare(PUBeamRender *this)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(PUParticleSystem3D **)(this + 0x28) != (PUParticleSystem3D *)0x0) &&
     (*(long *)(this + 0xa0) != 0)) {
    PUParticleSystem3D::removeListener
              (*(PUParticleSystem3D **)(this + 0x28),(PUListener *)(this + 0x68));
    if (*(long **)(this + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xa0) + 8))();
    }
    plVar2 = *(long **)(this + 0xa8);
    plVar1 = *(long **)(this + 0xb0);
    *(undefined8 *)(this + 0xa0) = 0;
    if (plVar2 != plVar1) {
      do {
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
        plVar2 = plVar2 + 1;
      } while (plVar1 != plVar2);
      plVar2 = *(long **)(this + 0xa8);
    }
    *(long **)(this + 0xb0) = plVar2;
    *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xc0);
  }
  return;
}

