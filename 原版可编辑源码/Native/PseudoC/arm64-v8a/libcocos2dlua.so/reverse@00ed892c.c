
/* cocos2d::Hide::reverse() const */

Action * cocos2d::Hide::reverse(void)

{
  Action *this;
  
                    /* catch() { ... } // from try @ 00ed88b4 with catch @ 00ed8934 */
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7f40;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7fa0;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

