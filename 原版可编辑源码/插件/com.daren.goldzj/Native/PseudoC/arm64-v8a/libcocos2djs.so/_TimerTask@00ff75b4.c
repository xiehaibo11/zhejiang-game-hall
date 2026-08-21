
/* non-virtual thunk to v8::internal::MemoryReducer::TimerTask::~TimerTask() */

void __thiscall v8::internal::MemoryReducer::TimerTask::~TimerTask(TimerTask *this)

{
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  operator_delete((Cancelable *)(this + -0x20));
  return;
}

