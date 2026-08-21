
/* v8::internal::MemoryReducer::TimerTask::~TimerTask() */

void __thiscall v8::internal::MemoryReducer::TimerTask::~TimerTask(TimerTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

