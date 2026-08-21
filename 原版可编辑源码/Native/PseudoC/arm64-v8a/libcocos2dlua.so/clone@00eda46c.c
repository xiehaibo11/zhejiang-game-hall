
/* cocos2d::Place::clone() const */

Action * __thiscall cocos2d::Place::clone(Place *this)

{
  Action *this_00;
  
                    /* catch() { ... } // from try @ 00eda310 with catch @ 00eda46c */
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f8300;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8360;
    *(undefined8 *)(this_00 + 0x54) = *(undefined8 *)(this + 0x54);
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

