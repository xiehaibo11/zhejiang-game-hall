
/* cocos2d::PUSphereRender::~PUSphereRender() */

void __thiscall cocos2d::PUSphereRender::~PUSphereRender(PUSphereRender *this)

{
  Vec4 *this_00;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0xe8);
  *(undefined ***)this = &PTR__PUSphereRender_016f29a0;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0xf0);
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        this_00 = (Vec4 *)((long)pvVar2 + -0x10);
        pvVar2 = (void *)((long)pvVar2 + -0x24);
        Vec4::~Vec4(this_00);
      } while (pvVar3 != pvVar2);
      pvVar1 = *(void **)(this + 0xe8);
    }
    *(void **)(this + 0xf0) = pvVar3;
    operator_delete(pvVar1);
  }
  PUParticle3DBoxRender::~PUParticle3DBoxRender((PUParticle3DBoxRender *)this);
  return;
}

