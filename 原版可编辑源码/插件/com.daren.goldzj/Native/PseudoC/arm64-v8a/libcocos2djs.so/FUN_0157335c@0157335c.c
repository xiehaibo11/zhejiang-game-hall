
undefined8 FUN_0157335c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  ulong uVar10;
  ulong uVar11;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x178);
  }
  if (DAT_01d470f8 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d470f8 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d470f8;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d470f8 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar5,"V8.Runtime_Runtime_DynamicImportCall",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar6 = local_48;
    local_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_50;
    local_50 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_DynamicImportCall";
    local_98 = pbVar5;
    local_88 = uVar7;
  }
  puVar2 = *(ulong **)(param_3 + 0x95a0);
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if ((uVar11 & 1) != 0) {
    uVar10 = uVar11 & 0xffffffff00000000;
    if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x439) {
      uVar11 = uVar10 | *(uint *)((uVar10 | *(uint *)(uVar11 + 0xb)) + 0xf);
      if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x5b) {
        uVar11 = uVar10 | *(uint *)(uVar11 + 0xb);
      }
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = puVar2;
        if (puVar3 == puVar2) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar11;
        uVar4 = *(uint *)(uVar11 + 0x23);
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
        uVar11 = *puVar8;
        uVar4 = *(uint *)(uVar11 + 0x23);
      }
      while ((uVar4 & 1) != 0) {
        uVar11 = uVar11 & 0xffffffff00000000;
        if (*(short *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar4) - 1)) != 0xa6) break;
        uVar10 = uVar11 | *(uint *)((uVar11 | uVar4) + 0xf);
        if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x5b) {
          uVar10 = uVar11 | *(uint *)(uVar10 + 0xb);
        }
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(param_3 + 0x95a0);
          if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
            puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar10;
        }
        else {
          puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
        }
        uVar11 = *puVar8;
        uVar4 = *(uint *)(uVar11 + 0x23);
      }
      pIVar9 = (Isolate *)
               v8::internal::Isolate::RunHostImportModuleDynamicallyCallback
                         (param_3,puVar8,param_2 + -1);
      pIVar1 = param_3 + 0x180;
      if (pIVar9 != (Isolate *)0x0) {
        pIVar1 = pIVar9;
      }
      uVar7 = *(undefined8 *)pIVar1;
      *(ulong **)(param_3 + 0x95a0) = puVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
        *(ulong **)(param_3 + 0x95a8) = puVar3;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
        plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar6 + 0x28))(plVar6,local_98,local_90,local_88);
      }
      if (local_80 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
      }
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

