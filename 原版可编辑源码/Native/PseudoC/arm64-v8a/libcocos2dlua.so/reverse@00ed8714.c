
/* cocos2d::Show::reverse() const */

Action * cocos2d::Show::reverse(void)

{
  Action *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ed8754 to 00fd88b3 has its CatchHandler @ 00ed8754
                       catch() { ... } // from try @ 00ed8754 with catch @ 00ed8754
                       catch() { ... } // from try @ 00ed88d8 with catch @ 00ed8754 */
    *(undefined ***)this = &PTR__Action_016f7fe0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8040;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

