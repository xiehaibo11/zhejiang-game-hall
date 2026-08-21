
/* v8::internal::DisassemblingDecoder::VisitConditionalCompareRegister(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::DisassemblingDecoder::VisitConditionalCompareRegister
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)param_1 + 0x45c00000U >> 0x1e | (*(int *)param_1 + 0x45c00000U) * 4 & 0xff803043;
  if (uVar1 < 4) {
    Format(this,param_1,*(char **)(&DAT_01cbe468 + (long)(int)uVar1 * 8),
           "\'Rn, \'Rm, \'INzcv, \'Cond");
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

