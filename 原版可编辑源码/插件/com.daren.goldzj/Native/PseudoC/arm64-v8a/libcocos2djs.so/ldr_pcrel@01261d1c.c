
/* v8::internal::Assembler::ldr_pcrel(v8::internal::CPURegister const&, int) */

void __thiscall v8::internal::Assembler::ldr_pcrel(Assembler *this,CPURegister *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((long)param_2 + 0x40000U < 0x80000) {
    uVar2 = 0x58000000;
    if (*(int *)(param_1 + 4) != 0x40) {
      uVar2 = 0x18000000;
    }
    uVar1 = 0x5c000000;
    if (*(int *)(param_1 + 4) != 0x40) {
      uVar1 = 0x1c000000;
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar2 = uVar1;
    }
    Emit(this,uVar2 | (param_2 & 0x7ffffU) << 5 | *(uint *)param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int19(imm19)");
}

