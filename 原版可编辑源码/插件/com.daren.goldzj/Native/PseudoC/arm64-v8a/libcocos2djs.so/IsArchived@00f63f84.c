
/* v8::internal::ThreadManager::IsArchived() */

bool __thiscall v8::internal::ThreadManager::IsArchived(ThreadManager *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = Isolate::FindPerThreadDataForThisThread(*(Isolate **)(this + 0x48));
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = *(long *)(lVar2 + 0x18) != 0;
  }
  return bVar1;
}

