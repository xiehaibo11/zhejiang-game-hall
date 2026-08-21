
/* v8::internal::ThreadManager::RestoreThread() */

undefined4 __thiscall v8::internal::ThreadManager::RestoreThread(ThreadManager *this)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar1 = ThreadId::GetCurrentThreadId();
  if (*(int *)(this + 0x2c) == iVar1) {
    *(undefined4 *)(this + 0x2c) = 0xffffffff;
    lVar2 = Isolate::FindPerThreadDataForThisThread(*(Isolate **)(this + 0x48));
    **(undefined4 **)(this + 0x30) = 0xffffffff;
    lVar4 = *(long *)(this + 0x30);
    lVar5 = *(long *)(*(long *)(lVar4 + 0x20) + 0x38);
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
    *(long *)(lVar4 + 0x18) = lVar5;
    *(long *)(lVar5 + 0x10) = lVar4;
    *(long *)(*(long *)(lVar4 + 0x10) + 0x18) = lVar4;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    uVar6 = 1;
  }
  else {
    lVar2 = *(long *)(this + 0x48);
    base::RecursiveMutex::Lock((RecursiveMutex *)(lVar2 + 0x9530));
    if (*(int *)(this + 0x2c) != -1) {
      EagerlyArchiveThread(this);
    }
    lVar4 = Isolate::FindPerThreadDataForThisThread(*(Isolate **)(this + 0x48));
    if ((lVar4 == 0) || (puVar7 = *(undefined4 **)(lVar4 + 0x18), puVar7 == (undefined4 *)0x0)) {
      Isolate::InitializeThreadLocal(*(Isolate **)(this + 0x48));
      StackGuard::InitThread((ExecutionAccess *)(*(long *)(this + 0x48) + 0x48));
      Debug::ThreadInit(*(Debug **)(*(long *)(this + 0x48) + 0xb6c8));
      uVar6 = 0;
    }
    else {
      pcVar3 = (char *)HandleScopeImplementer::RestoreThread
                                 (*(HandleScopeImplementer **)(*(long *)(this + 0x48) + 0x95c0),
                                  *(char **)(puVar7 + 2));
      pcVar3 = (char *)Isolate::RestoreThread(*(Isolate **)(this + 0x48),pcVar3);
      pcVar3 = (char *)Relocatable::RestoreState(*(Isolate **)(this + 0x48),pcVar3);
      pcVar3 = (char *)Debug::RestoreDebug(*(Debug **)(*(long *)(this + 0x48) + 0xb6c8),pcVar3);
      pcVar3 = (char *)StackGuard::RestoreStackGuard
                                 ((StackGuard *)(*(long *)(this + 0x48) + 0x48),pcVar3);
      pcVar3 = (char *)RegExpStack::RestoreStack
                                 (*(RegExpStack **)(*(long *)(this + 0x48) + 0xb618),pcVar3);
      Bootstrapper::RestoreState(*(Bootstrapper **)(*(long *)(this + 0x48) + 0x9508),pcVar3);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *puVar7 = 0xffffffff;
      uVar6 = 1;
      *(undefined8 *)(*(long *)(puVar7 + 4) + 0x18) = *(undefined8 *)(puVar7 + 6);
      *(undefined8 *)(*(long *)(puVar7 + 6) + 0x10) = *(undefined8 *)(puVar7 + 4);
      lVar4 = *(long *)(*(long *)(puVar7 + 8) + 0x38);
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar4 + 0x10);
      *(long *)(puVar7 + 6) = lVar4;
      *(undefined4 **)(lVar4 + 0x10) = puVar7;
      *(undefined4 **)(*(long *)(puVar7 + 4) + 0x18) = puVar7;
    }
    base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar2 + 0x9530));
  }
  return uVar6;
}

