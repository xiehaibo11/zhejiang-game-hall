
/* cocos2d::PUParticle3DModelRender::reset() */

void __thiscall cocos2d::PUParticle3DModelRender::reset(PUParticle3DModelRender *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x68);
  puVar1 = *(undefined8 **)(this + 0x70);
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar2;
    } while (puVar1 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x68);
  }
  *(undefined8 **)(this + 0x70) = puVar3;
  return;
}

