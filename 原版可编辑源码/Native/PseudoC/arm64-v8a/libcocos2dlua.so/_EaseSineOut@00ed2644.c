
/* non-virtual thunk to cocos2d::EaseSineOut::~EaseSineOut() */

void __thiscall cocos2d::EaseSineOut::~EaseSineOut(EaseSineOut *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
                    /* try { // try from 00ed2678 to 00fd267b has its CatchHandler @ 00ed2840 */
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* try { // try from 00ed267c to 00fd2687 has its CatchHandler @ 00ed2874 */
  Action::~Action(this_00);
                    /* try { // try from 00ed2688 to 00fd2693 has its CatchHandler @ 00ed282c */
  operator_delete(this_00);
  return;
}

