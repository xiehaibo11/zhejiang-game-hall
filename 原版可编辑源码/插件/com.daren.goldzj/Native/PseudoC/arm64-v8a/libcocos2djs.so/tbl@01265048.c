
/* v8::internal::Assembler::tbl(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall
v8::internal::Assembler::tbl
          (Assembler *this,VRegister *param_1,VRegister *param_2,VRegister *param_3,
          VRegister *param_4)

{
  uint uVar1;
  
  uVar1 = 0x4e002000;
  if (*(int *)(param_1 + 4) != 0x80 || *(int *)(param_1 + 8) != 1) {
    uVar1 = 0xe002000;
  }
  Emit(this,uVar1 | *(int *)param_4 << 0x10 | *(int *)param_2 << 5 | *(uint *)param_1);
  return;
}

