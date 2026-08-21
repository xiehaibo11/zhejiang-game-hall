
/* v8::internal::DisassemblingDecoder::VisitNEONShiftImmediate(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONShiftImmediate
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder(aNStack_a8,param_1,(NEONFormatMap *)&DAT_019f6e40);
  uVar5 = *(uint *)param_1;
  if ((uVar5 & 0x780000) == 0) goto LAB_012880a4;
  uVar1 = uVar5 & 0xbf80fc00;
  if ((int)uVar1 < 0x2f001400) {
    if ((int)uVar1 < 0xf008c00) {
      if (0xf0033ff < (int)uVar1) {
        if ((int)uVar1 < 0xf007400) {
          if (uVar1 == 0xf003400) {
            pcVar6 = "srsra";
            goto LAB_0128823c;
          }
          if (uVar1 == 0xf005400) {
            pcVar6 = "shl";
            pcVar4 = "\'Vd.%s, \'Vn.%s, \'Is2";
            goto LAB_01288240;
          }
        }
        else {
          if (uVar1 == 0xf007400) {
            pcVar6 = "sqshl";
            pcVar4 = "\'Vd.%s, \'Vn.%s, \'Is2";
            goto LAB_01288240;
          }
          if (uVar1 == 0xf008400) {
            pcVar4 = "shrn2";
            pcVar6 = "shrn";
            goto LAB_0128821c;
          }
        }
LAB_012880a4:
        pcVar6 = "unimplemented";
        pcVar4 = "(NEONShiftImmediate)";
        goto LAB_01288240;
      }
      if (uVar1 == 0xf000400) {
        pcVar6 = "sshr";
      }
      else if (uVar1 == 0xf001400) {
        pcVar6 = "ssra";
      }
      else {
        if (uVar1 != 0xf002400) goto LAB_012880a4;
        pcVar6 = "srshr";
      }
    }
    else {
      if ((int)uVar1 < 0xf00a400) {
        if (uVar1 == 0xf008c00) {
          pcVar4 = "rshrn2";
          pcVar6 = "rshrn";
        }
        else if (uVar1 == 0xf009400) {
          pcVar4 = "sqshrn2";
          pcVar6 = "sqshrn";
        }
        else {
          if (uVar1 != 0xf009c00) goto LAB_012880a4;
          pcVar4 = "sqrshrn2";
          pcVar6 = "sqrshrn";
        }
        goto LAB_0128821c;
      }
      if ((int)uVar1 < 0xf00fc00) {
        if (uVar1 == 0xf00a400) {
          NEONFormatDecoder::SetFormatMap(aNStack_a8,0,(NEONFormatMap *)&DAT_019f6d38);
          uVar5 = *(uint *)param_1;
          if ((uVar5 & 0x70000) == 0) {
            iVar3 = CountSetBits((ulong)(uVar5 >> 0x13) & 0xf,0x20);
            uVar5 = *(uint *)param_1;
            if (iVar3 == 1) {
              pcVar4 = "sxtl2";
              pcVar6 = "sxtl";
LAB_01288120:
              if ((uVar5 & 0x40000000) != 0) {
                pcVar6 = pcVar4;
              }
              pcVar4 = "\'Vd.%s, \'Vn.%s";
              goto LAB_01288240;
            }
          }
          pcVar4 = "sshll2";
          pcVar6 = "sshll";
LAB_012882b0:
          if ((uVar5 & 0x40000000) != 0) {
            pcVar6 = pcVar4;
          }
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Is2";
          goto LAB_01288240;
        }
        if (uVar1 != 0xf00e400) goto LAB_012880a4;
        pcVar6 = "scvtf";
      }
      else if (uVar1 == 0xf00fc00) {
        pcVar6 = "fcvtzs";
      }
      else {
        if (uVar1 != 0x2f000400) goto LAB_012880a4;
        pcVar6 = "ushr";
      }
    }
  }
  else if ((int)uVar1 < 0x2f008400) {
    if (0x2f0043ff < (int)uVar1) {
      if ((int)uVar1 < 0x2f006400) {
        if (uVar1 == 0x2f004400) {
          pcVar6 = "sri";
          goto LAB_0128823c;
        }
        if (uVar1 == 0x2f005400) {
          pcVar6 = "sli";
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Is2";
          goto LAB_01288240;
        }
      }
      else {
        if (uVar1 == 0x2f006400) {
          pcVar6 = "sqshlu";
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Is2";
          goto LAB_01288240;
        }
        if (uVar1 == 0x2f007400) {
          pcVar6 = "uqshl";
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Is2";
          goto LAB_01288240;
        }
      }
      goto LAB_012880a4;
    }
    if (uVar1 == 0x2f001400) {
      pcVar6 = "usra";
    }
    else if (uVar1 == 0x2f002400) {
      pcVar6 = "urshr";
    }
    else {
      if (uVar1 != 0x2f003400) goto LAB_012880a4;
      pcVar6 = "ursra";
    }
  }
  else {
    if ((int)uVar1 < 0x2f009c00) {
      if (uVar1 == 0x2f008400) {
        pcVar4 = "sqshrun2";
        pcVar6 = "sqshrun";
      }
      else if (uVar1 == 0x2f008c00) {
        pcVar4 = "sqrshrun2";
        pcVar6 = "sqrshrun";
      }
      else {
        if (uVar1 != 0x2f009400) goto LAB_012880a4;
        pcVar4 = "uqshrn2";
        pcVar6 = "uqshrn";
      }
    }
    else {
      if (0x2f00e3ff < (int)uVar1) {
        if (uVar1 == 0x2f00e400) {
          pcVar6 = "ucvtf";
        }
        else {
          if (uVar1 != 0x2f00fc00) goto LAB_012880a4;
          pcVar6 = "fcvtzu";
        }
        goto LAB_0128823c;
      }
      if (uVar1 != 0x2f009c00) {
        if (uVar1 == 0x2f00a400) {
          NEONFormatDecoder::SetFormatMap(aNStack_a8,0,(NEONFormatMap *)&DAT_019f6d38);
          uVar5 = *(uint *)param_1;
          if ((uVar5 & 0x70000) == 0) {
            iVar3 = CountSetBits((ulong)(uVar5 >> 0x13) & 0xf,0x20);
            uVar5 = *(uint *)param_1;
            if (iVar3 == 1) {
              pcVar4 = "uxtl2";
              pcVar6 = "uxtl";
              goto LAB_01288120;
            }
          }
          pcVar4 = "ushll2";
          pcVar6 = "ushll";
          goto LAB_012882b0;
        }
        goto LAB_012880a4;
      }
      pcVar4 = "uqrshrn2";
      pcVar6 = "uqrshrn";
    }
LAB_0128821c:
    if ((uVar5 & 0x40000000) != 0) {
      pcVar6 = pcVar4;
    }
    NEONFormatDecoder::SetFormatMap(aNStack_a8,1,(NEONFormatMap *)&DAT_019f6d38);
  }
LAB_0128823c:
  pcVar4 = "\'Vd.%s, \'Vn.%s, \'Is1";
LAB_01288240:
  pcVar4 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,pcVar4,1,1,1);
  Format(this,param_1,pcVar6,pcVar4);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

