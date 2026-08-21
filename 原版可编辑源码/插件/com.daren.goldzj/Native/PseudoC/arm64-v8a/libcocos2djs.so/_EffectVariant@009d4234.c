
/* cocos2d::renderer::EffectVariant::~EffectVariant() */

void __thiscall cocos2d::renderer::EffectVariant::~EffectVariant(EffectVariant *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &PTR__EffectVariant_01c6bb80;
  puVar1 = *(undefined8 **)(this + 0x28);
  if (puVar1 != *(undefined8 **)(this + 0x30)) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 0x30));
    puVar1 = *(undefined8 **)(this + 0x28);
  }
  *(undefined8 **)(this + 0x30) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x30) = puVar1;
    operator_delete(puVar1);
  }
  EffectBase::~EffectBase((EffectBase *)this);
  return;
}

