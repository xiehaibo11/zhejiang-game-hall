
/* v8::internal::compiler::CodeGenerator::MarkLazyDeoptSite() */

void __thiscall v8::internal::compiler::CodeGenerator::MarkLazyDeoptSite(CodeGenerator *this)

{
  *(int *)(this + 0x3bc) = *(int *)(this + 0xf0) - *(int *)(this + 0xe0);
  return;
}

