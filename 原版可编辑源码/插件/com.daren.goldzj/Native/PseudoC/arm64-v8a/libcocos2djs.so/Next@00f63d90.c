
/* v8::internal::ThreadState::Next() */

long __thiscall v8::internal::ThreadState::Next(ThreadState *this)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(this + 0x10) != *(long *)(*(long *)(this + 0x20) + 0x40)) {
    lVar1 = *(long *)(this + 0x10);
  }
  return lVar1;
}

