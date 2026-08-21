
/* cocos2d::PUParticle3D::~PUParticle3D() */

void __thiscall cocos2d::PUParticle3D::~PUParticle3D(PUParticle3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x108);
  puVar1 = *(undefined8 **)(this + 0x110);
  *(undefined ***)this = &PTR__PUParticle3D_016ee530;
  if (puVar2 != puVar1) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x108);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x110) = puVar2;
    operator_delete(puVar2);
  }
  Quaternion::~Quaternion((Quaternion *)(this + 0xf0));
  Vec4::~Vec4((Vec4 *)(this + 0xdc));
  Particle3D::~Particle3D((Particle3D *)this);
  return;
}

