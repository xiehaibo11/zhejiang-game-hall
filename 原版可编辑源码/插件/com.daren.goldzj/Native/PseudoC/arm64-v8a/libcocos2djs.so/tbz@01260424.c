
/* v8::internal::Assembler::tbz(v8::internal::Register const&, unsigned int, int) */

void __thiscall
v8::internal::Assembler::tbz(Assembler *this,Register *param_1,uint param_2,int param_3)

{
  if ((long)param_3 + 0x2000U < 0x4000) {
    Emit(this,(param_2 & 0x20) << 0x1a | (param_2 & 0x1f) << 0x13 | (param_3 & 0x3fffU) << 5 |
              *(uint *)param_1 | 0x36000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int14(imm14)");
}

