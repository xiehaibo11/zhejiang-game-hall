
/* v8::internal::DisassemblingDecoder::VisitNEONScalarShiftImmediate(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONScalarShiftImmediate
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
  NEONFormatDecoder::NEONFormatDecoder(aNStack_a8,param_1,(NEONFormatMap *)&DAT_019f6b28);
  if ((*(uint *)param_1 & 0x780000) != 0) {
    uVar1 = *(uint *)param_1 & 0xff80fc00;
    if ((int)uVar1 < 0x7f002400) {
      if ((int)uVar1 < 0x5f009400) {
        if ((int)uVar1 < 0x5f003400) {
          if (uVar1 == 0x5f000400) {
            pcVar4 = "sshr";
            pcVar3 = "%sd, %sn, \'Is1";
            goto LAB_01287ae8;
          }
          if (uVar1 == 0x5f001400) {
            pcVar4 = "ssra";
            pcVar3 = "%sd, %sn, \'Is1";
            goto LAB_01287ae8;
          }
          if (uVar1 == 0x5f002400) {
            pcVar4 = "srshr";
            pcVar3 = "%sd, %sn, \'Is1";
            goto LAB_01287ae8;
          }
        }
        else {
          if (uVar1 == 0x5f003400) {
            pcVar4 = "srsra";
            pcVar3 = "%sd, %sn, \'Is1";
            goto LAB_01287ae8;
          }
          if (uVar1 == 0x5f005400) {
            pcVar4 = "shl";
            pcVar3 = "%sd, %sn, \'Is2";
            goto LAB_01287ae8;
          }
          if (uVar1 == 0x5f007400) {
            pcVar4 = "sqshl";
            pcVar3 = "%sd, %sn, \'Is2";
            goto LAB_01287ae8;
          }
        }
      }
      else if ((int)uVar1 < 0x5f00fc00) {
        if (uVar1 == 0x5f009400) {
          NEONFormatDecoder::SetFormatMap(aNStack_a8,1,(NEONFormatMap *)&DAT_019f6c30);
          pcVar4 = "sqshrn";
          pcVar3 = "%sd, %sn, \'Is1";
          goto LAB_01287ae8;
        }
        if (uVar1 == 0x5f009c00) {
          NEONFormatDecoder::SetFormatMap(aNStack_a8,1,(NEONFormatMap *)&DAT_019f6c30);
          pcVar4 = "sqrshrn";
          pcVar3 = "%sd, %sn, \'Is1";
          goto LAB_01287ae8;
        }
        if (uVar1 == 0x5f00e400) {
          pcVar4 = "scvtf";
          pcVar3 = "%sd, %sn, \'Is1";
          goto LAB_01287ae8;
        }
      }
      else {
        if (uVar1 == 0x5f00fc00) {
          pcVar4 = "fcvtzs";
          pcVar3 = "%sd, %sn, \'Is1";
          goto LAB_01287ae8;
        }
        if (uVar1 == 0x7f000400) {
          pcVar4 = "ushr";
          pcVar3 = "%sd, %sn, \'Is1";
          goto LAB_01287ae8;
        }
        if (uVar1 == 0x7f001400) {
          pcVar4 = "usra";
          pcVar3 = "%sd, %sn, \'Is1";
          goto LAB_01287ae8;
        }
      }
    }
    else if ((int)uVar1 < 0x7f008400) {
      if ((int)uVar1 < 0x7f005400) {
        if (uVar1 == 0x7f002400) {
          pcVar4 = "urshr";
          pcVar3 = "%sd, %sn, \'Is1";
          goto LAB_01287ae8;
        }
        if (uVar1 == 0x7f003400) {
          pcVar4 = "ursra";
          pcVar3 = "%sd, %sn, \'Is1";
          goto LAB_01287ae8;
        }
        if (uVar1 == 0x7f004400) {
          pcVar4 = "sri";
          pcVar3 = "%sd, %sn, \'Is1";
          goto LAB_01287ae8;
        }
      }
      else {
        if (uVar1 == 0x7f005400) {
          pcVar4 = "sli";
          pcVar3 = "%sd, %sn, \'Is2";
          goto LAB_01287ae8;
        }
        if (uVar1 == 0x7f006400) {
          pcVar4 = "sqshlu";
          pcVar3 = "%sd, %sn, \'Is2";
          goto LAB_01287ae8;
        }
        if (uVar1 == 0x7f007400) {
          pcVar4 = "uqshl";
          pcVar3 = "%sd, %sn, \'Is2";
          goto LAB_01287ae8;
        }
      }
    }
    else if ((int)uVar1 < 0x7f009c00) {
      if (uVar1 == 0x7f008400) {
        NEONFormatDecoder::SetFormatMap(aNStack_a8,1,(NEONFormatMap *)&DAT_019f6c30);
        pcVar4 = "sqshrun";
        pcVar3 = "%sd, %sn, \'Is1";
        goto LAB_01287ae8;
      }
      if (uVar1 == 0x7f008c00) {
        NEONFormatDecoder::SetFormatMap(aNStack_a8,1,(NEONFormatMap *)&DAT_019f6c30);
        pcVar4 = "sqrshrun";
        pcVar3 = "%sd, %sn, \'Is1";
        goto LAB_01287ae8;
      }
      if (uVar1 == 0x7f009400) {
        NEONFormatDecoder::SetFormatMap(aNStack_a8,1,(NEONFormatMap *)&DAT_019f6c30);
        pcVar4 = "uqshrn";
        pcVar3 = "%sd, %sn, \'Is1";
        goto LAB_01287ae8;
      }
    }
    else {
      if (uVar1 == 0x7f009c00) {
        NEONFormatDecoder::SetFormatMap(aNStack_a8,1,(NEONFormatMap *)&DAT_019f6c30);
        pcVar4 = "uqrshrn";
        pcVar3 = "%sd, %sn, \'Is1";
        goto LAB_01287ae8;
      }
      if (uVar1 == 0x7f00e400) {
        pcVar4 = "ucvtf";
        pcVar3 = "%sd, %sn, \'Is1";
        goto LAB_01287ae8;
      }
      if (uVar1 == 0x7f00fc00) {
        pcVar4 = "fcvtzu";
        pcVar3 = "%sd, %sn, \'Is1";
        goto LAB_01287ae8;
      }
    }
  }
  pcVar4 = "unimplemented";
  pcVar3 = "(NEONScalarShiftImmediate)";
LAB_01287ae8:
  pcVar3 = (char *)NEONFormatDecoder::SubstitutePlaceholders(aNStack_a8,pcVar3);
  Format(this,param_1,pcVar4,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

