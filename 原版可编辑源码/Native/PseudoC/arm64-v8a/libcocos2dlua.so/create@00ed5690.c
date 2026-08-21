
/* cocos2d::StopGrid::create() */

Action * cocos2d::StopGrid::create(void)

{
  Action *this;
  
                    /* try { // try from 00ed56a0 to 00fd5723 has its CatchHandler @ 00ed4ef8 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f74f8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7558;
    Ref::autorelease((Ref *)this);
  }
                    /* catch() { ... } // from try @ 00ed567c with catch @ 00ed56ec */
  return this;
}

