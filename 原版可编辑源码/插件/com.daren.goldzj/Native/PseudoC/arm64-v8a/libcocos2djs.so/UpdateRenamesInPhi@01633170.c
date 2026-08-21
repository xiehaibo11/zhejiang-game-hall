
/* v8::internal::compiler::InstructionSelector::UpdateRenamesInPhi(v8::internal::compiler::PhiInstruction*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::UpdateRenamesInPhi
          (InstructionSelector *this,PhiInstruction *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != lVar3) {
    uVar6 = 0;
    do {
      iVar1 = *(int *)(lVar3 + uVar6 * 4);
      iVar2 = iVar1;
      do {
        iVar5 = iVar2;
        if ((ulong)(*(long *)(this + 0x140) - *(long *)(this + 0x138) >> 2) <= (ulong)(long)iVar5)
        break;
        iVar2 = *(int *)(*(long *)(this + 0x138) + (long)iVar5 * 4);
      } while (iVar2 != -1);
      if (iVar1 != iVar5) {
        PhiInstruction::RenameInput(param_1,uVar6,iVar5);
        lVar3 = *(long *)(param_1 + 0x10);
        lVar4 = *(long *)(param_1 + 0x18);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(lVar4 - lVar3 >> 2));
  }
  return;
}

