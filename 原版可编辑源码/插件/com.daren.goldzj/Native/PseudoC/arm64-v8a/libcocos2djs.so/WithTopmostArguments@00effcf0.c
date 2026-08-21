
/* v8::internal::DebugEvaluate::WithTopmostArguments(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>) */

void v8::internal::DebugEvaluate::WithTopmostArguments(Isolate *param_1,undefined8 param_2)

{
  Isolate *pIVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong local_618;
  StackFrameIterator aSStack_610 [1416];
  JavaScriptFrame *local_88;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar11 = *(long *)(param_1 + 0xb6c8);
  pIVar1 = param_1 + 0x95a0;
  uVar2 = *(undefined1 *)(lVar11 + 0xc);
  *(undefined1 *)(lVar11 + 0xc) = 1;
  StackFrameIterator::StackFrameIterator(aSStack_610,param_1);
  if (local_88 != (JavaScriptFrame *)0x0) {
    JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_610);
  }
  uVar4 = (**(code **)(*(long *)local_88 + 0x60))();
  uVar4 = uVar4 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  uVar6 = Factory::NewJSObjectWithNullProto((Factory *)param_1);
  uVar7 = Accessors::FunctionGetArguments(local_88,0);
  lVar8 = JSObject::SetOwnPropertyIgnoreAttributes(uVar6,param_1 + 0x4c8,uVar7,0);
  if (lVar8 != 0) {
    uVar4 = (**(code **)(*(long *)local_88 + 0x50))();
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar1;
      if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar9 + 1;
      *puVar9 = uVar4;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      uVar4 = *puVar9;
    }
    if ((((uVar4 & 1) != 0) && ((int)uVar4 == *(int *)(param_1 + 0xa8))) ||
       (lVar8 = JSObject::SetOwnPropertyIgnoreAttributes(uVar6,param_1 + 0xa48,puVar9,0), lVar8 != 0
       )) {
      puVar10 = (undefined8 *)ScopeInfo::CreateForWithScope(param_1,0);
      local_618 = *puVar10;
      ScopeInfo::SetIsDebugEvaluateScope((ScopeInfo *)&local_618);
      uVar6 = Factory::NewDebugEvaluateContext((Factory *)param_1,puVar5,puVar10,uVar6,0,0);
      uVar4 = *puVar5 & 0xffffffff00000000;
      uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*puVar5 + 0xaf)) + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar1;
        if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = uVar4;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      }
      local_618 = *puVar5;
      uVar4 = Context::global_proxy((Context *)&local_618);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar4;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      }
      lVar8 = Compiler::GetFunctionFromEval
                        (param_2,puVar9,uVar6,0,0,0xffffffff,0xffffffff,0xffffffff);
      if (lVar8 != 0) {
        Execution::Call(param_1,lVar8,puVar5,0,0);
      }
      *(undefined1 *)(lVar11 + 0xc) = uVar2;
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

