
/* v8::internal::Assembler::fcvtl(v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall
v8::internal::Assembler::fcvtl(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  uint uVar1;
  
  uVar1 = 0xe617800;
  if (*(int *)(param_1 + 0xc) != 2 || *(int *)(param_1 + 4) != 0x80) {
    uVar1 = 0xe217800;
  }
  Emit(this,uVar1 | *(int *)param_2 << 5 | *(uint *)param_1);
  return;
}

