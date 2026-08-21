
/* cocos2d::EaseExponentialOut::~EaseExponentialOut() */

void __thiscall cocos2d::EaseExponentialOut::~EaseExponentialOut(EaseExponentialOut *this)

{
                    /* try { // try from 00ed2240 to 00fd2247 has its CatchHandler @ 00ed2738 */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
                    /* try { // try from 00ed2264 to 00fd2273 has its CatchHandler @ 00ed2768 */
  operator_delete(this);
  return;
}

