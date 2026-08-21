
/* v8::internal::TurboAssembler::ComputeCodeStartAddress(v8::internal::Register const&) */

void __thiscall
v8::internal::TurboAssembler::ComputeCodeStartAddress(TurboAssembler *this,Register *param_1)

{
  Assembler::adr((Assembler *)this,param_1,*(int *)(this + 0x10) - *(int *)(this + 0x20));
  return;
}

