
/* cocos2d::Director::setActionManager(cocos2d::ActionManager*) */

void __thiscall cocos2d::Director::setActionManager(Director *this,ActionManager *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0xa8);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (ActionManager *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0xa8);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(ActionManager **)(this + 0xa8) = param_1;
  }
  return;
}

