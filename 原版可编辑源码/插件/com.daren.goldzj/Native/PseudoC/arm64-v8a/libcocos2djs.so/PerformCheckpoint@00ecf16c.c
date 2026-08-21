
/* v8::MicrotasksScope::PerformCheckpoint(v8::Isolate*) */

void v8::MicrotasksScope::PerformCheckpoint(Isolate *param_1)

{
  internal::MicrotaskQueue::PerformCheckpoint(*(MicrotaskQueue **)(param_1 + 0xb7c0),param_1);
  return;
}

