
/* v8::internal::ThreadManager::EagerlyArchiveThread() */

void __thiscall v8::internal::ThreadManager::EagerlyArchiveThread(ThreadManager *this)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(this + 0x30);
  lVar3 = *(long *)(*(long *)(lVar2 + 0x20) + 0x40);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar2 + 0x18) = lVar3;
  *(long *)(lVar3 + 0x10) = lVar2;
  *(long *)(*(long *)(lVar2 + 0x10) + 0x18) = lVar2;
  pcVar1 = (char *)HandleScopeImplementer::ArchiveThread
                             (*(HandleScopeImplementer **)(*(long *)(this + 0x48) + 0x95c0),
                              *(char **)(lVar2 + 8));
  pcVar1 = (char *)Isolate::ArchiveThread(*(Isolate **)(this + 0x48),pcVar1);
  pcVar1 = (char *)Relocatable::ArchiveState(*(Isolate **)(this + 0x48),pcVar1);
  pcVar1 = (char *)Debug::ArchiveDebug(*(Debug **)(*(long *)(this + 0x48) + 0xb6c8),pcVar1);
  pcVar1 = (char *)StackGuard::ArchiveStackGuard
                             ((StackGuard *)(*(long *)(this + 0x48) + 0x48),pcVar1);
  pcVar1 = (char *)RegExpStack::ArchiveStack
                             (*(RegExpStack **)(*(long *)(this + 0x48) + 0xb618),pcVar1);
  Bootstrapper::ArchiveState(*(Bootstrapper **)(*(long *)(this + 0x48) + 0x9508),pcVar1);
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

