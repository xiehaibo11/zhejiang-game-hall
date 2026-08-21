
/* v8::internal::compiler::LiveRangeBuilder::ResolvePhiHint(v8::internal::compiler::InstructionOperand*,
   v8::internal::compiler::UsePosition*) */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::ResolvePhiHint
          (LiveRangeBuilder *this,InstructionOperand *param_1,UsePosition *param_2)

{
  LiveRangeBuilder *pLVar1;
  LiveRangeBuilder *pLVar2;
  long lVar3;
  LiveRangeBuilder *pLVar4;
  
  pLVar1 = this + 0x10;
  pLVar4 = *(LiveRangeBuilder **)pLVar1;
  pLVar2 = pLVar1;
  if (pLVar4 != (LiveRangeBuilder *)0x0) {
    do {
      if (*(InstructionOperand **)(pLVar4 + 0x20) >= param_1) {
        pLVar2 = pLVar4;
      }
      pLVar4 = *(LiveRangeBuilder **)
                (pLVar4 + (ulong)(*(InstructionOperand **)(pLVar4 + 0x20) < param_1) * 8);
    } while (pLVar4 != (LiveRangeBuilder *)0x0);
    if ((pLVar2 != pLVar1) && (*(InstructionOperand **)(pLVar2 + 0x20) <= param_1)) {
      lVar3 = *(long *)(pLVar2 + 0x28);
      if ((*(uint *)(lVar3 + 0x1c) & 0x1c) == 0x10) {
        *(UsePosition **)(lVar3 + 8) = param_2;
        *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) & 0xffffffe3 | 8;
      }
    }
  }
  return;
}

