
/* v8::internal::Assembler::fnmsub(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall
v8::internal::Assembler::fnmsub
          (Assembler *this,VRegister *param_1,VRegister *param_2,VRegister *param_3,
          VRegister *param_4)

{
  uint uVar1;
  
  uVar1 = 0x1f208000;
  if (*(int *)(param_1 + 4) != 0x20) {
    uVar1 = 0x1f608000;
  }
  Emit(this,uVar1 | (uint)*(ulong *)param_1 | (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x16 |
            *(int *)param_3 << 0x10 | *(int *)param_2 << 5 | *(int *)param_4 << 10);
  return;
}

