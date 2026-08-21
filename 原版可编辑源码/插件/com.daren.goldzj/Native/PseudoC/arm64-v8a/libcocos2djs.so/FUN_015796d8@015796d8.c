
undefined8 FUN_015796d8(undefined8 param_1,long param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x1cf);
  }
  if (DAT_01d471f8 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d471f8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d471f8;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d471f8 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_AwaitPromisesInitOld",0,0,0,0,0,0,0,
                       &local_70,0);
    plVar4 = local_68;
    local_68 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_70;
    local_70 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_AwaitPromisesInitOld";
    local_b8 = pbVar3;
    local_a8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar9 = (ulong *)(param_2 + -8);
  uVar7 = *puVar9;
  if (((uVar7 & 1) == 0) ||
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42d)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSPromise()");
  }
  puVar10 = (ulong *)(param_2 + -0x10);
  uVar7 = *puVar10;
  if (((uVar7 & 1) == 0) ||
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42d)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsJSPromise()");
  }
  uVar7 = *(ulong *)(param_2 + -0x18);
  if (((uVar7 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x439)) {
    uVar7 = *(ulong *)(param_2 + -0x20);
    if ((((uVar7 & 1) != 0) &&
        (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x43)) &&
       ((*(uint *)(uVar7 + 0x17) >> 1 & 0xff) < 2)) {
      iVar2 = *(int *)(param_3 + 0xb8);
      v8::internal::Isolate::RunPromiseHook(param_3,0,puVar9,puVar10);
      puVar6 = (undefined8 *)
               FUN_0157a7b4(param_3,param_2,puVar9,puVar10,(ulong *)(param_2 + -0x18),
                            (int)uVar7 == iVar2);
      uVar8 = *puVar6;
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
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
    V8_Fatal("Check failed: %s.","args[4].IsBoolean()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[3].IsJSFunction()");
}

