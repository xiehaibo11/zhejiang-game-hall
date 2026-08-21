
/* v8::internal::MemoryAllocator::Unmapper::UnmapFreeMemoryTask::~UnmapFreeMemoryTask() */

void __thiscall
v8::internal::MemoryAllocator::Unmapper::UnmapFreeMemoryTask::~UnmapFreeMemoryTask
          (UnmapFreeMemoryTask *this)

{
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

