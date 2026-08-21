
/* cocos2d::ReuseGrid::create(int) */

Action * cocos2d::ReuseGrid::create(int param_1)

{
  Action *this;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(int *)(this + 0x60) = param_1;
    *(undefined ***)this = &PTR__Action_016f7598;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f75f8;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

