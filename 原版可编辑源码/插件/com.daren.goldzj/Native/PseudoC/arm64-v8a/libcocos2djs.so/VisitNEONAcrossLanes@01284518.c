
/* v8::internal::DisassemblingDecoder::VisitNEONAcrossLanes(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONAcrossLanes
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  NEONFormatDecoder aNStack_b8 [112];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder
            (aNStack_b8,param_1,(NEONFormatMap *)NEONFormatDecoder::ScalarFormatMap()::map,
             (NEONFormatMap *)NEONFormatDecoder::IntegerFormatMap()::map);
  uVar1 = *(uint *)param_1;
  if ((uVar1 & 0x9f3ecc00) == 0xe30c800) {
    NEONFormatDecoder::SetFormatMap
              (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::FPScalarFormatMap()::map);
    NEONFormatDecoder::SetFormatMap
              (aNStack_b8,1,(NEONFormatMap *)NEONFormatDecoder::FPFormatMap()::map);
    uVar1 = *(uint *)param_1 & 0xbfbffc00;
    if ((int)uVar1 < 0x2eb0c800) {
      if (uVar1 == 0x2e30c800) {
        pcVar3 = "%sd, \'Vn.%s";
        pcVar4 = "fmaxnmv";
        goto LAB_01284774;
      }
      if (uVar1 == 0x2e30f800) {
        pcVar3 = "%sd, \'Vn.%s";
        pcVar4 = "fmaxv";
        goto LAB_01284774;
      }
    }
    else {
      if (uVar1 == 0x2eb0c800) {
        pcVar3 = "%sd, \'Vn.%s";
        pcVar4 = "fminnmv";
        goto LAB_01284774;
      }
      if (uVar1 == 0x2eb0f800) {
        pcVar3 = "%sd, \'Vn.%s";
        pcVar4 = "fminv";
        goto LAB_01284774;
      }
    }
LAB_01284764:
    pcVar3 = "(NEONAcrossLanes)";
  }
  else {
    if ((uVar1 & 0x9f3e0c00) == 0xe300800) {
      uVar1 = uVar1 & 0xbf3ffc00;
      if ((int)uVar1 < 0xe31b800) {
        if (uVar1 == 0xe303800) {
          NEONFormatDecoder::SetFormatMap
                    (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::LongScalarFormatMap()::map);
          pcVar3 = "%sd, \'Vn.%s";
          pcVar4 = "saddlv";
          goto LAB_01284774;
        }
        if (uVar1 == 0xe30a800) {
          pcVar3 = "%sd, \'Vn.%s";
          pcVar4 = "smaxv";
          goto LAB_01284774;
        }
        if (uVar1 == 0xe31a800) {
          pcVar3 = "%sd, \'Vn.%s";
          pcVar4 = "sminv";
          goto LAB_01284774;
        }
      }
      else if ((int)uVar1 < 0x2e30a800) {
        if (uVar1 == 0xe31b800) {
          pcVar3 = "%sd, \'Vn.%s";
          pcVar4 = "addv";
          goto LAB_01284774;
        }
        if (uVar1 == 0x2e303800) {
          NEONFormatDecoder::SetFormatMap
                    (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::LongScalarFormatMap()::map);
          pcVar3 = "%sd, \'Vn.%s";
          pcVar4 = "uaddlv";
          goto LAB_01284774;
        }
      }
      else {
        if (uVar1 == 0x2e30a800) {
          pcVar3 = "%sd, \'Vn.%s";
          pcVar4 = "umaxv";
          goto LAB_01284774;
        }
        if (uVar1 == 0x2e31a800) {
          pcVar3 = "%sd, \'Vn.%s";
          pcVar4 = "uminv";
          goto LAB_01284774;
        }
      }
      goto LAB_01284764;
    }
    pcVar3 = "%sd, \'Vn.%s";
  }
  pcVar4 = "unimplemented";
LAB_01284774:
  pcVar3 = (char *)NEONFormatDecoder::Substitute(aNStack_b8,pcVar3,0,1,1);
  Format(this,param_1,pcVar4,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

