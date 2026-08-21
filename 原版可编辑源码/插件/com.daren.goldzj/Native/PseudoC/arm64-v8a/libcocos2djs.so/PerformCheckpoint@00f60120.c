
/* v8::internal::MicrotaskQueue::PerformCheckpoint(v8::Isolate*) */

void __thiscall
v8::internal::MicrotaskQueue::PerformCheckpoint(MicrotaskQueue *this,Isolate *param_1)

{
  if (((this[0x4c] == (MicrotaskQueue)0x0) && (*(int *)(this + 0x40) == 0)) &&
     (*(int *)(this + 0x44) == 0)) {
    RunMicrotasks(this,(Isolate *)param_1);
    return;
  }
  return;
}

