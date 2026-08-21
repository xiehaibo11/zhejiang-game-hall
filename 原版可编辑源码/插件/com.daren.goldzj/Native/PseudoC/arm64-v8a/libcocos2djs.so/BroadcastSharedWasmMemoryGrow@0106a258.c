
/* v8::internal::GlobalBackingStoreRegistry::BroadcastSharedWasmMemoryGrow(v8::internal::Isolate*,
   std::__ndk1::shared_ptr<v8::internal::BackingStore>, unsigned long) */

void v8::internal::GlobalBackingStoreRegistry::BroadcastSharedWasmMemoryGrow
               (Isolate *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  Isolate *pIVar6;
  undefined **local_70;
  code *pcStack_68;
  undefined *local_60;
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (DAT_01d3f5f8 != '\x02') {
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = FUN_0106b074;
    local_60 = &DAT_01d3f600;
    local_50 = (long *)&local_70;
    base::CallOnceImpl(&DAT_01d3f5f8,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_0106a2f4;
      pcVar4 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar4)();
  }
LAB_0106a2f4:
  base::Mutex::Lock((Mutex *)&DAT_01d3f600);
  if ((~*(byte *)(*param_2 + 0x28) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_wasm_memory_ && is_shared_");
  }
  plVar5 = *(long **)(*param_2 + 0x18);
  if (plVar5 != (long *)0x0) {
    puVar2 = (undefined8 *)plVar5[1];
    for (puVar1 = (undefined8 *)*plVar5; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      pIVar6 = (Isolate *)*puVar1;
      if ((pIVar6 != (Isolate *)0x0) && (pIVar6 != param_1)) {
        StackGuard::RequestInterrupt((StackGuard *)(pIVar6 + 0x48),0x20);
      }
    }
    base::Mutex::Unlock((Mutex *)&DAT_01d3f600);
    UpdateSharedWasmMemoryObjects(param_1);
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","shared_wasm_memory_data");
}

