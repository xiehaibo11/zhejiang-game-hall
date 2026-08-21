
/* cocos2d::EaseCircleActionOut::~EaseCircleActionOut() */

void __thiscall cocos2d::EaseCircleActionOut::~EaseCircleActionOut(EaseCircleActionOut *this)

{
                    /* try { // try from 00ed39cc to 00fd39fb has its CatchHandler @ 00ed39cc
                       catch() { ... } // from try @ 00ed39cc with catch @ 00ed39cc
                       catch() { ... } // from try @ 00ed3a0c with catch @ 00ed39cc */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
                    /* try { // try from 00ed39fc to 00fd3a0b has its CatchHandler @ 00ed3b10 */
  Action::~Action((Action *)this);
                    /* try { // try from 00ed3a0c to 00fd3b2b has its CatchHandler @ 00ed39cc */
  operator_delete(this);
  return;
}

