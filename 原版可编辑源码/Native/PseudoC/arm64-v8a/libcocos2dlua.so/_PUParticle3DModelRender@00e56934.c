
/* cocos2d::PUParticle3DModelRender::~PUParticle3DModelRender() */

void __thiscall
cocos2d::PUParticle3DModelRender::~PUParticle3DModelRender(PUParticle3DModelRender *this)

{
  PUParticle3DModelRender PVar1;
  void *pvVar2;
  PUParticle3DModelRender *pPVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined ***)this = &PTR__PUParticle3DModelRender_016f2868;
  pPVar3 = this + 0x68;
  puVar5 = *(undefined8 **)(this + 0x70);
  for (puVar4 = *(undefined8 **)pPVar3; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    Ref::release((Ref *)*puVar4);
  }
  if (((byte)this[0x98] & 1) == 0) {
    PVar1 = this[0x80];
  }
  else {
    operator_delete(*(void **)(this + 0xa8));
    PVar1 = this[0x80];
  }
  if (((byte)PVar1 & 1) == 0) {
    pvVar2 = *(void **)pPVar3;
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    pvVar2 = *(void **)pPVar3;
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined ***)this = &PTR__PURender_016f2a08;
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  Particle3DRender::~Particle3DRender((Particle3DRender *)this);
  return;
}

