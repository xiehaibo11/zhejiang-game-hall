
/* non-virtual thunk to cocos2d::RepeatForever::~RepeatForever() */

void __thiscall cocos2d::RepeatForever::~RepeatForever(RepeatForever *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__RepeatForever_016f8630;
  *(undefined ***)this = &PTR_clone_016f8690;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action(this_00);
                    /* catch() { ... } // from try @ 00edd3ac with catch @ 00edd67c */
  operator_delete(this_00);
  return;
}

