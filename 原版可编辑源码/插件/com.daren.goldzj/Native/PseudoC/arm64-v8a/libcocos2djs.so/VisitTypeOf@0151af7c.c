
/* v8::internal::interpreter::BytecodeGenerator::VisitTypeOf(v8::internal::UnaryOperation*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitTypeOf
          (BytecodeGenerator *this,UnaryOperation *param_1)

{
  VisitForTypeOfValue(this,*(Expression **)(param_1 + 8));
  BytecodeArrayBuilder::TypeOf((BytecodeArrayBuilder *)(this + 0x18));
  return;
}

