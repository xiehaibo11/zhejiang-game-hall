
/* v8::internal::DisassemblingDecoder::VisitFPIntegerConvert(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitFPIntegerConvert
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)param_1 & 0xfffffc00;
  pcVar3 = "unimplemented";
  pcVar2 = "unimplemented";
  pcVar5 = "(FPIntegerConvert)";
  pcVar4 = "(FPIntegerConvert)";
  if ((int)uVar1 < -0x61510000) {
    if ((int)uVar1 < -0x619f0000) {
      if ((int)uVar1 < -0x61d80000) {
        if (-0x61dd0001 < (int)uVar1) {
          if (uVar1 == 0x9e230000) goto LAB_01282aec;
          if (uVar1 == 0x9e240000) goto LAB_01282ae0;
          pcVar3 = pcVar2;
          pcVar5 = pcVar4;
          if (uVar1 != 0x9e250000) goto LAB_01282bc0;
          goto LAB_01282a54;
        }
        if (uVar1 != 0x9e200000) {
          if (uVar1 != 0x9e210000) {
            pcVar3 = pcVar2;
            pcVar5 = pcVar4;
            if (uVar1 == 0x9e220000) goto LAB_01282a88;
            goto LAB_01282bc0;
          }
          goto LAB_01282948;
        }
      }
      else {
        if ((int)uVar1 < -0x61cf0000) {
          if (uVar1 != 0x9e280000) {
            if (uVar1 == 0x9e290000) goto LAB_01282a18;
            pcVar3 = pcVar2;
            pcVar5 = pcVar4;
            if (uVar1 != 0x9e300000) goto LAB_01282bc0;
            goto LAB_01282b48;
          }
LAB_01282a24:
          pcVar3 = "fcvtps";
          goto LAB_01282bb8;
        }
        if ((int)uVar1 < -0x61c70000) {
          if (uVar1 == 0x9e310000) goto LAB_01282b3c;
          pcVar3 = pcVar2;
          pcVar5 = pcVar4;
          if (uVar1 != 0x9e380000) goto LAB_01282bc0;
          goto LAB_01282ba4;
        }
        if (uVar1 == 0x9e390000) goto LAB_01282b98;
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar1 != 0x9e600000) goto LAB_01282bc0;
      }
LAB_01282b18:
      pcVar3 = "fcvtns";
    }
    else if ((int)uVar1 < -0x61980000) {
      if ((int)uVar1 < -0x619c0000) {
        if (uVar1 != 0x9e610000) {
          if (uVar1 == 0x9e620000) goto LAB_01282a88;
          pcVar3 = pcVar2;
          pcVar5 = pcVar4;
          if (uVar1 == 0x9e630000) goto LAB_01282aec;
          goto LAB_01282bc0;
        }
LAB_01282948:
        pcVar3 = "fcvtnu";
      }
      else {
        if ((int)uVar1 < -0x619a0000) {
          if (uVar1 == 0x9e640000) goto LAB_01282ae0;
          if (uVar1 != 0x9e650000) goto LAB_01282bc0;
          goto LAB_01282a54;
        }
        if (uVar1 != 0x9e660000) {
          pcVar5 = pcVar4;
          if (uVar1 == 0x9e670000) {
LAB_01282ab4:
            Format(this,param_1,"fmov","\'Fd, \'Rn");
            return;
          }
          goto LAB_01282bc0;
        }
LAB_01282bb0:
        pcVar3 = "fmov";
      }
    }
    else if ((int)uVar1 < -0x618f0000) {
      if (uVar1 == 0x9e680000) goto LAB_01282a24;
      if (uVar1 != 0x9e690000) {
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar1 != 0x9e700000) goto LAB_01282bc0;
        goto LAB_01282b48;
      }
LAB_01282a18:
      pcVar3 = "fcvtpu";
    }
    else {
      if (-0x61870001 < (int)uVar1) {
        if (uVar1 != 0x9e790000) {
          pcVar3 = pcVar2;
          pcVar5 = pcVar4;
          if (uVar1 == 0x9eae0000) {
            Format(this,param_1,"fmov","\'Rd, \'Vn.D[1]");
            return;
          }
          goto LAB_01282bc0;
        }
        goto LAB_01282b98;
      }
      if (uVar1 != 0x9e710000) {
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar1 != 0x9e780000) goto LAB_01282bc0;
        goto LAB_01282ba4;
      }
LAB_01282b3c:
      pcVar3 = "fcvtmu";
    }
  }
  else if ((int)uVar1 < 0x1e380000) {
    if ((int)uVar1 < 0x1e250000) {
      if ((int)uVar1 < 0x1e220000) {
        if (uVar1 == 0x9eaf0000) {
          Format(this,param_1,"fmov","\'Vd.D[1], \'Rn");
          return;
        }
        if (uVar1 == 0x1e200000) goto LAB_01282b18;
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar1 != 0x1e210000) goto LAB_01282bc0;
        goto LAB_01282948;
      }
      if (uVar1 == 0x1e220000) {
LAB_01282a88:
        Format(this,param_1,"scvtf","\'Fd, \'Rn");
        return;
      }
      if (uVar1 == 0x1e230000) goto LAB_01282aec;
      pcVar3 = pcVar2;
      pcVar5 = pcVar4;
      if (uVar1 != 0x1e240000) goto LAB_01282bc0;
LAB_01282ae0:
      pcVar3 = "fcvtas";
    }
    else {
      if (0x1e27ffff < (int)uVar1) {
        if (0x1e2fffff < (int)uVar1) {
          if (uVar1 != 0x1e300000) {
            pcVar3 = pcVar2;
            pcVar5 = pcVar4;
            if (uVar1 != 0x1e310000) goto LAB_01282bc0;
            goto LAB_01282b3c;
          }
          goto LAB_01282b48;
        }
        if (uVar1 != 0x1e280000) {
          pcVar3 = pcVar2;
          pcVar5 = pcVar4;
          if (uVar1 != 0x1e290000) goto LAB_01282bc0;
          goto LAB_01282a18;
        }
        goto LAB_01282a24;
      }
      if (uVar1 != 0x1e250000) {
        if (uVar1 != 0x1e260000) {
          pcVar3 = pcVar2;
          pcVar5 = pcVar4;
          if (uVar1 == 0x1e270000) goto LAB_01282ab4;
          goto LAB_01282bc0;
        }
        goto LAB_01282bb0;
      }
LAB_01282a54:
      pcVar3 = "fcvtau";
    }
  }
  else {
    if ((int)uVar1 < 0x1e650000) {
      if (0x1e60ffff < (int)uVar1) {
        if ((int)uVar1 < 0x1e630000) {
          if (uVar1 != 0x1e610000) {
            pcVar3 = pcVar2;
            pcVar5 = pcVar4;
            if (uVar1 == 0x1e620000) goto LAB_01282a88;
            goto LAB_01282bc0;
          }
          goto LAB_01282948;
        }
        if (uVar1 == 0x1e630000) {
LAB_01282aec:
          Format(this,param_1,"ucvtf","\'Fd, \'Rn");
          return;
        }
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar1 != 0x1e640000) goto LAB_01282bc0;
        goto LAB_01282ae0;
      }
      if (uVar1 != 0x1e380000) {
        if (uVar1 != 0x1e390000) {
          pcVar3 = pcVar2;
          pcVar5 = pcVar4;
          if (uVar1 != 0x1e600000) goto LAB_01282bc0;
          goto LAB_01282b18;
        }
LAB_01282b98:
        pcVar3 = "fcvtzu";
        goto LAB_01282bb8;
      }
    }
    else {
      if ((int)uVar1 < 0x1e700000) {
        if (uVar1 != 0x1e650000) {
          if (uVar1 != 0x1e680000) {
            pcVar3 = pcVar2;
            pcVar5 = pcVar4;
            if (uVar1 != 0x1e690000) goto LAB_01282bc0;
            goto LAB_01282a18;
          }
          goto LAB_01282a24;
        }
        goto LAB_01282a54;
      }
      if ((int)uVar1 < 0x1e780000) {
        if (uVar1 != 0x1e700000) {
          pcVar3 = pcVar2;
          pcVar5 = pcVar4;
          if (uVar1 != 0x1e710000) goto LAB_01282bc0;
          goto LAB_01282b3c;
        }
LAB_01282b48:
        pcVar3 = "fcvtms";
        goto LAB_01282bb8;
      }
      if (uVar1 != 0x1e780000) {
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (uVar1 != 0x1e790000) goto LAB_01282bc0;
        goto LAB_01282b98;
      }
    }
LAB_01282ba4:
    pcVar3 = "fcvtzs";
  }
LAB_01282bb8:
  pcVar5 = "\'Rd, \'Fn";
LAB_01282bc0:
  Format(this,param_1,pcVar3,pcVar5);
  return;
}

