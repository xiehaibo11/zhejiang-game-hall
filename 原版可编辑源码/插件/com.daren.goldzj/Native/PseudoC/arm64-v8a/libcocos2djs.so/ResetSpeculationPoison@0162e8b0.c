
/* v8::internal::compiler::CodeGenerator::ResetSpeculationPoison() */

void __thiscall v8::internal::compiler::CodeGenerator::ResetSpeculationPoison(CodeGenerator *this)

{
  if (*(int *)(this + 0x45c) == 1) {
    return;
  }
  TurboAssembler::ResetSpeculationPoisonRegister((TurboAssembler *)(this + 0xd0));
  return;
}

