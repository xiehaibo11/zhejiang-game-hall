
/* v8::internal::wasm::WasmCodeManager::AssignRange(v8::base::AddressRegion,
   v8::internal::wasm::NativeModule*) */

void v8::internal::wasm::WasmCodeManager::AssignRange
               (long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  __tree_node_base *p_Var1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  base::Mutex::Lock((Mutex *)(param_1 + 0x18));
  plVar3 = (long *)(param_1 + 0x48);
  plVar4 = (long *)*plVar3;
  plVar5 = plVar3;
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)(param_1 + 0x48);
    do {
      while (plVar5 = plVar4, param_2 < (ulong)plVar5[4]) {
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) {
          lVar2 = *plVar5;
          goto joined_r0x01200540;
        }
      }
      if (param_2 <= (ulong)plVar5[4]) break;
      plVar3 = plVar5 + 1;
      plVar4 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  lVar2 = *plVar3;
joined_r0x01200540:
  if (lVar2 == 0) {
    p_Var1 = operator_new(0x38);
    *(ulong *)(p_Var1 + 0x20) = param_2;
    *(ulong *)(p_Var1 + 0x28) = param_3 + param_2;
    *(undefined8 *)(p_Var1 + 0x30) = param_4;
    *(undefined8 *)p_Var1 = 0;
    *(undefined8 *)(p_Var1 + 8) = 0;
    *(long **)(p_Var1 + 0x10) = plVar5;
    *plVar3 = (long)p_Var1;
    if (**(long **)(param_1 + 0x40) != 0) {
      *(long *)(param_1 + 0x40) = **(long **)(param_1 + 0x40);
      p_Var1 = (__tree_node_base *)*plVar3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x48),p_Var1);
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 0x18));
  return;
}

