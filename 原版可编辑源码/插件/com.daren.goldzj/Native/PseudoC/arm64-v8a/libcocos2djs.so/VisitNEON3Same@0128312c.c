
/* v8::internal::DisassemblingDecoder::VisitNEON3Same(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEON3Same(DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  NEONFormatDecoder aNStack_b8 [112];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder(aNStack_b8,param_1);
  uVar2 = *(uint *)param_1;
  if ((uVar2 & 0x9f20fc00) == 0xe201c00) {
    uVar1 = uVar2 & 0xbfe0fc00;
    if ((int)uVar1 < 0x2e201c00) {
      if ((int)uVar1 < 0xea01c00) {
        if (uVar1 == 0xe201c00) {
          pcVar6 = "and";
        }
        else {
          if (uVar1 != 0xe601c00) {
LAB_01283368:
            puVar5 = NEONFormatDecoder::LogicalFormatMap()::map;
            pcVar6 = "unimplemented";
            pcVar7 = "(NEON3Same)";
            goto LAB_01283304;
          }
          pcVar6 = "bic";
        }
      }
      else if (uVar1 == 0xea01c00) {
        if (((uVar2 >> 0x10 ^ uVar2 >> 5) & 0x1f) == 0) {
          puVar5 = NEONFormatDecoder::LogicalFormatMap()::map;
          pcVar6 = "mov";
          pcVar7 = "\'Vd.%s, \'Vn.%s";
          goto LAB_01283304;
        }
        pcVar6 = "orr";
      }
      else {
        if (uVar1 != 0xee01c00) goto LAB_01283368;
        pcVar6 = "orn";
      }
    }
    else if ((int)uVar1 < 0x2ea01c00) {
      if (uVar1 == 0x2e201c00) {
        pcVar6 = "eor";
      }
      else {
        if (uVar1 != 0x2e601c00) goto LAB_01283368;
        pcVar6 = "bsl";
      }
    }
    else if (uVar1 == 0x2ea01c00) {
      pcVar6 = "bit";
    }
    else {
      if (uVar1 != 0x2ee01c00) goto LAB_01283368;
      pcVar6 = "bif";
    }
    puVar5 = NEONFormatDecoder::LogicalFormatMap()::map;
    pcVar7 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
  }
  else {
    pcVar6 = (&PTR_s_shadd_01cbd7b8)
             [(ulong)(uVar2 >> 9) & 0x7c | (ulong)(uVar2 >> 0x16) & 2 | (ulong)(uVar2 >> 0x1d) & 1];
    pcVar4 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
    pcVar7 = "\'Vd.%s, \'Vn.%s, \'Vm.%s";
    if ((uVar2 & 0x9f20c400) != 0xe20c400) goto LAB_01283314;
    puVar5 = NEONFormatDecoder::FPFormatMap()::map;
  }
LAB_01283304:
  NEONFormatDecoder::SetFormatMaps
            (aNStack_b8,(NEONFormatMap *)puVar5,(NEONFormatMap *)0x0,(NEONFormatMap *)0x0);
  pcVar4 = pcVar7;
LAB_01283314:
  pcVar4 = (char *)NEONFormatDecoder::Substitute(aNStack_b8,pcVar4,1,1,1);
  Format(this,param_1,pcVar6,pcVar4);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

