
/* v8::internal::DisassemblingDecoder::VisitNEONExtract(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONExtract
          (DisassemblingDecoder *this,Instruction *param_1)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder
            (aNStack_a8,param_1,(NEONFormatMap *)NEONFormatDecoder::LogicalFormatMap()::map);
  pcVar1 = "ext";
  pcVar3 = "\'Vd.%s, \'Vn.%s, \'Vm.%s, \'IVExtract";
  if ((*(uint *)param_1 & 0xbfe08400) != 0x2e000000) {
    pcVar1 = "unimplemented";
    pcVar3 = "(NEONExtract)";
  }
  pcVar3 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,pcVar3,1,1,1);
  Format(this,param_1,pcVar1,pcVar3);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

