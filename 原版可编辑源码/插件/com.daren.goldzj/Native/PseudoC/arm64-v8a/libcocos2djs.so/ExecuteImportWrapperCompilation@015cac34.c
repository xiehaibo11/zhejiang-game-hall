
/* v8::internal::wasm::WasmCompilationUnit::ExecuteImportWrapperCompilation(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::CompilationEnv*) */

void __thiscall
v8::internal::wasm::WasmCompilationUnit::ExecuteImportWrapperCompilation
          (WasmCompilationUnit *this,WasmEngine *param_1,CompilationEnv *param_2)

{
  compiler::CompileWasmImportCallWrapper
            ((compiler *)param_1,param_2,4,
             *(undefined8 *)(*(long *)(*(long *)param_2 + 0x88) + (long)*(int *)this * 0x20),
             *(char *)(*(long *)param_2 + 0x178) != '\0');
  return;
}

