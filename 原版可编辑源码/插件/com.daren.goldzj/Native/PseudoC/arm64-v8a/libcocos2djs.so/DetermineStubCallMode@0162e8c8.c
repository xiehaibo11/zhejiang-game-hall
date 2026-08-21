
/* v8::internal::compiler::CodeGenerator::DetermineStubCallMode() const */

bool __thiscall v8::internal::compiler::CodeGenerator::DetermineStubCallMode(CodeGenerator *this)

{
  return *(int *)(*(long *)(this + 0xa0) + 8) == 7 || *(int *)(*(long *)(this + 0xa0) + 8) - 5U < 2;
}

