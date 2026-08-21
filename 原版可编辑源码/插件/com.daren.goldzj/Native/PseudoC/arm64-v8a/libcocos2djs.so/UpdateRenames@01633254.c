
/* v8::internal::compiler::InstructionSelector::UpdateRenames(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::UpdateRenames
          (InstructionSelector *this,Instruction *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  uVar3 = *(uint *)(param_1 + 4);
  if ((uVar3 & 0xffff00) != 0) {
    uVar4 = 0;
    do {
      uVar5 = *(ulong *)(param_1 + (uVar4 + (uVar3 & 0xff)) * 8 + 0x28);
      if ((uVar5 & 7) == 1) {
        uVar2 = uVar5 >> 3 & 0xffffffff;
        do {
          uVar7 = uVar2;
          iVar6 = (int)uVar7;
          if ((ulong)(*(long *)(this + 0x140) - *(long *)(this + 0x138) >> 2) <= (ulong)(long)iVar6)
          break;
          uVar1 = *(uint *)(*(long *)(this + 0x138) + (long)iVar6 * 4);
          uVar2 = (ulong)uVar1;
        } while (uVar1 != 0xffffffff);
        if (iVar6 != (int)(uVar5 >> 3)) {
          *(ulong *)(param_1 + (uVar4 + (uVar3 & 0xff)) * 8 + 0x28) =
               uVar5 & 0xfffffff800000000 | uVar5 & 7 | uVar7 << 3;
          uVar3 = *(uint *)(param_1 + 4);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar3 >> 8 & 0xffff));
  }
  return;
}

