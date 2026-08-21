
/* cocos2d::StopGrid::clone() const */

Action * cocos2d::StopGrid::clone(void)

{
  Action *this;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f74f8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7558;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

