
/* v8::internal::interpreter::BytecodeGenerator::VisitRestArgumentsArray(v8::internal::Variable*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitRestArgumentsArray
          (BytecodeGenerator *this,Variable *param_1)

{
  if (param_1 != (Variable *)0x0) {
    BytecodeArrayBuilder::CreateArguments((BytecodeArrayBuilder *)(this + 0x18),2);
    BuildVariableAssignment(this,param_1,0x11,1,0);
    return;
  }
  return;
}

