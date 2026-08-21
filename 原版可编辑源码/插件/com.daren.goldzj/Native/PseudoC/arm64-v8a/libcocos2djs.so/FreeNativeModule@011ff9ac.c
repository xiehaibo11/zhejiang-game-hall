
/* v8::internal::wasm::WasmCodeManager::FreeNativeModule(v8::internal::Vector<v8::internal::VirtualMemory>,
   unsigned long) */

void v8::internal::wasm::WasmCodeManager::FreeNativeModule
               (long param_1,VirtualMemory *param_2,long param_3,long param_4)

{
  __tree_node_base *p_Var1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  __tree_node_base *p_Var5;
  ulong uVar6;
  long *plVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  __tree_node_base *p_Var10;
  VirtualMemory *pVVar11;
  
  base::Mutex::Lock((Mutex *)(param_1 + 0x18));
  if (param_3 != 0) {
    pVVar11 = param_2 + param_3 * 0x18;
    p_Var1 = (__tree_node_base *)(param_1 + 0x48);
    p_Var5 = *(__tree_node_base **)p_Var1;
    while( true ) {
      if (p_Var5 != (__tree_node_base *)0x0) {
        uVar6 = *(ulong *)(param_2 + 8);
        p_Var8 = p_Var5;
        p_Var10 = p_Var1;
        do {
          if (*(ulong *)(p_Var8 + 0x20) >= uVar6) {
            p_Var10 = p_Var8;
          }
          p_Var8 = *(__tree_node_base **)(p_Var8 + (ulong)(*(ulong *)(p_Var8 + 0x20) < uVar6) * 8);
        } while (p_Var8 != (__tree_node_base *)0x0);
        if ((p_Var10 != p_Var1) && (*(ulong *)(p_Var10 + 0x20) <= uVar6)) {
          plVar2 = *(long **)(p_Var10 + 8);
          if (*(long **)(p_Var10 + 8) == (long *)0x0) {
            p_Var8 = p_Var10 + 0x10;
            plVar7 = *(long **)p_Var8;
            if ((__tree_node_base *)*plVar7 != p_Var10) {
              do {
                lVar9 = *(long *)p_Var8;
                p_Var8 = (__tree_node_base *)(lVar9 + 0x10);
                plVar7 = *(long **)p_Var8;
              } while (*plVar7 != lVar9);
            }
          }
          else {
            do {
              plVar7 = plVar2;
              plVar2 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
          if (*(__tree_node_base **)(param_1 + 0x40) == p_Var10) {
            *(long **)(param_1 + 0x40) = plVar7;
          }
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var5,p_Var10);
          operator_delete(p_Var10);
        }
      }
      BackingStore::ReleaseReservation(*(ulong *)(param_2 + 0x10));
      VirtualMemory::Free(param_2);
      param_2 = param_2 + 0x18;
      if (param_2 == pVVar11) break;
      p_Var5 = *(__tree_node_base **)p_Var1;
    }
  }
  plVar2 = (long *)(param_1 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 - param_4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  base::Mutex::Unlock((Mutex *)(param_1 + 0x18));
  return;
}

