
/* v8::internal::DisassemblingDecoder::VisitTestBranch(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitTestBranch(DisassemblingDecoder *this,Instruction *param_1)

{
  char *pcVar1;
  
  if ((*(uint *)param_1 & 0x7f000000) == 0x36000000) {
    pcVar1 = "tbz";
  }
  else {
    if ((*(uint *)param_1 & 0x7f000000) != 0x37000000) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar1 = "tbnz";
  }
  Format(this,param_1,pcVar1,"\'Rt, \'IS, \'TImmTest");
  return;
}

