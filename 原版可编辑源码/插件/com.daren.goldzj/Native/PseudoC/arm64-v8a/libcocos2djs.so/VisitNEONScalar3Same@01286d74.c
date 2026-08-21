
/* v8::internal::DisassemblingDecoder::VisitNEONScalar3Same(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONScalar3Same
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
  if ((*(uint *)param_1 & 0xdf20c400) == 0x5e20c400) {
    NEONFormatDecoder::SetFormatMaps
              (aNStack_a8,(NEONFormatMap *)NEONFormatDecoder::FPScalarFormatMap()::map,
               (NEONFormatMap *)0x0,(NEONFormatMap *)0x0);
    uVar1 = *(uint *)param_1 & 0xffa0fc00;
    if ((int)uVar1 < 0x7e20e400) {
      if ((int)uVar1 < 0x5e20fc00) {
        if (uVar1 == 0x5e20dc00) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "fmulx";
          goto LAB_01287308;
        }
        if (uVar1 == 0x5e20e400) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "fcmeq";
          goto LAB_01287308;
        }
      }
      else {
        if (uVar1 == 0x5e20fc00) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "frecps";
          goto LAB_01287308;
        }
        if (uVar1 == 0x5ea0fc00) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "frsqrts";
          goto LAB_01287308;
        }
      }
    }
    else if ((int)uVar1 < 0x7ea0d400) {
      if (uVar1 == 0x7e20e400) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "fcmge";
        goto LAB_01287308;
      }
      if (uVar1 == 0x7e20ec00) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "facge";
        goto LAB_01287308;
      }
    }
    else {
      if (uVar1 == 0x7ea0d400) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "fabd";
        goto LAB_01287308;
      }
      if (uVar1 == 0x7ea0e400) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "fcmgt";
        goto LAB_01287308;
      }
      if (uVar1 == 0x7ea0ec00) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "facgt";
        goto LAB_01287308;
      }
    }
  }
  else {
    uVar1 = *(uint *)param_1 & 0xff20fc00;
    if ((int)uVar1 < 0x7e200c00) {
      if ((int)uVar1 < 0x5e204c00) {
        if ((int)uVar1 < 0x5e203400) {
          if (uVar1 == 0x5e200c00) {
            pcVar3 = "%sd, %sn, %sm";
            pcVar4 = "sqadd";
            goto LAB_01287308;
          }
          if (uVar1 == 0x5e202c00) {
            pcVar3 = "%sd, %sn, %sm";
            pcVar4 = "sqsub";
            goto LAB_01287308;
          }
        }
        else {
          if (uVar1 == 0x5e203400) {
            pcVar3 = "%sd, %sn, %sm";
            pcVar4 = "cmgt";
            goto LAB_01287308;
          }
          if (uVar1 == 0x5e203c00) {
            pcVar3 = "%sd, %sn, %sm";
            pcVar4 = "cmge";
            goto LAB_01287308;
          }
          if (uVar1 == 0x5e204400) {
            pcVar3 = "%sd, %sn, %sm";
            pcVar4 = "sshl";
            goto LAB_01287308;
          }
        }
      }
      else if ((int)uVar1 < 0x5e208400) {
        if (uVar1 == 0x5e204c00) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "sqshl";
          goto LAB_01287308;
        }
        if (uVar1 == 0x5e205400) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "srshl";
          goto LAB_01287308;
        }
        if (uVar1 == 0x5e205c00) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "sqrshl";
          goto LAB_01287308;
        }
      }
      else {
        if (uVar1 == 0x5e208400) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "add";
          goto LAB_01287308;
        }
        if (uVar1 == 0x5e208c00) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "cmtst";
          goto LAB_01287308;
        }
        if (uVar1 == 0x5e20b400) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "sqdmulh";
          goto LAB_01287308;
        }
      }
    }
    else if ((int)uVar1 < 0x7e204c00) {
      if ((int)uVar1 < 0x7e203400) {
        if (uVar1 == 0x7e200c00) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "uqadd";
          goto LAB_01287308;
        }
        if (uVar1 == 0x7e202c00) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "uqsub";
          goto LAB_01287308;
        }
      }
      else {
        if (uVar1 == 0x7e203400) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "cmhi";
          goto LAB_01287308;
        }
        if (uVar1 == 0x7e203c00) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "cmhs";
          goto LAB_01287308;
        }
        if (uVar1 == 0x7e204400) {
          pcVar3 = "%sd, %sn, %sm";
          pcVar4 = "ushl";
          goto LAB_01287308;
        }
      }
    }
    else if ((int)uVar1 < 0x7e208400) {
      if (uVar1 == 0x7e204c00) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "uqshl";
        goto LAB_01287308;
      }
      if (uVar1 == 0x7e205400) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "urshl";
        goto LAB_01287308;
      }
      if (uVar1 == 0x7e205c00) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "uqrshl";
        goto LAB_01287308;
      }
    }
    else {
      if (uVar1 == 0x7e20b400) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "sqrdmulh";
        goto LAB_01287308;
      }
      if (uVar1 == 0x7e208c00) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "cmeq";
        goto LAB_01287308;
      }
      if (uVar1 == 0x7e208400) {
        pcVar3 = "%sd, %sn, %sm";
        pcVar4 = "sub";
        goto LAB_01287308;
      }
    }
  }
  pcVar3 = "(NEONScalar3Same)";
  pcVar4 = "unimplemented";
LAB_01287308:
  pcVar3 = (char *)NEONFormatDecoder::SubstitutePlaceholders(aNStack_a8,pcVar3);
  Format(this,param_1,pcVar4,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

