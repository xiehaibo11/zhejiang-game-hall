
/* cocosbuilder::CCBEaseInstant::create(cocos2d::ActionInterval*) */

Action * cocosbuilder::CCBEaseInstant::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    cocos2d::Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016cf450;
    *(undefined ***)(this + 0x28) = &PTR_clone_016cf4b8;
    uVar1 = cocos2d::ActionEase::initWithAction((ActionEase *)this,param_1);
    if ((uVar1 & 1) == 0) {
      cocos2d::Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

