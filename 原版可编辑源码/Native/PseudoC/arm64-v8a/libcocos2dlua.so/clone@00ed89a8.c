
/* cocos2d::Hide::clone() const */

Action * cocos2d::Hide::clone(void)

{
  Action *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7fe0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8040;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

