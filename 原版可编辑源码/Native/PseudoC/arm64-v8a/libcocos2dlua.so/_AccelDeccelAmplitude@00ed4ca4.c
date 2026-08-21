
/* non-virtual thunk to cocos2d::AccelDeccelAmplitude::~AccelDeccelAmplitude() */

void __thiscall cocos2d::AccelDeccelAmplitude::~AccelDeccelAmplitude(AccelDeccelAmplitude *this)

{
                    /* try { // try from 00ed4cbc to 00fd4cc7 has its CatchHandler @ 00ed4e14 */
  *(undefined ***)(this + -0x28) = &PTR__AccelDeccelAmplitude_016f7270;
                    /* try { // try from 00ed4cc8 to 00fd4ccf has its CatchHandler @ 00ed4e0c */
                    /* try { // try from 00ed4cd0 to 00fd4d03 has its CatchHandler @ 00ed4e24 */
  *(undefined ***)this = &PTR_clone_016f72d0;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

