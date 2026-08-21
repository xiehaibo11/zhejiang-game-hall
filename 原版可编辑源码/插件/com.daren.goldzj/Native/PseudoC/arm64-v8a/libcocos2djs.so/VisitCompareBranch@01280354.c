
/* v8::internal::DisassemblingDecoder::VisitCompareBranch(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitCompareBranch
          (DisassemblingDecoder *this,Instruction *param_1)

{
  Instruction IVar1;
  char *pcVar2;
  
  IVar1 = param_1[3];
  pcVar2 = "cbz";
  if ((int)((uint)(byte)IVar1 * 0x1000000) < 0x34000000) {
    pcVar2 = "cbz";
    if (IVar1 == (Instruction)0xb4) goto LAB_012803b4;
    if (IVar1 != (Instruction)0xb5) {
LAB_012803c4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  else {
    if (IVar1 == (Instruction)0x34) goto LAB_012803b4;
    if (IVar1 != (Instruction)0x35) goto LAB_012803c4;
  }
  pcVar2 = "cbnz";
LAB_012803b4:
  Format(this,param_1,pcVar2,"\'Rt, \'TImmCmpa");
  return;
}

