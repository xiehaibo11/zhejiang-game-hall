
/* non-virtual thunk to v8::internal::IncrementalMarkingJob::Task::~Task() */

void __thiscall v8::internal::IncrementalMarkingJob::Task::~Task(Task *this)

{
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  operator_delete((Cancelable *)(this + -0x20));
  return;
}

