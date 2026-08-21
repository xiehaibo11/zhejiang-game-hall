
/* cocos2d::renderer::Assembler::reset() */

void __thiscall cocos2d::renderer::Assembler::reset(Assembler *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  while (puVar2 != puVar1) {
    puVar2 = puVar2 + -4;
    if ((Ref *)*puVar2 != (Ref *)0x0) {
      Ref::release((Ref *)*puVar2);
    }
  }
  *(undefined8 **)(this + 0x48) = puVar1;
  return;
}

