
/* v8::internal::DisassemblingDecoder::VisitNEONByIndexedElement(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONByIndexedElement
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder
            (aNStack_a8,param_1,(NEONFormatMap *)&DAT_019f6708,
             (NEONFormatMap *)NEONFormatDecoder::IntegerFormatMap()::map,
             (NEONFormatMap *)NEONFormatDecoder::ScalarFormatMap()::map);
  uVar1 = *(uint *)param_1 & 0xbf00f400;
  if ((int)uVar1 < 0xf00c000) {
    if ((int)uVar1 < 0xf007000) {
      if (uVar1 == 0xf002000) {
        pcVar5 = "smlal";
      }
      else if (uVar1 == 0xf003000) {
        pcVar5 = "sqdmlal";
      }
      else {
        if (uVar1 != 0xf006000) goto LAB_01284ac8;
        pcVar5 = "smlsl";
      }
    }
    else if ((int)uVar1 < 0xf00a000) {
      if (uVar1 != 0xf007000) {
        if (uVar1 == 0xf008000) {
          pcVar5 = "mul";
          goto LAB_01284a60;
        }
LAB_01284ac8:
        uVar1 = *(uint *)param_1 & 0xbf80f400;
        pcVar5 = "unimplemented";
        if ((int)uVar1 < 0xf809000) {
          if (uVar1 == 0xf801000) {
            puVar4 = NEONFormatDecoder::FPFormatMap()::map;
            pcVar5 = "fmla";
          }
          else {
            if (uVar1 != 0xf805000) goto LAB_01284a60;
            puVar4 = NEONFormatDecoder::FPFormatMap()::map;
            pcVar5 = "fmls";
          }
        }
        else if (uVar1 == 0xf809000) {
          puVar4 = NEONFormatDecoder::FPFormatMap()::map;
          pcVar5 = "fmul";
        }
        else {
          if (uVar1 != 0x2f809000) goto LAB_01284a60;
          puVar4 = NEONFormatDecoder::FPFormatMap()::map;
          pcVar5 = "fmulx";
        }
        goto LAB_01284a68;
      }
      pcVar5 = "sqdmlsl";
    }
    else if (uVar1 == 0xf00a000) {
      pcVar5 = "smull";
    }
    else {
      if (uVar1 != 0xf00b000) goto LAB_01284ac8;
      pcVar5 = "sqdmull";
    }
  }
  else {
    if ((int)uVar1 < 0x2f002000) {
      if (uVar1 == 0xf00c000) {
        pcVar5 = "sqdmulh";
      }
      else if (uVar1 == 0xf00d000) {
        pcVar5 = "sqrdmulh";
      }
      else {
        if (uVar1 != 0x2f000000) goto LAB_01284ac8;
        pcVar5 = "mla";
      }
LAB_01284a60:
      puVar4 = NEONFormatDecoder::IntegerFormatMap()::map;
LAB_01284a68:
      NEONFormatDecoder::SetFormatMap(aNStack_a8,0,(NEONFormatMap *)puVar4);
      goto LAB_01284a74;
    }
    if ((int)uVar1 < 0x2f006000) {
      if (uVar1 != 0x2f002000) {
        if (uVar1 != 0x2f004000) goto LAB_01284ac8;
        pcVar5 = "mls";
        goto LAB_01284a60;
      }
      pcVar5 = "umlal";
    }
    else if (uVar1 == 0x2f006000) {
      pcVar5 = "umlsl";
    }
    else {
      if (uVar1 != 0x2f00a000) goto LAB_01284ac8;
      pcVar5 = "umull";
    }
  }
  pcVar5 = (char *)NEONFormatDecoder::Mnemonic(aNStack_a8,pcVar5);
LAB_01284a74:
  pcVar3 = (char *)NEONFormatDecoder::Substitute
                             (aNStack_a8,"\'Vd.%s, \'Vn.%s, \'Ve.%s[\'IVByElemIndex]",1,1,1);
  Format(this,param_1,pcVar5,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

