
/* v8::internal::ThreadManager::IterateArchivedThreads(v8::internal::ThreadVisitor*) */

void __thiscall
v8::internal::ThreadManager::IterateArchivedThreads(ThreadManager *this,ThreadVisitor *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(this + 0x40) + 0x10);
  if (lVar3 != *(long *)(*(long *)(*(long *)(this + 0x40) + 0x20) + 0x40) && lVar3 != 0) {
    do {
      HandleScopeImplementer::ArchiveSpacePerThread();
      Isolate::IterateThread(*(ThreadVisitor **)(this + 0x48),(char *)param_1);
      plVar1 = (long *)(lVar3 + 0x20);
      plVar2 = (long *)(lVar3 + 0x10);
      lVar3 = 0;
      if (*plVar2 != *(long *)(*plVar1 + 0x40)) {
        lVar3 = *plVar2;
      }
    } while (lVar3 != 0);
  }
  return;
}

