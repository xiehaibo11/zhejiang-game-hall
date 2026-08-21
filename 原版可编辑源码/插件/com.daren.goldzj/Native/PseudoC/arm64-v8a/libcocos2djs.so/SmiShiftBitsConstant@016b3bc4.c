
/* v8::internal::compiler::EffectControlLinearizer::SmiShiftBitsConstant() */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::SmiShiftBitsConstant(EffectControlLinearizer *this)

{
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    GraphAssembler::Int32Constant((GraphAssembler *)(this + 0x38),1);
    return;
  }
  GraphAssembler::IntPtrConstant((GraphAssembler *)(this + 0x38),1);
  return;
}

