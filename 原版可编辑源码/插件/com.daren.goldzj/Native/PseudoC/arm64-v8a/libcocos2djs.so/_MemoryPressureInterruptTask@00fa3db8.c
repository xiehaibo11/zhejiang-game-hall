
/* v8::internal::MemoryPressureInterruptTask::~MemoryPressureInterruptTask() */

void __thiscall
v8::internal::MemoryPressureInterruptTask::~MemoryPressureInterruptTask
          (MemoryPressureInterruptTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

