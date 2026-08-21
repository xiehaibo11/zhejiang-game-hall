
/* v8::internal::compiler::CodeGenerator::~CodeGenerator() */

void __thiscall v8::internal::compiler::CodeGenerator::~CodeGenerator(CodeGenerator *this)

{
  ~CodeGenerator(this);
  operator_delete(this);
  return;
}

