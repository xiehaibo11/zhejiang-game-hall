
/* non-virtual thunk to v8::internal::PointersUpdatingTask::~PointersUpdatingTask() */

void __thiscall
v8::internal::PointersUpdatingTask::~PointersUpdatingTask(PointersUpdatingTask *this)

{
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  operator_delete((Cancelable *)(this + -0x20));
  return;
}

