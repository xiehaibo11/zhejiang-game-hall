
/* v8::MicrotasksScope::~MicrotasksScope() */

void __thiscall v8::MicrotasksScope::~MicrotasksScope(MicrotasksScope *this)

{
  Isolate *pIVar1;
  
  if (this[0x10] != (MicrotasksScope)0x0) {
    *(int *)(*(long *)(this + 8) + 0x40) = *(int *)(*(long *)(this + 8) + 0x40) + -1;
    if ((*(int *)(*(MicrotaskQueue **)(this + 8) + 0x48) == 1) &&
       (pIVar1 = *(Isolate **)this, *(int *)(pIVar1 + 0x2c20) == *(int *)(pIVar1 + 0xa8))) {
      internal::MicrotaskQueue::PerformCheckpoint(*(MicrotaskQueue **)(this + 8),pIVar1);
      return;
    }
  }
  return;
}

