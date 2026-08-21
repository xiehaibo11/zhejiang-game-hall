
/* cocos2d::PUDynamicAttributeOscillate::copyAttributesTo(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUDynamicAttributeOscillate::copyAttributesTo
          (PUDynamicAttributeOscillate *this,PUDynamicAttribute *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (PUDynamicAttribute *)0x0) && (*(int *)(param_1 + 0x24) == 3)) {
    uVar1 = *(undefined8 *)(this + 0x2c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(this + 0x34);
    *(undefined8 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(this + 0x3c);
  }
  return;
}

