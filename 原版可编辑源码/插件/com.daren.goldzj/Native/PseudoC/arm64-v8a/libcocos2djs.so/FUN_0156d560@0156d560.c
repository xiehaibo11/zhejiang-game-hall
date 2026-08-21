
undefined8 FUN_0156d560(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte **local_100;
  byte *local_f8;
  char *local_f0;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  Isolate *local_a0;
  Isolate *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x148);
  }
  if (DAT_01d470a8 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d470a8 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d470a8;
  local_100 = (byte **)0x0;
  if ((*DAT_01d470a8 & 5) != 0) {
    local_b8 = (long *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_CreateAsyncFromSyncIterator",0,0,0,0,0
                       ,0,0,&local_b8,0);
    plVar3 = (long *)CONCAT44(uStack_ac,local_b0);
    local_b0 = 0;
    uStack_ac = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_100 = &local_f8;
    local_f0 = "V8.Runtime_Runtime_CreateAsyncFromSyncIterator";
    local_f8 = pbVar2;
    local_e8 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)) {
    puVar6 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0xa8,0,0,0);
    uVar9 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
  }
  else {
    pIVar5 = param_3 + 0x848;
    local_78 = param_2;
    if (*(ushort *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9) {
      local_78 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                    (param_3,param_2,0xffffffffffffffff);
    }
    uVar7 = *(ulong *)pIVar5;
    uVar8 = 3;
    if ((*(short *)(((ulong)param_3 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x40) &&
       (uVar8 = 3, (*(byte *)(uVar7 + 7) & 1) != 0)) {
      uVar8 = 0;
    }
    local_b8 = (long *)CONCAT44(local_b8._4_4_,uVar8);
    uStack_ac = 0;
    uStack_a8 = 0xc0;
    local_a0 = param_3;
    if ((*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) & 0xffe0) ==
        0x20) {
      pIVar5 = (Isolate *)v8::internal::StringTable::LookupString(param_3,pIVar5);
    }
    uStack_90 = 0;
    uStack_80 = 0;
    local_68 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    local_98 = pIVar5;
    local_88 = param_2;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_b8);
    if (local_b8._4_4_ == 4) {
      pIVar5 = local_a0 + 0xa0;
    }
    else {
      pIVar5 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_b8,false);
      if (pIVar5 == (Isolate *)0x0) {
        uVar9 = *(undefined8 *)(param_3 + 0x180);
        goto LAB_0156d7c4;
      }
    }
    puVar6 = (undefined8 *)
             v8::internal::Factory::NewJSAsyncFromSyncIterator((Factory *)param_3,param_2,pIVar5);
    uVar9 = *puVar6;
  }
LAB_0156d7c4:
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_f8,local_f0,local_e8);
  }
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  return uVar9;
}

