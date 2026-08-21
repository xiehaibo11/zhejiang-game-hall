
/* v8::internal::wasm::WasmEngine::DeleteCompileJobsOnIsolate(v8::internal::Isolate*) */

void __thiscall
v8::internal::wasm::WasmEngine::DeleteCompileJobsOnIsolate(WasmEngine *this,Isolate *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  AsyncCompileJob *pAVar5;
  long *plVar6;
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
    plVar4 = *(long **)(this + 0x138);
    do {
      while (*(Isolate **)plVar4[2] != param_1) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_0120b14c;
      }
      plVar6 = plVar4 + 3;
      if (local_80 < plStack_78) {
        lVar3 = *plVar6;
        *plVar6 = 0;
        *local_80 = lVar3;
        local_80 = local_80 + 1;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>
        ::
        __push_back_slow_path<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>
                  ((vector<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>
                    *)&local_88,(unique_ptr *)plVar6);
      }
      plVar6 = (long *)*plVar4;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::hash<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::equal_to<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>>
      ::remove(local_70,this + 0x128,plVar4);
      pvVar2 = local_70[0];
      local_70[0] = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        if (local_60 != '\0') {
          pAVar5 = *(AsyncCompileJob **)((long)pvVar2 + 0x18);
          *(undefined8 *)((long)pvVar2 + 0x18) = 0;
          if (pAVar5 != (AsyncCompileJob *)0x0) {
            AsyncCompileJob::~AsyncCompileJob(pAVar5);
            operator_delete(pAVar5);
          }
        }
        operator_delete(pvVar2);
      }
      plVar4 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
LAB_0120b14c:
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  plVar6 = local_88;
  plVar4 = local_80;
  if (local_88 != (long *)0x0) {
    while (plVar4 != plVar6) {
      plVar4 = plVar4 + -1;
      pAVar5 = (AsyncCompileJob *)*plVar4;
      *plVar4 = 0;
      if (pAVar5 != (AsyncCompileJob *)0x0) {
        AsyncCompileJob::~AsyncCompileJob(pAVar5);
        operator_delete(pAVar5);
      }
    }
    local_80 = plVar6;
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

