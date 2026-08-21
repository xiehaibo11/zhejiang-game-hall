
/* v8::internal::SourceTextModule::AsyncModuleExecutionRejected(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>, v8::internal::Handle<v8::internal::Object>)
    */

void v8::internal::SourceTextModule::AsyncModuleExecutionRejected
               (Isolate *param_1,ulong *param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong local_38;
  
  local_38 = *param_2;
  iVar7 = *(int *)(local_38 + 0xb) >> 1;
  if (1 < iVar7 - 5U) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","module->status() == kEvaluated || module->status() == kErrored");
  }
  if ((*(byte *)(local_38 + 0x43) >> 2 & 1) == 0) {
    if (iVar7 == 6) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","module->status() == kErrored");
  }
  pIVar1 = param_1 + 0x95a0;
  Module::RecordError((Module *)&local_38,param_1);
  lVar6 = 0;
  iVar7 = 4;
  *(uint *)(*param_2 + 0x43) = *(uint *)(*param_2 + 0x43) & 0xfffffffa;
  do {
    uVar4 = *param_2;
    uVar3 = uVar4 & 0xffffffff00000000;
    uVar5 = uVar3 | *(uint *)(uVar4 + 0x2f);
    if (*(uint *)(uVar5 + 3) < 2) {
      if (-1 < lVar6) goto LAB_0112eb4c;
    }
    else if (*(int *)(uVar5 + 7) >> 1 <= lVar6) {
LAB_0112eb4c:
      if (*(uint *)(uVar4 + 0x33) == *(uint *)(param_1 + 0xa0)) {
        return;
      }
      uVar3 = uVar3 | *(uint *)(uVar4 + 0x33);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)pIVar1;
        if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar2 + 1;
        *puVar2 = uVar3;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
      }
      JSPromise::Reject(puVar2,param_3,1);
      return;
    }
    uVar3 = uVar3 | *(uint *)(uVar5 + (long)iVar7 + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
    AsyncModuleExecutionRejected(param_1,puVar2,param_3);
    lVar6 = lVar6 + 1;
    iVar7 = iVar7 + 4;
  } while( true );
}

