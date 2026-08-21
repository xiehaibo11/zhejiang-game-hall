
/* v8::Isolate::TerminateExecution() */

void __thiscall v8::Isolate::TerminateExecution(Isolate *this)

{
  internal::StackGuard::RequestInterrupt((StackGuard *)(this + 0x48),1);
  return;
}

