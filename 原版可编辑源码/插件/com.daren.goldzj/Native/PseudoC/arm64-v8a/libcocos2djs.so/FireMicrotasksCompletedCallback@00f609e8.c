
/* v8::internal::MicrotaskQueue::FireMicrotasksCompletedCallback(v8::internal::Isolate*) const */

void __thiscall
v8::internal::MicrotaskQueue::FireMicrotasksCompletedCallback(MicrotaskQueue *this,Isolate *param_1)

{
  void *__src;
  ulong __n;
  undefined8 *puVar1;
  undefined8 *__dest;
  undefined8 *puVar2;
  
  __src = *(void **)(this + 0x50);
  __n = *(long *)(this + 0x58) - (long)__src;
  if (__n == 0) {
    __dest = (undefined8 *)0x0;
  }
  else {
    if ((ulong)((long)__n >> 4) >> 0x3c != 0) {
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
    for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
      (*(code *)*puVar1)(param_1,puVar1[1]);
    }
  }
  if (__dest != (undefined8 *)0x0) {
    operator_delete(__dest);
    return;
  }
  return;
}

