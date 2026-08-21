
/* v8::internal::DisassemblingDecoder::VisitFPConditionalCompare(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitFPConditionalCompare
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)param_1 & 0xffe00c10;
  pcVar2 = "fccmp";
  if ((int)uVar1 < 0x1e600400) {
    pcVar2 = "fccmp";
    if (uVar1 == 0x1e200400) goto LAB_01281f5c;
    if (uVar1 != 0x1e200410) {
LAB_01281f18:
      Format(this,param_1,"unimplemented","(FPConditionalCompare)");
      return;
    }
  }
  else {
    if (uVar1 == 0x1e600400) goto LAB_01281f5c;
    if (uVar1 != 0x1e600410) goto LAB_01281f18;
  }
  pcVar2 = "fccmpe";
LAB_01281f5c:
  Format(this,param_1,pcVar2,"\'Fn, \'Fm, \'INzcv, \'Cond");
  return;
}

