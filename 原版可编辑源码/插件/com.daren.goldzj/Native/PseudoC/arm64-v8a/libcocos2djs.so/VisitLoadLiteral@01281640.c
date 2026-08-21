
/* v8::internal::DisassemblingDecoder::VisitLoadLiteral(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLoadLiteral
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)param_1[3];
  if ((int)(uVar1 * 0x1000000) < 0x58000000) {
    if (uVar1 == 0x18) {
      Format(this,param_1,"ldr","\'Wt, \'ILLiteral \'LValue");
      return;
    }
    if (uVar1 == 0x1c) {
      Format(this,param_1,"ldr","\'St, \'ILLiteral \'LValue");
      return;
    }
  }
  else {
    if (uVar1 == 0x5c) {
      Format(this,param_1,"ldr","\'Dt, \'ILLiteral \'LValue");
      return;
    }
    if (uVar1 == 0x58) {
      Format(this,param_1,"ldr","\'Xt, \'ILLiteral \'LValue");
      return;
    }
  }
  Format(this,param_1,"unimplemented","(LoadLiteral)");
  return;
}

