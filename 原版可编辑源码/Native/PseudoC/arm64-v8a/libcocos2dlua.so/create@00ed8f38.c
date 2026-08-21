
/* cocos2d::FlipX::create(bool) */

Action * cocos2d::FlipX::create(bool param_1)

{
  Action *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ed8f70 to 00fd8f73 has its CatchHandler @ 00ed9074 */
                    /* try { // try from 00ed8f74 to 00fd902b has its CatchHandler @ 00ed8adc */
    this[0x51] = (Action)param_1;
    *(undefined ***)this = &PTR__Action_016f81c0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8220;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

