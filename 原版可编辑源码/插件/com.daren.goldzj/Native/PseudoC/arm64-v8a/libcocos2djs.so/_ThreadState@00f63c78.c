
/* v8::internal::ThreadState::~ThreadState() */

void __thiscall v8::internal::ThreadState::~ThreadState(ThreadState *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}

