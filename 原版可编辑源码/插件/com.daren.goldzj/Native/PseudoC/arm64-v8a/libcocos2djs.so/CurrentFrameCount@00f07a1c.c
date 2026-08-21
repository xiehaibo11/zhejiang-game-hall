
/* v8::internal::Debug::CurrentFrameCount() */

int __thiscall v8::internal::Debug::CurrentFrameCount(Debug *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *local_5f0;
  void *local_5e8;
  undefined8 uStack_5e0;
  StackTraceFrameIterator aSStack_5d8 [1416];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  StackTraceFrameIterator::StackTraceFrameIterator(aSStack_5d8,*(Isolate **)(this + 0x88));
  if (*(int *)(this + 0x48) != 0) {
    while ((local_50 != (long *)0x0 &&
           (iVar2 = (**(code **)(*local_50 + 0x38))(), *(int *)(this + 0x48) != iVar2))) {
      StackTraceFrameIterator::Advance(aSStack_5d8);
    }
  }
  if (local_50 == (long *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar3 = (**(code **)(*local_50 + 8))();
      if (iVar3 == 4) {
        local_5e8 = (void *)0x0;
        uStack_5e0 = 0;
        local_5f0 = (void *)0x0;
        (**(code **)(*local_50 + 0xa0))(local_50,&local_5f0);
        iVar3 = (int)((ulong)((long)local_5e8 - (long)local_5f0) >> 3);
        if (local_5f0 != (void *)0x0) {
          local_5e8 = local_5f0;
          operator_delete(local_5f0);
        }
      }
      else {
        iVar3 = 1;
      }
      iVar2 = iVar3 + iVar2;
      StackTraceFrameIterator::Advance(aSStack_5d8);
    } while (local_50 != (long *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

