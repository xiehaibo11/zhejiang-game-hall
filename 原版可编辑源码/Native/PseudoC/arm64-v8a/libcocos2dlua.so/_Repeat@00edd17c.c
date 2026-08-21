
/* non-virtual thunk to cocos2d::Repeat::~Repeat() */

void __thiscall cocos2d::Repeat::~Repeat(Repeat *this)

{
  Action *this_00;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edd14c with catch @ 00edd190
                        */
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__Repeat_016f85a8;
  *(undefined ***)this = &PTR_clone_016f8608;
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x40));
  }
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

