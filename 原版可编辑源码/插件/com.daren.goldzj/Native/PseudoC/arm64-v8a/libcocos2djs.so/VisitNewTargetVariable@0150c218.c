
/* v8::internal::interpreter::BytecodeGenerator::VisitNewTargetVariable(v8::internal::Variable*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitNewTargetVariable
          (BytecodeGenerator *this,Variable *param_1)

{
  uint uVar1;
  
  if (param_1 != (Variable *)0x0) {
    uVar1 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
    if (((6 < (uVar1 & 0xff) - 10) && (1 < (uVar1 & 0xff) - 1)) &&
       ((*(ushort *)(param_1 + 0x28) & 0x380) != 0x100)) {
      BytecodeArrayBuilder::LoadAccumulatorWithRegister
                ((BytecodeArrayBuilder *)(this + 0x18),*(undefined4 *)(this + 0x308));
      BuildVariableAssignment(this,param_1,0x10,1,0);
      return;
    }
  }
  return;
}

