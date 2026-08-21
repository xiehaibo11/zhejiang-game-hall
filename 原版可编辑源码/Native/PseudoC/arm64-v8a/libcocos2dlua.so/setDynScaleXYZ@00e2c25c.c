
/* cocos2d::PUScaleAffector::setDynScaleXYZ(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUScaleAffector::setDynScaleXYZ(PUScaleAffector *this,PUDynamicAttribute *param_1)

{
  if (*(long **)(this + 200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 200) + 8))();
    *(undefined8 *)(this + 200) = 0;
  }
  *(PUDynamicAttribute **)(this + 200) = param_1;
  this[0xd3] = (PUScaleAffector)0x1;
  return;
}

