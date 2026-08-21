
/* non-virtual thunk to cocos2d::DeccelAmplitude::~DeccelAmplitude() */

void __thiscall cocos2d::DeccelAmplitude::~DeccelAmplitude(DeccelAmplitude *this)

{
                    /* try { // try from 00ed5390 to 00fd53b3 has its CatchHandler @ 00ed56f8 */
  *(undefined ***)(this + -0x28) = &PTR__DeccelAmplitude_016f7380;
                    /* try { // try from 00ed53b4 to 00fd5403 has its CatchHandler @ 00ed4ef8 */
  *(undefined ***)this = &PTR_clone_016f73e0;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

