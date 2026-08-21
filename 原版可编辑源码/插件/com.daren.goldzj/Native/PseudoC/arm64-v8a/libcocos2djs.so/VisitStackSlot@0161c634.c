
/* v8::internal::compiler::InstructionSelector::VisitStackSlot(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitStackSlot(InstructionSelector *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  InstructionSequence *this_00;
  Constant aCStack_40 [16];
  
  puVar5 = (uint *)StackSlotRepresentationOf(*(Operator **)param_1);
  uVar3 = *puVar5;
  lVar9 = *(long *)(this + 0x170);
  iVar1 = uVar3 + 0xe;
  if (-1 < (int)(uVar3 + 7)) {
    iVar1 = uVar3 + 7;
  }
  iVar2 = *(int *)(lVar9 + 4);
  iVar8 = 1;
  if ((uVar3 & 0xf) == 0) {
    iVar8 = 2;
  }
  uVar4 = *(uint *)(lVar9 + 0xc);
  uVar3 = (iVar2 + (iVar1 >> 3) + iVar8) - 1U & -iVar8;
  *(uint *)(lVar9 + 4) = uVar3;
  *(uint *)(lVar9 + 8) = (*(int *)(lVar9 + 8) - iVar2) + uVar3;
  uVar6 = GetVirtualRegister(this,param_1);
  MarkAsDefined(this,param_1);
  this_00 = *(InstructionSequence **)(this + 0x10);
  Constant::Constant(aCStack_40,uVar3 + ~uVar4);
  uVar7 = InstructionSequence::AddImmediate(this_00,aCStack_40);
  Emit(this,0x1c,(uVar6 & 0xffffffff) << 3 | 0xd800000001,uVar7,0,0);
  return;
}

