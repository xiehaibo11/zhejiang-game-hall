
/* non-virtual thunk to v8::internal::MemoryPressureInterruptTask::~MemoryPressureInterruptTask() */

void __thiscall
v8::internal::MemoryPressureInterruptTask::~MemoryPressureInterruptTask
          (MemoryPressureInterruptTask *this)

{
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  return;
}

