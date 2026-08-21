
/* v8::internal::MemoryPressureInterruptTask::RunInternal() */

void __thiscall
v8::internal::MemoryPressureInterruptTask::RunInternal(MemoryPressureInterruptTask *this)

{
  Heap::CheckMemoryPressure(*(Heap **)(this + 0x28));
  return;
}

