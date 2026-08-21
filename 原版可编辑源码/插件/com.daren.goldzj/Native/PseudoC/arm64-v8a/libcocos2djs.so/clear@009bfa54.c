
/* cocos2d::renderer::Effect::clear() */

void __thiscall cocos2d::renderer::Effect::clear(Effect *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  if (puVar2 != *(undefined8 **)(this + 0x18)) {
    do {
      puVar1 = puVar2 + 1;
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar1;
    } while (puVar1 != *(undefined8 **)(this + 0x18));
    puVar2 = *(undefined8 **)(this + 0x10);
  }
  *(undefined8 **)(this + 0x18) = puVar2;
  return;
}

