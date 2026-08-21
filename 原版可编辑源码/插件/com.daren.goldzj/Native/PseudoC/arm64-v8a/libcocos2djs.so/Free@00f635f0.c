
/* v8::internal::ThreadLocalTop::Free() */

void __thiscall v8::internal::ThreadLocalTop::Free(ThreadLocalTop *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x88);
  while (lVar1 != 0) {
    Isolate::PopPromise(*(Isolate **)(this + 8));
    lVar1 = *(long *)(this + 0x88);
  }
  return;
}

