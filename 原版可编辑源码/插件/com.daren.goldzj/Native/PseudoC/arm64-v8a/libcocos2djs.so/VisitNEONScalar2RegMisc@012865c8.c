
/* v8::internal::DisassemblingDecoder::VisitNEONScalar2RegMisc(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONScalar2RegMisc
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder
            (aNStack_a8,param_1,(NEONFormatMap *)NEONFormatDecoder::ScalarFormatMap()::map);
  if ((*(uint *)param_1 & 0x1f000) < 0xb001) {
    uVar1 = *(uint *)param_1 & 0xff3ffc00;
    if ((int)uVar1 < 0x5e20b800) {
      if ((int)uVar1 < 0x5e208800) {
        if (uVar1 == 0x5e203800) {
          pcVar4 = "suqadd";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
        if (uVar1 == 0x5e207800) {
          pcVar4 = "sqabs";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
      }
      else {
        if (uVar1 == 0x5e208800) {
          pcVar4 = "cmgt";
          pcVar3 = "%sd, %sn, #0";
          goto LAB_01286bf8;
        }
        if (uVar1 == 0x5e209800) {
          pcVar4 = "cmeq";
          pcVar3 = "%sd, %sn, #0";
          goto LAB_01286bf8;
        }
        if (uVar1 == 0x5e20a800) {
          pcVar4 = "cmlt";
          pcVar3 = "%sd, %sn, #0";
          goto LAB_01286bf8;
        }
      }
    }
    else if ((int)uVar1 < 0x7e208800) {
      if (uVar1 == 0x5e20b800) {
        pcVar4 = "abs";
        pcVar3 = "%sd, %sn";
        goto LAB_01286bf8;
      }
      if (uVar1 == 0x7e203800) {
        pcVar4 = "usqadd";
        pcVar3 = "%sd, %sn";
        goto LAB_01286bf8;
      }
      if (uVar1 == 0x7e207800) {
        pcVar4 = "sqneg";
        pcVar3 = "%sd, %sn";
        goto LAB_01286bf8;
      }
    }
    else {
      if (uVar1 == 0x7e20b800) {
        pcVar4 = "neg";
        pcVar3 = "%sd, %sn";
        goto LAB_01286bf8;
      }
      if (uVar1 == 0x7e209800) {
        pcVar4 = "cmle";
        pcVar3 = "%sd, %sn, #0";
        goto LAB_01286bf8;
      }
      if (uVar1 == 0x7e208800) {
        pcVar4 = "cmge";
        pcVar3 = "%sd, %sn, #0";
        goto LAB_01286bf8;
      }
    }
  }
  else {
    NEONFormatDecoder::SetFormatMaps
              (aNStack_a8,(NEONFormatMap *)NEONFormatDecoder::FPScalarFormatMap()::map,
               (NEONFormatMap *)0x0,(NEONFormatMap *)0x0);
    uVar1 = *(uint *)param_1 & 0xffbffc00;
    if ((int)uVar1 < 0x5ea1f800) {
      if ((int)uVar1 < 0x5ea0d800) {
        if ((int)uVar1 < 0x5e21c800) {
          if (uVar1 == 0x5e21a800) {
            pcVar4 = "fcvtns";
            pcVar3 = "%sd, %sn";
            goto LAB_01286bf8;
          }
          if (uVar1 == 0x5e21b800) {
            pcVar4 = "fcvtms";
            pcVar3 = "%sd, %sn";
            goto LAB_01286bf8;
          }
        }
        else {
          if (uVar1 == 0x5e21c800) {
            pcVar4 = "fcvtas";
            pcVar3 = "%sd, %sn";
            goto LAB_01286bf8;
          }
          if (uVar1 == 0x5e21d800) {
            pcVar4 = "scvtf";
            pcVar3 = "%sd, %sn";
            goto LAB_01286bf8;
          }
          if (uVar1 == 0x5ea0c800) {
            pcVar4 = "fcmgt";
            pcVar3 = "%sd, %sn, #0.0";
            goto LAB_01286bf8;
          }
        }
      }
      else if ((int)uVar1 < 0x5ea1a800) {
        if (uVar1 == 0x5ea0d800) {
          pcVar4 = "fcmeq";
          pcVar3 = "%sd, %sn, #0.0";
          goto LAB_01286bf8;
        }
        if (uVar1 == 0x5ea0e800) {
          pcVar4 = "fcmlt";
          pcVar3 = "%sd, %sn, #0.0";
          goto LAB_01286bf8;
        }
      }
      else {
        if (uVar1 == 0x5ea1a800) {
          pcVar4 = "fcvtps";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
        if (uVar1 == 0x5ea1b800) {
          pcVar4 = "fcvtzs";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
        if (uVar1 == 0x5ea1d800) {
          pcVar4 = "frecpe";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
      }
    }
    else if ((int)uVar1 < 0x7e21d800) {
      if ((int)uVar1 < 0x7e21a800) {
        if (uVar1 == 0x5ea1f800) {
          pcVar4 = "frecpx";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
        if (uVar1 == 0x7e216800) {
          NEONFormatDecoder::SetFormatMap
                    (aNStack_a8,0,(NEONFormatMap *)NEONFormatDecoder::LongScalarFormatMap()::map);
          pcVar4 = "fcvtxn";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
      }
      else {
        if (uVar1 == 0x7e21a800) {
          pcVar4 = "fcvtnu";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
        if (uVar1 == 0x7e21b800) {
          pcVar4 = "fcvtmu";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
        if (uVar1 == 0x7e21c800) {
          pcVar4 = "fcvtau";
          pcVar3 = "%sd, %sn";
          goto LAB_01286bf8;
        }
      }
    }
    else if ((int)uVar1 < 0x7ea1a800) {
      if (uVar1 == 0x7e21d800) {
        pcVar4 = "ucvtf";
        pcVar3 = "%sd, %sn";
        goto LAB_01286bf8;
      }
      if (uVar1 == 0x7ea0c800) {
        pcVar4 = "fcmge";
        pcVar3 = "%sd, %sn, #0.0";
        goto LAB_01286bf8;
      }
      if (uVar1 == 0x7ea0d800) {
        pcVar4 = "fcmle";
        pcVar3 = "%sd, %sn, #0.0";
        goto LAB_01286bf8;
      }
    }
    else {
      if (uVar1 == 0x7ea1a800) {
        pcVar4 = "fcvtpu";
        pcVar3 = "%sd, %sn";
        goto LAB_01286bf8;
      }
      if (uVar1 == 0x7ea1b800) {
        pcVar4 = "fcvtzu";
        pcVar3 = "%sd, %sn";
        goto LAB_01286bf8;
      }
      if (uVar1 == 0x7ea1d800) {
        pcVar4 = "frsqrte";
        pcVar3 = "%sd, %sn";
        goto LAB_01286bf8;
      }
    }
    NEONFormatDecoder::SetFormatMap
              (aNStack_a8,0,(NEONFormatMap *)NEONFormatDecoder::ScalarFormatMap()::map);
    NEONFormatDecoder::SetFormatMap
              (aNStack_a8,1,(NEONFormatMap *)NEONFormatDecoder::LongScalarFormatMap()::map);
    uVar1 = *(uint *)param_1 & 0xff3ffc00;
    if (uVar1 == 0x5e214800) {
      pcVar4 = "sqxtn";
      pcVar3 = "%sd, %sn";
      goto LAB_01286bf8;
    }
    if (uVar1 == 0x7e212800) {
      pcVar4 = "sqxtun";
      pcVar3 = "%sd, %sn";
      goto LAB_01286bf8;
    }
    if (uVar1 == 0x7e214800) {
      pcVar4 = "uqxtn";
      pcVar3 = "%sd, %sn";
      goto LAB_01286bf8;
    }
  }
  pcVar4 = "unimplemented";
  pcVar3 = "(NEONScalar2RegMisc)";
LAB_01286bf8:
  pcVar3 = (char *)NEONFormatDecoder::SubstitutePlaceholders(aNStack_a8,pcVar3);
  Format(this,param_1,pcVar4,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

