
/* v8::internal::Assembler::fcvt(v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall v8::internal::Assembler::fcvt(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 4) == 0x40) && (*(int *)(param_1 + 0xc) == 1)) {
    uVar1 = 0x1e22c000;
    if (*(int *)(param_2 + 4) != 0x20) {
      uVar1 = 0x1ee2c000;
    }
  }
  else if (*(int *)(param_1 + 4) == 0x20) {
    uVar1 = 0x1e624000;
    if (*(int *)(param_2 + 4) != 0x40 || *(int *)(param_2 + 0xc) != 1) {
      uVar1 = 0x1ee24000;
    }
  }
  else {
    uVar1 = 0x1e63c000;
    if (*(int *)(param_2 + 4) != 0x40 || *(int *)(param_2 + 0xc) != 1) {
      uVar1 = 0x1e23c000;
    }
  }
  Emit(this,uVar1 | (int)*(ulong *)param_2 << 5 | *(uint *)param_1 |
            (uint)(*(ulong *)param_2 >> 0x20 == 0x40) << 0x16);
  return;
}

