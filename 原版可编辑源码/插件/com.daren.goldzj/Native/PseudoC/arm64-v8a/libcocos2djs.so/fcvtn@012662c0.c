
/* v8::internal::Assembler::fcvtn(v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall
v8::internal::Assembler::fcvtn(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  uint uVar1;
  
  uVar1 = 0xe616800;
  if (*(int *)(param_2 + 0xc) != 2 || *(int *)(param_2 + 4) != 0x80) {
    uVar1 = 0xe216800;
  }
  Emit(this,uVar1 | *(int *)param_2 << 5 | *(uint *)param_1);
  return;
}

