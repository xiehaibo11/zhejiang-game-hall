
/* v8::internal::wasm::InstanceBuilder::CompileImportWrappers(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

void __thiscall
v8::internal::wasm::InstanceBuilder::CompileImportWrappers(InstanceBuilder *this,ulong *param_2)

{
  undefined1 uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  pair pVar5;
  int iVar6;
  long *plVar7;
  ulong *puVar8;
  CancelableTask *pCVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  CancelableTask *local_180;
  Mutex *local_178;
  Mutex *local_170;
  pair local_168 [8];
  undefined8 local_160;
  Mutex aMStack_d8 [40];
  void *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  void *local_88 [3];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_2 & 0xffffffff00000000;
  lVar14 = **(long **)(*(long *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*param_2 + 0x6f)) + 0xb)) +
                                3) + 0x18);
  local_178 = *(Mutex **)(lVar14 + 0x108);
  uVar10 = (*(long *)(*(long *)(this + 0x10) + 0xd8) - *(long *)(*(long *)(this + 0x10) + 0xd0) >> 3
           ) * -0x5555555555555555;
  local_170 = local_178;
  base::Mutex::Lock(local_178);
  base::Mutex::Mutex(aMStack_d8);
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_90 = 0x3f800000;
  if (0 < (int)uVar10) {
    lVar16 = 0;
    do {
      lVar11 = *(long *)(*(long *)(this + 0x10) + 0xd0);
      if (*(char *)(lVar11 + lVar16 + 0x10) == '\0') {
        puVar8 = *(ulong **)(*(long *)(this + 0x70) + lVar16 + 0x10);
        uVar12 = *puVar8;
        if (((uVar12 & 1) != 0) &&
           ((*(byte *)((uVar12 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar12 - 1)) >> 1 & 1)
            != 0)) {
          uVar15 = *(undefined8 *)
                    (*(long *)(*(long *)(this + 0x10) + 0x88) +
                    (ulong)*(uint *)(lVar11 + lVar16 + 0x14) * 0x20);
          pVar5 = (pair)compiler::ResolveWasmImportCall(puVar8,uVar15,this + 8);
          if (((3 < (byte)pVar5) || (pVar5 == (pair)0x1)) &&
             (local_168[0] = pVar5, local_160 = uVar15,
             plVar7 = (long *)WasmImportWrapperCache::ModificationScope::operator[]
                                        ((ModificationScope *)&local_178,local_168), *plVar7 == 0))
          {
            std::__ndk1::
            __hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
            ::
            __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>const&>
                      ((__hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
                        *)&local_b0,local_168,local_168);
          }
        }
      }
      lVar16 = lVar16 + 0x18;
    } while (((uVar10 & 0xffffffff) + (uVar10 & 0xffffffff) * 2) * 8 - lVar16 != 0);
  }
  CancelableTaskManager::CancelableTaskManager((CancelableTaskManager *)local_168);
  iVar6 = GetMaxBackgroundTasks();
  if (0 < iVar6) {
    do {
      uVar17 = *(undefined8 *)(*(long *)this + 0xc770);
      uVar15 = *(undefined8 *)(*(long *)this + 0x9520);
      pCVar9 = operator_new(0x50);
      CancelableTask::CancelableTask(pCVar9,(CancelableTaskManager *)local_168);
      *(undefined ***)pCVar9 = &PTR__CancelableTask_01cc9fe8;
      *(undefined ***)(pCVar9 + 0x20) = &PTR_FUN_01cca018;
      *(undefined8 *)(pCVar9 + 0x28) = uVar17;
      *(undefined8 *)(pCVar9 + 0x30) = uVar15;
      *(long *)(pCVar9 + 0x38) = lVar14;
      *(Mutex **)(pCVar9 + 0x40) = aMStack_d8;
      *(Mutex ***)(pCVar9 + 0x48) = &local_178;
      plVar7 = (long *)V8::GetCurrentPlatform();
      local_180 = pCVar9 + 0x20;
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_180);
      pCVar9 = local_180;
      local_180 = (CancelableTask *)0x0;
      if (pCVar9 != (CancelableTask *)0x0) {
        (**(code **)(*(long *)pCVar9 + 8))();
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  base::Mutex::Lock(aMStack_d8);
  if (local_a0 != (void *)0x0) {
    do {
      uVar1 = *(undefined1 *)((long)local_a0 + 0x10);
      uVar15 = *(undefined8 *)((long)local_a0 + 0x18);
      std::__ndk1::
      __hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
      ::remove(local_88,&local_b0);
      pvVar3 = local_88[0];
      local_88[0] = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      base::Mutex::Unlock(aMStack_d8);
      CompileImportWrapper
                (*(undefined8 *)(*(long *)this + 0xc770),lVar14,
                 *(undefined8 *)(*(long *)this + 0x9520),uVar1,uVar15,&local_178);
      base::Mutex::Lock(aMStack_d8);
    } while (local_a0 != (void *)0x0);
  }
  base::Mutex::Unlock(aMStack_d8);
  CancelableTaskManager::CancelAndWait((CancelableTaskManager *)local_168);
  CancelableTaskManager::~CancelableTaskManager((CancelableTaskManager *)local_168);
  pvVar3 = local_b0;
  puVar4 = local_a0;
  while (puVar4 != (void *)0x0) {
    pvVar13 = (void *)*puVar4;
    local_b0 = pvVar3;
    operator_delete(puVar4);
    pvVar3 = local_b0;
    puVar4 = pvVar13;
  }
  local_b0 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  base::Mutex::~Mutex(aMStack_d8);
  base::Mutex::Unlock(local_170);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

