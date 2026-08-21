
/* v8::internal::DisassemblingDecoder::VisitFPCompare(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitFPCompare(DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)param_1 & 0xffe0fc1f;
  pcVar2 = "\'Fn, \'Fm";
  if ((int)uVar1 < 0x1e602000) {
    pcVar2 = "\'Fn, \'Fm";
    if (uVar1 == 0x1e202000) goto LAB_01281ec4;
    if (uVar1 != 0x1e202008) {
LAB_01281e80:
      Format(this,param_1,"unimplemented","(FPCompare)");
      return;
    }
  }
  else {
    if (uVar1 == 0x1e602000) goto LAB_01281ec4;
    if (uVar1 != 0x1e602008) goto LAB_01281e80;
  }
  pcVar2 = "\'Fn, #0.0";
LAB_01281ec4:
  Format(this,param_1,"fcmp",pcVar2);
  return;
}

