
/* non-virtual thunk to cocos2d::EaseSineIn::~EaseSineIn() */

void __thiscall cocos2d::EaseSineIn::~EaseSineIn(EaseSineIn *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action(this_00);
                    /* try { // try from 00ed2564 to 00fd2573 has its CatchHandler @ 00ed2830 */
  operator_delete(this_00);
  return;
}

