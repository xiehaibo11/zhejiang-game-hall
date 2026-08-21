
/* cocos2d::extension::ControlButton::setTitleLabel(cocos2d::Node*) */

void __thiscall cocos2d::extension::ControlButton::setTitleLabel(ControlButton *this,Node *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x380);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Node *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x380);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Node **)(this + 0x380) = param_1;
  }
  return;
}

