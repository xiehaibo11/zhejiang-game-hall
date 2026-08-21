
/* v8::internal::wasm::NativeModule::~NativeModule() */

void __thiscall v8::internal::wasm::NativeModule::~NativeModule(NativeModule *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  WasmImportWrapperCache *pWVar6;
  CompilationState *this_00;
  __shared_weak_count *p_Var7;
  
  CompilationState::AbortCompilation(*(CompilationState **)(this + 0x100));
  WasmEngine::FreeNativeModule(*(WasmEngine **)(this + 0x178),this);
  pWVar6 = *(WasmImportWrapperCache **)(this + 0x108);
  *(undefined8 *)(this + 0x108) = 0;
  if (pWVar6 != (WasmImportWrapperCache *)0x0) {
    WasmImportWrapperCache::~WasmImportWrapperCache(pWVar6);
    operator_delete(pWVar6);
  }
  pvVar4 = *(void **)(this + 0x160);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x168) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x158);
  *(undefined8 *)(this + 0x158) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x150);
  *(undefined8 *)(this + 0x150) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,std::__ndk1::default_delete<v8::internal::wasm::WasmCode>>>>>
             *)(this + 0x138),*(__tree_node **)(this + 0x140));
  base::Mutex::~Mutex((Mutex *)(this + 0x110));
  pWVar6 = *(WasmImportWrapperCache **)(this + 0x108);
  *(undefined8 *)(this + 0x108) = 0;
  if (pWVar6 != (WasmImportWrapperCache *)0x0) {
    WasmImportWrapperCache::~WasmImportWrapperCache(pWVar6);
    operator_delete(pWVar6);
  }
  this_00 = *(CompilationState **)(this + 0x100);
  *(undefined8 *)(this + 0x100) = 0;
  if (this_00 != (CompilationState *)0x0) {
    CompilationState::~CompilationState(this_00);
    operator_delete(this_00);
  }
  p_Var7 = *(__shared_weak_count **)(this + 0xe8);
  if (p_Var7 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var7 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
    }
  }
  lVar5 = *(long *)(this + 0xd8);
  *(undefined8 *)(this + 0xd8) = 0;
  if (lVar5 != 0) {
    FUN_01203e64();
  }
  p_Var7 = *(__shared_weak_count **)(this + 0xd0);
  if (p_Var7 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var7 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
    }
  }
  WasmCodeAllocator::~WasmCodeAllocator((WasmCodeAllocator *)this);
  return;
}

