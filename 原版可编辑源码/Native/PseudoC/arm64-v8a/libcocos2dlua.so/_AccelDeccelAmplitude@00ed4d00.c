
/* cocos2d::AccelDeccelAmplitude::~AccelDeccelAmplitude() */

void __thiscall cocos2d::AccelDeccelAmplitude::~AccelDeccelAmplitude(AccelDeccelAmplitude *this)

{
                    /* try { // try from 00ed4d04 to 00fd4ec3 has its CatchHandler @ 00ed4b84 */
  *(undefined ***)this = &PTR__AccelDeccelAmplitude_016f7270;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f72d0;
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

