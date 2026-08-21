
/* v8::internal::wasm::JSToWasmWrapperCompilationUnit::CompileJSToWasmWrapper(v8::internal::Isolate*,
   v8::internal::Signature<v8::internal::wasm::ValueType>*, bool) */

undefined8
v8::internal::wasm::JSToWasmWrapperCompilationUnit::CompileJSToWasmWrapper
          (Isolate *param_1,Signature *param_2,bool param_3)

{
  long *plVar1;
  undefined8 uVar2;
  WasmFeatures *in_x5;
  JSToWasmWrapperCompilationUnit local_48 [8];
  Signature *local_40;
  long *local_38;
  
  WasmFeatures::FromIsolate(param_1);
  local_48[0] = (JSToWasmWrapperCompilationUnit)param_3;
  local_40 = param_2;
  compiler::NewJSToWasmCompilationJob
            ((compiler *)param_1,*(Isolate **)(param_1 + 0xc770),(WasmEngine *)param_2,
             (Signature *)(ulong)param_3,(bool)((char)&stack0xffffffffffffffd0 + '\x18'),in_x5);
  Execute(local_48);
  uVar2 = Finalize((Isolate *)local_48);
  plVar1 = local_38;
  local_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return uVar2;
}

