
/* cocos2d::extension::ControlSwitchSprite::setOnLabel(cocos2d::Label*) */

void __thiscall
cocos2d::extension::ControlSwitchSprite::setOnLabel(ControlSwitchSprite *this,Label *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x570);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Label *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x570);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Label **)(this + 0x570) = param_1;
  }
  return;
}

