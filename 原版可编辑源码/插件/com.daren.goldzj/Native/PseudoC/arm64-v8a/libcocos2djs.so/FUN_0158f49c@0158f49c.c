
undefined8 FUN_0158f49c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  ushort uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  Isolate *pIVar9;
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
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  long *local_50;
  long *local_48;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x1e8);
  }
  if (DAT_01d47310 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47310 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47310;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47310 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_DeleteLookupSlot",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar5 = local_48;
    local_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_50;
    local_50 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_DeleteLookupSlot";
    local_a8 = pbVar3;
    local_98 = uVar6;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar8 = *(ulong *)(param_3 + 0x2bc8);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = puVar1;
    if (puVar2 == puVar1) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar8;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
  }
  puVar7 = (ulong *)v8::internal::Context::Lookup
                              (puVar7,param_2,3,&local_50,auStack_54,auStack_58,auStack_5c,0);
  if (puVar7 == (ulong *)0x0) {
    if (((*(ulong *)(param_3 + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(param_3 + 0x2bd8) == *(int *)(param_3 + 0xa8))) {
      pIVar9 = param_3 + 0xb8;
      goto LAB_0158f6c0;
    }
  }
  else {
    uVar8 = *puVar7;
    if (((uVar8 & 1) != 0) &&
       ((uVar10 = uVar8 & 0xffffffff00000000 | 7,
        *(ushort *)(uVar10 + *(uint *)(uVar8 - 1)) - 0x88 < 10 ||
        (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x44)))) {
      pIVar9 = param_3 + 0xc0;
      goto LAB_0158f6c0;
    }
    uVar4 = v8::internal::JSReceiver::DeleteProperty(puVar7,param_2,0);
    if ((uVar4 & 0xff) != 0) {
      pIVar9 = param_3 + 0xb8;
      if (uVar4 < 0x100) {
        pIVar9 = param_3 + 0xc0;
      }
      goto LAB_0158f6c0;
    }
  }
  pIVar9 = param_3 + 0x180;
LAB_0158f6c0:
  uVar6 = *(undefined8 *)pIVar9;
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar6;
}

