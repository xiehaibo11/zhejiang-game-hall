
/* cocos2d::PUScaleAffector::setDynScaleZ(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUScaleAffector::setDynScaleZ(PUScaleAffector *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 8))();
    *(undefined8 *)(this + 0xc0) = 0;
  }
  *(PUDynamicAttribute **)(this + 0xc0) = param_1;
  this[0xd2] = (PUScaleAffector)0x1;
  return;
}

