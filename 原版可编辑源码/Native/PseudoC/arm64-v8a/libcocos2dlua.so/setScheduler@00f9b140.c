
/* cocos2d::Director::setScheduler(cocos2d::Scheduler*) */

void __thiscall cocos2d::Director::setScheduler(Director *this,Scheduler *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0xa0);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Scheduler *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0xa0);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Scheduler **)(this + 0xa0) = param_1;
  }
  return;
}

