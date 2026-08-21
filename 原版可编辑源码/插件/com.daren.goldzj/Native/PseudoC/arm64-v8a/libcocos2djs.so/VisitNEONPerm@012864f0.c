
/* v8::internal::DisassemblingDecoder::VisitNEONPerm(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitNEONPerm(DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  NEONFormatDecoder aNStack_a8 [112];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  NEONFormatDecoder::NEONFormatDecoder(aNStack_a8,param_1);
  uVar1 = (*(uint *)param_1 & 0x3f20fc00) + 0xf1ffe800;
  uVar2 = uVar1 >> 0xc | uVar1 * 0x100000;
  if (uVar2 < 7) {
    uVar5 = -(ulong)((uVar1 & 0xfff) >> 0xb) & 0xfffffff800000000 | (ulong)uVar2 << 3;
    pcVar6 = *(char **)((long)&PTR_DAT_01cbe520 + uVar5);
    pcVar4 = *(char **)((long)&PTR_s__Vd__s___Vn__s___Vm__s_01cbe558 + uVar5);
  }
  else {
    pcVar4 = "(NEONPerm)";
    pcVar6 = "unimplemented";
  }
  pcVar4 = (char *)NEONFormatDecoder::Substitute(aNStack_a8,pcVar4,1,1,1);
  Format(this,param_1,pcVar6,pcVar4);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

