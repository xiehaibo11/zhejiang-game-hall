
/* v8::internal::DisassemblingDecoder::VisitNEONScalar3Diff(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONScalar3Diff
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
            (aNStack_a8,param_1,(NEONFormatMap *)NEONFormatDecoder::LongScalarFormatMap()::map,
             (NEONFormatMap *)NEONFormatDecoder::ScalarFormatMap()::map);
  uVar1 = *(uint *)param_1 & 0xff20fc00;
  if (uVar1 == 0x5e209000) {
    pcVar3 = "%sd, %sn, %sm";
    pcVar4 = "sqdmlal";
  }
  else if (uVar1 == 0x5e20d000) {
    pcVar3 = "%sd, %sn, %sm";
    pcVar4 = "sqdmull";
  }
  else if (uVar1 == 0x5e20b000) {
    pcVar3 = "%sd, %sn, %sm";
    pcVar4 = "sqdmlsl";
  }
  else {
    pcVar3 = "(NEONScalar3Diff)";
    pcVar4 = "unimplemented";
  }
  pcVar3 = (char *)NEONFormatDecoder::SubstitutePlaceholders(aNStack_a8,pcVar3);
  Format(this,param_1,pcVar4,pcVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

