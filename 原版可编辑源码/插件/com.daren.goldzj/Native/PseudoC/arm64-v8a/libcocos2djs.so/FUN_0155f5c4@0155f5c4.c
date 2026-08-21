
ulong FUN_0155f5c4(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0xf6);
  }
  if (DAT_01d46e58 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e58 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46e58;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d46e58 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_ResolvePossiblyDirectEval",0,0,0,0,0,0
                       ,0,&local_70,0);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_70;
    local_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_ResolvePossiblyDirectEval";
    local_b8 = pbVar4;
    local_a8 = uVar6;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = *param_2;
  uVar11 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = puVar1;
    if (puVar2 == puVar1) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar11;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    uVar11 = *puVar7;
  }
  if (*(int *)(uVar11 + 0x36b) == (int)uVar12) {
    uVar11 = param_2[-3];
    uVar12 = param_2[-2] & 0xffffffff00000000 | (ulong)*(uint *)(param_2[-2] + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_3 + 0x95a0);
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar12;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar12);
    }
    uVar12 = param_2[-4];
    uVar3 = param_2[-5];
    uVar13 = *(ulong *)(param_3 + 0x2bc8);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(param_3 + 0x95a0);
      if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar13;
    }
    else {
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
      uVar13 = *puVar8;
    }
    uVar13 = uVar13 & 0xffffffff00000000 |
             (ulong)*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)(param_3 + 0x95a0);
      if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar9 + 1;
      *puVar9 = uVar13;
    }
    else {
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
    }
    auVar14 = v8::internal::Compiler::ValidateDynamicCompilationSource(param_3,puVar9,param_2 + -1);
    if ((auVar14._8_8_ & 0xff) == 0) {
      if (auVar14._0_8_ == 0) {
        local_70 = (long *)*puVar9;
        uVar6 = v8::internal::Context::ErrorMessageForCodeGenerationFromStrings
                          ((Context *)&local_70);
        puVar10 = (undefined8 *)
                  v8::internal::Factory::NewEvalError((Factory *)param_3,0x152,uVar6,0,0);
        if (puVar10 != (undefined8 *)0x0) {
          v8::internal::Isolate::Throw(param_3,*puVar10,0);
        }
      }
      else {
        puVar7 = (ulong *)v8::internal::Compiler::GetFunctionFromEval
                                    (auVar14._0_8_,puVar7,puVar8,uVar11 >> 1 & 1,0,0xffffffff,
                                     (int)uVar12 >> 1,(int)uVar3 >> 1);
        if (puVar7 != (ulong *)0x0) {
          uVar11 = *puVar7;
          goto LAB_0155f8f4;
        }
      }
      uVar11 = *(ulong *)(param_3 + 0x180);
    }
    else {
      uVar11 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0x36b);
    }
  }
  else {
    uVar11 = *param_2;
  }
LAB_0155f8f4:
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar11;
}

