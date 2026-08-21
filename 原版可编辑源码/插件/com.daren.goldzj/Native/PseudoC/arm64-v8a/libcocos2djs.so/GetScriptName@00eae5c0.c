
/* v8::StackFrame::GetScriptName() const */

ulong * __thiscall v8::StackFrame::GetScriptName(StackFrame *this)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  Isolate *local_50;
  undefined8 uStack_48;
  long local_40;
  ulong *local_38;
  
  uVar4 = (ulong)*(uint *)(this + 4);
  plVar1 = (long *)(uVar4 << 0x20 | 0x95a0);
  local_38 = (ulong *)*plVar1;
  pIVar6 = (Isolate *)(uVar4 << 0x20);
  uVar7 = *(ulong *)(pIVar6 + 0xa8);
  if (local_38 == *(ulong **)(uVar4 << 0x20 | 0x95a8)) {
    local_38 = (ulong *)internal::HandleScope::Extend(pIVar6);
  }
  *plVar1 = (long)(local_38 + 1);
  *local_38 = uVar7;
  HandleScope::Initialize((HandleScope *)&local_50,(Isolate *)pIVar6);
  puVar2 = (ulong *)internal::StackTraceFrame::GetFileName(this);
  puVar5 = local_38;
  pIVar6 = local_50;
  uVar4 = *puVar2;
  if (((uVar4 & 1) != 0) &&
     (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40)) {
    if (((*local_38 & 1) == 0) || ((int)*local_38 != *(int *)(local_50 + 0xa8))) {
      lVar3 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar3 == 0) {
LAB_00eae718:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar3 + 0xb738) == (code *)0x0) goto LAB_00eae718;
      (**(code **)(lVar3 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar3 + 0xb6b9) = 1;
    }
    if (puVar2 != (ulong *)0x0) {
      *puVar5 = *puVar2;
      goto LAB_00eae6cc;
    }
    *puVar5 = *(ulong *)(pIVar6 + 0xa0);
  }
  puVar5 = (ulong *)0x0;
LAB_00eae6cc:
  *(undefined8 *)(local_50 + 0x95a0) = uStack_48;
  *(int *)(local_50 + 0x95b0) = *(int *)(local_50 + 0x95b0) + -1;
  if (*(long *)(local_50 + 0x95a8) != local_40) {
    *(long *)(local_50 + 0x95a8) = local_40;
    internal::HandleScope::DeleteExtensions(local_50);
  }
  return puVar5;
}

