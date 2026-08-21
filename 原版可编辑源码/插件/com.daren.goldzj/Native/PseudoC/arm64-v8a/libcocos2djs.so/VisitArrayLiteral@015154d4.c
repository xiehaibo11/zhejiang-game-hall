
/* v8::internal::interpreter::BytecodeGenerator::VisitArrayLiteral(v8::internal::ArrayLiteral*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitArrayLiteral
          (BytecodeGenerator *this,ArrayLiteral *param_1)

{
  ArrayLiteral::InitDepthAndFlags(param_1);
  BuildCreateArrayLiteral(this,(ZoneList *)(param_1 + 0x18),param_1);
  return;
}

