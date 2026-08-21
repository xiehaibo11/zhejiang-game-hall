
/* v8::internal::Assembler::bl(int) */

void __thiscall v8::internal::Assembler::bl(Assembler *this,int param_1)

{
  if ((long)param_1 + 0x2000000U >> 0x1a == 0) {
    Emit(this,param_1 & 0x3ffffffU | 0x94000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int26(imm26)");
}

