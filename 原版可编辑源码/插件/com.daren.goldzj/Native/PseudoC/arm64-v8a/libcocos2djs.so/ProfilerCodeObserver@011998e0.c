
/* v8::internal::ProfilerCodeObserver::ProfilerCodeObserver(v8::internal::Isolate*) */

void __thiscall
v8::internal::ProfilerCodeObserver::ProfilerCodeObserver
          (ProfilerCodeObserver *this,Isolate *param_1)

{
  long lVar1;
  CodeEntry *pCVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_a0;
  undefined4 local_98 [2];
  long local_90;
  int local_88;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR_CodeEventHandler_01cb63a0;
  *(Isolate **)(this + 8) = param_1;
  CodeMap::CodeMap((CodeMap *)(this + 0x10));
  *(undefined8 *)(this + 0x60) = 0;
  lVar5 = 0x4af;
  puVar6 = (undefined8 *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58c0);
  do {
    pCVar2 = operator_new(0x40);
    uVar3 = *puVar6;
    *(undefined4 *)pCVar2 = 0x5bc0b;
    *(undefined8 *)(pCVar2 + 0x38) = 0;
    *(undefined8 *)(pCVar2 + 0x30) = 0;
    *(undefined8 *)(pCVar2 + 0x28) = 0;
    *(undefined8 *)(pCVar2 + 8) = uVar3;
    *(char **)(pCVar2 + 0x10) = "native V8Runtime";
    *(undefined8 *)(pCVar2 + 0x20) = 0;
    *(undefined8 *)(pCVar2 + 0x18) = 0;
    CodeMap::AddCode((CodeMap *)(this + 0x10),(ulong)puVar6,pCVar2,1);
    lVar5 = lVar5 + -1;
    puVar6 = puVar6 + 3;
  } while (lVar5 != 0);
  lVar5 = *(long *)(this + 8);
  iVar4 = 0;
  do {
    local_98[0] = 5;
    local_a0 = Builtins::builtin((Builtins *)(lVar5 + 0x9e00),iVar4);
    if (*(int *)(local_a0 + 0x17) < 0) {
      local_90 = Code::OffHeapInstructionStart((Code *)&local_a0);
    }
    else {
      local_90 = local_a0 + 0x3f;
    }
    local_88 = iVar4;
    CodeEventHandlerInternal(this,(CodeEventsContainer *)local_98);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x5bc);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

