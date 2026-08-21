
/* v8::internal::wasm::JSToWasmWrapperCompilationUnit::JSToWasmWrapperCompilationUnit(v8::internal::Isolate*,
   v8::internal::wasm::WasmEngine*, v8::internal::Signature<v8::internal::wasm::ValueType>*, bool,
   v8::internal::wasm::WasmFeatures const&) */

void __thiscall
v8::internal::wasm::JSToWasmWrapperCompilationUnit::JSToWasmWrapperCompilationUnit
          (JSToWasmWrapperCompilationUnit *this,Isolate *param_1,WasmEngine *param_2,
          Signature *param_3,bool param_4,WasmFeatures *param_5)

{
  *(Signature **)(this + 8) = param_3;
  *this = (JSToWasmWrapperCompilationUnit)param_4;
  compiler::NewJSToWasmCompilationJob
            ((compiler *)param_1,(Isolate *)param_2,(WasmEngine *)param_3,
             (Signature *)(ulong)param_4,SUB81(param_5,0),param_5);
  return;
}

