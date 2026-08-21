
/* v8::internal::Sweeper::SweeperTask::~SweeperTask() */

void __thiscall v8::internal::Sweeper::SweeperTask::~SweeperTask(SweeperTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

