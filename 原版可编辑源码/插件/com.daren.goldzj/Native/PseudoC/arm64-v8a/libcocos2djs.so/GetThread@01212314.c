
/* v8::internal::wasm::WasmInterpreter::GetThread(int) */

undefined8 __thiscall
v8::internal::wasm::WasmInterpreter::GetThread(WasmInterpreter *this,int param_1)

{
  if (param_1 == 0) {
    return *(undefined8 *)(*(long *)(this + 0x40) + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","0 == id");
}

