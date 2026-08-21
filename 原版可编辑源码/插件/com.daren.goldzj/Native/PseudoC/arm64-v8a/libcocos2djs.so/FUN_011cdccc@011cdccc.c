
undefined8 FUN_011cdccc(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  ushort uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
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
  
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x19e);
  }
  if (DAT_01d3fae8 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fae8 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d3fae8;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3fae8 & 5) != 0) {
    local_a8 = (long *)0x0;
    local_a0 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_HasProperty",0,0,0,0,0,0,0,&local_a8,0
                      );
    plVar5 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_f0 = &local_e8;
    local_e0 = "V8.Runtime_Runtime_HasProperty";
    local_e8 = pbVar3;
    local_d8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar7 = param_2 + -1;
  uVar9 = *param_2;
  if (((uVar9 & 1) == 0) ||
     (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0xa9)) {
    puVar8 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x40,puVar7,param_2,0);
    uVar10 = v8::internal::Isolate::Throw(param_3,*puVar8,0);
  }
  else {
    uVar9 = *puVar7;
    if (((uVar9 & 1) == 0) ||
       (0x40 < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)))) {
      puVar7 = (ulong *)v8::internal::Object::ConvertToName(param_3,puVar7);
    }
    if (puVar7 != (ulong *)0x0) {
      v8::internal::LookupIterator::PropertyOrElement
                ((LookupIterator *)&local_a8,(ulong)*(uint *)((long)param_2 + 4) << 0x20,param_2,
                 puVar7,param_2,3);
      uVar4 = v8::internal::JSReceiver::HasProperty((LookupIterator *)&local_a8);
      if ((uVar4 & 0xff) != 0) {
        lVar1 = 0xb8;
        if (uVar4 < 0x100) {
          lVar1 = 0xc0;
        }
        uVar10 = *(undefined8 *)(param_3 + lVar1);
        goto LAB_011cdeb8;
      }
    }
    uVar10 = *(undefined8 *)(param_3 + 0x180);
  }
LAB_011cdeb8:
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_e8,local_e0,local_d8);
  }
  if (local_d0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
  }
  return uVar10;
}

