
/* cocos2d::extension::ControlButton::create(cocos2d::Node*, cocos2d::ui::Scale9Sprite*) */

ControlButton * cocos2d::extension::ControlButton::create(Node *param_1,Scale9Sprite *param_2)

{
  ControlButton *this;
  
  this = operator_new(0x450,(nothrow_t *)&std::nothrow);
  if (this != (ControlButton *)0x0) {
    ControlButton(this);
  }
  (**(code **)(*(long *)this + 0x738))(this,param_1,param_2,1);
  Ref::autorelease((Ref *)this);
  return this;
}

