
/* cocos2d::ParticleSystem3D::removeAllAffector() */

void __thiscall cocos2d::ParticleSystem3D::removeAllAffector(ParticleSystem3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(this + 0x310);
  puVar3 = *(undefined8 **)(this + 0x318);
  if (puVar1 != puVar3) {
    do {
      puVar2 = puVar1 + 1;
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar2;
    } while (puVar3 != puVar2);
    puVar1 = *(undefined8 **)(this + 0x310);
  }
  *(undefined8 **)(this + 0x318) = puVar1;
  return;
}

