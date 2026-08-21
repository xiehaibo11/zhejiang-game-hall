
/* v8::internal::interpreter::BytecodeGenerator::BuildHoleCheckForVariableAssignment(v8::internal::Variable*,
   v8::internal::Token::Value) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildHoleCheckForVariableAssignment
          (BytecodeGenerator *this,long param_1,char param_3)

{
  if ((*(ushort *)(param_1 + 0x28) & 0x70) != 0x20) {
    BytecodeArrayBuilder::ThrowReferenceErrorIfHole
              ((BytecodeArrayBuilder *)(this + 0x18),*(AstRawString **)(param_1 + 8));
    return;
  }
  if ((param_3 == '\x10') && ((*(ushort *)(param_1 + 0x28) & 0xf) == 1)) {
    BytecodeArrayBuilder::ThrowSuperAlreadyCalledIfNotHole((BytecodeArrayBuilder *)(this + 0x18));
    return;
  }
  BytecodeArrayBuilder::ThrowSuperNotCalledIfHole((BytecodeArrayBuilder *)(this + 0x18));
  return;
}

