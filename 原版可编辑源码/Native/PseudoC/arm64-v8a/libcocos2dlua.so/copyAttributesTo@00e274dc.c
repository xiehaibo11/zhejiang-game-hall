
/* cocos2d::PUGeometryRotator::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUGeometryRotator::copyAttributesTo(PUGeometryRotator *this,PUAffector *param_1)

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
  *(PUGeometryRotator *)(param_1 + 0xb0) = this[0xb0];
  uVar1 = *(undefined8 *)(this + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  *(PUGeometryRotator *)(param_1 + 0xdc) = this[0xdc];
  return;
}

