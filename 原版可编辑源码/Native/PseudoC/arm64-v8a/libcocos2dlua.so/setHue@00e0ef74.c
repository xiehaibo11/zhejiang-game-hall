
/* cocos2d::extension::ControlHuePicker::setHue(float) */

void __thiscall cocos2d::extension::ControlHuePicker::setHue(ControlHuePicker *this,float param_1)

{
  *(float *)(this + 0x358) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00e0ef8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6d8))(param_1 / 360.0);
  return;
}

