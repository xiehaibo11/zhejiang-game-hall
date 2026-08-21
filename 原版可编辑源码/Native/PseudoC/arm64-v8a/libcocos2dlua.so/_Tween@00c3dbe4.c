
/* cocostudio::Tween::~Tween() */

void __thiscall cocostudio::Tween::~Tween(Tween *this)

{
  *(undefined ***)this = &PTR__Tween_016c8b88;
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  *(undefined8 *)(this + 0x68) = 0;
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 8))();
  }
  *(undefined8 *)(this + 0x78) = 0;
  ProcessBase::~ProcessBase((ProcessBase *)this);
  return;
}

