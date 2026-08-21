
/* v8::internal::wasm::WasmInterpreter::~WasmInterpreter() */

void __thiscall v8::internal::wasm::WasmInterpreter::~WasmInterpreter(WasmInterpreter *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (lVar1 != 0) {
    FUN_01243510();
  }
  Zone::~Zone((Zone *)this);
  return;
}

