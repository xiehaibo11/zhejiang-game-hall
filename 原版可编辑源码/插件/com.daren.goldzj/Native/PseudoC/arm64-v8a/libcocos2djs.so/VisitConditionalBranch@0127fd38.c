
/* v8::internal::DisassemblingDecoder::VisitConditionalBranch(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitConditionalBranch
          (DisassemblingDecoder *this,Instruction *param_1)

{
  if ((*(uint *)param_1 & 0xff000010) == 0x54000000) {
    Format(this,param_1,"b.\'CBrn","\'TImmCond");
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

