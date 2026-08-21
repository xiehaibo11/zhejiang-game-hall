
/* v8::internal::Runtime_ResolvePossiblyDirectEval(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_ResolvePossiblyDirectEval(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  ulong local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_0155f5c4(param_1,param_2,param_3);
    return uVar10;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar2;
    if (puVar3 == puVar2) {
      puVar5 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar10;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    uVar10 = *puVar5;
  }
  if (*(int *)(uVar10 + 0x36b) == (int)uVar11) {
    uVar10 = param_2[-3];
    uVar11 = param_2[-2] & 0xffffffff00000000 | (ulong)*(uint *)(param_2[-2] + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar11;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    }
    uVar11 = param_2[-4];
    uVar4 = param_2[-5];
    uVar12 = *(ulong *)(param_3 + 0x2bc8);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar12;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
      uVar12 = *puVar6;
    }
    uVar12 = uVar12 & 0xffffffff00000000 |
             (ulong)*(uint *)((uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar12;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
    }
    auVar13 = Compiler::ValidateDynamicCompilationSource(param_3,puVar7,param_2 + -1);
    if ((auVar13._8_8_ & 0xff) == 0) {
      if (auVar13._0_8_ == 0) {
        local_68 = *puVar7;
        uVar8 = Context::ErrorMessageForCodeGenerationFromStrings((Context *)&local_68);
        puVar9 = (undefined8 *)Factory::NewEvalError((Factory *)param_3,0x152,uVar8,0,0);
        if (puVar9 != (undefined8 *)0x0) {
          Isolate::Throw(param_3,*puVar9,0);
        }
      }
      else {
        puVar5 = (ulong *)Compiler::GetFunctionFromEval
                                    (auVar13._0_8_,puVar5,puVar6,uVar10 >> 1 & 1,0,0xffffffff,
                                     (int)uVar11 >> 1,(int)uVar4 >> 1);
        if (puVar5 != (ulong *)0x0) {
          uVar10 = *puVar5;
          goto LAB_0155f550;
        }
      }
      uVar10 = *(ulong *)(param_3 + 0x180);
    }
    else {
      uVar10 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x36b);
    }
  }
  else {
    uVar10 = *param_2;
  }
LAB_0155f550:
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

