
/* cocos2d::extension::ControlStepper::setMaximumValue(double) */

void __thiscall
cocos2d::extension::ControlStepper::setMaximumValue(ControlStepper *this,double param_1)

{
  *(double *)(this + 0x370) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00e124cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6d0))(*(undefined8 *)(this + 0x358));
  return;
}

