
/* cocos2d::renderer::Effect::~Effect() */

void __thiscall cocos2d::renderer::Effect::~Effect(Effect *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &PTR__Effect_01c6b1a0;
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 != *(undefined8 **)(this + 0x18)) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 0x18));
    puVar1 = *(undefined8 **)(this + 0x10);
  }
  *(undefined8 **)(this + 0x18) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar1;
    operator_delete(puVar1);
  }
  EffectBase::~EffectBase((EffectBase *)this);
  return;
}

