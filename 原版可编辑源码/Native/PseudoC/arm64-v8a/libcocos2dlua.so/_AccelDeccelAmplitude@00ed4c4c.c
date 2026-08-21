
/* cocos2d::AccelDeccelAmplitude::~AccelDeccelAmplitude() */

void __thiscall cocos2d::AccelDeccelAmplitude::~AccelDeccelAmplitude(AccelDeccelAmplitude *this)

{
  *(undefined ***)this = &PTR__AccelDeccelAmplitude_016f7270;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f72d0;
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  Action::~Action((Action *)this);
  return;
}

