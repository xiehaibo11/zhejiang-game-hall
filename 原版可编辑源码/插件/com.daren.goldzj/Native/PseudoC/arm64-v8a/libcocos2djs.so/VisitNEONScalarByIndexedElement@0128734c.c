
/* v8::internal::DisassemblingDecoder::VisitNEONScalarByIndexedElement(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONScalarByIndexedElement
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  NEONFormatDecoder aNStack_b8 [112];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder
            (aNStack_b8,param_1,(NEONFormatMap *)NEONFormatDecoder::ScalarFormatMap()::map);
  pcVar5 = "sqdmulh";
  pcVar4 = "%sd, %sn, \'Ve.%s[\'IVByElemIndex]";
  pcVar3 = "sqdmull";
  switch((*(uint *)param_1 & 0xff00f400) + 0xa0ffd000 >> 0xc |
         (*(uint *)param_1 & 0xff00f400) << 0x14) {
  case 0:
    pcVar3 = "sqdmlal";
    break;
  default:
    NEONFormatDecoder::SetFormatMap
              (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::FPScalarFormatMap()::map);
    uVar1 = *(uint *)param_1 & 0xff80f400;
    if ((int)uVar1 < 0x5f809000) {
      if (uVar1 == 0x5f801000) {
        pcVar5 = "fmla";
      }
      else {
        if (uVar1 != 0x5f805000) {
LAB_01287508:
          pcVar5 = "unimplemented";
          pcVar4 = "(NEONScalarByIndexedElement)";
          goto switchD_012873dc_caseD_9;
        }
        pcVar5 = "fmls";
      }
    }
    else if (uVar1 == 0x5f809000) {
      pcVar5 = "fmul";
    }
    else {
      if (uVar1 != 0x7f809000) goto LAB_01287508;
      pcVar5 = "fmulx";
    }
    goto LAB_01287484;
  case 4:
    pcVar3 = "sqdmlsl";
    break;
  case 8:
    break;
  case 9:
    goto switchD_012873dc_caseD_9;
  case 10:
    pcVar5 = "sqrdmulh";
LAB_01287484:
    pcVar4 = "%sd, %sn, \'Ve.%s[\'IVByElemIndex]";
    goto switchD_012873dc_caseD_9;
  }
  pcVar5 = pcVar3;
  NEONFormatDecoder::SetFormatMap
            (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::LongScalarFormatMap()::map);
  pcVar4 = "%sd, %sn, \'Ve.%s[\'IVByElemIndex]";
switchD_012873dc_caseD_9:
  pcVar4 = (char *)NEONFormatDecoder::Substitute(aNStack_b8,pcVar4,0,0,1);
  Format(this,param_1,pcVar5,pcVar4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

