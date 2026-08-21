
undefined8 FUN_014c9764(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  Isolate *pIVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined1 auVar12 [16];
  ulong local_48;
  
  pIVar1 = param_3 + 0x95a0;
  puVar11 = (ulong *)(param_2 - (param_1 * 8 + -0x10));
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  pIVar9 = param_3 + 0xa0;
  local_48 = *puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar11 + 0xf);
  pIVar2 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar2 = pIVar9;
  }
  uVar5 = v8::internal::Context::global_proxy((Context *)&local_48);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
  }
  uVar5 = v8::internal::Builtins::AllowDynamicFunction(param_3,puVar11,puVar6);
  if ((uVar5 & 1) == 0) {
    v8::internal::Isolate::CountUsage(param_3,0x23);
  }
  else {
    uVar5 = *puVar11 & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*puVar11 + 0xf)) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar5;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
    }
    auVar12 = v8::internal::Compiler::ValidateDynamicCompilationSource(param_3,puVar7,pIVar2);
    pIVar9 = pIVar2;
    if ((auVar12._8_8_ & 0xff) == 0) {
      uVar5 = *puVar11 & 0xffffffff00000000;
      uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*puVar11 + 0xf)) - 1)) + 0x13)
      ;
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar11 = *(ulong **)pIVar1;
        if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
          puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar11 + 1;
        *puVar11 = uVar5;
      }
      else {
        puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
      }
      lVar8 = v8::internal::Compiler::GetFunctionFromValidatedString
                        (puVar11,auVar12._0_8_,0,0xffffffff);
      if ((lVar8 == 0) ||
         (pIVar9 = (Isolate *)v8::internal::Execution::Call(param_3,lVar8,puVar6,0,0),
         pIVar9 == (Isolate *)0x0)) {
        pIVar9 = param_3 + 0x180;
      }
    }
  }
  uVar10 = *(undefined8 *)pIVar9;
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

