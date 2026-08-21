
/* cocos2d::extension::ControlButton::setBackgroundSprite(cocos2d::ui::Scale9Sprite*) */

void __thiscall
cocos2d::extension::ControlButton::setBackgroundSprite(ControlButton *this,Scale9Sprite *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x388);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Scale9Sprite *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x388);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Scale9Sprite **)(this + 0x388) = param_1;
  }
  return;
}

