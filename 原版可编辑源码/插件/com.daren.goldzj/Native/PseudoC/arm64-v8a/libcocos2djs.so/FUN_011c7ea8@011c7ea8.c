
undefined8 FUN_011c7ea8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  undefined8 uVar9;
  ulong uVar10;
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
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x1ad);
  }
  if (DAT_01d3fa38 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fa38 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d3fa38;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3fa38 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_ObjectGetOwnPropertyNamesTryFast",0,0,
                       0,0,0,0,0,&local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_ObjectGetOwnPropertyNamesTryFast";
    local_a8 = pbVar3;
    local_98 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if (((uVar10 & 1) == 0) ||
     (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9)) {
    param_2 = (ulong *)v8::internal::Object::ToObjectImpl(param_3,param_2,0);
  }
  if (param_2 != (ulong *)0x0) {
    plVar5 = (long *)(*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1));
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_3 + 0x95a0);
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
      *puVar7 = (ulong)plVar5;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),(ulong)plVar5);
      plVar5 = (long *)*puVar7;
    }
    uVar2 = *(uint *)((long)plVar5 + 0xb) >> 10 & 0x3ff;
    if (uVar2 == 0) {
LAB_011c8074:
      uVar9 = 0x10;
    }
    else {
      local_60 = plVar5;
      uVar4 = v8::internal::Map::NumberOfEnumerableProperties((Map *)&local_60);
      if (uVar4 != uVar2) goto LAB_011c8074;
      uVar9 = 0x12;
    }
    pIVar8 = (Isolate *)v8::internal::KeyAccumulator::GetKeys(param_2,0,uVar9,0,0,0);
    if (pIVar8 != (Isolate *)0x0) goto LAB_011c8098;
  }
  pIVar8 = param_3 + 0x180;
LAB_011c8098:
  uVar9 = *(undefined8 *)pIVar8;
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar9;
}

