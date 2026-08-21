
/* cocos2d::EaseIn::~EaseIn() */

void __thiscall cocos2d::EaseIn::~EaseIn(EaseIn *this)

{
                    /* try { // try from 00ed3fdc to 00fd3fe3 has its CatchHandler @ 00ed410c */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
                    /* try { // try from 00ed4004 to 00fd407f has its CatchHandler @ 00ed4150 */
  operator_delete(this);
  return;
}

