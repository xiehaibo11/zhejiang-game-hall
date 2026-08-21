
/* v8::internal::ThreadState::AllocateSpace() */

void __thiscall v8::internal::ThreadState::AllocateSpace(ThreadState *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  
  iVar1 = HandleScopeImplementer::ArchiveSpacePerThread();
  iVar2 = Debug::ArchiveSpacePerThread();
  iVar3 = Bootstrapper::ArchiveSpacePerThread();
  iVar4 = Relocatable::ArchiveSpacePerThread();
  uVar7 = (ulong)(iVar1 + iVar2 + iVar3 + iVar4 + 0x118);
  pvVar5 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
  if (pvVar5 == (void *)0x0) {
    plVar6 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar6 + 0x18))();
    pvVar5 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *(void **)(this + 8) = pvVar5;
  return;
}

