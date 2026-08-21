
/* v8::Isolate::EnqueueMicrotask(void (*)(void*), void*) */

void __thiscall
v8::Isolate::EnqueueMicrotask(Isolate *this,_func_void_void_ptr *param_1,void *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  uVar3 = internal::Factory::NewForeign((Factory *)this,(ulong)param_1);
  uVar4 = internal::Factory::NewForeign((Factory *)this,(ulong)param_2);
  puVar5 = (undefined8 *)internal::Factory::NewCallbackTask((Factory *)this,uVar3,uVar4);
  internal::MicrotaskQueue::EnqueueMicrotask(*(MicrotaskQueue **)(this + 0xb7c0),*puVar5);
  if (this != (Isolate *)0x0) {
    *(undefined8 *)(this + 0x95a0) = uVar1;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar2) {
      *(long *)(this + 0x95a8) = lVar2;
      internal::HandleScope::DeleteExtensions((Isolate *)this);
      return;
    }
  }
  return;
}

