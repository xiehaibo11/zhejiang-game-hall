
/* v8::internal::DisassemblingDecoder::VisitFPDataProcessing2Source(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitFPDataProcessing2Source
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)param_1 & 0xffe0fc00;
  pcVar2 = "fmul";
  if ((int)uVar1 < 0x1e600800) {
    if ((int)uVar1 < 0x1e204800) {
      if (0x1e2027ff < (int)uVar1) {
        if (uVar1 == 0x1e202800) {
LAB_012824fc:
          pcVar2 = "fadd";
          goto LAB_01282598;
        }
        if (uVar1 != 0x1e203800) goto LAB_012825a8;
LAB_01282558:
        pcVar2 = "fsub";
        goto LAB_01282598;
      }
      if (uVar1 == 0x1e200800) goto LAB_01282598;
      if (uVar1 != 0x1e201800) {
LAB_012825a8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
LAB_012824b0:
      pcVar2 = "fdiv";
      goto LAB_01282598;
    }
    if ((int)uVar1 < 0x1e206800) {
      if (uVar1 == 0x1e204800) {
LAB_0128253c:
        pcVar2 = "fmax";
        goto LAB_01282598;
      }
      if (uVar1 != 0x1e205800) goto LAB_012825a8;
LAB_01282590:
      pcVar2 = "fmin";
      goto LAB_01282598;
    }
    if (uVar1 == 0x1e206800) {
LAB_012824bc:
      pcVar2 = "fmaxnm";
      goto LAB_01282598;
    }
    if (uVar1 == 0x1e207800) {
LAB_01282440:
      pcVar2 = "fminnm";
      goto LAB_01282598;
    }
    if (uVar1 != 0x1e208800) goto LAB_012825a8;
  }
  else {
    if ((int)uVar1 < 0x1e604800) {
      if (0x1e6027ff < (int)uVar1) {
        if (uVar1 == 0x1e602800) goto LAB_012824fc;
        if (uVar1 != 0x1e603800) goto LAB_012825a8;
        goto LAB_01282558;
      }
      if (uVar1 == 0x1e600800) goto LAB_01282598;
      if (uVar1 != 0x1e601800) goto LAB_012825a8;
      goto LAB_012824b0;
    }
    if ((int)uVar1 < 0x1e606800) {
      if (uVar1 == 0x1e604800) goto LAB_0128253c;
      if (uVar1 != 0x1e605800) goto LAB_012825a8;
      goto LAB_01282590;
    }
    if (uVar1 == 0x1e606800) goto LAB_012824bc;
    if (uVar1 == 0x1e607800) goto LAB_01282440;
    if (uVar1 != 0x1e608800) goto LAB_012825a8;
  }
  pcVar2 = "fnmul";
LAB_01282598:
  Format(this,param_1,pcVar2,"\'Fd, \'Fn, \'Fm");
  return;
}

