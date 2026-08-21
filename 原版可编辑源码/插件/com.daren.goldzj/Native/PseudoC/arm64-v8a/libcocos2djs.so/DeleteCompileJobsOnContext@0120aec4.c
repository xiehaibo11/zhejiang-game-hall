
/* v8::internal::wasm::WasmEngine::DeleteCompileJobsOnContext(v8::internal::Handle<v8::internal::Context>)
    */

void __thiscall
v8::internal::wasm::WasmEngine::DeleteCompileJobsOnContext(WasmEngine *this,long *param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  AsyncCompileJob *pAVar6;
  long *local_88;
  long *local_80;
  long *plStack_78;
  void *local_70 [2];
  char local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  local_88 = (long *)0x0;
  base::Mutex::Lock((Mutex *)(this + 0x100));
  if (*(long **)(this + 0x138) != (long *)0x0) {
    plVar5 = *(long **)(this + 0x138);
    do {
      while ((plVar3 = *(long **)(plVar5[2] + 0x38), plVar3 != param_2 &&
             (((param_2 == (long *)0x0 || (plVar3 == (long *)0x0)) || (*plVar3 != *param_2))))) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_0120afd0;
      }
      plVar3 = plVar5 + 3;
      if (local_80 < plStack_78) {
        lVar4 = *plVar3;
        *plVar3 = 0;
        *local_80 = lVar4;
        local_80 = local_80 + 1;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>
        ::
        __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>
                  ((vector<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>
                    *)&local_88,(unique_ptr *)plVar3);
      }
      plVar3 = (long *)*plVar5;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::hash<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::equal_to<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>>
      ::remove(local_70,this + 0x128,plVar5);
      pvVar2 = local_70[0];
      local_70[0] = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        if (local_60 != '\0') {
          pAVar6 = *(AsyncCompileJob **)((long)pvVar2 + 0x18);
          *(undefined8 *)((long)pvVar2 + 0x18) = 0;
          if (pAVar6 != (AsyncCompileJob *)0x0) {
            AsyncCompileJob::~AsyncCompileJob(pAVar6);
            operator_delete(pAVar6);
          }
        }
        operator_delete(pvVar2);
      }
      plVar5 = plVar3;
    } while (plVar3 != (long *)0x0);
  }
LAB_0120afd0:
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  plVar3 = local_88;
  plVar5 = local_80;
  if (local_88 != (long *)0x0) {
    while (plVar5 != plVar3) {
      plVar5 = plVar5 + -1;
      pAVar6 = (AsyncCompileJob *)*plVar5;
      *plVar5 = 0;
      if (pAVar6 != (AsyncCompileJob *)0x0) {
        AsyncCompileJob::~AsyncCompileJob(pAVar6);
        operator_delete(pAVar6);
      }
    }
    local_80 = plVar3;
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

