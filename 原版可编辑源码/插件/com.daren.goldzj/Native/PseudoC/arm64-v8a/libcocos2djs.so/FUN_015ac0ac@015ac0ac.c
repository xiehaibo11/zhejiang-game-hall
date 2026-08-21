
undefined8 FUN_015ac0ac(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  long lVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  long *plVar7;
  undefined8 uVar8;
  WasmEngine *pWVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
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
  __shared_weak_count *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x21e);
  }
  if (DAT_01d476f8 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d476f8 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar6 = DAT_01d476f8;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d476f8 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (__shared_weak_count *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar6,"V8.Runtime_Runtime_CloneWasmModule",0,0,0,0,0,0,0,
                       &local_50,0);
    p_Var1 = local_48;
    local_48 = (__shared_weak_count *)0x0;
    if (p_Var1 != (__shared_weak_count *)0x0) {
      (**(code **)(*(long *)p_Var1 + 8))();
    }
    plVar7 = local_50;
    local_50 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_CloneWasmModule";
    local_98 = pbVar6;
    local_88 = uVar8;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if (((uVar10 & 1) != 0) &&
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x436)) {
    pWVar9 = *(WasmEngine **)(param_3 + 0xc770);
    puVar11 = *(undefined8 **)
               (*(long *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb)) + 3) + 0x18
               );
    local_50 = (long *)*puVar11;
    local_48 = (__shared_weak_count *)puVar11[1];
    if (local_48 != (__shared_weak_count *)0x0) {
      p_Var1 = local_48 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar11 = (undefined8 *)
              v8::internal::wasm::WasmEngine::ImportNativeModule(pWVar9,param_3,&local_50);
    p_Var1 = local_48;
    if (local_48 != (__shared_weak_count *)0x0) {
      p_Var2 = local_48 + 8;
      do {
        lVar12 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*(long *)local_48 + 0x10))(local_48);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    uVar13 = *puVar11;
    *(undefined8 *)(param_3 + 0x95a0) = uVar8;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
      plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar7 + 0x28))(plVar7,local_98,local_90,local_88);
    }
    if (local_80 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
    }
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmModuleObject()");
}

