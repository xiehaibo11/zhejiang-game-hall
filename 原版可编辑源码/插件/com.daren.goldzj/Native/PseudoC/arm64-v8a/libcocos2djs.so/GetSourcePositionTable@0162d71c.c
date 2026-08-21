
/* v8::internal::compiler::CodeGenerator::GetSourcePositionTable() */

void v8::internal::compiler::CodeGenerator::GetSourcePositionTable(void)

{
  SourcePositionTableBuilder::ToSourcePositionTableVector();
  return;
}

