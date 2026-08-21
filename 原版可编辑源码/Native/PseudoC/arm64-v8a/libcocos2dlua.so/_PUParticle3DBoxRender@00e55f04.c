
/* cocos2d::PUParticle3DBoxRender::~PUParticle3DBoxRender() */

void __thiscall cocos2d::PUParticle3DBoxRender::~PUParticle3DBoxRender(PUParticle3DBoxRender *this)

{
  void *pvVar1;
  Vec4 *this_00;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__PUParticle3DBoxRender_016f28d0;
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  *(undefined8 *)(this + 0x68) = 0;
  if (*(Ref **)(this + 0x70) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x70));
  }
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x80));
  }
  if (*(Ref **)(this + 0x90) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x90));
  }
  if (*(Ref **)(this + 0x88) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x88));
  }
  if (((byte)this[200] & 1) != 0) {
    operator_delete(*(void **)(this + 0xd8));
  }
  pvVar1 = *(void **)(this + 0xb0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x98);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0xa0);
    pvVar2 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        this_00 = (Vec4 *)((long)pvVar3 + -0x10);
        pvVar3 = (void *)((long)pvVar3 + -0x24);
        Vec4::~Vec4(this_00);
      } while (pvVar1 != pvVar3);
      pvVar2 = *(void **)(this + 0x98);
    }
    *(void **)(this + 0xa0) = pvVar1;
    operator_delete(pvVar2);
  }
  *(undefined ***)this = &PTR__PURender_016f2a08;
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  Particle3DRender::~Particle3DRender((Particle3DRender *)this);
  return;
}

