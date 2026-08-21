
/* cocos2d::extension::ControlSlider::valueForLocation(cocos2d::Vec2) */

float __thiscall
cocos2d::extension::ControlSlider::valueForLocation(float param_1,ControlSlider *this)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x388) + 0x168))();
  fVar2 = *(float *)(this + 0x35c) +
          (param_1 / *pfVar1) * (*(float *)(this + 0x360) - *(float *)(this + 0x35c));
  if (*(float *)(this + 0x368) <= fVar2) {
    fVar2 = *(float *)(this + 0x368);
  }
  if (fVar2 <= *(float *)(this + 0x364)) {
    fVar2 = *(float *)(this + 0x364);
  }
  return fVar2;
}

