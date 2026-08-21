
/* v8::internal::wasm::WasmEngine::CreateAsyncCompileJob(v8::internal::Isolate*,
   v8::internal::wasm::WasmFeatures const&, std::__ndk1::unique_ptr<unsigned char [],
   std::__ndk1::default_delete<unsigned char []> >, unsigned long,
   v8::internal::Handle<v8::internal::Context>, char const*,
   std::__ndk1::shared_ptr<v8::internal::wasm::CompilationResultResolver>) */

AsyncCompileJob * __thiscall
v8::internal::wasm::WasmEngine::CreateAsyncCompileJob
          (WasmEngine *this,undefined8 param_1,undefined8 param_2,undefined8 *param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this_00;
  void *pvVar4;
  AsyncCompileJob *pAVar5;
  long lVar6;
  AsyncCompileJob *this_01;
  undefined8 local_90;
  __shared_weak_count *p_Stack_88;
  void *local_78;
  AsyncCompileJob *local_70 [2];
  AsyncCompileJob **local_48;
  
  pAVar5 = operator_new(0x130);
  local_78 = (void *)*param_4;
  *param_4 = 0;
  p_Stack_88 = (__shared_weak_count *)param_8[1];
  local_90 = *param_8;
  *param_8 = 0;
  param_8[1] = 0;
  AsyncCompileJob::AsyncCompileJob
            (pAVar5,param_1,param_2,&local_78,param_5,param_6,param_7,&local_90);
  this_00 = p_Stack_88;
  if (p_Stack_88 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_88 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)p_Stack_88 + 0x10))(p_Stack_88);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  pvVar4 = local_78;
  local_78 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  local_70[0] = pAVar5;
  base::Mutex::Lock((Mutex *)(this + 0x100));
  local_48 = local_70;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::hash<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::equal_to<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>>
          ::
          __emplace_unique_key_args<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::AsyncCompileJob*const&>,std::__ndk1::tuple<>>
                    ((AsyncCompileJob **)(this + 0x128),(piecewise_construct_t *)local_70,
                     (tuple *)&DAT_019eee9c,(tuple *)&local_48);
  this_01 = *(AsyncCompileJob **)(lVar6 + 0x18);
  *(AsyncCompileJob **)(lVar6 + 0x18) = pAVar5;
  if (this_01 != (AsyncCompileJob *)0x0) {
    AsyncCompileJob::~AsyncCompileJob(this_01);
    operator_delete(this_01);
  }
  pAVar5 = local_70[0];
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  return pAVar5;
}

