
/* cocos2d::RemoveSelf::create(bool) */

Action * cocos2d::RemoveSelf::create(bool param_1)

{
  Action *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00ed8d08 to 00fd8d0f has its CatchHandler @ 00ed9040 */
  if (this != (Action *)0x0) {
                    /* try { // try from 00ed8d10 to 00fd8d5f has its CatchHandler @ 00ed8adc */
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    this[0x51] = (Action)param_1;
    *(undefined ***)this = &PTR__Action_016f8120;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8180;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

