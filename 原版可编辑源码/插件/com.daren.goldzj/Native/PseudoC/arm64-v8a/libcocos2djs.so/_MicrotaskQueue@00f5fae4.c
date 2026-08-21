
/* v8::internal::MicrotaskQueue::~MicrotaskQueue() */

void __thiscall v8::internal::MicrotaskQueue::~MicrotaskQueue(MicrotaskQueue *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__MicrotaskQueue_01ca6ec8;
  if (*(MicrotaskQueue **)(this + 0x30) != this) {
    *(undefined8 *)(*(MicrotaskQueue **)(this + 0x30) + 0x38) = *(undefined8 *)(this + 0x38);
    *(undefined8 *)(*(long *)(this + 0x38) + 0x30) = *(undefined8 *)(this + 0x30);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

