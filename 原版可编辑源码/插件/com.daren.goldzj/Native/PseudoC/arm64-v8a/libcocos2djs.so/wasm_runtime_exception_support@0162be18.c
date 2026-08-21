
/* v8::internal::compiler::CodeGenerator::wasm_runtime_exception_support() const */

byte __thiscall
v8::internal::compiler::CodeGenerator::wasm_runtime_exception_support(CodeGenerator *this)

{
  return *(byte *)(*(long *)(this + 0xa0) + 2) >> 2 & 1;
}

