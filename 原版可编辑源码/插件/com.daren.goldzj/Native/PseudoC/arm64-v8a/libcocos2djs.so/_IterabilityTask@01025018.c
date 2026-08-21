
/* non-virtual thunk to v8::internal::Sweeper::IterabilityTask::~IterabilityTask() */

void __thiscall v8::internal::Sweeper::IterabilityTask::~IterabilityTask(IterabilityTask *this)

{
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  operator_delete((Cancelable *)(this + -0x20));
  return;
}

