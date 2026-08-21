
/* v8::internal::compiler::InstructionSelector::VisitStackPointerGreaterThan(v8::internal::compiler::Node*,
   v8::internal::compiler::FlagsContinuation*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitStackPointerGreaterThan
          (InstructionSelector *this,Node *param_1,FlagsContinuation *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  Node *pNVar4;
  ulong local_50;
  ulong local_48;
  
  iVar1 = StackCheckKindOf(*(Operator **)param_1);
  uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
  local_48 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  uVar3 = GetVirtualRegister(this,pNVar4);
  uVar2 = 0xd800000001;
  if (iVar1 != 0) {
    uVar2 = 0x5800000001;
  }
  MarkAsUsed(this,pNVar4);
  local_50 = uVar2 | (uVar3 & 0xffffffff) << 3;
  EmitWithContinuation
            (this,iVar1 << 0x16 | 0x1e,0,(InstructionOperand *)0x0,1,(InstructionOperand *)&local_50
             ,(ulong)(iVar1 == 0),(InstructionOperand *)&local_48,param_2);
  return;
}

