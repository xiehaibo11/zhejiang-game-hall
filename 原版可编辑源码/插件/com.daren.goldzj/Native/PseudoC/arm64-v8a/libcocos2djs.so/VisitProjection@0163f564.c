
/* v8::internal::compiler::InstructionSelector::VisitProjection(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitProjection
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  Zone *this_00;
  Instruction *this_01;
  Node *pNVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong local_40;
  ulong uStack_38;
  
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  plVar8 = *(long **)pNVar4;
  uVar1 = *(ushort *)(*plVar8 + 0x10) - 0x1b5;
  if (((uVar1 < 0x3a) && ((1L << ((ulong)uVar1 & 0x3f) & 0x3f00000000f0001U) != 0)) ||
     ((uVar1 = *(ushort *)(*plVar8 + 0x10) - 0x125, uVar1 < 0x21 &&
      ((1L << ((ulong)uVar1 & 0x3f) & 0x14000a801U) != 0)))) {
    lVar3 = ProjectionIndexOf(*(Operator **)param_1);
    if (lVar3 == 0) {
      uVar6 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      uVar1 = *(uint *)(*(long *)(this + 0x118) + uVar6 * 4);
      if (uVar1 == 0xffffffff) {
        uVar1 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
        *(uint *)(*(long *)(this + 0x118) + uVar6 * 4) = uVar1;
        uVar6 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      }
      uVar5 = uVar6 >> 3 & 0x1ffff8;
      *(ulong *)(*(long *)(this + 0xb8) + uVar5) =
           *(ulong *)(*(long *)(this + 0xb8) + uVar5) | 1L << (uVar6 & 0x3f);
      uVar5 = (ulong)*(uint *)((long)plVar8 + 0x14) & 0xffffff;
      uVar2 = *(uint *)(*(long *)(this + 0x118) + uVar5 * 4);
      uVar6 = (ulong)uVar1 << 3 | 0xf800000001;
      if (uVar2 == 0xffffffff) {
        uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
        *(uint *)(*(long *)(this + 0x118) + uVar5 * 4) = uVar2;
        uVar5 = (ulong)*(uint *)((long)plVar8 + 0x14) & 0xffffff;
      }
      uVar7 = uVar5 >> 3 & 0x1ffff8;
      local_40 = (ulong)uVar2 << 3 | 0x800000001;
      *(ulong *)(*(long *)(this + 0xd8) + uVar7) =
           *(ulong *)(*(long *)(this + 0xd8) + uVar7) | 1L << (uVar5 & 0x3f);
      this_00 = *(Zone **)(*(long *)(this + 0x10) + 8);
      this_01 = *(Instruction **)(this_00 + 0x10);
      uStack_38 = uVar6;
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x38) {
        this_01 = (Instruction *)Zone::NewExpand(this_00,0x38);
      }
      else {
        *(Instruction **)(this_00 + 0x10) = this_01 + 0x38;
      }
      Instruction::Instruction
                (this_01,0x11,1,(InstructionOperand *)&uStack_38,1,(InstructionOperand *)&local_40,0
                 ,(InstructionOperand *)0x0);
      Emit(this,this_01);
    }
    else {
      uVar6 = ((ulong)*(uint *)((long)plVar8 + 0x14) & 0xffffc0) >> 3;
      *(ulong *)(*(long *)(this + 0xd8) + uVar6) =
           1L << ((ulong)*(uint *)((long)plVar8 + 0x14) & 0x3f) |
           *(ulong *)(*(long *)(this + 0xd8) + uVar6);
    }
  }
  return;
}

