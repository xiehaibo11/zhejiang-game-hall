
/* v8::internal::interpreter::BytecodeGenerator::VisitThisFunctionVariable(v8::internal::Variable*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitThisFunctionVariable
          (BytecodeGenerator *this,Variable *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (Variable *)0x0) {
    uVar1 = Register::function_closure();
    BytecodeArrayBuilder::LoadAccumulatorWithRegister((BytecodeArrayBuilder *)(this + 0x18),uVar1);
    BuildVariableAssignment(this,param_1,0x10,1,0);
    return;
  }
  return;
}

