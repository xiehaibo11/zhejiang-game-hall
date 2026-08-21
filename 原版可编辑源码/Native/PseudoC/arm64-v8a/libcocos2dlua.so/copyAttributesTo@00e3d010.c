
/* cocos2d::PUDynamicAttributeFixed::copyAttributesTo(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUDynamicAttributeFixed::copyAttributesTo
          (PUDynamicAttributeFixed *this,PUDynamicAttribute *param_1)

{
  if ((param_1 != (PUDynamicAttribute *)0x0) && (*(int *)(param_1 + 0x24) == 0)) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x2c);
    return;
  }
  return;
}

