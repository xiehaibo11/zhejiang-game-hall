
ulong FUN_0154fcc0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xbf);
  }
  if (DAT_01d46ca8 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46ca8 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46ca8;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46ca8 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_GrowArrayElements",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_GrowArrayElements";
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (uVar7 = uVar6 & 0xffffffff00000000,
     *(ushort *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
  }
  uVar8 = param_2[-1];
  if ((uVar8 & 1) == 0) {
    if (-1 < (int)uVar8) {
      uVar5 = (int)uVar8 >> 1;
      goto LAB_0154fe54;
    }
  }
  else {
    if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","key->IsHeapNumber()");
    }
    dVar9 = *(double *)(uVar8 + 3);
    uVar8 = 0;
    if ((dVar9 < 0.0) || (4294967295.0 < dVar9)) goto LAB_0154feb8;
    uVar5 = (uint)dVar9;
LAB_0154fe54:
    uVar8 = uVar7 | *(uint *)(uVar6 + 7);
    if (uVar5 < (uint)(*(int *)(uVar8 + 3) >> 1)) goto LAB_0154feb8;
    plVar3 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                       ((ulong)*(byte *)((uVar7 | 10) + (ulong)*(uint *)(uVar6 - 1)) & 0xf8));
    uVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
    if ((uVar6 & 1) != 0) {
      uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
      goto LAB_0154feb8;
    }
  }
  uVar8 = 0;
LAB_0154feb8:
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar8;
}

