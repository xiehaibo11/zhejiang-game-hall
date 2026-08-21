
/* cocos2d::PUScaleAffector::setDynScaleX(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUScaleAffector::setDynScaleX(PUScaleAffector *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb0) + 8))();
    *(undefined8 *)(this + 0xb0) = 0;
  }
  *(PUDynamicAttribute **)(this + 0xb0) = param_1;
  this[0xd0] = (PUScaleAffector)0x1;
  return;
}

