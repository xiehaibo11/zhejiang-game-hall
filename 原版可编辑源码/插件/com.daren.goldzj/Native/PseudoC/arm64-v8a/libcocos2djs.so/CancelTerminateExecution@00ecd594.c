
/* v8::Isolate::CancelTerminateExecution() */

void __thiscall v8::Isolate::CancelTerminateExecution(Isolate *this)

{
  internal::StackGuard::ClearInterrupt((StackGuard *)(this + 0x48),1);
  internal::Isolate::CancelTerminateExecution((Isolate *)this);
  return;
}

