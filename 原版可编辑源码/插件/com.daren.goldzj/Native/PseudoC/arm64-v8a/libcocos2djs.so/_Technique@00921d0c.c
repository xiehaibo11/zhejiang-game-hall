
/* cocos2d::renderer::Technique::~Technique() */

void __thiscall cocos2d::renderer::Technique::~Technique(Technique *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &PTR__Technique_01c69480;
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar1 != *(undefined8 **)(this + 0x20)) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 0x20));
    puVar1 = *(undefined8 **)(this + 0x18);
  }
  *(undefined8 **)(this + 0x20) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x20) = puVar1;
    operator_delete(puVar1);
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

