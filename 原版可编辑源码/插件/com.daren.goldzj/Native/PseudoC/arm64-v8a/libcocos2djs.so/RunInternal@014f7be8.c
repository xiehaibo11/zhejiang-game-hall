
/* v8::internal::ConcurrentMarking::Task::RunInternal() */

void __thiscall v8::internal::ConcurrentMarking::Task::RunInternal(Task *this)

{
  ConcurrentMarking::Run
            (*(ConcurrentMarking **)(this + 0x28),*(int *)(this + 0x38),*(TaskState **)(this + 0x30)
            );
  return;
}

