
/* v8::internal::Runtime_CloneWasmModule(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_CloneWasmModule(int param_1,ulong *param_2,Isolate *param_3)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  long lVar3;
  char cVar4;
  bool bVar5;
  WasmEngine *pWVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_50;
  __shared_weak_count *local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_015ac0ac(param_1,param_2,param_3);
    return uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) != 0) &&
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x436)) {
    pWVar6 = *(WasmEngine **)(param_3 + 0xc770);
    puVar9 = *(undefined8 **)
              (*(long *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) + 3) + 0x18);
    local_50 = *puVar9;
    local_48 = (__shared_weak_count *)puVar9[1];
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
    puVar9 = (undefined8 *)wasm::WasmEngine::ImportNativeModule(pWVar6,param_3,&local_50);
    p_Var1 = local_48;
    if (local_48 != (__shared_weak_count *)0x0) {
      p_Var2 = local_48 + 8;
      do {
        lVar10 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)local_48 + 0x10))(local_48);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    uVar11 = *puVar9;
    *(undefined8 *)(param_3 + 0x95a0) = uVar7;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmModuleObject()");
}

