
/* v8::MicrotasksScope::GetCurrentDepth(v8::Isolate*) */

void v8::MicrotasksScope::GetCurrentDepth(Isolate *param_1)

{
  internal::MicrotaskQueue::GetMicrotasksScopeDepth(*(MicrotaskQueue **)(param_1 + 0xb7c0));
  return;
}

