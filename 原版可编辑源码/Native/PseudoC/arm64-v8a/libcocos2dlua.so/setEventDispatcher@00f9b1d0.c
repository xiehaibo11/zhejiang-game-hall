
/* cocos2d::Director::setEventDispatcher(cocos2d::EventDispatcher*) */

void __thiscall cocos2d::Director::setEventDispatcher(Director *this,EventDispatcher *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0xb0);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (EventDispatcher *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0xb0);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(EventDispatcher **)(this + 0xb0) = param_1;
  }
  return;
}

