
undefined8 FUN_0150686c(undefined8 param_1,undefined8 *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  ushort uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte **local_f0;
  byte *local_e8;
  char *local_e0;
  undefined8 local_d8;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  undefined1 local_34 [4];
  
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x13c);
  }
  if (DAT_01d46c40 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c40 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46c40;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d46c40 & 5) != 0) {
    local_a8 = (long *)0x0;
    local_a0 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.Runtime_Runtime_StoreInArrayLiteralIC_Slow",0,0,0,0,0,
                       0,0,&local_a8,0);
    plVar4 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_f0 = &local_e8;
    local_e0 = "V8.Runtime_Runtime_StoreInArrayLiteralIC_Slow";
    local_e8 = pbVar2;
    local_d8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_34[0] = 0;
  v8::internal::LookupIterator::PropertyOrElement
            ((LookupIterator *)&local_a8,param_3,param_2 + -1,param_2 + -2,local_34,1);
  uVar3 = v8::internal::JSObject::DefineOwnPropertyIgnoreAttributes(&local_a8,param_2,0,1,1);
  if ((uVar3 & 0xff) == 0) {
    v8::V8::FromJustIsNothing();
  }
  if (0xff < uVar3) {
    uVar6 = *param_2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
    }
    if (local_d0 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "JSObject::DefineOwnPropertyIgnoreAttributes( &it, value, NONE, Just(ShouldThrow::kThrowOnError)) .FromJust()"
          );
}

