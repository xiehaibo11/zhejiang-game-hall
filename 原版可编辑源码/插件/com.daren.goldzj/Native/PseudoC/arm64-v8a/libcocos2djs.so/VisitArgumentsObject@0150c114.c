
/* v8::internal::interpreter::BytecodeGenerator::VisitArgumentsObject(v8::internal::Variable*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitArgumentsObject
          (BytecodeGenerator *this,Variable *param_1)

{
  byte bVar1;
  
  if (param_1 != (Variable *)0x0) {
    if ((*(byte *)(*(long *)(this + 0x1e0) + 0x81) & 1) == 0) {
      bVar1 = ~*(byte *)(*(long *)(this + 0x1e0) + 0x83) & 1;
    }
    else {
      bVar1 = 1;
    }
    BytecodeArrayBuilder::CreateArguments((BytecodeArrayBuilder *)(this + 0x18),bVar1);
    BuildVariableAssignment(this,param_1,0x11,1,0);
    return;
  }
  return;
}

