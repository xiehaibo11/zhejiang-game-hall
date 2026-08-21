
/* cocos2d::PUGeometryRotator::setRotationSpeed(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUGeometryRotator::setRotationSpeed(PUGeometryRotator *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 8))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  *(PUDynamicAttribute **)(this + 0xb8) = param_1;
  return;
}

