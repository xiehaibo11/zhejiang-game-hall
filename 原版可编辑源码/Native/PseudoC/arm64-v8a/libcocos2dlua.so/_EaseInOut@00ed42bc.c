
/* non-virtual thunk to cocos2d::EaseInOut::~EaseInOut() */

void __thiscall cocos2d::EaseInOut::~EaseInOut(EaseInOut *this)

{
  Action *this_00;
  
                    /* try { // try from 00ed42dc to 00fd435f has its CatchHandler @ 00ed42dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed42dc with catch @ 00ed42dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed4578 with catch @ 00ed42dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed46cc with catch @ 00ed42dc
                        */
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

