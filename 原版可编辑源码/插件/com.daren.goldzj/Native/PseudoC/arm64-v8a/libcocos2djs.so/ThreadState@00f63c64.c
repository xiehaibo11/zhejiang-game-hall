
/* v8::internal::ThreadState::ThreadState(v8::internal::ThreadManager*) */

void __thiscall v8::internal::ThreadState::ThreadState(ThreadState *this,ThreadManager *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(ThreadState **)(this + 0x10) = this;
  *(undefined4 *)this = 0xffffffff;
  *(ThreadState **)(this + 0x18) = this;
  *(ThreadManager **)(this + 0x20) = param_1;
  return;
}

