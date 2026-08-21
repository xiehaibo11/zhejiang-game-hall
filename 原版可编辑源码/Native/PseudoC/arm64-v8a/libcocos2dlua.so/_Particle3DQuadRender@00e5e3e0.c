
/* cocos2d::Particle3DQuadRender::~Particle3DQuadRender() */

void __thiscall cocos2d::Particle3DQuadRender::~Particle3DQuadRender(Particle3DQuadRender *this)

{
  void *pvVar1;
  Vec4 *this_00;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__Particle3DQuadRender_016f2f08;
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  if (*(Ref **)(this + 0x70) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x70));
  }
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x68));
  }
  if (((byte)this[0xa8] & 1) != 0) {
    operator_delete(*(void **)(this + 0xb8));
  }
  pvVar1 = *(void **)(this + 0x90);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x98) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x78);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x80);
    pvVar2 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        this_00 = (Vec4 *)((long)pvVar3 + -0x10);
        pvVar3 = (void *)((long)pvVar3 + -0x24);
        Vec4::~Vec4(this_00);
      } while (pvVar1 != pvVar3);
      pvVar2 = *(void **)(this + 0x78);
    }
    *(void **)(this + 0x80) = pvVar1;
    operator_delete(pvVar2);
  }
  *(undefined ***)this = &PTR__Particle3DRender_016f2f98;
  Ref::release(*(Ref **)(this + 0x30));
  Ref::~Ref((Ref *)this);
  return;
}

