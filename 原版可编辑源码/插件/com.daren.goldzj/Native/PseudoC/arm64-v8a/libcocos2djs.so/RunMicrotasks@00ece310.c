
/* v8::Isolate::RunMicrotasks() */

void __thiscall v8::Isolate::RunMicrotasks(Isolate *this)

{
  internal::MicrotaskQueue::RunMicrotasks(*(MicrotaskQueue **)(this + 0xb7c0),(Isolate *)this);
  return;
}

