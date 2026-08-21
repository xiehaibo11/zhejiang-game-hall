
/* cocos2d::ToggleVisibility::reverse() const */

Action * cocos2d::ToggleVisibility::reverse(void)

{
  Action *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ed8bb0 to 00fd8bb3 has its CatchHandler @ 00ed9058 */
    *(undefined ***)this = &PTR__Action_016f8080;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f80e0;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

