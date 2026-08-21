
/* v8::internal::wasm::WasmEngine::CompileFunction(v8::internal::Isolate*,
   v8::internal::wasm::NativeModule*, unsigned int, v8::internal::wasm::ExecutionTier) */

void v8::internal::wasm::WasmEngine::CompileFunction
               (undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined4 local_18 [2];
  
  local_18[0] = 0;
  WasmCompilationUnit::CompileWasmFunction
            (param_2,param_3,local_18,
             *(long *)(*(long *)(param_3 + 200) + 0x88) + (param_4 & 0xffffffff) * 0x20);
  return;
}

