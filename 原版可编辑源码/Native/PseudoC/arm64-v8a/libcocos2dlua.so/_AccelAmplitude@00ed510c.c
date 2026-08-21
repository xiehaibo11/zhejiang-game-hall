
/* non-virtual thunk to cocos2d::AccelAmplitude::~AccelAmplitude() */

void __thiscall cocos2d::AccelAmplitude::~AccelAmplitude(AccelAmplitude *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__AccelAmplitude_016f72f8;
  *(undefined ***)this = &PTR_clone_016f7358;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *(undefined8 *)(this + 0x38) = 0;
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

