
undefined8 FUN_015b8e64(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  NativeModule *this;
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
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x291);
  }
  if (DAT_01d47808 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47808 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47808;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47808 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_WasmCompileLazy",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar4 = local_58;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_WasmCompileLazy";
    local_a8 = pbVar3;
    local_98 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (uVar8 = uVar7 & 0xffffffff00000000,
     *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x434)) {
    if ((param_2[-1] & 1) == 0) {
      uVar1 = (int)param_2[-1] >> 1;
      if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
        v8::internal::trap_handler::g_thread_in_wasm_code = 0;
        uVar7 = *param_2;
        uVar8 = uVar7 & 0xffffffff00000000;
      }
      *(ulong *)(param_3 + 0x2bc8) = uVar8 | *(uint *)(uVar7 + 0x77);
      uVar7 = *param_2 & 0xffffffff00000000;
      this = (NativeModule *)
             **(undefined8 **)
               (*(long *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*param_2 + 0x6f)) + 0xb)) + 3) +
               0x18);
      uVar7 = v8::internal::wasm::CompileLazy(param_3,this,uVar1);
      if ((uVar7 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_3 + 0x180);
      }
      else {
        uVar6 = v8::internal::wasm::NativeModule::GetCallTargetForFunction(this,uVar1);
      }
      if (v8::internal::trap_handler::g_is_trap_handler_enabled != '\0') {
        v8::internal::trap_handler::g_thread_in_wasm_code = 1;
      }
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
      }
      if (local_90 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
      }
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
}

