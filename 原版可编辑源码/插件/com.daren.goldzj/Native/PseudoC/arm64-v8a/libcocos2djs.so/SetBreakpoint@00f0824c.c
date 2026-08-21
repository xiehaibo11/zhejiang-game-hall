
/* v8::internal::Debug::SetBreakpoint(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::BreakPoint>, int*) */

undefined4 __thiscall
v8::internal::Debug::SetBreakpoint(Debug *this,ulong *param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  Debug *pDVar8;
  Isolate *pIVar9;
  undefined4 uVar10;
  ulong local_c8;
  int local_bc;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pIVar9 = *(Isolate **)(this + 0x88);
  uVar1 = *(undefined8 *)(pIVar9 + 0x95a0);
  lVar2 = *(long *)(pIVar9 + 0x95a8);
  *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + 1;
  uVar5 = EnsureBreakInfo();
  if ((uVar5 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    PrepareFunctionForDebugExecution(this,param_2);
    pIVar6 = *(Isolate **)(this + 0x88);
    local_c8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
      *puVar7 = local_c8;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),local_c8);
      local_c8 = *puVar7;
    }
    iVar3 = *param_4;
    uVar5 = DebugInfo::CanBreakAtEntry((DebugInfo *)&local_c8);
    if ((uVar5 & 1) == 0) {
      BreakIterator::BreakIterator((BreakIterator *)&local_c8,puVar7);
      BreakIterator::SkipToPosition((BreakIterator *)&local_c8,iVar3);
    }
    else {
      local_bc = 0;
    }
    *param_4 = local_bc;
    pDVar8 = (Debug *)DebugInfo::SetBreakPoint(*(undefined8 *)(this + 0x88),puVar7,local_bc,param_3)
    ;
    ClearBreakPoints(pDVar8,puVar7);
    ApplyBreakPoints(this,puVar7);
    if (((byte)this[0x38] >> 2 & 1) == 0) {
      Histogram::AddSample((int)*(undefined8 *)(*(long *)(this + 0x30) + 0x9520) + 0xf8);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
    }
    uVar10 = 1;
  }
  if (pIVar9 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar9 + 0x95a0) = uVar1;
    *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + -1;
    if (*(long *)(pIVar9 + 0x95a8) != lVar2) {
      *(long *)(pIVar9 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar9);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

