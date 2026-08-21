
/* v8::internal::Sweeper::IterabilityTask::~IterabilityTask() */

void __thiscall v8::internal::Sweeper::IterabilityTask::~IterabilityTask(IterabilityTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

