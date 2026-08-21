
/* v8::internal::DisassemblingDecoder::VisitAddSubWithCarry(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitAddSubWithCarry
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)param_1 + 0x66000000;
  uVar1 = uVar1 >> 0x1d | uVar1 * 8 & 0xff07e007;
  if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar2 = *(uint *)param_1 & 0x3e0;
  pcVar3 = "adc";
  switch(uVar1) {
  case 1:
  case 5:
    pcVar3 = "adcs";
    break;
  case 2:
  case 6:
    if (uVar2 == 0x3e0) {
      pcVar3 = "ngc";
LAB_0127f360:
      Format(this,param_1,pcVar3,"\'Rd, \'Rm");
      return;
    }
    pcVar3 = "sbc";
    break;
  case 3:
  case 7:
    if (uVar2 == 0x3e0) {
      pcVar3 = "ngcs";
      goto LAB_0127f360;
    }
    pcVar3 = "sbcs";
  }
  Format(this,param_1,pcVar3,"\'Rd, \'Rn, \'Rm");
  return;
}

