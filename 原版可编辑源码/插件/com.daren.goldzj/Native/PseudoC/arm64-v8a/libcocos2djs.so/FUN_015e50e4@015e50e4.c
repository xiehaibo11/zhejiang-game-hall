
void FUN_015e50e4(long *param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  undefined2 local_2c;
  ExecutionTier local_28 [4];
  uint local_24;
  
  lVar2 = *param_1;
  local_24 = param_2;
  if (param_2 < *(uint *)(*(long *)(lVar2 + 200) + 0x3c)) {
    local_28[0] = 0;
    puVar1 = (uint *)param_1[3];
    if (puVar1 < (uint *)param_1[4]) {
      *puVar1 = param_2;
      *(undefined1 *)(puVar1 + 1) = 0;
      param_1[3] = param_1[3] + 8;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
      ::__emplace_back_slow_path<unsigned_int&,v8::internal::wasm::ExecutionTier>
                ((vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                  *)(param_1 + 2),&local_24,local_28);
    }
  }
  else {
    local_2c = FUN_015e17e0(*(long *)(lVar2 + 200),*(undefined1 *)(*(long *)(lVar2 + 0x100) + 0x18),
                            lVar2 + 0xc0,param_2);
    puVar1 = (uint *)param_1[3];
    if (puVar1 < (uint *)param_1[4]) {
      *puVar1 = param_2;
      *(char *)(puVar1 + 1) = (char)local_2c;
      param_1[3] = param_1[3] + 8;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
      ::__emplace_back_slow_path<unsigned_int&,v8::internal::wasm::ExecutionTier&>
                ((vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                  *)(param_1 + 2),&local_24,(ExecutionTier *)&local_2c);
    }
    if ((char)local_2c != local_2c._1_1_) {
      puVar1 = (uint *)param_1[6];
      if (puVar1 < (uint *)param_1[7]) {
        *(char *)(puVar1 + 1) = local_2c._1_1_;
        *puVar1 = local_24;
        param_1[6] = param_1[6] + 8;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
        ::__emplace_back_slow_path<unsigned_int&,v8::internal::wasm::ExecutionTier&>
                  ((vector<v8::internal::wasm::WasmCompilationUnit,std::__ndk1::allocator<v8::internal::wasm::WasmCompilationUnit>>
                    *)(param_1 + 5),&local_24,(ExecutionTier *)((ulong)&local_2c | 1));
      }
    }
  }
  return;
}

