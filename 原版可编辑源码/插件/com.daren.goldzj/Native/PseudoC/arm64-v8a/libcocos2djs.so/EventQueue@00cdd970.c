
/* spine::EventQueue::EventQueue(spine::AnimationState&, spine::Pool<spine::TrackEntry>&) */

void __thiscall
spine::EventQueue::EventQueue(EventQueue *this,AnimationState *param_1,Pool *param_2)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(AnimationState **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Pool **)(this + 0x30) = param_2;
  *(undefined ***)(this + 8) = &PTR__Vector_01c8e548;
  *(undefined ***)this = &PTR__EventQueue_01c8e3e0;
  this[0x38] = (EventQueue)0x0;
  return;
}

