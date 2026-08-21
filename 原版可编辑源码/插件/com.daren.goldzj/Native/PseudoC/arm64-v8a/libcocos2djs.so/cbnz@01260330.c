
/* v8::internal::Assembler::cbnz(v8::internal::Register const&, int) */

void __thiscall v8::internal::Assembler::cbnz(Assembler *this,Register *param_1,int param_2)

{
  if ((long)param_2 + 0x40000U < 0x80000) {
    Emit(this,(param_2 & 0x7ffffU) << 5 | (uint)*(ulong *)param_1 |
              (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x1f | 0x35000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int19(imm19)");
}

