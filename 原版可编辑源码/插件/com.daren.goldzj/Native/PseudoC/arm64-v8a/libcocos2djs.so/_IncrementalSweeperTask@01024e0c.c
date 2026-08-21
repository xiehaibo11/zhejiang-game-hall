
/* non-virtual thunk to v8::internal::Sweeper::IncrementalSweeperTask::~IncrementalSweeperTask() */

void __thiscall
v8::internal::Sweeper::IncrementalSweeperTask::~IncrementalSweeperTask(IncrementalSweeperTask *this)

{
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  operator_delete((Cancelable *)(this + -0x20));
  return;
}

