
/* v8::internal::Assembler::tbx(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::VRegister const&, v8::internal::VRegister const&)
    */

void __thiscall
v8::internal::Assembler::tbx
          (Assembler *this,VRegister *param_1,VRegister *param_2,VRegister *param_3,
          VRegister *param_4,VRegister *param_5)

{
  uint uVar1;
  
  uVar1 = 0x4e005000;
  if (*(int *)(param_1 + 4) != 0x80 || *(int *)(param_1 + 8) != 1) {
    uVar1 = 0xe005000;
  }
  Emit(this,uVar1 | *(int *)param_5 << 0x10 | *(int *)param_2 << 5 | *(uint *)param_1);
  return;
}

