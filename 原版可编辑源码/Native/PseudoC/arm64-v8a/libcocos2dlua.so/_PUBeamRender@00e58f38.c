
/* cocos2d::PUBeamRender::~PUBeamRender() */

void __thiscall cocos2d::PUBeamRender::~PUBeamRender(PUBeamRender *this)

{
  long *plVar1;
  void *pvVar2;
  PUListener *this_00;
  long *plVar3;
  
  *(undefined ***)this = &PTR__PUBeamRender_016f2b00;
  this_00 = (PUListener *)(this + 0x68);
  *(undefined ***)this_00 = &PTR__PUBeamRender_016f2b78;
  if ((*(PUParticleSystem3D **)(this + 0x28) != (PUParticleSystem3D *)0x0) &&
     (*(long *)(this + 0xa0) != 0)) {
    PUParticleSystem3D::removeListener(*(PUParticleSystem3D **)(this + 0x28),this_00);
    if (*(long **)(this + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xa0) + 8))();
    }
    plVar3 = *(long **)(this + 0xa8);
    plVar1 = *(long **)(this + 0xb0);
    *(undefined8 *)(this + 0xa0) = 0;
    if (plVar3 != plVar1) {
      do {
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 8))();
        }
        plVar3 = plVar3 + 1;
      } while (plVar1 != plVar3);
      plVar3 = *(long **)(this + 0xa8);
    }
    *(long **)(this + 0xb0) = plVar3;
    *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xc0);
  }
  pvVar2 = *(void **)(this + 0xc0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 200) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xa8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xb0) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x88] & 1) != 0) {
    operator_delete(*(void **)(this + 0x98));
  }
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  PUListener::~PUListener(this_00);
  *(undefined ***)this = &PTR__PURender_016f2a08;
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  Particle3DRender::~Particle3DRender((Particle3DRender *)this);
  return;
}

