
/* v8::internal::wasm::WasmEngine::NewNativeModule(v8::internal::Isolate*,
   v8::internal::wasm::WasmFeatures const&, std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule
   const>, unsigned long) */

void v8::internal::wasm::WasmEngine::NewNativeModule
               (ulong *param_1_00,long param_1,Isolate *param_2,undefined8 param_4,
               undefined8 *param_5,undefined8 param_6)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  NativeModuleInfo *this;
  __shared_weak_count *this_00;
  __tree_node_base *p_Var5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  NativeModule *pNVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  NativeModule *local_70;
  NativeModuleInfo *local_68;
  undefined8 local_60;
  __shared_weak_count *p_Stack_58;
  Isolate *local_48;
  
  uVar4 = FLAG_wasm_far_jump_table;
  p_Stack_58 = (__shared_weak_count *)param_5[1];
  local_60 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
  local_48 = param_2;
  WasmCodeManager::NewNativeModule
            (param_1_00,param_1,param_1,param_2,param_4,param_6,uVar4,&local_60);
  this_00 = p_Stack_58;
  if (p_Stack_58 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_58 + 8;
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
      (**(code **)(*(long *)p_Stack_58 + 0x10))(p_Stack_58);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  base::Mutex::Lock((Mutex *)(param_1 + 0x100));
  pNVar9 = (NativeModule *)*param_1_00;
  local_68 = operator_new(0x80);
  *(undefined8 *)(local_68 + 0x28) = 0;
  *(undefined8 *)(local_68 + 0x20) = 0;
  *(undefined8 *)(local_68 + 0x38) = 0;
  *(undefined8 *)(local_68 + 0x30) = 0;
  *(undefined8 *)(local_68 + 0x68) = 0;
  *(undefined8 *)(local_68 + 0x60) = 0;
  *(undefined8 *)(local_68 + 0x78) = 0;
  *(undefined8 *)(local_68 + 0x70) = 0;
  *(undefined8 *)(local_68 + 8) = 0;
  *(undefined8 *)local_68 = 0;
  *(undefined8 *)(local_68 + 0x18) = 0;
  *(undefined8 *)(local_68 + 0x10) = 0;
  *(undefined8 *)(local_68 + 0x48) = 0;
  *(undefined8 *)(local_68 + 0x40) = 0;
  *(undefined8 *)(local_68 + 0x58) = 0;
  *(undefined8 *)(local_68 + 0x50) = 0;
  *(undefined4 *)(local_68 + 0x20) = 0x3f800000;
  *(undefined8 *)(local_68 + 0x30) = 0;
  *(undefined8 *)(local_68 + 0x28) = 0;
  *(undefined8 *)(local_68 + 0x40) = 0;
  *(undefined8 *)(local_68 + 0x38) = 0;
  *(undefined4 *)(local_68 + 0x48) = 0x3f800000;
  *(undefined4 *)(local_68 + 0x70) = 0x3f800000;
  local_68[0x78] = (NativeModuleInfo)0x0;
  local_70 = pNVar9;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
          ::
          __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::pair<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
                      *)(param_1 + 0x188),&local_70,(pair *)&local_70);
  this = local_68;
  local_68 = (NativeModuleInfo *)0x0;
  if (this != (NativeModuleInfo *)0x0) {
    NativeModuleInfo::~NativeModuleInfo(this);
    operator_delete(this);
  }
  std::__ndk1::
  __hash_table<v8::internal::Isolate*,std::__ndk1::hash<v8::internal::Isolate*>,std::__ndk1::equal_to<v8::internal::Isolate*>,std::__ndk1::allocator<v8::internal::Isolate*>>
  ::__emplace_unique_key_args<v8::internal::Isolate*,v8::internal::Isolate*const&>
            (*(__hash_table<v8::internal::Isolate*,std::__ndk1::hash<v8::internal::Isolate*>,std::__ndk1::equal_to<v8::internal::Isolate*>,std::__ndk1::allocator<v8::internal::Isolate*>>
               **)(lVar6 + 0x18),&local_48,&local_48);
  local_70 = (NativeModule *)&local_48;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
          ::
          __emplace_unique_key_args<v8::internal::Isolate*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Isolate*const&>,std::__ndk1::tuple<>>
                    ((Isolate **)(param_1 + 0x160),(piecewise_construct_t *)&local_48,
                     (tuple *)&DAT_019eee9c,(tuple *)&local_70);
  plVar8 = *(long **)(lVar6 + 0x18);
  uVar7 = *param_1_00;
  plVar10 = plVar8 + 1;
  plVar11 = (long *)*plVar10;
  plVar12 = plVar10;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar8 + 1;
    do {
      while (plVar12 = plVar11, uVar7 < (ulong)plVar12[4]) {
        plVar10 = plVar12;
        plVar11 = (long *)*plVar12;
        if ((long *)*plVar12 == (long *)0x0) {
          lVar6 = *plVar12;
          goto joined_r0x0120c3fc;
        }
      }
      if (uVar7 <= (ulong)plVar12[4]) break;
      plVar10 = plVar12 + 1;
      plVar11 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
  lVar6 = *plVar10;
joined_r0x0120c3fc:
  if (lVar6 == 0) {
    p_Var5 = operator_new(0x28);
    *(ulong *)(p_Var5 + 0x20) = uVar7;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(long **)(p_Var5 + 0x10) = plVar12;
    *plVar10 = (long)p_Var5;
    if (*(long *)*plVar8 != 0) {
      *plVar8 = *(long *)*plVar8;
      p_Var5 = (__tree_node_base *)*plVar10;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)plVar8[1],p_Var5);
    plVar8[2] = plVar8[2] + 1;
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 0x100));
  return;
}

