
/* cocos2d::extension::ControlSlider::setMaximumValue(float) */

void __thiscall
cocos2d::extension::ControlSlider::setMaximumValue(ControlSlider *this,float param_1)

{
  *(float *)(this + 0x360) = param_1;
  *(float *)(this + 0x368) = param_1;
  if (param_1 <= *(float *)(this + 0x35c)) {
    *(float *)(this + 0x35c) = param_1 + -1.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00e112f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6d0))(*(undefined4 *)(this + 0x358));
  return;
}

