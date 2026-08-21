
/* v8::internal::GlobalBackingStoreRegistry::AddSharedWasmMemoryObject(v8::internal::Isolate*,
   v8::internal::BackingStore*, v8::internal::Handle<v8::internal::WasmMemoryObject>) */

void v8::internal::GlobalBackingStoreRegistry::AddSharedWasmMemoryObject
               (Isolate *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  vector<v8::internal::Isolate*,std::__ndk1::allocator<v8::internal::Isolate*>> *this;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  Isolate *local_78;
  undefined **local_70;
  code *pcStack_68;
  undefined *local_60;
  undefined ***local_50;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_78 = param_1;
  Isolate::AddSharedWasmMemory(param_1,param_3);
  if (DAT_01d3f5f8 != '\x02') {
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = FUN_0106b074;
    local_60 = &DAT_01d3f600;
    local_50 = &local_70;
    base::CallOnceImpl(&DAT_01d3f5f8,&local_70);
    if (&local_70 == local_50) {
      pcVar5 = (code *)(*local_50)[4];
    }
    else {
      if (local_50 == (undefined ***)0x0) goto LAB_0106a0d8;
      pcVar5 = (code *)(*local_50)[5];
    }
    (*pcVar5)();
  }
LAB_0106a0d8:
  base::Mutex::Lock((Mutex *)&DAT_01d3f600);
  if ((~*(byte *)(param_2 + 0x28) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_wasm_memory_ && is_shared_");
  }
  this = *(vector<v8::internal::Isolate*,std::__ndk1::allocator<v8::internal::Isolate*>> **)
          (param_2 + 0x18);
  if (this == (vector<v8::internal::Isolate*,std::__ndk1::allocator<v8::internal::Isolate*>> *)0x0)
  {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","shared_wasm_memory_data");
  }
  lVar2 = *(long *)this;
  puVar3 = *(undefined8 **)(this + 8);
  if ((long)puVar3 - lVar2 != 0) {
    uVar7 = 0;
    uVar6 = 0xffffffff;
    do {
      pIVar8 = *(Isolate **)(lVar2 + uVar7 * 8);
      if (pIVar8 == local_78) goto LAB_0106a174;
      uVar1 = (uint)uVar7;
      if (pIVar8 != (Isolate *)0x0) {
        uVar1 = uVar6;
      }
      uVar7 = uVar7 + 1;
      uVar6 = uVar1;
    } while (uVar7 < (ulong)((long)puVar3 - lVar2 >> 3));
    if (-1 < (int)uVar1) {
      *(Isolate **)(lVar2 + (ulong)uVar1 * 8) = local_78;
      goto LAB_0106a174;
    }
  }
  if (*(undefined8 **)(this + 0x10) == puVar3) {
    std::__ndk1::vector<v8::internal::Isolate*,std::__ndk1::allocator<v8::internal::Isolate*>>::
    __push_back_slow_path<v8::internal::Isolate*const&>(this,&local_78);
  }
  else {
    *puVar3 = local_78;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
  }
LAB_0106a174:
  base::Mutex::Unlock((Mutex *)&DAT_01d3f600);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

