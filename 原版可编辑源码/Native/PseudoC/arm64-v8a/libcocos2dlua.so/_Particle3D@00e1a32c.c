
/* cocos2d::Particle3D::~Particle3D() */

void __thiscall cocos2d::Particle3D::~Particle3D(Particle3D *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__Particle3D_016edf20;
  puVar1 = *(void **)(this + 0x60);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Vec4::~Vec4((Vec4 *)(this + 0x24));
  Quaternion::~Quaternion((Quaternion *)(this + 0x14));
  return;
}

