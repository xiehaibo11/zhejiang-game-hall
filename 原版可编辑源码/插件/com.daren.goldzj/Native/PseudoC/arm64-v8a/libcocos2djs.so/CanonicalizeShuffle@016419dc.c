
/* v8::internal::compiler::InstructionSelector::CanonicalizeShuffle(v8::internal::compiler::Node*,
   unsigned char*, bool*) */

void __thiscall
v8::internal::compiler::InstructionSelector::CanonicalizeShuffle
          (InstructionSelector *this,Node *param_1,uchar *param_2,bool *param_3)

{
  Node *pNVar1;
  Node *this_00;
  Node *this_01;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  InstructionSelector *this_02;
  uint uVar5;
  Node *pNVar6;
  ulong uVar7;
  undefined8 uVar8;
  bool local_34 [4];
  
  puVar4 = (undefined8 *)S8x16ShuffleParameterOf(*(Operator **)param_1);
  uVar8 = *puVar4;
  pNVar1 = param_1 + 0x20;
  *(undefined8 *)(param_2 + 8) = puVar4[1];
  *(undefined8 *)param_2 = uVar8;
  uVar5 = *(uint *)(param_1 + 0x14);
  pNVar6 = pNVar1;
  if ((~uVar5 & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  uVar7 = (ulong)*(uint *)(*(long *)pNVar6 + 0x14) & 0xffffff;
  iVar2 = *(int *)(*(long *)(this + 0x118) + uVar7 * 4);
  if (iVar2 == -1) {
    iVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(int *)(*(long *)(this + 0x118) + uVar7 * 4) = iVar2;
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  pNVar6 = pNVar1;
  if ((~uVar5 & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  uVar7 = (ulong)*(uint *)(*(long *)(pNVar6 + 8) + 0x14) & 0xffffff;
  iVar3 = *(int *)(*(long *)(this + 0x118) + uVar7 * 4);
  if (iVar3 == -1) {
    iVar3 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    *(int *)(*(long *)(this + 0x118) + uVar7 * 4) = iVar3;
  }
  this_02 = (InstructionSelector *)CanonicalizeShuffle(iVar2 == iVar3,param_2,local_34,param_3);
  if (local_34[0] != false) {
    SwapShuffleInputs(this_02,param_1);
  }
  if (*param_3 != false) {
    pNVar6 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    this_00 = *(Node **)pNVar6;
    this_01 = *(Node **)(pNVar6 + 8);
    if (this_01 != this_00) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        param_1 = *(Node **)pNVar1;
      }
      if (this_01 != (Node *)0x0) {
        Node::RemoveUse(this_01,(Use *)(param_1 + -0x30));
      }
      *(Node **)(pNVar6 + 8) = this_00;
      if (this_00 != (Node *)0x0) {
        Node::AppendUse(this_00,(Use *)(param_1 + -0x30));
      }
    }
  }
  return;
}

