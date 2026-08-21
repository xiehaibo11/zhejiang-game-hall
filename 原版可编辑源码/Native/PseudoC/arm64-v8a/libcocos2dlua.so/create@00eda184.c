
/* cocos2d::FlipY::create(bool) */

Action * cocos2d::FlipY::create(bool param_1)

{
  Action *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    this[0x51] = (Action)param_1;
    *(undefined ***)this = &PTR__Action_016f8260;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f82c0;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

