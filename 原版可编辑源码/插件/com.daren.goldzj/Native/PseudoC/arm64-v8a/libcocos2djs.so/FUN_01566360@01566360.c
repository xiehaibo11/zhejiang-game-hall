
undefined8 FUN_01566360(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Isolate *pIVar7;
  Isolate *pIVar8;
  Isolate *pIVar9;
  undefined8 uVar10;
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
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x170);
  }
  if (DAT_01d46f88 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46f88 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46f88;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46f88 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.Runtime_Runtime_ThrowTypeErrorIfStrict",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar4 = local_58;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_ThrowTypeErrorIfStrict";
    local_a8 = pbVar2;
    local_98 = uVar5;
  }
  iVar3 = v8::internal::GetShouldThrow(param_3,0);
  if (iVar3 == 1) {
    uVar10 = *(undefined8 *)(param_3 + 0xa0);
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if ((*param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsSmi()");
    }
    pIVar9 = param_3 + 0xa0;
    pIVar7 = pIVar9;
    pIVar8 = pIVar9;
    if (((1 < param_1) && (pIVar7 = (Isolate *)(param_2 + -1), param_1 != 2)) &&
       (pIVar8 = (Isolate *)(param_2 + -2), 3 < param_1)) {
      pIVar9 = (Isolate *)(param_2 + -3);
    }
    puVar6 = (undefined8 *)
             v8::internal::Factory::NewTypeError
                       ((Factory *)param_3,(int)*param_2 >> 1,pIVar7,pIVar8,pIVar9);
    uVar10 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar10;
}

