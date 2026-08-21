
/* non-virtual thunk to v8::internal::ConcurrentMarking::Task::~Task() */

void __thiscall v8::internal::ConcurrentMarking::Task::~Task(Task *this)

{
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  operator_delete((Cancelable *)(this + -0x20));
  return;
}

