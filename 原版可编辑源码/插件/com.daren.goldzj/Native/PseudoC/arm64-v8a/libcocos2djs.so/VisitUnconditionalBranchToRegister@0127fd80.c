
/* v8::internal::DisassemblingDecoder::VisitUnconditionalBranchToRegister(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::DisassemblingDecoder::VisitUnconditionalBranchToRegister
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)param_1 & 0xfffffc1f;
  if (uVar1 == 0xd61f0000) {
    Format(this,param_1,"br","\'Xn");
    return;
  }
  if (uVar1 != 0xd65f0000) {
    if (uVar1 == 0xd63f0000) {
      Format(this,param_1,"blr","\'Xn");
      return;
    }
    Format(this,param_1,"unimplemented","(UnconditionalBranchToRegister)");
    return;
  }
  pcVar2 = (char *)0x0;
  if ((*(uint *)param_1 & 0x3e0) != 0x3c0) {
    pcVar2 = "\'Xn";
  }
  Format(this,param_1,"ret",pcVar2);
  return;
}

