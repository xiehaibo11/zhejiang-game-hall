
/* v8::internal::Instruction::SetImmLLiteral(v8::internal::Instruction*) */

void __thiscall v8::internal::Instruction::SetImmLLiteral(Instruction *this,Instruction *param_1)

{
  if ((((long)param_1 - (long)this) * 0x40000000 >> 0x20) + 0x40000U < 0x80000) {
    *(uint *)this =
         *(uint *)this & 0xff000000 |
         *(uint *)this & 0x1f | ((uint)((ulong)((long)param_1 - (long)this) >> 2) & 0x7ffff) << 5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int19(imm19)");
}

