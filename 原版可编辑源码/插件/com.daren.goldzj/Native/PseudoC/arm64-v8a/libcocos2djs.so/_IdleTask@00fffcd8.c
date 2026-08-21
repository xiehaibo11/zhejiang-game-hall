
/* non-virtual thunk to v8::internal::ScavengeJob::IdleTask::~IdleTask() */

void __thiscall v8::internal::ScavengeJob::IdleTask::~IdleTask(IdleTask *this)

{
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  operator_delete((Cancelable *)(this + -0x20));
  return;
}

