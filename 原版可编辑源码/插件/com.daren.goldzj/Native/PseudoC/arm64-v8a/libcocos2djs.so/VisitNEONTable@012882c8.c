
/* v8::internal::DisassemblingDecoder::VisitNEONTable(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONTable(DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_e0 [56];
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder(aNStack_a8,param_1,(NEONFormatMap *)&DAT_019f6ff0);
  uVar1 = (*(uint *)param_1 & 0xbf20fc00) + 0xf2000000;
  uVar2 = uVar1 >> 0xc | (*(uint *)param_1 & 0xbf20fc00) << 0x14;
  if (uVar2 < 8) {
    pcVar5 = *(char **)((long)&PTR_DAT_01cbe5d0 +
                       (-(ulong)((uVar1 & 0xfff) >> 0xb) & 0xfffffff800000000 | (ulong)uVar2 << 3));
  }
  else {
    pcVar5 = "unimplemented";
  }
  FUN_012883cc(auStack_e0);
  pcVar4 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,auStack_e0,1,1,1);
  Format(this,param_1,pcVar5,pcVar4);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

