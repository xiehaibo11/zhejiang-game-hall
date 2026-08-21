
/* v8::internal::DisassemblingDecoder::VisitDataProcessing1Source(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitDataProcessing1Source
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)param_1 & 0xfffffc00;
  pcVar2 = "rbit";
  if ((int)uVar1 < -0x253fec00) {
    if (-0x253ff801 < (int)uVar1) {
      if (uVar1 == 0xdac00800) {
        pcVar2 = "rev32";
        goto LAB_0127ff88;
      }
      if (uVar1 != 0xdac00c00) {
        if (uVar1 != 0xdac01000) goto LAB_0127ff98;
        goto LAB_0127ff24;
      }
LAB_0127ff30:
      pcVar2 = "rev";
      goto LAB_0127ff88;
    }
    if (uVar1 == 0xdac00000) goto LAB_0127ff88;
    if (uVar1 != 0xdac00400) {
LAB_0127ff98:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
LAB_0127ff58:
    pcVar2 = "rev16";
  }
  else {
    if ((int)uVar1 < 0x5ac00800) {
      if (uVar1 != 0xdac01400) {
        pcVar2 = "rbit";
        if (uVar1 == 0x5ac00000) goto LAB_0127ff88;
        if (uVar1 != 0x5ac00400) goto LAB_0127ff98;
        goto LAB_0127ff58;
      }
    }
    else {
      if (uVar1 == 0x5ac00800) goto LAB_0127ff30;
      if (uVar1 == 0x5ac01000) {
LAB_0127ff24:
        pcVar2 = "clz";
        goto LAB_0127ff88;
      }
      if (uVar1 != 0x5ac01400) goto LAB_0127ff98;
    }
    pcVar2 = "cls";
  }
LAB_0127ff88:
  Format(this,param_1,pcVar2,"\'Rd, \'Rn");
  return;
}

