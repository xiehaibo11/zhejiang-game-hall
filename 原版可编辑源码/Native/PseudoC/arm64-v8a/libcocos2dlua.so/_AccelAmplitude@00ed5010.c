
/* cocos2d::AccelAmplitude::~AccelAmplitude() */

void __thiscall cocos2d::AccelAmplitude::~AccelAmplitude(AccelAmplitude *this)

{
  *(undefined ***)this = &PTR__AccelAmplitude_016f72f8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f7358;
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  *(undefined8 *)(this + 0x60) = 0;
  Action::~Action((Action *)this);
  return;
}

