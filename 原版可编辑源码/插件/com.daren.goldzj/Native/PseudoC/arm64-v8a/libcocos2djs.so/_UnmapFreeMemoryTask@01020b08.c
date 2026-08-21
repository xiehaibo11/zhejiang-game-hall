
/* non-virtual thunk to
   v8::internal::MemoryAllocator::Unmapper::UnmapFreeMemoryTask::~UnmapFreeMemoryTask() */

void __thiscall
v8::internal::MemoryAllocator::Unmapper::UnmapFreeMemoryTask::~UnmapFreeMemoryTask
          (UnmapFreeMemoryTask *this)

{
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  operator_delete((Cancelable *)(this + -0x20));
  return;
}

