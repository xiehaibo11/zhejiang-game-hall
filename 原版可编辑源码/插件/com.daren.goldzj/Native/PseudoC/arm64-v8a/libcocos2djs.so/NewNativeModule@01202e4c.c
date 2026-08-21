
/* v8::internal::wasm::WasmCodeManager::NewNativeModule(v8::internal::wasm::WasmEngine*,
   v8::internal::Isolate*, v8::internal::wasm::WasmFeatures const&, unsigned long, bool,
   std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule const>) */

void v8::internal::wasm::WasmCodeManager::NewNativeModule
               (undefined8 *param_1_00,long *param_1,undefined8 param_2,Isolate *param_3,
               undefined8 param_4,long param_6,uint param_7,long *param_8)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  NativeModule *pNVar7;
  __tree_node_base *p_Var8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 local_d0;
  __shared_weak_count *local_c8;
  long local_c0;
  __shared_weak_count *p_Stack_b8;
  undefined8 local_a8;
  ulong local_a0;
  long lStack_98;
  undefined8 local_90;
  ulong local_88;
  long lStack_80;
  undefined8 local_78;
  ulong local_70;
  long lStack_68;
  
  plVar6 = param_1;
  if ((ulong)param_1[2] < (ulong)param_1[1]) {
    plVar6 = (long *)v8::Isolate::MemoryPressureNotification((Isolate *)param_3,2);
    uVar9 = param_1[1];
    param_1[2] = uVar9 + (*param_1 - uVar9 >> 1);
  }
  if ((param_7 & 1) == 0) {
    plVar11 = (long *)0x8000000;
  }
  else {
    uVar9 = 0x220;
    if (FLAG_wasm_far_jump_table != '\0') {
      uVar9 = (ulong)(*(int *)(*param_8 + 0x44) * 0x10 + 0x22fU & 0xffffffe0);
    }
    lVar3 = uVar9 + (*(int *)(*param_8 + 0x44) * 4 + 0x1fU & 0xffffffe0);
    uVar9 = lVar3 + (param_6 + 0x1fU & 0xffffffffffffffe0);
    uVar10 = lVar3 * 2;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    plVar6 = (long *)base::bits::RoundUpToPowerOfTwo64(uVar10);
    plVar11 = plVar6;
    if ((ulong)plVar6 >> 0x1b != 0) {
      plVar11 = (long *)0x8000000;
    }
  }
  iVar14 = 2;
  local_70 = 0;
  lStack_68 = 0;
  plVar13 = (long *)((long)FLAG_wasm_max_initial_code_space_reservation << 0x14);
  if (plVar11 <= plVar13 || (long)FLAG_wasm_max_initial_code_space_reservation < 1) {
    plVar13 = plVar11;
  }
  local_78 = 0;
  while( true ) {
    TryAllocate((ulong)plVar6,plVar13);
    uVar15 = local_90;
    local_78 = local_90;
    lStack_68 = lStack_80;
    local_70 = local_88;
    VirtualMemory::Reset((VirtualMemory *)&local_90);
    VirtualMemory::~VirtualMemory((VirtualMemory *)&local_90);
    lVar3 = lStack_68;
    uVar9 = local_70;
    if (local_70 != 0) break;
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      V8::FatalProcessOutOfMemory(param_3,"NewNativeModule",false);
    }
    plVar6 = (long *)Heap::MemoryPressureNotification((Heap *)(param_3 + 0x8850),2,1);
    iVar14 = iVar14 + -1;
  }
  *param_1_00 = 0;
  param_1_00[1] = 0;
  pNVar7 = operator_new(0x188);
  local_a8 = uVar15;
  lStack_98 = lStack_68;
  local_a0 = local_70;
  VirtualMemory::Reset((VirtualMemory *)&local_78);
  p_Stack_b8 = (__shared_weak_count *)param_8[1];
  local_c0 = *param_8;
  *param_8 = 0;
  param_8[1] = 0;
  local_d0 = *(undefined8 *)(param_3 + 0x9520);
  local_c8 = *(__shared_weak_count **)(param_3 + 0x9528);
  if (local_c8 != (__shared_weak_count *)0x0) {
    p_Var1 = local_c8 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  NativeModule::NativeModule
            (pNVar7,param_2,param_4,param_7 & 1,&local_a8,&local_c0,&local_d0,param_1_00);
  p_Var1 = local_c8;
  if (local_c8 != (__shared_weak_count *)0x0) {
    p_Var2 = local_c8 + 8;
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
      (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  p_Var1 = p_Stack_b8;
  if (p_Stack_b8 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Stack_b8 + 8;
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
      (**(code **)(*(long *)p_Stack_b8 + 0x10))(p_Stack_b8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  VirtualMemory::~VirtualMemory((VirtualMemory *)&local_a8);
  base::Mutex::Lock((Mutex *)(param_1 + 3));
  uVar15 = *param_1_00;
  plVar11 = param_1 + 9;
  plVar13 = (long *)*plVar11;
  plVar6 = plVar11;
  if (plVar13 == (long *)0x0) {
LAB_01203148:
    lVar12 = *plVar11;
    plVar16 = plVar11;
  }
  else {
    plVar11 = param_1 + 9;
    do {
      while (plVar16 = plVar13, plVar6 = plVar16, (ulong)plVar16[4] <= uVar9) {
        if (uVar9 <= (ulong)plVar16[4]) goto LAB_01203148;
        plVar11 = plVar16 + 1;
        plVar13 = (long *)*plVar11;
        if ((long *)*plVar11 == (long *)0x0) goto LAB_01203148;
      }
      plVar11 = plVar16;
      plVar13 = (long *)*plVar16;
    } while ((long *)*plVar16 != (long *)0x0);
    lVar12 = *plVar16;
  }
  if (lVar12 == 0) {
    p_Var8 = operator_new(0x38);
    *(ulong *)(p_Var8 + 0x20) = uVar9;
    *(ulong *)(p_Var8 + 0x28) = lVar3 + uVar9;
    *(undefined8 *)(p_Var8 + 0x30) = uVar15;
    *(undefined8 *)p_Var8 = 0;
    *(undefined8 *)(p_Var8 + 8) = 0;
    *(long **)(p_Var8 + 0x10) = plVar6;
    *plVar16 = (long)p_Var8;
    if (*(long *)param_1[8] != 0) {
      param_1[8] = *(long *)param_1[8];
      p_Var8 = (__tree_node_base *)*plVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[9],p_Var8);
    param_1[10] = param_1[10] + 1;
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 3));
  VirtualMemory::~VirtualMemory((VirtualMemory *)&local_78);
  return;
}

