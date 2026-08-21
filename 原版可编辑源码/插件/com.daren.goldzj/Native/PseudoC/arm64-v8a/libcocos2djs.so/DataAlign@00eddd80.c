
/* v8::internal::Assembler::DataAlign(int) */

void __thiscall v8::internal::Assembler::DataAlign(Assembler *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x20) - *(int *)(this + 0x10);
  while ((param_1 - 1U & uVar1) != 0) {
    dc8(this,0xcc);
    uVar1 = *(int *)(this + 0x20) - *(int *)(this + 0x10);
  }
  return;
}

