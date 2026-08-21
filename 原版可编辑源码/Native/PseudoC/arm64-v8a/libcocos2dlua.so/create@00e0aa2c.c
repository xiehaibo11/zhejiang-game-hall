
/* cocos2d::extension::ControlButton::create(cocos2d::ui::Scale9Sprite*) */

ControlButton * cocos2d::extension::ControlButton::create(Scale9Sprite *param_1)

{
  ControlButton *this;
  
  this = operator_new(0x450,(nothrow_t *)&std::nothrow);
  if (this != (ControlButton *)0x0) {
    ControlButton(this);
  }
                    /* catch() { ... } // from try @ 00e0a98c with catch @ 00e0aa5c */
  (**(code **)(*(long *)this + 0x740))(this,param_1);
  Ref::autorelease((Ref *)this);
  return this;
}

