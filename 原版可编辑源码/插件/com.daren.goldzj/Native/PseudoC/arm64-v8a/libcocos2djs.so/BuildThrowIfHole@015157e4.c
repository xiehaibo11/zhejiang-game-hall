
/* v8::internal::interpreter::BytecodeGenerator::BuildThrowIfHole(v8::internal::Variable*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildThrowIfHole
          (BytecodeGenerator *this,Variable *param_1)

{
  if ((*(ushort *)(param_1 + 0x28) & 0x70) == 0x20) {
    BytecodeArrayBuilder::ThrowSuperNotCalledIfHole((BytecodeArrayBuilder *)(this + 0x18));
    return;
  }
  BytecodeArrayBuilder::ThrowReferenceErrorIfHole
            ((BytecodeArrayBuilder *)(this + 0x18),*(AstRawString **)(param_1 + 8));
  return;
}

