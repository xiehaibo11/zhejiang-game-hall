
/* cocos2d::PUDynamicAttributeRandom::copyAttributesTo(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUDynamicAttributeRandom::copyAttributesTo
          (PUDynamicAttributeRandom *this,PUDynamicAttribute *param_1)

{
  if ((param_1 != (PUDynamicAttribute *)0x0) && (*(int *)(param_1 + 0x24) == 1)) {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(this + 0x2c);
  }
  return;
}

