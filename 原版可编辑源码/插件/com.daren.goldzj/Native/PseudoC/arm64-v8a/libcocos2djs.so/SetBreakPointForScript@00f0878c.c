
/* v8::internal::Debug::SetBreakPointForScript(v8::internal::Handle<v8::internal::Script>,
   v8::internal::Handle<v8::internal::String>, int*, int*) */

uint __thiscall
v8::internal::Debug::SetBreakPointForScript
          (Debug *this,long *param_2,undefined8 param_3,int *param_4,int *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Debug *pDVar10;
  Isolate *pIVar11;
  ulong local_c8;
  int local_bc;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar5 = *(int *)(this + 0x80) + 1;
  *(int *)(this + 0x80) = iVar5;
  *param_5 = iVar5;
  uVar6 = Factory::NewBreakPoint(*(Factory **)(this + 0x88),iVar5);
  if ((*(uint *)(*param_2 + 0x17) & 0xfffffffe) == 6) {
    uVar4 = WasmScript::SetBreakPoint(param_2,param_4,uVar6);
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return uVar4 & 1;
    }
    goto LAB_00f08a24;
  }
  pIVar11 = *(Isolate **)(this + 0x88);
  uVar1 = *(undefined8 *)(pIVar11 + 0x95a0);
  lVar2 = *(long *)(pIVar11 + 0x95a8);
  *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + 1;
  puVar7 = (ulong *)FindSharedFunctionInfoInScript(this,param_2,*param_4);
  if ((((*puVar7 & 1) == 0) || ((int)*puVar7 != *(int *)(*(long *)(this + 0x88) + 0xa0))) &&
     (uVar8 = EnsureBreakInfo(this,puVar7), (uVar8 & 1) != 0)) {
    PrepareFunctionForDebugExecution(this,puVar7);
    local_c8 = *puVar7;
    iVar5 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_c8);
    if (*param_4 < iVar5) {
      local_c8 = *puVar7;
      iVar5 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_c8);
      *param_4 = iVar5;
    }
    pIVar9 = *(Isolate **)(this + 0x88);
    uVar8 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0xf);
    if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar8;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
      uVar8 = *puVar7;
    }
    iVar5 = *param_4;
    local_c8 = uVar8;
    uVar8 = DebugInfo::CanBreakAtEntry((DebugInfo *)&local_c8);
    if ((uVar8 & 1) == 0) {
      BreakIterator::BreakIterator((BreakIterator *)&local_c8,puVar7);
      BreakIterator::SkipToPosition((BreakIterator *)&local_c8,iVar5);
    }
    else {
      local_bc = 0;
    }
    if (local_bc < *param_4) goto LAB_00f08960;
    *param_4 = local_bc;
    pDVar10 = (Debug *)DebugInfo::SetBreakPoint(*(undefined8 *)(this + 0x88),puVar7,local_bc,uVar6);
    ClearBreakPoints(pDVar10,puVar7);
    ApplyBreakPoints(this,puVar7);
    if (((byte)this[0x38] >> 2 & 1) == 0) {
      Histogram::AddSample((int)*(undefined8 *)(*(long *)(this + 0x30) + 0x9520) + 0xf8);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
    }
    uVar4 = 1;
  }
  else {
LAB_00f08960:
    uVar4 = 0;
  }
  if (pIVar11 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar11 + 0x95a0) = uVar1;
    *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + -1;
    if (*(long *)(pIVar11 + 0x95a8) != lVar2) {
      *(long *)(pIVar11 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar11);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4;
  }
LAB_00f08a24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

