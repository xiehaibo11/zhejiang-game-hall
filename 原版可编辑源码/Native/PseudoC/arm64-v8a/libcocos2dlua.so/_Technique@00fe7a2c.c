
/* cocos2d::Technique::~Technique() */

void __thiscall cocos2d::Technique::~Technique(Technique *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__Technique_01724360;
  puVar1 = *(undefined8 **)(this + 0x78);
  puVar2 = *(undefined8 **)(this + 0x80);
  if (puVar1 != puVar2) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x78);
  }
  *(undefined8 **)(this + 0x80) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x80) = puVar1;
    operator_delete(puVar1);
  }
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  RenderState::~RenderState((RenderState *)this);
  return;
}

