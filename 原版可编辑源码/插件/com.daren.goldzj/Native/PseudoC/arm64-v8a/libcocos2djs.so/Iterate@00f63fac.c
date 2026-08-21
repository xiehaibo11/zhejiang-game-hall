
/* v8::internal::ThreadManager::Iterate(v8::internal::RootVisitor*) */

void __thiscall v8::internal::ThreadManager::Iterate(ThreadManager *this,RootVisitor *param_1)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(this + 0x40) + 0x10);
  if (lVar4 != *(long *)(*(long *)(*(long *)(this + 0x40) + 0x20) + 0x40) && lVar4 != 0) {
    do {
      pcVar3 = (char *)HandleScopeImplementer::Iterate(param_1,*(char **)(lVar4 + 8));
      pcVar3 = (char *)Isolate::Iterate(*(Isolate **)(this + 0x48),param_1,pcVar3);
      Relocatable::Iterate(param_1,pcVar3);
      plVar1 = (long *)(lVar4 + 0x20);
      plVar2 = (long *)(lVar4 + 0x10);
      lVar4 = 0;
      if (*plVar2 != *(long *)(*plVar1 + 0x40)) {
        lVar4 = *plVar2;
      }
    } while (lVar4 != 0);
  }
  return;
}

