
/* v8::internal::Assembler::adr(v8::internal::Register const&, int) */

void __thiscall v8::internal::Assembler::adr(Assembler *this,Register *param_1,int param_2)

{
  if ((long)param_2 + 0x100000U < 0x200000) {
    Emit(this,(param_2 & 0x1ffffcU) << 3 | (param_2 & 3U) << 0x1d | *(uint *)param_1 | 0x10000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int21(imm21)");
}

