
/* v8::internal::DisassemblingDecoder::VisitFPConditionalSelect(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitFPConditionalSelect
          (DisassemblingDecoder *this,Instruction *param_1)

{
  if ((*(uint *)param_1 & 0xffe00c00 | 0x400000) == 0x1e600c00) {
    Format(this,param_1,"fcsel","\'Fd, \'Fn, \'Fm, \'Cond");
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

