
/* v8::debug::Script::SetBreakpointOnScriptEntry(int*) const */

uint __thiscall v8::debug::Script::SetBreakpointOnScriptEntry(Script *this,int *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  Debug *pDVar6;
  ScriptIterator aSStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pIVar5 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
  internal::SharedFunctionInfo::ScriptIterator::ScriptIterator(aSStack_58,pIVar5);
  do {
    uVar3 = internal::SharedFunctionInfo::ScriptIterator::Next(aSStack_58);
    if ((int)uVar3 == 0) {
      uVar2 = 0;
      goto LAB_00ed1530;
    }
  } while ((*(uint *)(uVar3 + 0x1b) >> 0x1c & 1) == 0);
  pDVar6 = *(Debug **)(pIVar5 + 0xb6c8);
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar4 = (ulong *)internal::HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar3);
  }
  uVar2 = internal::Debug::SetBreakpointForFunction(pDVar6,puVar4,pIVar5 + 200,param_1);
LAB_00ed1530:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

