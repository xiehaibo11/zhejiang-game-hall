
/* v8::internal::Assembler::fmov(v8::internal::VRegister const&, v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::fmov(Assembler *this,VRegister *param_1,Register *param_2)

{
  uint uVar1;
  
  uVar1 = 0x1e270000;
  if (*(int *)(param_1 + 4) != 0x20) {
    uVar1 = 0x9e670000;
  }
  Emit(this,uVar1 | *(uint *)param_1 | *(int *)param_2 << 5);
  return;
}

