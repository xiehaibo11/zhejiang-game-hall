
/* cocos2d::DeccelAmplitude::~DeccelAmplitude() */

void __thiscall cocos2d::DeccelAmplitude::~DeccelAmplitude(DeccelAmplitude *this)

{
                    /* try { // try from 00ed5404 to 00fd5427 has its CatchHandler @ 00ed56f4 */
  *(undefined ***)this = &PTR__DeccelAmplitude_016f7380;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f73e0;
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  Action::~Action((Action *)this);
                    /* try { // try from 00ed5428 to 00fd54db has its CatchHandler @ 00ed4ef8 */
  operator_delete(this);
  return;
}

