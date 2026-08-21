
/* v8::internal::SourceTextModule::AsyncModuleExecutionFulfilled(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>) */

void v8::internal::SourceTextModule::AsyncModuleExecutionFulfilled(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  long *plVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  
  uVar6 = *param_2;
  iVar10 = *(int *)(uVar6 + 0xb) >> 1;
  if (1 < iVar10 - 5U) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","module->status() == kEvaluated || module->status() == kErrored");
  }
  if ((*(uint *)(uVar6 + 0x43) >> 2 & 1) == 0) {
    if (iVar10 == 6) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","module->status() == kErrored");
  }
  if (iVar10 != 5) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","module->status() == kEvaluated");
  }
  lVar9 = 0;
  pIVar1 = param_1 + 0x95a0;
  iVar10 = 4;
  *(uint *)(uVar6 + 0x43) = *(uint *)(uVar6 + 0x43) & 0xfffffffa;
  do {
    uVar7 = *param_2;
    uVar6 = uVar7 & 0xffffffff00000000;
    uVar8 = uVar6 | *(uint *)(uVar7 + 0x2f);
    if (*(uint *)(uVar8 + 3) < 2) {
      if (-1 < lVar9) {
LAB_0112e510:
        if (*(uint *)(uVar7 + 0x33) == *(uint *)(param_1 + 0xa0)) {
          return;
        }
        uVar6 = uVar6 | *(uint *)(uVar7 + 0x33);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar6;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
        }
        lVar9 = JSPromise::Resolve(puVar5,param_1 + 0xa0);
        if (lVar9 != 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
    }
    else if (*(int *)(uVar8 + 7) >> 1 <= lVar9) goto LAB_0112e510;
    uVar6 = uVar6 | *(uint *)(uVar8 + (long)iVar10 + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
    *(uint *)(*puVar5 + 0x3f) = *(uint *)(*puVar5 + 0x3f) - 2 & 0xfffffffe;
    if ((*(int *)(*puVar5 + 0x3f) < 2) && ((*(uint *)(*puVar5 + 0xb) & 0xfffffffe) == 10)) {
      plVar2 = (long *)GetAsyncCycleRoot(param_1,puVar5);
      if ((*(uint *)(*plVar2 + 0xb) & 0xfffffffe) == 0xc) {
        return;
      }
      if ((*(byte *)(*puVar5 + 0x43) >> 1 & 1) == 0) {
        lVar3 = ExecuteModule(param_1,puVar5);
        if (lVar3 == 0) {
          uVar6 = *(ulong *)(param_1 + 0x2bd8);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)pIVar1;
            if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar4 + 1;
            *puVar4 = uVar6;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
          }
          *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
          AsyncModuleExecutionRejected(param_1,puVar5,puVar4);
        }
        else {
          AsyncModuleExecutionFulfilled(param_1,puVar5);
        }
      }
      else {
        ExecuteAsyncModule(param_1,puVar5);
      }
    }
    lVar9 = lVar9 + 1;
    iVar10 = iVar10 + 4;
  } while( true );
}

