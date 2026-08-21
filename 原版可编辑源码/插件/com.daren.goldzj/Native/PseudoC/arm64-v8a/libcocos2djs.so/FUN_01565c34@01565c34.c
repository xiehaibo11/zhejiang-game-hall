
undefined8 FUN_01565c34(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  Isolate *pIVar8;
  Isolate *pIVar9;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x168);
  }
  if (DAT_01d46f78 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46f78 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46f78;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46f78 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_ThrowRangeError",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar3 = local_58;
    local_58 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_60;
    local_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_ThrowRangeError";
    local_a8 = pbVar2;
    local_98 = uVar4;
  }
  if (v8::internal::FLAG_correctness_fuzzer_suppressions != '\0') {
    if ((*param_2 & 1) != 0) goto LAB_01565e98;
    if ((*param_2 & 0xfffffffe) == 0x170) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((*param_2 & 1) == 0) {
    pIVar9 = param_3 + 0xa0;
    pIVar7 = pIVar9;
    pIVar8 = pIVar9;
    if (((1 < param_1) && (pIVar7 = (Isolate *)(param_2 + -1), param_1 != 2)) &&
       (pIVar8 = (Isolate *)(param_2 + -2), 3 < param_1)) {
      pIVar9 = (Isolate *)(param_2 + -3);
    }
    puVar5 = (undefined8 *)
             v8::internal::Factory::NewRangeError
                       ((Factory *)param_3,(int)*param_2 >> 1,pIVar7,pIVar8,pIVar9);
    uVar6 = v8::internal::Isolate::Throw(param_3,*puVar5,0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
      plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_a8,local_a0,local_98);
    }
    if (local_90 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
    }
    return uVar6;
  }
LAB_01565e98:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

