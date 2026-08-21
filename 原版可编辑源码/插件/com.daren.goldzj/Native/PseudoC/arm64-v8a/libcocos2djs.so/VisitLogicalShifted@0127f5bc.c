
/* v8::internal::DisassemblingDecoder::VisitLogicalShifted(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitLogicalShifted
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = *(uint *)param_1;
  uVar1 = uVar2 & 0xff200000;
  pcVar3 = "and";
  if ((int)uVar1 < 0xa000000) {
    if ((int)uVar1 < -0x36000000) {
      if (-0x56000001 < (int)uVar1) {
        if (uVar1 == 0xaa000000) {
LAB_0127f6e8:
          if ((uVar2 & 0xc0ffe0) != 0x3e0) {
            Format(this,param_1,"orr","\'Rd, \'Rn, \'Rm\'NLo");
            return;
          }
          Format(this,param_1,"mov","\'Rd, \'Rm");
          return;
        }
        if (uVar1 == 0xaa200000) {
LAB_0127f790:
          if ((~uVar2 & 0x3e0) != 0) {
            Format(this,param_1,"orn","\'Rd, \'Rn, \'Rm\'NLo");
            return;
          }
          Format(this,param_1,"mvn","\'Rd, \'Rm\'NLo");
          return;
        }
        goto LAB_0127f820;
      }
      pcVar3 = "and";
      if (uVar1 != 0x8a000000) {
        if (uVar1 == 0x8a200000) {
LAB_0127f650:
          Format(this,param_1,"bic","\'Rd, \'Rn, \'Rm\'NLo");
          return;
        }
        goto LAB_0127f820;
      }
      goto LAB_0127f6b8;
    }
    if (-0x16000001 < (int)uVar1) {
      if (uVar1 == 0xea000000) {
LAB_0127f73c:
        if ((~uVar2 & 0x1f) != 0) {
          Format(this,param_1,"ands","\'Rd, \'Rn, \'Rm\'NLo");
          return;
        }
        Format(this,param_1,"tst","\'Rn, \'Rm\'NLo");
        return;
      }
      if (uVar1 == 0xea200000) {
LAB_0127f7d8:
        Format(this,param_1,"bics","\'Rd, \'Rn, \'Rm\'NLo");
        return;
      }
      goto LAB_0127f820;
    }
    if (uVar1 != 0xca000000) {
      if (uVar1 == 0xca200000) {
LAB_0127f76c:
        Format(this,param_1,"eon","\'Rd, \'Rn, \'Rm\'NLo");
        return;
      }
      goto LAB_0127f820;
    }
  }
  else {
    if ((int)uVar1 < 0x4a000000) {
      if ((int)uVar1 < 0x2a000000) {
        if (uVar1 == 0xa000000) goto LAB_0127f6b8;
        if (uVar1 == 0xa200000) goto LAB_0127f650;
      }
      else {
        if (uVar1 == 0x2a000000) goto LAB_0127f6e8;
        if (uVar1 == 0x2a200000) goto LAB_0127f790;
      }
LAB_0127f820:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (0x69ffffff < (int)uVar1) {
      if (uVar1 == 0x6a000000) goto LAB_0127f73c;
      if (uVar1 == 0x6a200000) goto LAB_0127f7d8;
      goto LAB_0127f820;
    }
    if (uVar1 != 0x4a000000) {
      if (uVar1 == 0x4a200000) goto LAB_0127f76c;
      goto LAB_0127f820;
    }
  }
  pcVar3 = "eor";
LAB_0127f6b8:
  Format(this,param_1,pcVar3,"\'Rd, \'Rn, \'Rm\'NLo");
  return;
}

