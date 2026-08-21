
/* v8::internal::ProfilerCodeObserver::LogBuiltins() */

void __thiscall v8::internal::ProfilerCodeObserver::LogBuiltins(ProfilerCodeObserver *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long local_90;
  undefined4 local_88 [2];
  long local_80;
  int local_78;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = 0;
  lVar2 = *(long *)(this + 8);
  do {
    local_88[0] = 5;
    local_90 = Builtins::builtin((Builtins *)(lVar2 + 0x9e00),iVar3);
    if (*(int *)(local_90 + 0x17) < 0) {
      local_80 = Code::OffHeapInstructionStart((Code *)&local_90);
    }
    else {
      local_80 = local_90 + 0x3f;
    }
    local_78 = iVar3;
    CodeEventHandlerInternal(this,(CodeEventsContainer *)local_88);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x5bc);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

