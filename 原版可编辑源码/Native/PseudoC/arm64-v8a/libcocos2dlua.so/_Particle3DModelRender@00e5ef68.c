
/* cocos2d::Particle3DModelRender::~Particle3DModelRender() */

void __thiscall cocos2d::Particle3DModelRender::~Particle3DModelRender(Particle3DModelRender *this)

{
  Particle3DModelRender PVar1;
  void *pvVar2;
  Particle3DModelRender *pPVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined ***)this = &PTR__Particle3DModelRender_016f2f50;
  pPVar3 = this + 0x50;
  puVar5 = *(undefined8 **)(this + 0x58);
  for (puVar4 = *(undefined8 **)pPVar3; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    Ref::release((Ref *)*puVar4);
  }
  if (((byte)this[0x80] & 1) == 0) {
    PVar1 = this[0x68];
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    PVar1 = this[0x68];
  }
  if (((byte)PVar1 & 1) == 0) {
    pvVar2 = *(void **)pPVar3;
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    pvVar2 = *(void **)pPVar3;
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined ***)this = &PTR__Particle3DRender_016f2f98;
  Ref::release(*(Ref **)(this + 0x30));
  Ref::~Ref((Ref *)this);
  return;
}

