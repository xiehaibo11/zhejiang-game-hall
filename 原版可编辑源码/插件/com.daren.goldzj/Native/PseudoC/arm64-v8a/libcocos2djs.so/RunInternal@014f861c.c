
/* v8::internal::ItemParallelJob::Task::RunInternal() */

void __thiscall v8::internal::ItemParallelJob::Task::RunInternal(Task *this)

{
  (**(code **)(*(long *)this + 0x20))(this,*(undefined4 *)(this + 0x40));
  base::Semaphore::Signal(*(Semaphore **)(this + 0x48));
  return;
}

