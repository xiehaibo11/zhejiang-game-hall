
/* v8::internal::Assembler::b(int, v8::internal::Condition) */

void __thiscall v8::internal::Assembler::b(Assembler *this,uint param_1,uint param_3)

{
  if ((long)(int)param_1 + 0x40000U < 0x80000) {
    Emit(this,(param_1 & 0x7ffff) << 5 | param_3 | 0x54000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int19(imm19)");
}

