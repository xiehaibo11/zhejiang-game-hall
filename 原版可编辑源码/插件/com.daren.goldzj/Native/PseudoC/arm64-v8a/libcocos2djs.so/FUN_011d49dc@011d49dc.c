
undefined8 FUN_011d49dc(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  ushort uVar3;
  long *plVar4;
  undefined8 uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x199);
  }
  if (DAT_01d3fbd0 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fbd0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d3fbd0;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3fbd0 & 5) != 0) {
    local_68 = (long *)0x0;
    local_60 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.Runtime_Runtime_GetOwnPropertyDescriptor",0,0,0,0,0,0,
                       0,&local_68,0);
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_68;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_GetOwnPropertyDescriptor";
    local_a8 = pbVar2;
    local_98 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
    uVar7 = param_2[-1];
    if (((uVar7 & 1) != 0) &&
       (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x41)) {
      local_68 = (long *)((ulong)local_68 & 0xffffffffffffff00);
      uStack_58 = 0;
      local_60 = (long *)0x0;
      uStack_48 = 0;
      uStack_50 = 0;
      uVar3 = v8::internal::JSReceiver::GetOwnPropertyDescriptor
                        (param_3,param_2,param_2 + -1,&local_68);
      if ((uVar3 & 0xff) == 0) {
        pIVar6 = param_3 + 0x180;
      }
      else if (uVar3 < 0x100) {
        pIVar6 = param_3 + 0xa0;
      }
      else {
        pIVar6 = (Isolate *)
                 v8::internal::PropertyDescriptor::ToPropertyDescriptorObject
                           ((PropertyDescriptor *)&local_68,param_3);
      }
      uVar8 = *(undefined8 *)pIVar6;
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
      }
      if (local_90 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
      }
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsName()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

