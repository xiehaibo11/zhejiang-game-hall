
/* v8::internal::Debug::PerformSideEffectCheck(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Handle<v8::internal::Object>) */

undefined4 __thiscall
v8::internal::Debug::PerformSideEffectCheck(Debug *this,ulong *param_2,ulong *param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  undefined4 uVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  IsCompiledScope local_78 [16];
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_68 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_68,*(Isolate **)(this + 0x88));
  IsCompiledScope::IsCompiledScope
            (local_78,*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb));
  uVar10 = *param_2;
  uVar9 = uVar10 & 0xffffffff00000000;
  if (*(int *)((uVar9 | *(uint *)(uVar10 + 0x17)) + 0x27) == 0x42) {
LAB_00f0d5c0:
    uVar9 = Compiler::Compile(param_2,0,local_78);
    uVar11 = 0;
    if ((uVar9 & 1) == 0) goto switchD_00f0d6a0_caseD_3;
  }
  else {
    uVar2 = *(uint *)((uVar9 | *(uint *)(uVar10 + 0xb)) + 3);
    if ((uVar2 == 0x84) ||
       (((uVar2 & 1) != 0 &&
        (*(ushort *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar2) - 1)) - 0x95 < 2))))
    goto LAB_00f0d5c0;
  }
  pIVar6 = *(Isolate **)(this + 0x88);
  uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar9;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar9);
  }
  puVar8 = (ulong *)GetOrCreateDebugInfo(this,puVar7);
  local_80 = (void *)*puVar8;
  uVar5 = DebugInfo::GetSideEffectState((DebugInfo *)&local_80,*(Isolate **)(this + 0x88));
  uVar11 = 1;
  switch(uVar5) {
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
      local_90 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
      local_88 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_90);
      String::ToCString(&local_80,&local_88,1,1,0);
      PrintF("[debug-evaluate] Function %s failed side effect check.\n",local_80);
      pvVar4 = local_80;
      local_80 = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
      }
    }
LAB_00f0d70c:
    this[0x10] = (Debug)0x1;
    Isolate::TerminateExecution(*(Isolate **)(this + 0x88));
    uVar11 = 0;
    break;
  case 2:
    puVar1 = (uint *)(*puVar7 + 3);
    uVar2 = *puVar1;
    uVar9 = *puVar7 & 0xffffffff00000000;
    if ((((uVar2 & 1) == 0) ||
        (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar2) - 1)) != 0x86)) &&
       ((uVar2 = *puVar1, (uVar2 & 1) == 0 ||
        (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar2) - 1)) != 0x61)))) {
      uVar9 = *param_3;
      if (((((uVar9 & 1) != 0) &&
           (uVar10 = uVar9 & 0xffffffff00000000 | 7,
           *(short *)(uVar10 + *(uint *)(uVar9 - 1)) != 0x42)) &&
          (0x40 < *(ushort *)(uVar10 + *(uint *)(uVar9 - 1)))) &&
         (uVar9 = TemporaryObjectsTracker::HasObject
                            (*(TemporaryObjectsTracker **)(this + 0x20),param_3), (uVar9 & 1) == 0))
      {
        if (FLAG_trace_side_effect_free_debug_evaluate != '\0') {
          PrintF("[debug-evaluate] failed runtime side effect check.\n");
        }
        goto LAB_00f0d70c;
      }
    }
    else {
      PrepareFunctionForDebugExecution(this,puVar7);
      pIVar6 = *(Isolate **)(this + 0x88);
      uVar9 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0x13);
      if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar6 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar9;
      }
      else {
        CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar9);
      }
      DebugEvaluate::ApplySideEffectChecks();
      local_80 = (void *)*puVar8;
      DebugInfo::SetDebugExecutionMode((DebugInfo *)&local_80,0x20);
    }
    uVar11 = 1;
    break;
  case 3:
    break;
  }
switchD_00f0d6a0_caseD_3:
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_68);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

