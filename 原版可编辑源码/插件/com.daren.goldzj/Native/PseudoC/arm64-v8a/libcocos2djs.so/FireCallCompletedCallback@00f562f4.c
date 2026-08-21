
/* v8::internal::Isolate::FireCallCompletedCallback(v8::internal::MicrotaskQueue*) */

void __thiscall
v8::internal::Isolate::FireCallCompletedCallback(Isolate *this,MicrotaskQueue *param_1)

{
  void *__src;
  ulong __n;
  undefined8 *puVar1;
  undefined8 *__dest;
  undefined8 *puVar2;
  SuppressMicrotaskExecutionScope aSStack_58 [24];
  
  if (*(long *)(this + 0x2c08) == 0) {
    if ((((param_1 != (MicrotaskQueue *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
        (*(int *)(param_1 + 0x44) == 0)) && (*(int *)(param_1 + 0x48) == 2)) {
      MicrotaskQueue::RunMicrotasks(param_1,this);
    }
    if (*(long *)(this + 0xc640) != *(long *)(this + 0xc648)) {
      v8::Isolate::SuppressMicrotaskExecutionScope::SuppressMicrotaskExecutionScope
                (aSStack_58,(Isolate *)this,(MicrotaskQueue *)0x0);
      __src = *(void **)(this + 0xc640);
      __n = *(long *)(this + 0xc648) - (long)__src;
      if (__n == 0) {
        __dest = (undefined8 *)0x0;
      }
      else {
        if ((ulong)((long)__n >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        __dest = operator_new(__n);
        puVar1 = __dest;
        puVar2 = __dest;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
          puVar2 = (undefined8 *)((long)__dest + __n);
        }
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
          (*(code *)*puVar1)(this);
        }
      }
      if (__dest != (undefined8 *)0x0) {
        operator_delete(__dest);
      }
      v8::Isolate::SuppressMicrotaskExecutionScope::~SuppressMicrotaskExecutionScope(aSStack_58);
    }
  }
  return;
}

