
undefined8 FUN_0155864c(undefined8 param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xe0);
  }
  if (DAT_01d46dc8 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46dc8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46dc8;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46dc8 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_StoreToSuper",0,0,0,0,0,0,0,&local_50,
                       0);
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
    local_90 = "V8.Runtime_Runtime_StoreToSuper";
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *(ulong *)(param_2 + -8);
  if (((uVar7 & 1) != 0) &&
     (0xa9 < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
    uVar7 = *(ulong *)(param_2 + -0x10);
    if (((uVar7 & 1) != 0) &&
       (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x41)) {
      pIVar6 = (Isolate *)
               FUN_0155aa30(param_3,(ulong *)(param_2 + -8),param_2,(ulong *)(param_2 + -0x10),
                            param_2 + -0x18);
      pIVar1 = param_3 + 0x180;
      if (pIVar6 != (Isolate *)0x0) {
        pIVar1 = pIVar6;
      }
      uVar8 = *(undefined8 *)pIVar1;
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
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsName()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[1].IsJSObject()");
}

