
/* v8::internal::SourceTextModule::ExecuteAsyncModule(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>) */

void v8::internal::SourceTextModule::ExecuteAsyncModule(Factory *param_1,long *param_2)

{
  Factory *pFVar1;
  undefined8 uVar2;
  ulong *puVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long local_60;
  long lStack_58;
  
  if ((*(int *)(*param_2 + 0xb) >> 1 & 0xfffffffeU) != 4) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","module->status() == kEvaluating || module->status() == kEvaluated"
            );
  }
  puVar8 = (uint *)(*param_2 + 0x43);
  pFVar1 = param_1 + 0x95a0;
  *puVar8 = *puVar8 & 0xfffffffe | 4;
  uVar2 = Factory::NewJSPromise(param_1);
  uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar9;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar3;
  }
  uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0x8f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar9;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  pvVar4 = operator_new__(0,(nothrow_t *)&std::nothrow);
  if (pvVar4 == (void *)0x0) {
    plVar5 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x18))();
    pvVar4 = operator_new__(0,(nothrow_t *)&std::nothrow);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  lVar6 = Factory::NewJSBoundFunction(param_1,puVar3,param_2,pvVar4,0);
  if (lVar6 != 0) {
    uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pFVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)pFVar1 = puVar3 + 1;
      *puVar3 = uVar9;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      uVar9 = *puVar3;
    }
    uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0x93);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pFVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)pFVar1 = puVar3 + 1;
      *puVar3 = uVar9;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    }
    lVar7 = Factory::NewJSBoundFunction(param_1,puVar3,param_2,pvVar4,0);
    if (lVar7 != 0) {
      uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x413);
      local_60 = lVar6;
      lStack_58 = lVar7;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)pFVar1;
        if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend((Isolate *)param_1);
        }
        *(ulong **)pFVar1 = puVar3 + 1;
        *puVar3 = uVar9;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      }
      lVar6 = Execution::CallBuiltin(param_1,puVar3,uVar2,2,&local_60);
      if ((lVar6 != 0) && (lVar6 = InnerExecuteAsyncModule(param_1,param_2,uVar2), lVar6 != 0)) {
        operator_delete__(pvVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

