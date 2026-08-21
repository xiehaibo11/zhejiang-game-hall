
/* cocos2d::extension::ControlColourPicker::setHuePicker(cocos2d::extension::ControlHuePicker*) */

void __thiscall
cocos2d::extension::ControlColourPicker::setHuePicker
          (ControlColourPicker *this,ControlHuePicker *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x378);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (ControlHuePicker *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x378);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(ControlHuePicker **)(this + 0x378) = param_1;
  }
  return;
}

