
/* cocos2d::extension::ControlStepper::setPlusSprite(cocos2d::Sprite*) */

void __thiscall
cocos2d::extension::ControlStepper::setPlusSprite(ControlStepper *this,Sprite *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x398);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Sprite *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x398);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Sprite **)(this + 0x398) = param_1;
  }
  return;
}

