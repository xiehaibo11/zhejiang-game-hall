
/* v8::internal::Assembler::fcvtxn(v8::internal::VRegister const&, v8::internal::VRegister const&)
    */

void __thiscall
v8::internal::Assembler::fcvtxn(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  uint uVar1;
  
  uVar1 = 0x7e616800;
  if (*(int *)(param_1 + 0xc) != 1) {
    uVar1 = 0x2e616800;
  }
  Emit(this,*(uint *)param_1 | *(int *)param_2 << 5 | uVar1);
  return;
}

