
/* cocos2d::PUTextureRotator::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUTextureRotator::copyAttributesTo(PUTextureRotator *this,PUAffector *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  uVar1 = (**(code **)(**(long **)(this + 0xb8) + 0x20))();
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = (**(code **)(**(long **)(this + 0xc0) + 0x20))();
  plVar2 = *(long **)(param_1 + 0xc0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  *(PUTextureRotator *)(param_1 + 0xac) = this[0xac];
  return;
}

