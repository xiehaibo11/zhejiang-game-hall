
/* v8::internal::ThreadManager::FirstThreadStateInUse() */

long __thiscall v8::internal::ThreadManager::FirstThreadStateInUse(ThreadManager *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(this + 0x40) + 0x10);
  lVar1 = 0;
  if (lVar2 != *(long *)(*(long *)(*(long *)(this + 0x40) + 0x20) + 0x40)) {
    lVar1 = lVar2;
  }
  return lVar1;
}

