
undefined8 FUN_0156e114(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  byte **local_f0;
  byte *local_e8;
  char *local_e0;
  undefined8 local_d8;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  ulong local_90;
  Isolate *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x22f);
  }
  if (DAT_01d470c0 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d470c0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d470c0;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d470c0 & 5) != 0) {
    local_a8 = (long *)0x0;
    local_a0 = 0;
    uStack_9c = 0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_GetInitializerFunction",0,0,0,0,0,0,0,
                       &local_a8,0);
    plVar3 = (long *)CONCAT44(uStack_9c,local_a0);
    local_a0 = 0;
    uStack_9c = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_f0 = &local_e8;
    local_e0 = "V8.Runtime_Runtime_GetInitializerFunction";
    local_e8 = pbVar2;
    local_d8 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if ((uVar6 & 1) != 0) {
    local_90 = uVar6 & 0xffffffff00000000;
    if (0xa8 < *(ushort *)((local_90 | 7) + (ulong)*(uint *)(uVar6 - 1))) {
      uVar6 = *(ulong *)(param_3 + 0xb30);
      local_88 = param_3 + 0xb30;
      uVar7 = 2;
      if (*(short *)((local_90 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x40) {
        uVar7 = (*(int *)(uVar6 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      uStack_9c = 0;
      uStack_98 = 0xc0;
      local_a8._0_4_ = uVar7;
      if ((*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) & 0xffe0) ==
          0x20) {
        local_88 = (Isolate *)v8::internal::StringTable::LookupString();
      }
      uStack_80 = 0;
      uStack_70 = 0;
      local_58 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      local_78 = param_2;
      local_68 = param_2;
      v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_a8);
      if (local_a8._4_4_ == 4) {
        puVar5 = (undefined8 *)(local_90 + 0xa0);
      }
      else {
        puVar5 = (undefined8 *)
                 v8::internal::JSReceiver::GetDataProperty((LookupIterator *)&local_a8);
      }
      uVar8 = *puVar5;
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
        plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar3 + 0x28))(plVar3,local_e8,local_e0,local_d8);
      }
      if (local_d0 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
      }
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

