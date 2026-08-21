
/* v8::internal::ArrayBufferCollector::FreeAllocations() */

void __thiscall v8::internal::ArrayBufferCollector::FreeAllocations(ArrayBufferCollector *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *local_80;
  long *local_78;
  undefined **local_70;
  ArrayBufferCollector *pAStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)this;
  *(long *)(lVar3 + -0x8830) = *(long *)(lVar3 + -0x8830) - *(long *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = 0;
  if (((*(int *)(*(long *)this + 0x178) == 4) || ((*(byte *)(*(long *)this + 0xad4) & 1) != 0)) ||
     (FLAG_concurrent_array_buffer_freeing == '\0')) {
    PerformFreeAllocations(this);
  }
  else {
    plVar2 = (long *)V8::GetCurrentPlatform();
    local_50 = &local_70;
    local_70 = &PTR_FUN_01cc6ca8;
    pAStack_68 = this;
    MakeCancelableTask((internal *)&local_80,*(long *)this + -0x8850,&local_70);
    local_78 = (long *)0x0;
    if (local_80 != (long *)0x0) {
      local_78 = (long *)((long)local_80 + 0x20);
    }
    local_80 = (long *)0x0;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_78);
    plVar2 = local_78;
    local_78 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_80;
    local_80 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (&local_70 == local_50) {
      pcVar4 = (code *)(*local_50)[4];
    }
    else {
      if (local_50 == (undefined ***)0x0) goto LAB_014ef72c;
      pcVar4 = (code *)(*local_50)[5];
    }
    (*pcVar4)();
  }
LAB_014ef72c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

