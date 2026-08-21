
/* v8::internal::CompilerDispatcher::AbortAll() */

void __thiscall v8::internal::CompilerDispatcher::AbortAll(CompilerDispatcher *this)

{
  bool bVar1;
  CompilerDispatcher *pCVar2;
  long lVar3;
  CompilerDispatcher *pCVar4;
  
  CancelableTaskManager::TryAbortAll(*(CancelableTaskManager **)(this + 0x48));
  pCVar4 = *(CompilerDispatcher **)(this + 0x58);
  while (pCVar4 != this + 0x60) {
    WaitForJobIfRunningOnBackground(this,*(Job **)(pCVar4 + 0x28));
    if (this[0x40] != (CompilerDispatcher)0x0) {
      PrintF("CompilerDispatcher: aborted job %zu\n",*(undefined8 *)(pCVar4 + 0x20));
    }
    pCVar2 = *(CompilerDispatcher **)(pCVar4 + 8);
    if (*(CompilerDispatcher **)(pCVar4 + 8) == (CompilerDispatcher *)0x0) {
      pCVar2 = pCVar4 + 0x10;
      bVar1 = *(CompilerDispatcher **)*(CompilerDispatcher **)pCVar2 != pCVar4;
      pCVar4 = *(CompilerDispatcher **)pCVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pCVar2;
          pCVar2 = (CompilerDispatcher *)(lVar3 + 0x10);
          pCVar4 = *(CompilerDispatcher **)pCVar2;
        } while (*(long *)pCVar4 != lVar3);
      }
    }
    else {
      do {
        pCVar4 = pCVar2;
        pCVar2 = *(CompilerDispatcher **)pCVar4;
      } while (*(CompilerDispatcher **)pCVar4 != (CompilerDispatcher *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
             *)(this + 0x58),*(__tree_node **)(this + 0x60));
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(CompilerDispatcher **)(this + 0x58) = this + 0x60;
  IdentityMapBase::Clear((IdentityMapBase *)(this + 0x70));
  base::Mutex::Lock((Mutex *)(this + 0xb0));
  base::Mutex::Unlock((Mutex *)(this + 0xb0));
  CancelableTaskManager::CancelAndWait(*(CancelableTaskManager **)(this + 0x48));
  return;
}

