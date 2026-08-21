
/* cocos2d::Particle3DModelRender::reset() */

void __thiscall cocos2d::Particle3DModelRender::reset(Particle3DModelRender *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x50);
  puVar1 = *(undefined8 **)(this + 0x58);
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar2;
    } while (puVar1 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x50);
  }
  *(undefined8 **)(this + 0x58) = puVar3;
  return;
}

