
/* v8::internal::DisassemblingDecoder::VisitNEON3Different(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEON3Different
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
  NEONFormatDecoder::NEONFormatDecoder(aNStack_b8,param_1);
  NEONFormatDecoder::SetFormatMap
            (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map);
  uVar1 = *(uint *)param_1 & 0xbf20fc00;
  if ((int)uVar1 < 0xe20d000) {
    if ((int)uVar1 < 0xe206000) {
      if ((int)uVar1 < 0xe203000) {
        if (uVar1 == 0xe200000) {
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
          pcVar3 = "saddl";
          goto LAB_012844b4;
        }
        if (uVar1 == 0xe201000) {
          NEONFormatDecoder::SetFormatMap
                    (aNStack_b8,1,(NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map);
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
          pcVar3 = "saddw";
          goto LAB_012844b4;
        }
        if (uVar1 == 0xe202000) {
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
          pcVar3 = "ssubl";
          goto LAB_012844b4;
        }
      }
      else {
        if (uVar1 == 0xe203000) {
          NEONFormatDecoder::SetFormatMap
                    (aNStack_b8,1,(NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map);
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
          pcVar3 = "ssubw";
          goto LAB_012844b4;
        }
        if (uVar1 == 0xe204000) {
          NEONFormatDecoder::SetFormatMaps
                    (aNStack_b8,(NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map,
                     (NEONFormatMap *)0x0,(NEONFormatMap *)0x0);
          NEONFormatDecoder::SetFormatMap
                    (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::IntegerFormatMap()::map);
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
          pcVar3 = "addhn";
          goto LAB_012844b4;
        }
        if (uVar1 == 0xe205000) {
          pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
          pcVar3 = "sabal";
          goto LAB_012844b4;
        }
      }
    }
    else if ((int)uVar1 < 0xe209000) {
      if (uVar1 == 0xe206000) {
        NEONFormatDecoder::SetFormatMaps
                  (aNStack_b8,(NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map,
                   (NEONFormatMap *)0x0,(NEONFormatMap *)0x0);
        NEONFormatDecoder::SetFormatMap
                  (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::IntegerFormatMap()::map);
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "subhn";
        goto LAB_012844b4;
      }
      if (uVar1 == 0xe207000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "sabdl";
        goto LAB_012844b4;
      }
      if (uVar1 == 0xe208000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "smlal";
        goto LAB_012844b4;
      }
    }
    else if ((int)uVar1 < 0xe20b000) {
      if (uVar1 == 0xe209000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "sqdmlal";
        goto LAB_012844b4;
      }
      if (uVar1 == 0xe20a000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "smlsl";
        goto LAB_012844b4;
      }
    }
    else {
      if (uVar1 == 0xe20b000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "sqdmlsl";
        goto LAB_012844b4;
      }
      if (uVar1 == 0xe20c000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "smull";
        goto LAB_012844b4;
      }
    }
  }
  else if ((int)uVar1 < 0x2e204000) {
    if ((int)uVar1 < 0x2e201000) {
      if (uVar1 == 0xe20d000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "sqdmull";
        goto LAB_012844b4;
      }
      if (uVar1 == 0xe20e000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "pmull";
        goto LAB_012844b4;
      }
      if (uVar1 == 0x2e200000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "uaddl";
        goto LAB_012844b4;
      }
    }
    else {
      if (uVar1 == 0x2e201000) {
        NEONFormatDecoder::SetFormatMap
                  (aNStack_b8,1,(NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map);
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "uaddw";
        goto LAB_012844b4;
      }
      if (uVar1 == 0x2e202000) {
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "usubl";
        goto LAB_012844b4;
      }
      if (uVar1 == 0x2e203000) {
        NEONFormatDecoder::SetFormatMap
                  (aNStack_b8,1,(NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map);
        pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
        pcVar3 = "usubw";
        goto LAB_012844b4;
      }
    }
  }
  else if ((int)uVar1 < 0x2e207000) {
    if (uVar1 == 0x2e204000) {
      NEONFormatDecoder::SetFormatMaps
                (aNStack_b8,(NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map,
                 (NEONFormatMap *)0x0,(NEONFormatMap *)0x0);
      NEONFormatDecoder::SetFormatMap
                (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::IntegerFormatMap()::map);
      pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
      pcVar3 = "raddhn";
      goto LAB_012844b4;
    }
    if (uVar1 == 0x2e205000) {
      pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
      pcVar3 = "uabal";
      goto LAB_012844b4;
    }
    if (uVar1 == 0x2e206000) {
      NEONFormatDecoder::SetFormatMaps
                (aNStack_b8,(NEONFormatMap *)NEONFormatDecoder::LongIntegerFormatMap()::map,
                 (NEONFormatMap *)0x0,(NEONFormatMap *)0x0);
      NEONFormatDecoder::SetFormatMap
                (aNStack_b8,0,(NEONFormatMap *)NEONFormatDecoder::IntegerFormatMap()::map);
      pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
      pcVar3 = "rsubhn";
      goto LAB_012844b4;
    }
  }
  else if ((int)uVar1 < 0x2e20a000) {
    if (uVar1 == 0x2e207000) {
      pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
      pcVar3 = "uabdl";
      goto LAB_012844b4;
    }
    if (uVar1 == 0x2e208000) {
      pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
      pcVar3 = "umlal";
      goto LAB_012844b4;
    }
  }
  else {
    if (uVar1 == 0x2e20a000) {
      pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
      pcVar3 = "umlsl";
      goto LAB_012844b4;
    }
    if (uVar1 == 0x2e20c000) {
      pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
      pcVar3 = "umull";
      goto LAB_012844b4;
    }
  }
  pcVar4 = "(NEON3Different)";
  pcVar3 = "unimplemented";
LAB_012844b4:
  pcVar3 = (char *)NEONFormatDecoder::Mnemonic(aNStack_b8,pcVar3);
  pcVar4 = (char *)NEONFormatDecoder::Substitute(aNStack_b8,pcVar4,1,1,1);
  Format(this,param_1,pcVar3,pcVar4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

