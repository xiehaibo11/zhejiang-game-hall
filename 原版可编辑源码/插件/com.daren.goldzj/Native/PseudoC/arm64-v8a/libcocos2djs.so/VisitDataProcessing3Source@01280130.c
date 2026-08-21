
/* v8::internal::DisassemblingDecoder::VisitDataProcessing3Source(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitDataProcessing3Source
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = *(uint *)param_1 & 0xffe08000;
  uVar1 = *(uint *)param_1 & 0x7c00;
  if ((int)uVar2 < -0x64600000) {
    if (-0x64e00001 < (int)uVar2) {
      if (uVar2 == 0x9b200000) {
        if (uVar1 != 0x7c00) {
          pcVar3 = "smaddl";
LAB_0128033c:
          Format(this,param_1,pcVar3,"\'Xd, \'Wn, \'Wm, \'Xa");
          return;
        }
        pcVar3 = "smull";
      }
      else {
        if (uVar2 != 0x9b208000) {
          if (uVar2 == 0x9b400000) {
            pcVar3 = "smulh";
            goto LAB_01280264;
          }
          goto LAB_01280348;
        }
        if (uVar1 != 0x7c00) {
          pcVar3 = "smsubl";
          goto LAB_0128033c;
        }
        pcVar3 = "smnegl";
      }
LAB_012802cc:
      Format(this,param_1,pcVar3,"\'Xd, \'Wn, \'Wm");
      return;
    }
    if (uVar2 != 0x9b000000) {
      if (uVar2 != 0x9b008000) {
LAB_01280348:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
LAB_01280280:
      if (uVar1 != 0x7c00) {
        pcVar3 = "msub";
        goto LAB_012802f4;
      }
      pcVar3 = "mneg";
      goto LAB_01280294;
    }
  }
  else {
    if ((int)uVar2 < -0x64400000) {
      if (uVar2 == 0x9ba00000) {
        if (uVar1 != 0x7c00) {
          pcVar3 = "umaddl";
          goto LAB_0128033c;
        }
        pcVar3 = "umull";
      }
      else {
        if (uVar2 != 0x9ba08000) goto LAB_01280348;
        if (uVar1 != 0x7c00) {
          pcVar3 = "umsubl";
          goto LAB_0128033c;
        }
        pcVar3 = "umnegl";
      }
      goto LAB_012802cc;
    }
    if (uVar2 == 0x9bc00000) {
      pcVar3 = "umulh";
LAB_01280264:
      Format(this,param_1,pcVar3,"\'Xd, \'Xn, \'Xm");
      return;
    }
    if (uVar2 == 0x1b008000) goto LAB_01280280;
    if (uVar2 != 0x1b000000) goto LAB_01280348;
  }
  if (uVar1 != 0x7c00) {
    pcVar3 = "madd";
LAB_012802f4:
    Format(this,param_1,pcVar3,"\'Rd, \'Rn, \'Rm, \'Ra");
    return;
  }
  pcVar3 = "mul";
LAB_01280294:
  Format(this,param_1,pcVar3,"\'Rd, \'Rn, \'Rm");
  return;
}

