
/* v8::internal::Assembler::tbl(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&) */

void v8::internal::Assembler::tbl
               (VRegister *param_1,VRegister *param_2,VRegister *param_3,VRegister *param_4,
               VRegister *param_5,VRegister *param_6)

{
  uint uVar1;
  int *in_x6;
  
  uVar1 = 0x4e006000;
  if (*(int *)(param_2 + 4) != 0x80 || *(int *)(param_2 + 8) != 1) {
    uVar1 = 0xe006000;
  }
  Emit((Assembler *)param_1,uVar1 | *in_x6 << 0x10 | *(int *)param_3 << 5 | *(uint *)param_2);
  return;
}

