
/* v8::internal::wasm::WasmInterpreter::Thread::AddBreakFlags(unsigned char) */

void __thiscall
v8::internal::wasm::WasmInterpreter::Thread::AddBreakFlags(Thread *this,uchar param_1)

{
  this[0x6d] = (Thread)((byte)this[0x6d] | param_1);
  return;
}

