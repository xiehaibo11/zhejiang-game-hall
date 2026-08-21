
/* v8::internal::ScavengeJob::IdleTask::~IdleTask() */

void __thiscall v8::internal::ScavengeJob::IdleTask::~IdleTask(IdleTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

