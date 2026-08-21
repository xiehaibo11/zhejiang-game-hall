
/* cocos2d::PUParticleSystem3D::removeAllBehaviourTemplate() */

void __thiscall cocos2d::PUParticleSystem3D::removeAllBehaviourTemplate(PUParticleSystem3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(this + 0x408);
  puVar3 = *(undefined8 **)(this + 0x410);
  if (puVar1 != puVar3) {
    do {
      puVar2 = puVar1 + 1;
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar2;
    } while (puVar3 != puVar2);
    puVar1 = *(undefined8 **)(this + 0x408);
  }
  *(undefined8 **)(this + 0x410) = puVar1;
  return;
}

