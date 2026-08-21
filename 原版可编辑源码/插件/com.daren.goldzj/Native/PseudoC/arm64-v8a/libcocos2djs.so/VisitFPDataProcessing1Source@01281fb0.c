
/* v8::internal::DisassemblingDecoder::VisitFPDataProcessing1Source(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitFPDataProcessing1Source
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)param_1 & 0xfffffc00;
  if ((int)uVar1 < 0x1e60c000) {
    if ((int)uVar1 < 0x1e24c000) {
      if ((int)uVar1 < 0x1e21c000) {
        if (uVar1 == 0x1e204000) {
LAB_01282280:
          Format(this,param_1,"fmov","\'Fd, \'Fn");
          return;
        }
        if (uVar1 == 0x1e20c000) goto LAB_012822c4;
        if (uVar1 == 0x1e214000) goto LAB_012822d8;
      }
      else if ((int)uVar1 < 0x1e23c000) {
        if (uVar1 == 0x1e21c000) {
LAB_0128217c:
          Format(this,param_1,"fsqrt","\'Fd, \'Fn");
          return;
        }
        if (uVar1 == 0x1e22c000) {
          pcVar2 = "\'Dd, \'Sn";
          goto LAB_0128235c;
        }
      }
      else {
        if (uVar1 == 0x1e23c000) {
          pcVar2 = "\'Hd, \'Sn";
          goto LAB_0128235c;
        }
        if (uVar1 == 0x1e244000) goto LAB_01282314;
      }
    }
    else if ((int)uVar1 < 0x1e264000) {
      if (uVar1 == 0x1e24c000) {
LAB_0128224c:
        Format(this,param_1,"frintp","\'Fd, \'Fn");
        return;
      }
      if (uVar1 == 0x1e254000) goto LAB_012822ec;
      if (uVar1 == 0x1e25c000) goto LAB_01282300;
    }
    else if ((int)uVar1 < 0x1e27c000) {
      if (uVar1 == 0x1e264000) {
LAB_012821f4:
        Format(this,param_1,"frinta","\'Fd, \'Fn");
        return;
      }
      if (uVar1 == 0x1e274000) goto LAB_012822b0;
    }
    else {
      if (uVar1 == 0x1e27c000) {
LAB_01282328:
        Format(this,param_1,"frinti","\'Fd, \'Fn");
        return;
      }
      if (uVar1 == 0x1e604000) goto LAB_01282280;
    }
  }
  else if ((int)uVar1 < 0x1e654000) {
    if ((int)uVar1 < 0x1e624000) {
      if (uVar1 == 0x1e60c000) {
LAB_012822c4:
        Format(this,param_1,"fabs","\'Fd, \'Fn");
        return;
      }
      if (uVar1 == 0x1e614000) {
LAB_012822d8:
        Format(this,param_1,"fneg","\'Fd, \'Fn");
        return;
      }
      if (uVar1 == 0x1e61c000) goto LAB_0128217c;
    }
    else {
      if ((int)uVar1 < 0x1e644000) {
        if (uVar1 == 0x1e624000) {
          pcVar2 = "\'Sd, \'Dn";
        }
        else {
          if (uVar1 != 0x1e63c000) goto LAB_01282368;
          pcVar2 = "\'Hd, \'Dn";
        }
LAB_0128235c:
        Format(this,param_1,"fcvt",pcVar2);
        return;
      }
      if (uVar1 == 0x1e644000) {
LAB_01282314:
        Format(this,param_1,"frintn","\'Fd, \'Fn");
        return;
      }
      if (uVar1 == 0x1e64c000) goto LAB_0128224c;
    }
  }
  else if ((int)uVar1 < 0x1e674000) {
    if (uVar1 == 0x1e654000) {
LAB_012822ec:
      Format(this,param_1,"frintm","\'Fd, \'Fn");
      return;
    }
    if (uVar1 == 0x1e65c000) {
LAB_01282300:
      Format(this,param_1,"frintz","\'Fd, \'Fn");
      return;
    }
    if (uVar1 == 0x1e664000) goto LAB_012821f4;
  }
  else {
    if (0x1ee23fff < (int)uVar1) {
      if (uVar1 == 0x1ee24000) {
        pcVar2 = "\'Sd, \'Hn";
      }
      else {
        if (uVar1 != 0x1ee2c000) goto LAB_01282368;
        pcVar2 = "\'Dd, \'Hn";
      }
      goto LAB_0128235c;
    }
    if (uVar1 == 0x1e674000) {
LAB_012822b0:
      Format(this,param_1,"frintx","\'Fd, \'Fn");
      return;
    }
    if (uVar1 == 0x1e67c000) goto LAB_01282328;
  }
LAB_01282368:
  Format(this,param_1,"unimplemented","(FPDataProcessing1Source)");
  return;
}

