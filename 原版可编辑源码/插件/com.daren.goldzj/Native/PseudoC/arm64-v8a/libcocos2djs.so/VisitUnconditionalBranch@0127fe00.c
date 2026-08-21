
/* v8::internal::DisassemblingDecoder::VisitUnconditionalBranch(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitUnconditionalBranch
          (DisassemblingDecoder *this,Instruction *param_1)

{
  char *pcVar1;
  
  if ((*(uint *)param_1 & 0xfc000000) == 0x14000000) {
    pcVar1 = "b";
  }
  else {
    if ((*(uint *)param_1 & 0xfc000000) != 0x94000000) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar1 = "bl";
  }
  Format(this,param_1,pcVar1,"\'TImmUncn");
  return;
}

