
/* v8::internal::wasm::WasmInterpreter::WasmInterpreter(v8::internal::Isolate*,
   v8::internal::wasm::WasmModule const*, v8::internal::wasm::ModuleWireBytes const&,
   v8::internal::Handle<v8::internal::WasmInstanceObject>) */

void __thiscall
v8::internal::wasm::WasmInterpreter::WasmInterpreter
          (WasmInterpreter *this,long param_1,undefined8 param_2,undefined8 param_3,
          undefined8 *param_5)

{
  WasmInterpreterInternals *pWVar1;
  undefined8 uVar2;
  
  Zone::Zone((Zone *)this,*(AccountingAllocator **)(param_1 + 0x95d0),
             "../../src/wasm/wasm-interpreter.cc:4146");
  pWVar1 = operator_new(0x68);
  uVar2 = GlobalHandles::Create(*(GlobalHandles **)(param_1 + 0x95e0),*param_5);
  GlobalHandles::MakeWeak(uVar2,uVar2,FUN_01242620,0);
  WasmInterpreterInternals::WasmInterpreterInternals(pWVar1,this,param_2,param_3,uVar2);
  *(WasmInterpreterInternals **)(this + 0x40) = pWVar1;
  return;
}

