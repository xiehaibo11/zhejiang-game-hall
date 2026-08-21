
/* v8::internal::wasm::WasmEngine::ImportNativeModule(v8::internal::Isolate*,
   std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>) */

undefined8 __thiscall
v8::internal::wasm::WasmEngine::ImportNativeModule(WasmEngine *this,Isolate *param_1,ulong *param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  __tree_node_base *p_Var6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong local_a0;
  __shared_weak_count *p_Stack_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_68;
  Isolate *local_60 [2];
  Isolate **local_38;
  
  uVar8 = *param_3;
  uStack_78 = (*(undefined8 **)(uVar8 + 0xe0))[1];
  local_80 = **(undefined8 **)(uVar8 + 0xe0);
  local_68 = uVar8;
  local_60[0] = param_1;
  uVar4 = CreateWasmScript(param_1,&local_80,*(long *)(uVar8 + 200) + 0x188,
                           *(undefined8 *)(*(long *)(uVar8 + 200) + 0x50));
  local_88 = 0;
  CompileJsToWasmWrappers(param_1,*(WasmModule **)(uVar8 + 200),(Handle *)&local_88);
  p_Stack_98 = (__shared_weak_count *)param_3[1];
  local_a0 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar5 = WasmModuleObject::New(param_1,&local_a0,uVar4,local_88,*(undefined8 *)(uVar8 + 0x90));
  this_00 = p_Stack_98;
  if (p_Stack_98 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_98 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)p_Stack_98 + 0x10))(p_Stack_98);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  base::Mutex::Lock((Mutex *)(this + 0x100));
  local_38 = local_60;
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
          ::
          __emplace_unique_key_args<v8::internal::Isolate*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Isolate*const&>,std::__ndk1::tuple<>>
                    ((Isolate **)(this + 0x160),(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_019eee9c,(tuple *)&local_38);
  plVar9 = *(long **)(lVar7 + 0x18);
  plVar10 = plVar9 + 1;
  plVar11 = (long *)*plVar10;
  plVar12 = plVar10;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar9 + 1;
    do {
      while (plVar12 = plVar11, local_68 < (ulong)plVar12[4]) {
        plVar10 = plVar12;
        plVar11 = (long *)*plVar12;
        if ((long *)*plVar12 == (long *)0x0) {
          lVar7 = *plVar12;
          goto joined_r0x0120a878;
        }
      }
      if (local_68 <= (ulong)plVar12[4]) break;
      plVar10 = plVar12 + 1;
      plVar11 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
  lVar7 = *plVar10;
joined_r0x0120a878:
  if (lVar7 == 0) {
    p_Var6 = operator_new(0x28);
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(long **)(p_Var6 + 0x10) = plVar12;
    *(ulong *)(p_Var6 + 0x20) = local_68;
    *plVar10 = (long)p_Var6;
    if (*(long *)*plVar9 != 0) {
      *plVar9 = *(long *)*plVar9;
      p_Var6 = (__tree_node_base *)*plVar10;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)plVar9[1],p_Var6);
    plVar9[2] = plVar9[2] + 1;
  }
  local_38 = (Isolate **)&local_68;
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
          ::
          __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::NativeModule*const&>,std::__ndk1::tuple<>>
                    ((NativeModule **)(this + 0x188),(piecewise_construct_t *)&local_68,
                     (tuple *)&DAT_019eee9c,(tuple *)&local_38);
  std::__ndk1::
  __hash_table<v8::internal::Isolate*,std::__ndk1::hash<v8::internal::Isolate*>,std::__ndk1::equal_to<v8::internal::Isolate*>,std::__ndk1::allocator<v8::internal::Isolate*>>
  ::__emplace_unique_key_args<v8::internal::Isolate*,v8::internal::Isolate*const&>
            (*(__hash_table<v8::internal::Isolate*,std::__ndk1::hash<v8::internal::Isolate*>,std::__ndk1::equal_to<v8::internal::Isolate*>,std::__ndk1::allocator<v8::internal::Isolate*>>
               **)(lVar7 + 0x18),local_60,local_60);
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  Debug::OnAfterCompile(*(Debug **)(local_60[0] + 0xb6c8),uVar4);
  return uVar5;
}

