
/* cocos2d::ToggleVisibility::clone() const */

Action * cocos2d::ToggleVisibility::clone(void)

{
  Action *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ed8c20 to 00fd8c57 has its CatchHandler @ 00ed908c */
    *(undefined ***)this = &PTR__Action_016f8080;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f80e0;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

