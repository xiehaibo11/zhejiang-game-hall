
/* v8::internal::compiler::CodeGenerator::InitializeSpeculationPoison() */

void __thiscall
v8::internal::compiler::CodeGenerator::InitializeSpeculationPoison(CodeGenerator *this)

{
  if (*(int *)(this + 0x45c) != 1) {
    if ((*(byte *)(*(long *)(this + 0xa0) + 1) >> 1 & 1) == 0) {
      TurboAssembler::ResetSpeculationPoisonRegister((TurboAssembler *)(this + 0xd0));
      return;
    }
    AssemblerBase::RecordComment
              ((AssemblerBase *)(this + 0xd0),"-- Prologue: generate speculation poison --");
    GenerateSpeculationPoisonFromCodeStartRegister(this);
    if ((*(byte *)(*(long *)(this + 0xa0) + 1) >> 2 & 1) != 0) {
      AssembleRegisterArgumentPoisoning(this);
      return;
    }
  }
  return;
}

