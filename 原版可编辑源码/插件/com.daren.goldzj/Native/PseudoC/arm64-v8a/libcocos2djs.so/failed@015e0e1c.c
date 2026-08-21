
/* v8::internal::wasm::CompilationState::failed() const */

byte __thiscall v8::internal::wasm::CompilationState::failed(CompilationState *this)

{
  return (byte)this[0x30] & 1;
}

