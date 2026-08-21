
/* v8::internal::compiler::InstructionSelector::TryRename(v8::internal::compiler::InstructionOperand*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::TryRename
          (InstructionSelector *this,InstructionOperand *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)param_1;
  if ((uVar3 & 7) == 1) {
    uVar2 = uVar3 >> 3 & 0xffffffff;
    do {
      uVar5 = uVar2;
      iVar4 = (int)uVar5;
      if ((ulong)(*(long *)(this + 0x140) - *(long *)(this + 0x138) >> 2) <= (ulong)(long)iVar4)
      break;
      uVar1 = *(uint *)(*(long *)(this + 0x138) + (long)iVar4 * 4);
      uVar2 = (ulong)uVar1;
    } while (uVar1 != 0xffffffff);
    if (iVar4 != (int)(uVar3 >> 3)) {
      *(ulong *)param_1 = uVar3 & 0xfffffff800000000 | uVar3 & 7 | uVar5 << 3;
    }
  }
  return;
}

