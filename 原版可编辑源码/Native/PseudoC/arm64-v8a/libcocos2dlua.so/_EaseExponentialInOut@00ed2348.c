
/* cocos2d::EaseExponentialInOut::~EaseExponentialInOut() */

void __thiscall cocos2d::EaseExponentialInOut::~EaseExponentialInOut(EaseExponentialInOut *this)

{
                    /* try { // try from 00ed2354 to 00fd2373 has its CatchHandler @ 00ed2740 */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
                    /* try { // try from 00ed2374 to 00fd237b has its CatchHandler @ 00ed2730 */
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

