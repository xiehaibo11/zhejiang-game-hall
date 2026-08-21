
/* cocos2d::extension::ControlColourPicker::setcolourPicker(cocos2d::extension::ControlSaturationBrightnessPicker*)
    */

void __thiscall
cocos2d::extension::ControlColourPicker::setcolourPicker
          (ControlColourPicker *this,ControlSaturationBrightnessPicker *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x370);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (ControlSaturationBrightnessPicker *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x370);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(ControlSaturationBrightnessPicker **)(this + 0x370) = param_1;
  }
  return;
}

