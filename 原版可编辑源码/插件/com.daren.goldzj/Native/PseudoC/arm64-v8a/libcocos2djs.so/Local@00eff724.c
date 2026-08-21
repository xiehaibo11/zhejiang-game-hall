
/* v8::internal::DebugEvaluate::Local(v8::internal::Isolate*, v8::internal::StackFrameId, int,
   v8::internal::Handle<v8::internal::String>, bool) */

Isolate * v8::internal::DebugEvaluate::Local
                    (Isolate *param_1,undefined4 param_2,int param_3,undefined8 param_4,
                    ulong param_5)

{
  undefined1 uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  Isolate *pIVar7;
  long lVar8;
  ulong *local_6f8;
  undefined8 local_6f0;
  undefined8 *local_6e8;
  void *local_6e0;
  void *local_6d8;
  Isolate *local_6c8;
  FrameInspector aFStack_6c0 [56];
  ulong *local_688;
  ScopeIterator aSStack_670 [96];
  StackTraceFrameIterator aSStack_610 [1416];
  JavaScriptFrame *local_88;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)(param_1 + 0xb6c8);
  uVar1 = *(undefined1 *)(lVar8 + 0xc);
  *(undefined1 *)(lVar8 + 0xc) = 1;
  StackTraceFrameIterator::StackTraceFrameIterator(aSStack_610,param_1,param_2);
  uVar3 = (**(code **)(*(long *)local_88 + 8))();
  if ((0x14 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x119010U) == 0)) {
    pIVar7 = param_1 + 0xa0;
    goto LAB_00eff934;
  }
  ContextBuilder::ContextBuilder((ContextBuilder *)&local_6e8,param_1,local_88,param_3);
  if (((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) ||
     ((int)*(ulong *)(param_1 + 0x2bd8) != *(int *)(param_1 + 0xa8))) {
LAB_00eff910:
    pIVar7 = (Isolate *)0x0;
  }
  else {
    local_6f0 = *local_6e8;
    uVar4 = Context::global_proxy((Context *)&local_6f0);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      local_6f8 = *(ulong **)(param_1 + 0x95a0);
      if (local_6f8 == *(ulong **)(param_1 + 0x95a8)) {
        local_6f8 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = local_6f8 + 1;
      *local_6f8 = uVar4;
    }
    else {
      local_6f8 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
    uVar4 = *local_688 & 0xffffffff00000000 | (ulong)*(uint *)(*local_688 + 0xb);
    if (*(CanonicalHandleScope **)(local_6c8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(local_6c8 + 0x95a0);
      if (puVar5 == *(ulong **)(local_6c8 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(local_6c8);
      }
      *(ulong **)(local_6c8 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar4;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(local_6c8 + 0x95b8),uVar4);
    }
    lVar6 = Compiler::GetFunctionFromEval
                      (param_4,puVar5,local_6e8,0,0,0xffffffff,0xffffffff,0xffffffff);
    if (lVar6 == 0) goto LAB_00eff910;
    if ((param_5 & 1) == 0) {
      pIVar7 = (Isolate *)Execution::Call(param_1,lVar6,local_6f8,0,0);
    }
    else {
      Debug::StartSideEffectCheckMode(*(Debug **)(param_1 + 0xb6c8));
      pIVar7 = (Isolate *)Execution::Call(param_1,lVar6,local_6f8,0,0);
      Debug::StopSideEffectCheckMode(*(Debug **)(param_1 + 0xb6c8));
    }
    if (pIVar7 != (Isolate *)0x0) {
      ContextBuilder::UpdateValues((ContextBuilder *)&local_6e8);
    }
  }
  ScopeIterator::~ScopeIterator(aSStack_670);
  FrameInspector::~FrameInspector(aFStack_6c0);
  if (local_6e0 != (void *)0x0) {
    local_6d8 = local_6e0;
    operator_delete(local_6e0);
  }
LAB_00eff934:
  *(undefined1 *)(lVar8 + 0xc) = uVar1;
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return pIVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

