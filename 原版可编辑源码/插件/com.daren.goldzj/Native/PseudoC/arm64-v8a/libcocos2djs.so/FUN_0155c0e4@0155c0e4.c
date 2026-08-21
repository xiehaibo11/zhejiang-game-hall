
undefined8 FUN_0155c0e4(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xec);
  }
  if (DAT_01d46e00 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e00 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46e00;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46e00 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_WeakCollectionDelete",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_WeakCollectionDelete";
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     ((*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) & 0xfffe) ==
      0x41e)) {
    if ((param_2[-2] & 1) == 0) {
      uVar6 = v8::internal::JSWeakCollection::Delete(param_2,param_2 + -1,(int)param_2[-2] >> 1);
      lVar1 = 0xb8;
      if ((uVar6 & 1) == 0) {
        lVar1 = 0xc0;
      }
      uVar7 = *(undefined8 *)(param_3 + lVar1);
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
      }
      if (local_80 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
      }
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSWeakCollection()");
}

