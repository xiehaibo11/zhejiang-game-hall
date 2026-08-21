
/* v8::internal::Sweeper::IncrementalSweeperTask::~IncrementalSweeperTask() */

void __thiscall
v8::internal::Sweeper::IncrementalSweeperTask::~IncrementalSweeperTask(IncrementalSweeperTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

