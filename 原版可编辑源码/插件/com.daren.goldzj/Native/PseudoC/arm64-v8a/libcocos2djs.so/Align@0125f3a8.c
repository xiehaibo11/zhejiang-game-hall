
/* v8::internal::Assembler::Align(int) */

void __thiscall v8::internal::Assembler::Align(Assembler *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x20) - *(int *)(this + 0x10);
  while ((param_1 - 1U & uVar1) != 0) {
    Emit(this,0xd503201f);
    uVar1 = *(int *)(this + 0x20) - *(int *)(this + 0x10);
  }
  return;
}

