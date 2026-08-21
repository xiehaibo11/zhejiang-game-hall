
/* v8::internal::DisassemblingDecoder::VisitFPDataProcessing3Source(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitFPDataProcessing3Source
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)param_1 & 0xffe08000;
  pcVar2 = "fmadd";
  if ((int)uVar1 < 0x1f400000) {
    if (0x1f1fffff < (int)uVar1) {
      if (uVar1 == 0x1f200000) {
LAB_0128266c:
        pcVar2 = "fnmadd";
        goto LAB_01282690;
      }
      if (uVar1 != 0x1f208000) goto LAB_012826a0;
LAB_01282688:
      pcVar2 = "fnmsub";
      goto LAB_01282690;
    }
    pcVar2 = "fmadd";
    if (uVar1 == 0x1f000000) goto LAB_01282690;
    if (uVar1 != 0x1f008000) {
LAB_012826a0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  else {
    if (0x1f5fffff < (int)uVar1) {
      if (uVar1 == 0x1f600000) goto LAB_0128266c;
      if (uVar1 != 0x1f608000) goto LAB_012826a0;
      goto LAB_01282688;
    }
    if (uVar1 == 0x1f400000) goto LAB_01282690;
    if (uVar1 != 0x1f408000) goto LAB_012826a0;
  }
  pcVar2 = "fmsub";
LAB_01282690:
  Format(this,param_1,pcVar2,"\'Fd, \'Fn, \'Fm, \'Fa");
  return;
}

