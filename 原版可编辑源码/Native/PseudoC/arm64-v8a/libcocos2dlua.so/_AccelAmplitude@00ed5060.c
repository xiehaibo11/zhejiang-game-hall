
/* non-virtual thunk to cocos2d::AccelAmplitude::~AccelAmplitude() */

void __thiscall cocos2d::AccelAmplitude::~AccelAmplitude(AccelAmplitude *this)

{
  *(undefined ***)(this + -0x28) = &PTR__AccelAmplitude_016f72f8;
  *(undefined ***)this = &PTR_clone_016f7358;
  if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* try { // try from 00ed5094 to 00fd50b7 has its CatchHandler @ 00ed5708 */
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *(undefined8 *)(this + 0x38) = 0;
  Action::~Action((Action *)(this + -0x28));
  return;
}

