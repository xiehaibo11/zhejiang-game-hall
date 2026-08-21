
/* v8::internal::compiler::InstructionSelector::VisitLoadTransform(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitLoadTransform
          (InstructionSelector *this,Node *param_1)

{
  Node *pNVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  Node *pNVar5;
  InstructionSequence *this_00;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  Constant aCStack_60 [16];
  ulong local_38;
  
  lVar3 = LoadTransformParametersOf(*(Operator **)param_1);
  uVar2 = *(uint *)(lVar3 + 4);
  if (uVar2 < 10) {
    pNVar5 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    pNVar1 = *(Node **)pNVar5;
    pNVar5 = *(Node **)(pNVar5 + 8);
    uVar4 = GetVirtualRegister(this,pNVar1);
    MarkAsUsed(this,pNVar1);
    local_70 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
    uVar4 = GetVirtualRegister(this,pNVar5);
    MarkAsUsed(this,pNVar5);
    local_68 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
    uVar4 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    local_38 = (uVar4 & 0xffffffff) << 3 | 0xd800000001;
    uVar4 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
    local_78 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
    Emit(this,0x60,1,(InstructionOperand *)&local_78,2,(InstructionOperand *)&local_70,0,
         (InstructionOperand *)0x0);
    local_70 = local_78;
    this_00 = *(InstructionSequence **)(this + 0x10);
    Constant::Constant(aCStack_60,0);
    local_68 = InstructionSequence::AddImmediate(this_00,aCStack_60);
    Emit(this,uVar2 + 0x3b6,1,(InstructionOperand *)&local_38,2,(InstructionOperand *)&local_70,0,
         (InstructionOperand *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unimplemented code");
}

