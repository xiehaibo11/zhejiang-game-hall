
undefined8 FUN_011d0590(undefined8 param_1,byte *param_2,Isolate *param_3)

{
  ulong *puVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_78;
  ulong *local_70;
  long *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulong local_58;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x18b);
  }
  if (DAT_01d3fb38 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fb38 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d3fb38;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d3fb38 & 5) != 0) {
    local_70 = (ulong *)0x0;
    local_68 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_CollectTypeProfile",0,0,0,0,0,0,0,
                       &local_70,0);
    plVar4 = local_68;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    puVar9 = local_70;
    local_70 = (ulong *)0x0;
    if (puVar9 != (ulong *)0x0) {
      (**(code **)(*puVar9 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_CollectTypeProfile";
    local_b8 = pbVar3;
    local_a8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((*param_2 & 1) == 0) {
    puVar9 = (ulong *)(param_2 + -0x10);
    uVar7 = *puVar9;
    if (((uVar7 & 1) != 0) &&
       (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x9f)) {
      puVar1 = (ulong *)(param_2 + -8);
      puVar6 = (ulong *)v8::internal::Object::TypeOf(param_3,puVar1);
      uVar7 = *puVar1;
      if ((uVar7 & 1) != 0) {
        if (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9) {
          if ((int)uVar7 == *(int *)(param_3 + 0xb0)) {
            uVar7 = *(ulong *)(param_3 + 0x878);
            if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar6 = *(ulong **)(param_3 + 0x95a0);
              if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
                puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
              }
              *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
              *puVar6 = uVar7;
            }
            else {
              puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
            }
          }
        }
        else {
          puVar6 = (ulong *)v8::internal::JSReceiver::GetConstructorName(puVar1);
        }
      }
      local_78 = *puVar9;
      local_60 = v8::internal::FeedbackVector::GetTypeProfileSlot();
      local_68 = (long *)0x0;
      local_70 = puVar9;
      if (puVar9 == (ulong *)0x0) {
        local_5c = 0;
      }
      else {
        local_58 = *puVar9;
        local_5c = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_58,local_60);
      }
      v8::internal::FeedbackNexus::Collect((FeedbackNexus *)&local_70,puVar6,*(int *)param_2 >> 1);
      uVar8 = *(undefined8 *)(param_3 + 0xa0);
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_b8,local_b0,local_a8);
      }
      if (local_a0 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
      }
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsFeedbackVector()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

