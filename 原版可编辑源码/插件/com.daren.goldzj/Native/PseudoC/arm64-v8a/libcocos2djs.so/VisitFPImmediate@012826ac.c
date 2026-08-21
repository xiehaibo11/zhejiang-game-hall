
/* v8::internal::DisassemblingDecoder::VisitFPImmediate(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitFPImmediate
          (DisassemblingDecoder *this,Instruction *param_1)

{
  char *pcVar1;
  
  if ((*(uint *)param_1 & 0xffe01c00) == 0x1e201000) {
    pcVar1 = "\'Sd, \'IFPSingle";
  }
  else {
    if ((*(uint *)param_1 & 0xffe01c00) != 0x1e601000) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar1 = "\'Dd, \'IFPDouble";
  }
  Format(this,param_1,"fmov",pcVar1);
  return;
}

