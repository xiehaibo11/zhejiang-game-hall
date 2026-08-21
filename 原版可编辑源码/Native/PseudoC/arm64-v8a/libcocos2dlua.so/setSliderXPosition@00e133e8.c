
/* cocos2d::extension::ControlSwitchSprite::setSliderXPosition(float) */

void __thiscall
cocos2d::extension::ControlSwitchSprite::setSliderXPosition(ControlSwitchSprite *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x540);
  if ((*(float *)(this + 0x540) < param_1) && (fVar1 = param_1, *(float *)(this + 0x53c) <= param_1)
     ) {
    fVar1 = *(float *)(this + 0x53c);
  }
  *(float *)(this + 0x538) = fVar1;
  needsLayout(this);
  return;
}

