
/* cocos2d::EaseExponentialIn::~EaseExponentialIn() */

void __thiscall cocos2d::EaseExponentialIn::~EaseExponentialIn(EaseExponentialIn *this)

{
                    /* try { // try from 00ed2120 to 00fd2127 has its CatchHandler @ 00ed2744 */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
                    /* try { // try from 00ed2144 to 00fd2153 has its CatchHandler @ 00ed2774 */
  operator_delete(this);
  return;
}

